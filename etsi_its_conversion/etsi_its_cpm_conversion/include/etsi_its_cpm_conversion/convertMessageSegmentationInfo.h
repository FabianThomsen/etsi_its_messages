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

#pragma once

#include <etsi_its_cpm_coding/MessageSegmentationInfo.h>
#include <etsi_its_cpm_conversion/convertCardinalNumber3b.h>
#include <etsi_its_cpm_conversion/convertOrdinalNumber3b.h>
#ifdef ROS1
#include <etsi_its_cpm_msgs/MessageSegmentationInfo.h>
namespace cpm_msgs = etsi_its_cpm_msgs;
#else
#include <etsi_its_cpm_msgs/msg/message_segmentation_info.hpp>
namespace cpm_msgs = etsi_its_cpm_msgs::msg;
#endif


namespace etsi_its_cpm_conversion {

void toRos_MessageSegmentationInfo(const MessageSegmentationInfo_t& in, cpm_msgs::MessageSegmentationInfo& out) {
  toRos_CardinalNumber3b(in.totalMsgNo, out.total_msg_no);
  toRos_OrdinalNumber3b(in.thisMsgNo, out.this_msg_no);
}

void toStruct_MessageSegmentationInfo(const cpm_msgs::MessageSegmentationInfo& in, MessageSegmentationInfo_t& out) {
  memset(&out, 0, sizeof(MessageSegmentationInfo_t));

  toStruct_CardinalNumber3b(in.total_msg_no, out.totalMsgNo);
  toStruct_OrdinalNumber3b(in.this_msg_no, out.thisMsgNo);
}

}
