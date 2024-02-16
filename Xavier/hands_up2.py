import xarm

print('Remember to turn on the Arm')

arm = xarm.Controller('USB')

servo = xarm.Servo(1, 300)

print('servo ID:', servo.servo_id)
print('servo position:', servo.position)
print('servo angle:', servo.angle)

#Reset the arm
arm.setPosition(1, 500, 1000, wait = True)
arm.setPosition(2, 500, 1000, wait = True)
arm.setPosition(3, 500, 1000, wait = True)
arm.setPosition(5, 500, 1000)
arm.setPosition(4, 500, 1000, )
arm.setPosition(6, 500, 1000, wait = True)
