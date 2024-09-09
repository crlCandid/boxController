import serial
import time

controller = serial.Serial(port='COM5', baudrate=9600, timeout=1)
time.sleep(2)

while True:
    terminar = input('Terminar: ')
    if  terminar == '1':
        break
    value = int(input('Enter num:'))
    controller.write(f"{value}".encode())

controller.close()