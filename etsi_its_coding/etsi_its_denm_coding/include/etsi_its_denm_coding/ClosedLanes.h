#pragma once
/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include "etsi_its_denm_coding/HardShoulderStatus.h"
#include "etsi_its_denm_coding/DrivingLaneStatus.h"
#include <etsi_its_denm_coding/constr_SEQUENCE.h>



#include <etsi_its_denm_coding/asn_application.h>

#ifdef __cplusplus
namespace etsi_its_denm_coding {
extern "C" {
#endif

/* ClosedLanes */
typedef struct ClosedLanes {
	HardShoulderStatus_t	*innerhardShoulderStatus;	/* OPTIONAL */
	HardShoulderStatus_t	*outerhardShoulderStatus;	/* OPTIONAL */
	DrivingLaneStatus_t	*drivingLaneStatus;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ClosedLanes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ClosedLanes;
extern asn_SEQUENCE_specifics_t asn_SPC_ClosedLanes_specs_1;
extern asn_TYPE_member_t asn_MBR_ClosedLanes_1[3];

#ifdef __cplusplus
}
}
#endif


#include <etsi_its_denm_coding/asn_internal.h>
