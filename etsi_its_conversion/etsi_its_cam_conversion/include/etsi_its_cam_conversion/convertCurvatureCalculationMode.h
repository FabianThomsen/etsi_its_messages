#pragma once

#include <etsi_its_cam_coding/CurvatureCalculationMode.h>
#include <etsi_its_cam_msgs/CurvatureCalculationMode.h>

namespace etsi_its_cam_conversion
{
	etsi_its_cam_msgs::CurvatureCalculationMode convert_CurvatureCalculationModetoRos(const CurvatureCalculationMode_t& _CurvatureCalculationMode_in)
	{
		etsi_its_cam_msgs::CurvatureCalculationMode CurvatureCalculationMode_out;
		CurvatureCalculationMode_out.value = _CurvatureCalculationMode_in;
		return CurvatureCalculationMode_out;
	}
}