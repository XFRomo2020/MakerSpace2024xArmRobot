import xarm

arm = xarm.Controller('USB')

#The servos parameter may be a servo ID (1 to 6) or a Servo object or a list of one or more Servo objects.
#Note that servo#'s are servo Objects
#available methods: .servo_id , .position , .angle
servo1 = xarm.Servo(1, 0)
servo2 = xarm.Servo(2, 750)
servo3 = xarm.Servo(3, 250)
servo4 = xarm.Servo(4, 750)
servo5 = xarm.Servo(5, 250)
servo6 = xarm.Servo(6, 750)


def claw():
	arm.setPosition(1, 0, 1000, wait = True)
	arm.setPosition(2, 500, 2000, wait = True)
	arm.setPosition(3, 300, 2000)
	arm.setPosition(5, 800, 2000)
	arm.setPosition(4, 1000, 2000)
	arm.setPosition(6, 500, 2000, wait = True)

def hands_up():
	arm.setPosition(1, 500, 1000, wait = True)
	arm.setPosition(2, 500, 1000, wait = True)
	arm.setPosition(3, 500, 1000, wait = True)
	arm.setPosition(5, 500, 1000)
	arm.setPosition(4, 500, 1000, )
	arm.setPosition(6, 500, 1000, wait = True)
def hands_upalt():
	arm.setPosition(servo1)
	arm.setPosition(servo2)
	arm.setPosition(servo3)
	arm.setPosition(servo4)
	arm.setPosition(servo5)
	arm.setPosition(servo6)
def servo_query():
	position = arm.getPosition(1)
	print('Servo 1 position:', position)
	position = arm.getPosition(2)
	print('Servo 2 position:', position)
	position = arm.getPosition(3)
	print('Servo 3 position:', position)
	position = arm.getPosition(4)
	print('Servo 4 position:', position)
	position = arm.getPosition(5)
	print('Servo 5 position:', position)
	position = arm.getPosition(6)
	print('Servo 6 position:', position)

def batVoltage():
    import xarm
    print('Battery voltage in volts:', arm.getBatteryVoltage())

def servoIncr():
    whatServo = input('Which servo would you like to adjust, 1-6? :')
    position = input('Which position would you like to adjust, 0-1000? :')
    arm.setPosition(int(whatServo), position)
    #if response == 2:
    #    position = input('input a number from 0 to 1000')
    #    arm.setPosition(2, position)
    #if response == 3:
    #    position = input('input a number from 0 to 1000')
    #    arm.setPosition(3, position)
    #if response == 4:
    #    position = input('input a number from 0 to 1000')
    #    arm.setPosition(4, position)
    #if response == 5:
    #    position = input('input a number from 0 to 1000')
    #    arm.setPosition(5, position)
    #if response == 6:
    #    position = input('input a number from 0 to 1000')
    #    arm.setPosition(6, position)

inp = 'thing'
while inp != 'exit':
	inp = input('What is your input?\n servoquery?\n claw?\n handsup?\n batVoltage?\n exit?: ')
	if inp == 'servoquery':
		print('You have chosen servo_query')
		servo_query()
	if inp == 'claw':
		print('You have chosen claw()')
		claw()
	if inp == 'handsup':
		print('You have chosen hands_up()')
		hands_up()
	if inp == 'handsupalt':
		print('You have chosen hands_upalt()')
		hands_upalt()
	if inp == 'batVoltage':
		print('You have chosen batVoltage()')
		batVoltage()
	if inp == 'servoIncr':
		print('You have chosen servoIncr()')
		servoIncr()
	if inp == 'exit':
		print('You have chosen to exit()')
		break
