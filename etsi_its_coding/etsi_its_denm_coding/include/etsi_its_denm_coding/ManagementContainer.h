#pragma once
/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Descriptions"
 * 	found in "/input/DENM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include "etsi_its_denm_coding/ActionID.h"
#include "etsi_its_denm_coding/TimestampIts.h"
#include "etsi_its_denm_coding/Termination.h"
#include "etsi_its_denm_coding/ReferencePosition.h"
#include "etsi_its_denm_coding/RelevanceDistance.h"
#include "etsi_its_denm_coding/RelevanceTrafficDirection.h"
#include "etsi_its_denm_coding/ValidityDuration.h"
#include "etsi_its_denm_coding/TransmissionInterval.h"
#include "etsi_its_denm_coding/StationType.h"
#include <etsi_its_denm_coding/constr_SEQUENCE.h>



#include <etsi_its_denm_coding/asn_application.h>

#ifdef __cplusplus
namespace etsi_its_denm_coding {
extern "C" {
#endif

/* ManagementContainer */
typedef struct ManagementContainer {
	ActionID_t	 actionID;
	TimestampIts_t	 detectionTime;
	TimestampIts_t	 referenceTime;
	Termination_t	*termination;	/* OPTIONAL */
	ReferencePosition_t	 eventPosition;
	RelevanceDistance_t	*relevanceDistance;	/* OPTIONAL */
	RelevanceTrafficDirection_t	*relevanceTrafficDirection;	/* OPTIONAL */
	ValidityDuration_t	*validityDuration;	/* DEFAULT 600 */
	TransmissionInterval_t	*transmissionInterval;	/* OPTIONAL */
	StationType_t	 stationType;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ManagementContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ManagementContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_ManagementContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_ManagementContainer_1[10];

#ifdef __cplusplus
}
}
#endif


#include <etsi_its_denm_coding/asn_internal.h>
