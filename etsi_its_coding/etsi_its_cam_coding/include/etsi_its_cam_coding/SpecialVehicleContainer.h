#pragma once
/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "/input/CAM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include "etsi_its_cam_coding/PublicTransportContainer.h"
#include "etsi_its_cam_coding/SpecialTransportContainer.h"
#include "etsi_its_cam_coding/DangerousGoodsContainer.h"
#include "etsi_its_cam_coding/RoadWorksContainerBasic.h"
#include "etsi_its_cam_coding/RescueContainer.h"
#include "etsi_its_cam_coding/EmergencyContainer.h"
#include "etsi_its_cam_coding/SafetyCarContainer.h"
#include <etsi_its_cam_coding/constr_CHOICE.h>



#include <etsi_its_cam_coding/asn_application.h>

#ifdef __cplusplus
namespace etsi_its_cam_coding {
extern "C" {
#endif

/* Dependencies */
typedef enum SpecialVehicleContainer_PR {
	SpecialVehicleContainer_PR_NOTHING,	/* No components present */
	SpecialVehicleContainer_PR_publicTransportContainer,
	SpecialVehicleContainer_PR_specialTransportContainer,
	SpecialVehicleContainer_PR_dangerousGoodsContainer,
	SpecialVehicleContainer_PR_roadWorksContainerBasic,
	SpecialVehicleContainer_PR_rescueContainer,
	SpecialVehicleContainer_PR_emergencyContainer,
	SpecialVehicleContainer_PR_safetyCarContainer
	/* Extensions may appear below */
	
} SpecialVehicleContainer_PR;

/* SpecialVehicleContainer */
typedef struct SpecialVehicleContainer {
	SpecialVehicleContainer_PR present;
	union SpecialVehicleContainer_u {
		PublicTransportContainer_t	 publicTransportContainer;
		SpecialTransportContainer_t	 specialTransportContainer;
		DangerousGoodsContainer_t	 dangerousGoodsContainer;
		RoadWorksContainerBasic_t	 roadWorksContainerBasic;
		RescueContainer_t	 rescueContainer;
		EmergencyContainer_t	 emergencyContainer;
		SafetyCarContainer_t	 safetyCarContainer;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpecialVehicleContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpecialVehicleContainer;
extern asn_CHOICE_specifics_t asn_SPC_SpecialVehicleContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_SpecialVehicleContainer_1[7];
extern asn_per_constraints_t asn_PER_type_SpecialVehicleContainer_constr_1;

#ifdef __cplusplus
}
}
#endif


#include <etsi_its_cam_coding/asn_internal.h>
