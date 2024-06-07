/** ============================================================================
MIT License

Copyright (c) 2023 Institute for Automotive Engineering (ika), RWTH Aachen University
Copyright (c) 2024 Instituto de Telecomunicações, Universidade de Aveiro

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
============================================================================= */

// --- Auto-generated by asn1ToConversionHeader.py -----------------------------

//// SEQUENCE EventPoint


#pragma once

#include <etsi_its_cam_coding/EventPoint.h>
#include <etsi_its_cam_conversion/convertPathDeltaTime.h>
#include <etsi_its_cam_conversion/convertDeltaReferencePosition.h>
#include <etsi_its_cam_conversion/convertInformationQuality.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/EventPoint.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/event_point.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_EventPoint(const EventPoint_t& in, cam_msgs::EventPoint& out) {
  toRos_DeltaReferencePosition(in.eventPosition, out.event_position);
  if (in.eventDeltaTime) {
    toRos_PathDeltaTime(*in.eventDeltaTime, out.event_delta_time);
    out.event_delta_time_is_present = true;
  }
  toRos_InformationQuality(in.informationQuality, out.information_quality);
}

void toStruct_EventPoint(const cam_msgs::EventPoint& in, EventPoint_t& out) {
  memset(&out, 0, sizeof(EventPoint_t));

  toStruct_DeltaReferencePosition(in.event_position, out.eventPosition);
  if (in.event_delta_time_is_present) {
    out.eventDeltaTime = (PathDeltaTime_t*) calloc(1, sizeof(PathDeltaTime_t));
    toStruct_PathDeltaTime(in.event_delta_time, *out.eventDeltaTime);
  }
  toStruct_InformationQuality(in.information_quality, out.informationQuality);
}

}
