import xarm

print('Remember to turn on the Arm')

arm = xarm.Controller('USB')

#Reset the arm
arm.setPosition(1, 500, 2)
arm.setPosition(2, 500, 2)
arm.setPosition(3, 500, 2)
arm.setPosition(4, 500, 2)
arm.setPosition(5, 500, 2)
arm.setPosition(6, 500, 2)
