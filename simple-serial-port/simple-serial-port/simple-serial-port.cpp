// simple-serial-port.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SimpleSerial.h"

using namespace std;

int main()
{
	char com_port[] = "\\\\.\\COM8";
	DWORD COM_BAUD_RATE = CBR_9600;
	SimpleSerial Serial(com_port, COM_BAUD_RATE);

	printf("What would you like to send?\n");
	char read_in[10] = { 0 };
	cin >> read_in;

	char *to_send = &read_in[0];
	bool work = Serial.WriteSerialPort(to_send);
	if (work)
	{
		printf("yay");
		while (1) {}
	}	
    return 0;
}

