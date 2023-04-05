#pragma once

#include <etsi_its_cam_coding/SubCauseCodeType.h>
#include <etsi_its_cam_msgs/SubCauseCodeType.h>
#include <etsi_its_cam_conversion/primitives/convertINTEGER.h>

namespace etsi_its_cam_conversion
{
	etsi_its_cam_msgs::SubCauseCodeType convert_SubCauseCodeTypetoRos(const SubCauseCodeType_t& _SubCauseCodeType_in)
	{
		etsi_its_cam_msgs::SubCauseCodeType SubCauseCodeType_out;
		convert_toRos(_SubCauseCodeType_in, SubCauseCodeType_out.value);
		return SubCauseCodeType_out;
	}
	SubCauseCodeType_t convert_SubCauseCodeTypetoC(const etsi_its_cam_msgs::SubCauseCodeType& _SubCauseCodeType_in)
	{
		SubCauseCodeType_t SubCauseCodeType_out;
		convert_toC(_SubCauseCodeType_in.value, SubCauseCodeType_out);
		return SubCauseCodeType_out;
	}
}