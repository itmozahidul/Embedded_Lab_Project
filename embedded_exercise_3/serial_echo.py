#!/usr/bin/env python3

import serial
import sys

print("python echo script started\n")
HEX = False


print(sys.argv[1])
print (sys.argv[2])


ser = serial.Serial(sys.argv[1], sys.argv[2])

try:
	while True:
		sys.stdout.write(ser.read(1).decode(encoding="ISO-8859-1"))
		sys.stdout.flush()
except KeyboardInterrupt:
	print("key exc")
finally:
	print('done')
	ser.close()