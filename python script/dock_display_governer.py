import serial
from time import sleep
from datetime import datetime

ser = serial.Serial ("/dev/ttyS0", 1200)
sleep(1)


while True:
	dt = datetime.now().day
	dy = datetime.today().weekday() + 1
	hh = datetime.now().hour
	mm = datetime.now().minute
	ss = datetime.now().second

	payload = "$" + str(hh) + "," + str(mm) + "," + str(dy) + "," + str(dt)

	if ss == 0:
		print (payload)
		ser.write(str.encode(payload))
		sleep(1)
