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

#include <etsi_its_cpm_coding/ClusterLeaveInfo.h>
#include <etsi_its_cpm_conversion/convertClusterLeaveReason.h>
#include <etsi_its_cpm_conversion/convertIdentifier1B.h>
#ifdef ROS1
#include <etsi_its_cpm_msgs/ClusterLeaveInfo.h>
namespace cpm_msgs = etsi_its_cpm_msgs;
#else
#include <etsi_its_cpm_msgs/msg/cluster_leave_info.hpp>
namespace cpm_msgs = etsi_its_cpm_msgs::msg;
#endif


namespace etsi_its_cpm_conversion {

void toRos_ClusterLeaveInfo(const ClusterLeaveInfo_t& in, cpm_msgs::ClusterLeaveInfo& out) {
  toRos_Identifier1B(in.clusterId, out.cluster_id);
  toRos_ClusterLeaveReason(in.clusterLeaveReason, out.cluster_leave_reason);
}

void toStruct_ClusterLeaveInfo(const cpm_msgs::ClusterLeaveInfo& in, ClusterLeaveInfo_t& out) {
  memset(&out, 0, sizeof(ClusterLeaveInfo_t));

  toStruct_Identifier1B(in.cluster_id, out.clusterId);
  toStruct_ClusterLeaveReason(in.cluster_leave_reason, out.clusterLeaveReason);
}

}
