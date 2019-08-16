import socket
import select
import string
import sys
import RPi.GPIO as GPIO
from time import sleep

GPIO.setmode(GPIO.BCM)
GPIO.setup(17, GPIO.OUT)  #  warning lamp
GPIO.setup(24, GPIO.OUT)  #  caution lamp
GPIO.setup(27, GPIO.IN, pull_up_down=GPIO.PUD_UP)  # Master caution Button

### Reference https://forums.x-plane.org/index.php?/forums/topic/73524-extplane-raspberrypi/
### Thank you Dozer

if __name__ == "__main__":
    if(len(sys.argv) < 3):
        print 'Usage : python xpdrblink.py hostname port'
        sys.exit()

    host = sys.argv[1]
    port = int(sys.argv[2])

    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM) # TCP  #DGRAM) # UDP   
    s.settimeout(2)
    
    setMe = 0
	
    try:
        s.connect((host, port))
    except:
        print 'Unable to connect'
        sys.exit()

    print 'Connected to remote for INPUTS'

    while 1:
		socket_list = [sys.stdin, s]

		read_sockets, write_sockets, error_sockets = select.select(socket_list, [], [])
		for sock in read_sockets:
			if sock == s:
				
				if setMe == 0:
					msg = 'sub 1-sim/mcaution/masterButton \n'
					s.send(msg)
					setMe = 1
						
				if GPIO.input(27) == 0: # IF BUTTON PRESSED
					msg = 'set 1-sim/mcaution/masterButton 1\n'
					s.send(msg)

			else:
				s.send(msg)
				sleep(1)
				
