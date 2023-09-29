#pragma once

#include "etsi_its_cam_msgs/msg/cam.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "std_msgs/msg/header.hpp"
#include <etsi_its_msgs/cam_access.hpp>

#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

#include "rviz_common/ros_topic_display.hpp"
#include "rviz_rendering/objects/shape.hpp"

#include <rclcpp/rclcpp.hpp>

namespace Ogre
{
class ManualObject;
}

namespace rviz_common
{
namespace properties
{
  class ColorProperty;
  class FloatProperty;
}  // namespace properties
}  // namespace rviz_common

namespace etsi_its_msgs
{
namespace displays
{

/**
 * @brief 
 * 
 */
class CAMRenderObject
{
  public:
    CAMRenderObject(etsi_its_cam_msgs::msg::CAM cam, rclcpp::Time receive_time, uint16_t n_leap_seconds=5)
    {
      using namespace etsi_its_cam_msgs::access;
      int zone;
      bool northp;
      geometry_msgs::msg::PointStamped p = getUTMPosition(cam, zone, northp);
      header.frame_id = p.header.frame_id;
      uint64_t nanosecs = getUnixNanosecondsFromGenerationDeltaTime(getGenerationDeltaTime(cam), receive_time.nanoseconds(), n_leap_seconds);
      header.stamp = rclcpp::Time(nanosecs);
      double heading = (getHeading(cam)-90.0)*M_PI/180.0;
      pose.position = p.point;
      tf2::Quaternion orientation;
      orientation.setRPY(0.0, 0.0, heading);
      pose.orientation = tf2::toMsg(orientation);
      station_id = getStationID(cam);
      width = getVehicleWidth(cam);
      length = getVehicleLength(cam);
      height = 1.6; // To-Do: Make sure, that there is definetly no Height within the CAM?!
      speed = getSpeed(cam);
    };
    ~CAMRenderObject(){};

    double getAge(rclcpp::Time now)
    {
      return (now-header.stamp).seconds();
    };

    // Public member variablse
    std_msgs::msg::Header header;
    int station_id;
    double width, length, height;
    geometry_msgs::msg::Pose pose;
    double speed;
    
};

/**
 * \class CAMDisplay
 * \brief Displays an etsi_its_cam_msgs::CAM
 */
class CAMDisplay : public
  rviz_common::RosTopicDisplay<etsi_its_cam_msgs::msg::CAM>
{
  Q_OBJECT

public:
  CAMDisplay();
  ~CAMDisplay() override;

  void onInitialize() override;

  void reset() override;

protected:
  void processMessage(etsi_its_cam_msgs::msg::CAM::ConstSharedPtr msg) override;
  void update(float wall_dt, float ros_dt) override;

  Ogre::ManualObject * manual_object_;

  rclcpp::Node::SharedPtr rviz_node_;

  // Properties
  // General
  rviz_common::properties::BoolProperty *buffer_cams_;
  rviz_common::properties::FloatProperty *buffer_timeout_;
  rviz_common::properties::ColorProperty *color_property_;

  std::vector<CAMRenderObject> cams_;
  std::vector<std::shared_ptr<rviz_rendering::Shape>> bboxs_;
};

}  // namespace displays
}  // namespace etsi_its_msgs