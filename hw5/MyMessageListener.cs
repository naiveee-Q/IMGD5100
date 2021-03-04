using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class MyMessageListener : MonoBehaviour
{
    //private bool isGO = false;
    // Start is called before the first frame update
    public SerialController serialController;
    void Start()
    {
        serialController = this.gameObject.GetComponent<SerialController>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    // Invoked when a line of data is received from the serial device.
    void OnMessageArrived(string msg)
    {
        Debug.Log("Arrived: " + msg);

        float x = this.transform.position.x;
        float y = this.transform.position.y;
        //float z = this.transform.position.z;
        
        switch (int.Parse(msg))
        {
            case 1:
                this.transform.DOMove(new Vector3(1f+x, y, 0), 1f);
                break;
            case 2:
                this.transform.DOMove(new Vector3(-1f+x, y, 0), 1f);
                break;
            case 3:
                this.transform.DOMove(new Vector3(x, 1f+y, 0), 1f);
                break;
            case 4:
                this.transform.DOMove(new Vector3(x, -1f+y, 0), 1f);
                break;
        }
    }
    // Invoked when a connect/disconnect event occurs. The parameter 'success'
    // will be 'true' upon connection, and 'false' upon disconnection or
    // failure to connect.
    void OnConnectionEvent(bool success)
    {
        Debug.Log(success ? "Device connected" : "Device disconnected");
    }

    public void SendRED()
    {
        serialController.SendSerialMessage("R");
    }

    public void SendBlue()
    {
        serialController.SendSerialMessage("B");
    }

    public void SendGreen()
    {
        serialController.SendSerialMessage("G");
    }
}
