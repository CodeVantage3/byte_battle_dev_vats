import RPi.GPIO as GPIO
import time
import serial

ser = serial.Serial("")
GPIO.setmode(GPIO.BCM)
led_pin = 17
GPIO.setup(led_pin,GPIO.OUT)
GPIO.output(led_pin,GPIO.HIGH)
time.sleep(1)
GPIO.output(led_pin,GPIO.LOW)
time.sleep(1)
GPIO.cleanup()

