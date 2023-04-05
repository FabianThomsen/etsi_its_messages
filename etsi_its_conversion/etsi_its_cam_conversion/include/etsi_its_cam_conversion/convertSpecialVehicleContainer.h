#pragma once

#include <etsi_its_cam_coding/SpecialVehicleContainer.h>
#include <etsi_its_cam_msgs/SpecialVehicleContainer.h>
#include <etsi_its_cam_conversion/convertPublicTransportContainer.h>
#include <etsi_its_cam_conversion/convertSpecialTransportContainer.h>
#include <etsi_its_cam_conversion/convertDangerousGoodsContainer.h>
#include <etsi_its_cam_conversion/convertRoadWorksContainerBasic.h>
#include <etsi_its_cam_conversion/convertRescueContainer.h>
#include <etsi_its_cam_conversion/convertEmergencyContainer.h>
#include <etsi_its_cam_conversion/convertSafetyCarContainer.h>

namespace etsi_its_cam_conversion
{
	etsi_its_cam_msgs::SpecialVehicleContainer convert_SpecialVehicleContainertoRos(const SpecialVehicleContainer_t& _SpecialVehicleContainer_in)
	{
		etsi_its_cam_msgs::SpecialVehicleContainer SpecialVehicleContainer_out;
		if(_SpecialVehicleContainer_in.present == SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_publicTransportContainer)
		{
			SpecialVehicleContainer_out.publicTransportContainer = convert_PublicTransportContainertoRos(_SpecialVehicleContainer_in.choice.publicTransportContainer);
			SpecialVehicleContainer_out.choice = etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_PUBLIC_TRANSPORT_CONTAINER;
		}
		if(_SpecialVehicleContainer_in.present == SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_specialTransportContainer)
		{
			SpecialVehicleContainer_out.specialTransportContainer = convert_SpecialTransportContainertoRos(_SpecialVehicleContainer_in.choice.specialTransportContainer);
			SpecialVehicleContainer_out.choice = etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_SPECIAL_TRANSPORT_CONTAINER;
		}
		if(_SpecialVehicleContainer_in.present == SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_dangerousGoodsContainer)
		{
			SpecialVehicleContainer_out.dangerousGoodsContainer = convert_DangerousGoodsContainertoRos(_SpecialVehicleContainer_in.choice.dangerousGoodsContainer);
			SpecialVehicleContainer_out.choice = etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_DANGEROUS_GOODS_CONTAINER;
		}
		if(_SpecialVehicleContainer_in.present == SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_roadWorksContainerBasic)
		{
			SpecialVehicleContainer_out.roadWorksContainerBasic = convert_RoadWorksContainerBasictoRos(_SpecialVehicleContainer_in.choice.roadWorksContainerBasic);
			SpecialVehicleContainer_out.choice = etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_ROAD_WORKS_CONTAINER_BASIC;
		}
		if(_SpecialVehicleContainer_in.present == SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_rescueContainer)
		{
			SpecialVehicleContainer_out.rescueContainer = convert_RescueContainertoRos(_SpecialVehicleContainer_in.choice.rescueContainer);
			SpecialVehicleContainer_out.choice = etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_RESCUE_CONTAINER;
		}
		if(_SpecialVehicleContainer_in.present == SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_emergencyContainer)
		{
			SpecialVehicleContainer_out.emergencyContainer = convert_EmergencyContainertoRos(_SpecialVehicleContainer_in.choice.emergencyContainer);
			SpecialVehicleContainer_out.choice = etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_EMERGENCY_CONTAINER;
		}
		if(_SpecialVehicleContainer_in.present == SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_safetyCarContainer)
		{
			SpecialVehicleContainer_out.safetyCarContainer = convert_SafetyCarContainertoRos(_SpecialVehicleContainer_in.choice.safetyCarContainer);
			SpecialVehicleContainer_out.choice = etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_SAFETY_CAR_CONTAINER;
		}
		return SpecialVehicleContainer_out;
	}
	SpecialVehicleContainer_t convert_SpecialVehicleContainertoC(const etsi_its_cam_msgs::SpecialVehicleContainer& _SpecialVehicleContainer_in)
	{
		SpecialVehicleContainer_t SpecialVehicleContainer_out;
		if(_SpecialVehicleContainer_in.choice == etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_PUBLIC_TRANSPORT_CONTAINER)
		{
			SpecialVehicleContainer_out.choice.publicTransportContainer = convert_PublicTransportContainertoC(_SpecialVehicleContainer_in.publicTransportContainer);
			SpecialVehicleContainer_out.present = SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_publicTransportContainer;
		}
		if(_SpecialVehicleContainer_in.choice == etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_SPECIAL_TRANSPORT_CONTAINER)
		{
			SpecialVehicleContainer_out.choice.specialTransportContainer = convert_SpecialTransportContainertoC(_SpecialVehicleContainer_in.specialTransportContainer);
			SpecialVehicleContainer_out.present = SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_specialTransportContainer;
		}
		if(_SpecialVehicleContainer_in.choice == etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_DANGEROUS_GOODS_CONTAINER)
		{
			SpecialVehicleContainer_out.choice.dangerousGoodsContainer = convert_DangerousGoodsContainertoC(_SpecialVehicleContainer_in.dangerousGoodsContainer);
			SpecialVehicleContainer_out.present = SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_dangerousGoodsContainer;
		}
		if(_SpecialVehicleContainer_in.choice == etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_ROAD_WORKS_CONTAINER_BASIC)
		{
			SpecialVehicleContainer_out.choice.roadWorksContainerBasic = convert_RoadWorksContainerBasictoC(_SpecialVehicleContainer_in.roadWorksContainerBasic);
			SpecialVehicleContainer_out.present = SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_roadWorksContainerBasic;
		}
		if(_SpecialVehicleContainer_in.choice == etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_RESCUE_CONTAINER)
		{
			SpecialVehicleContainer_out.choice.rescueContainer = convert_RescueContainertoC(_SpecialVehicleContainer_in.rescueContainer);
			SpecialVehicleContainer_out.present = SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_rescueContainer;
		}
		if(_SpecialVehicleContainer_in.choice == etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_EMERGENCY_CONTAINER)
		{
			SpecialVehicleContainer_out.choice.emergencyContainer = convert_EmergencyContainertoC(_SpecialVehicleContainer_in.emergencyContainer);
			SpecialVehicleContainer_out.present = SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_emergencyContainer;
		}
		if(_SpecialVehicleContainer_in.choice == etsi_its_cam_msgs::SpecialVehicleContainer::CHOICE_SAFETY_CAR_CONTAINER)
		{
			SpecialVehicleContainer_out.choice.safetyCarContainer = convert_SafetyCarContainertoC(_SpecialVehicleContainer_in.safetyCarContainer);
			SpecialVehicleContainer_out.present = SpecialVehicleContainer_PR::SpecialVehicleContainer_PR_safetyCarContainer;
		}
		return SpecialVehicleContainer_out;
	}
}