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

#include <etsi_its_cpm_coding/PerceivedObject.h>
#include <etsi_its_cpm_conversion/convertAcceleration3dWithConfidence.h>
#include <etsi_its_cpm_conversion/convertCartesianAngularVelocityComponent.h>
#include <etsi_its_cpm_conversion/convertCartesianPosition3dWithConfidence.h>
#include <etsi_its_cpm_conversion/convertDeltaTimeMilliSecondSigned.h>
#include <etsi_its_cpm_conversion/convertEulerAnglesWithConfidence.h>
#include <etsi_its_cpm_conversion/convertIdentifier2B.h>
#include <etsi_its_cpm_conversion/convertLowerTriangularPositiveSemidefiniteMatrices.h>
#include <etsi_its_cpm_conversion/convertMapPosition.h>
#include <etsi_its_cpm_conversion/convertObjectClassDescription.h>
#include <etsi_its_cpm_conversion/convertObjectDimension.h>
#include <etsi_its_cpm_conversion/convertObjectPerceptionQuality.h>
#include <etsi_its_cpm_conversion/convertSequenceOfIdentifier1B.h>
#include <etsi_its_cpm_conversion/convertVelocity3dWithConfidence.h>
#ifdef ROS1
#include <etsi_its_cpm_msgs/PerceivedObject.h>
namespace cpm_msgs = etsi_its_cpm_msgs;
#else
#include <etsi_its_cpm_msgs/msg/perceived_object.hpp>
namespace cpm_msgs = etsi_its_cpm_msgs::msg;
#endif


