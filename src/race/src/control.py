#!/usr/bin/env python

import rospy
import PID
from race.msg import drive_param
from race.msg import pid_input
from std_msgs.msg import Float64
from geometry_msgs.msg import Twist
#kp = 14.0
#kd = 0.09
kp = 100
kd = 0.09*3
servo_offset = 18.5
prev_error = 0.0 
vel_input = 25.0

steer = rospy.Publisher('steering', Float64, queue_size=10)
throttle = rospy.Publisher('throttle', Float64, queue_size=10)

pid = PID.PID(kp,0.0,kd)
pid.SetPoint=0.0





def control(data):
	global prev_error
	global vel_input
	global kp
	global kd

	## Your code goes here
	# 1. Scale the error
	# 2. Apply the PID equation on error
	# 3. Make sure the error is within bounds
	angle = pid.update(data.angular.z)

	#angle = data.pid_error*kp;
	

	## END

	
	#if(data.pid_vel == 0):
	#	msg.velocity = -8
	#else:
	throttle.publish(data.linear.x)
	
	steer.publish(angle)
	

if __name__ == '__main__':
	global kp
	global kd
	global vel_input
	print("Listening to error for PID")
	#kp = input("Enter Kp Value: ")
	#kd = input("Enter Kd Value: ")
	#vel_input = input("Enter Velocity: ")
	rospy.init_node('pid_controller', anonymous=True)
	rospy.Subscriber("cmd_vel", Twist, control)
	rospy.spin()
