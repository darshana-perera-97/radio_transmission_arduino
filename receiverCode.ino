#include <RCSwitch.h>

RCSwitch mySwitch = RCSwicth();

void setup()
{
    Serial.begin(9600);
    mySwitch.enableReceive(0);
}
void loop()
{
    if (mySwitch.awavilable())
    {
        int value = mySwitch.getReceivedValue();
        if (value == 0)
        {
            Serial.print("unknown Encoding");
        }
        else
        {
            Serial.print(mySwitch.getReceivedValue());
        }
        mySwitch.resetAvailable();
    }
}