namespace etsi_its_cpm_conversion {

void toRos_PerceivedObject(const PerceivedObject_t& in, cpm_msgs::PerceivedObject& out) {
  if (in.objectId) {
    toRos_Identifier2B(*in.objectId, out.object_id);
    out.object_id_is_present = true;
  }
  toRos_DeltaTimeMilliSecondSigned(in.measurementDeltaTime, out.measurement_delta_time);
  toRos_CartesianPosition3dWithConfidence(in.position, out.position);
  if (in.velocity) {
    toRos_Velocity3dWithConfidence(*in.velocity, out.velocity);
    out.velocity_is_present = true;
  }
  if (in.acceleration) {
    toRos_Acceleration3dWithConfidence(*in.acceleration, out.acceleration);
    out.acceleration_is_present = true;
  }
  if (in.angles) {
    toRos_EulerAnglesWithConfidence(*in.angles, out.angles);
    out.angles_is_present = true;
  }
  if (in.zAngularVelocity) {
    toRos_CartesianAngularVelocityComponent(*in.zAngularVelocity, out.z_angular_velocity);
    out.z_angular_velocity_is_present = true;
  }
  if (in.lowerTriangularCorrelationMatrices) {
    toRos_LowerTriangularPositiveSemidefiniteMatrices(*in.lowerTriangularCorrelationMatrices, out.lower_triangular_correlation_matrices);
    out.lower_triangular_correlation_matrices_is_present = true;
  }
  if (in.objectDimensionZ) {
    toRos_ObjectDimension(*in.objectDimensionZ, out.object_dimension_z);
    out.object_dimension_z_is_present = true;
  }
  if (in.objectDimensionY) {
    toRos_ObjectDimension(*in.objectDimensionY, out.object_dimension_y);
    out.object_dimension_y_is_present = true;
  }
  if (in.objectDimensionX) {
    toRos_ObjectDimension(*in.objectDimensionX, out.object_dimension_x);
    out.object_dimension_x_is_present = true;
  }
  if (in.objectAge) {
    toRos_DeltaTimeMilliSecondSigned(*in.objectAge, out.object_age);
    out.object_age_is_present = true;
  }
  if (in.objectPerceptionQuality) {
    toRos_ObjectPerceptionQuality(*in.objectPerceptionQuality, out.object_perception_quality);
    out.object_perception_quality_is_present = true;
  }
  if (in.sensorIdList) {
    toRos_SequenceOfIdentifier1B(*in.sensorIdList, out.sensor_id_list);
    out.sensor_id_list_is_present = true;
  }
  if (in.classification) {
    toRos_ObjectClassDescription(*in.classification, out.classification);
    out.classification_is_present = true;
  }
  if (in.mapPosition) {
    toRos_MapPosition(*in.mapPosition, out.map_position);
    out.map_position_is_present = true;
  }
}

void toStruct_PerceivedObject(const cpm_msgs::PerceivedObject& in, PerceivedObject_t& out) {
  memset(&out, 0, sizeof(PerceivedObject_t));

  if (in.object_id_is_present) {
    out.objectId = (Identifier2B_t*) calloc(1, sizeof(Identifier2B_t));
    toStruct_Identifier2B(in.object_id, *out.objectId);
  }
  toStruct_DeltaTimeMilliSecondSigned(in.measurement_delta_time, out.measurementDeltaTime);
  toStruct_CartesianPosition3dWithConfidence(in.position, out.position);
  if (in.velocity_is_present) {
    out.velocity = (Velocity3dWithConfidence_t*) calloc(1, sizeof(Velocity3dWithConfidence_t));
    toStruct_Velocity3dWithConfidence(in.velocity, *out.velocity);
  }
  if (in.acceleration_is_present) {
    out.acceleration = (Acceleration3dWithConfidence_t*) calloc(1, sizeof(Acceleration3dWithConfidence_t));
    toStruct_Acceleration3dWithConfidence(in.acceleration, *out.acceleration);
  }
  if (in.angles_is_present) {
    out.angles = (EulerAnglesWithConfidence_t*) calloc(1, sizeof(EulerAnglesWithConfidence_t));
    toStruct_EulerAnglesWithConfidence(in.angles, *out.angles);
  }
  if (in.z_angular_velocity_is_present) {
    out.zAngularVelocity = (CartesianAngularVelocityComponent_t*) calloc(1, sizeof(CartesianAngularVelocityComponent_t));
    toStruct_CartesianAngularVelocityComponent(in.z_angular_velocity, *out.zAngularVelocity);
  }
  if (in.lower_triangular_correlation_matrices_is_present) {
    out.lowerTriangularCorrelationMatrices = (LowerTriangularPositiveSemidefiniteMatrices_t*) calloc(1, sizeof(LowerTriangularPositiveSemidefiniteMatrices_t));
    toStruct_LowerTriangularPositiveSemidefiniteMatrices(in.lower_triangular_correlation_matrices, *out.lowerTriangularCorrelationMatrices);
  }
  if (in.object_dimension_z_is_present) {
    out.objectDimensionZ = (ObjectDimension_t*) calloc(1, sizeof(ObjectDimension_t));
    toStruct_ObjectDimension(in.object_dimension_z, *out.objectDimensionZ);
  }
  if (in.object_dimension_y_is_present) {
    out.objectDimensionY = (ObjectDimension_t*) calloc(1, sizeof(ObjectDimension_t));
    toStruct_ObjectDimension(in.object_dimension_y, *out.objectDimensionY);
  }
  if (in.object_dimension_x_is_present) {
    out.objectDimensionX = (ObjectDimension_t*) calloc(1, sizeof(ObjectDimension_t));
    toStruct_ObjectDimension(in.object_dimension_x, *out.objectDimensionX);
  }
  if (in.object_age_is_present) {
    out.objectAge = (DeltaTimeMilliSecondSigned_t*) calloc(1, sizeof(DeltaTimeMilliSecondSigned_t));
    toStruct_DeltaTimeMilliSecondSigned(in.object_age, *out.objectAge);
  }
  if (in.object_perception_quality_is_present) {
    out.objectPerceptionQuality = (ObjectPerceptionQuality_t*) calloc(1, sizeof(ObjectPerceptionQuality_t));
    toStruct_ObjectPerceptionQuality(in.object_perception_quality, *out.objectPerceptionQuality);
  }
  if (in.sensor_id_list_is_present) {
    out.sensorIdList = (SequenceOfIdentifier1B_t*) calloc(1, sizeof(SequenceOfIdentifier1B_t));
    toStruct_SequenceOfIdentifier1B(in.sensor_id_list, *out.sensorIdList);
  }
  if (in.classification_is_present) {
    out.classification = (ObjectClassDescription_t*) calloc(1, sizeof(ObjectClassDescription_t));
    toStruct_ObjectClassDescription(in.classification, *out.classification);
  }
  if (in.map_position_is_present) {
    out.mapPosition = (MapPosition_t*) calloc(1, sizeof(MapPosition_t));
    toStruct_MapPosition(in.map_position, *out.mapPosition);
  }
}

}
