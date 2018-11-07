// Generated by gencpp from file race/drive_values.msg
// DO NOT EDIT!


#ifndef RACE_MESSAGE_DRIVE_VALUES_H
#define RACE_MESSAGE_DRIVE_VALUES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace race
{
template <class ContainerAllocator>
struct drive_values_
{
  typedef drive_values_<ContainerAllocator> Type;

  drive_values_()
    : pwm_drive(0)
    , pwm_angle(0)  {
    }
  drive_values_(const ContainerAllocator& _alloc)
    : pwm_drive(0)
    , pwm_angle(0)  {
  (void)_alloc;
    }



   typedef int16_t _pwm_drive_type;
  _pwm_drive_type pwm_drive;

   typedef int16_t _pwm_angle_type;
  _pwm_angle_type pwm_angle;




  typedef boost::shared_ptr< ::race::drive_values_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::race::drive_values_<ContainerAllocator> const> ConstPtr;

}; // struct drive_values_

typedef ::race::drive_values_<std::allocator<void> > drive_values;

typedef boost::shared_ptr< ::race::drive_values > drive_valuesPtr;
typedef boost::shared_ptr< ::race::drive_values const> drive_valuesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::race::drive_values_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::race::drive_values_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace race

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'race': ['/home/ubuntu/catkin_ws/src/race/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::race::drive_values_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::race::drive_values_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::race::drive_values_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::race::drive_values_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::race::drive_values_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::race::drive_values_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::race::drive_values_<ContainerAllocator> >
{
  static const char* value()
  {
    return "180768e2d6cce7b3f71749adb84f7b29";
  }

  static const char* value(const ::race::drive_values_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x180768e2d6cce7b3ULL;
  static const uint64_t static_value2 = 0xf71749adb84f7b29ULL;
};

template<class ContainerAllocator>
struct DataType< ::race::drive_values_<ContainerAllocator> >
{
  static const char* value()
  {
    return "race/drive_values";
  }

  static const char* value(const ::race::drive_values_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::race::drive_values_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 pwm_drive\n\
int16 pwm_angle\n\
";
  }

  static const char* value(const ::race::drive_values_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::race::drive_values_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pwm_drive);
      stream.next(m.pwm_angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct drive_values_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::race::drive_values_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::race::drive_values_<ContainerAllocator>& v)
  {
    s << indent << "pwm_drive: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pwm_drive);
    s << indent << "pwm_angle: ";
    Printer<int16_t>::stream(s, indent + "  ", v.pwm_angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RACE_MESSAGE_DRIVE_VALUES_H
