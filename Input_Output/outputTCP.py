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

    print 'Connected to remote for OUTPUTS'

    while 1:
		socket_list = [sys.stdin, s]

		read_sockets, write_sockets, error_sockets = select.select(socket_list, [], [])
		for sock in read_sockets:
			if sock == s:
				data = sock.recv(4096)
				
				
				if setMe == 0:
					msg = 'sub inst/warning \nsub inst/cousion \n'
					s.send(msg)
					sleep(0.1)
					
					setMe = 1
					
				if not data:
					print 'Connection closed'
					GPIO.output(17, GPIO.LOW)
					GPIO.output(24, GPIO.LOW)
					sys.exit()
				else:
					if 'warning 0' in data:
						GPIO.output(17, GPIO.LOW)
					if 'cousion 0' in data:
						GPIO.output(24, GPIO.LOW)
					##############################
					#if 'warning 1' in data:
					#    GPIO.output(17, GPIO.HIGH)
					############################## 
					# if ('warning 5', 'warning 4', 'warning 3', 'warning 2', 'warning 1') in data:
					if 'warning 5' in data:
						GPIO.output(17, GPIO.HIGH)
					if 'warning 4' in data:
						GPIO.output(17, GPIO.HIGH)
					if 'warning 3' in data:
						GPIO.output(17, GPIO.HIGH)
					if 'warning 2' in data:
						GPIO.output(17, GPIO.HIGH)
					if 'warning 1' in data:
						GPIO.output(17, GPIO.HIGH)
					##############################
					# if ('cousion 5', 'cousion 4', 'cousion 3', 'cousion 2', 'cousion 1') in data:
					if 'cousion 5' in data:
						GPIO.output(24, GPIO.HIGH)
					if 'cousion 4' in data:
						GPIO.output(24, GPIO.HIGH)
					if 'cousion 3' in data:
						GPIO.output(24, GPIO.HIGH)
					if 'cousion 2' in data:
						GPIO.output(24, GPIO.HIGH)
					if 'cousion 1'  in data:
						GPIO.output(24, GPIO.HIGH)
					
					sys.stdout.write(data)

			else:
				msg = sys.stdin.readline()
				
				s.send(msg)
				
