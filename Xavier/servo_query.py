import xarm

arm = xarm.Controller('USB')

servo1 = xarm.servo(1, 500)
servo2 = xarm.servo(2, 500)
servo3 = xarm.servo(3, 500)
servo4 = xarm.servo(4, 500)
servo5 = xarm.servo(5, 500)

#The servos parameter may be a servo ID (1 to 6) or a Servo object or a list of one or more Servo objects.
#Note that servo#'s are servo Objects
#available methods: .servo_id , .position , .angle
#servo6 = xarm.servo(6, 500)
