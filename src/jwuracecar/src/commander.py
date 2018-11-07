#!/usr/bin/env python

import rospy
from std_msgs.msg import Float64
from geometry_msgs.msg import Twist

steer = rospy.Publisher('steering', Float64, queue_size=10)
throttle = rospy.Publisher('throttle', Float64, queue_size=10)


def cmd_vel(data):


	steer_val = -data.angular.z/2
	speed_val = -data.linear.x*5

	throttle.publish(speed_val)
	steer.publish(steer_val)

if __name__ == '__main__':
	rospy.init_node('command_sender', anonymous=True)
	rospy.Subscriber("cmd_vel", Twist, cmd_vel)
	rospy.spin()
