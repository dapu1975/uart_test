#!/usr/bin/env python3
import serial
import uuid

print("***Serial Test Tool *** ")

try:
    ser = serial.Serial(
        port='/dev/ttyACM0',
        baudrate=9600,
        rtscts=0
    )
    ser.close()
    ser.open()
    if ser.isOpen():
        myuuid = uuid.uuid4()
        print('Your UUID is: ' + str(myuuid))
        ser.write(str.encode(str(myuuid)))
        dummy = ser.readline()
        print(dummy)
    else:
        print("port not ready")
except Exception as e:
    print(e)
finally:
    ser.close()
    print("***end***")
