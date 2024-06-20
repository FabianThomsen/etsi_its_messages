#pragma once
/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "/input/CAM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include "etsi_its_cam_coding/BasicContainer.h"
#include "etsi_its_cam_coding/HighFrequencyContainer.h"
#include <etsi_its_cam_coding/constr_SEQUENCE.h>



#include <etsi_its_cam_coding/asn_application.h>

#ifdef __cplusplus
namespace etsi_its_cam_coding {
extern "C" {
#endif

/* Forward declarations */
struct LowFrequencyContainer;
struct SpecialVehicleContainer;

/* CamParameters */
typedef struct CamParameters {
	BasicContainer_t	 basicContainer;
	HighFrequencyContainer_t	 highFrequencyContainer;
	struct LowFrequencyContainer	*lowFrequencyContainer;	/* OPTIONAL */
	struct SpecialVehicleContainer	*specialVehicleContainer;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CamParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CamParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_CamParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_CamParameters_1[4];

#ifdef __cplusplus
}
}
#endif

/* Referred external types */
#include "etsi_its_cam_coding/LowFrequencyContainer.h"
#include "etsi_its_cam_coding/SpecialVehicleContainer.h"


#include <etsi_its_cam_coding/asn_internal.h>
