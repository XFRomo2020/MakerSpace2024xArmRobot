import xarm

arm = xarm.Controller('USB')
servo = xarm.Servo(1, 300)

servo = xarm.Servo(1, 300)

#print('servo ID:', servo.servo_id)
#print('servo position:', servo.position)
#print('servo angle:', servo.angle)

arm.setPosition(1, 0, 1000, wait = True)
arm.setPosition(2, 500, 2000, wait = True)
arm.setPosition(3, 200, 2000, wait = True)
arm.setPosition(5, 700, 2000, wait = True)
arm.setPosition(4, 800, 2000, wait = True)
arm.setPosition(6, 200, 2000, wait = True)