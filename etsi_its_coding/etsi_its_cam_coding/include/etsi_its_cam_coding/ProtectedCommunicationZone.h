#pragma once
/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include "etsi_its_cam_coding/ProtectedZoneType.h"
#include "etsi_its_cam_coding/TimestampIts.h"
#include "etsi_its_cam_coding/Latitude.h"
#include "etsi_its_cam_coding/Longitude.h"
#include "etsi_its_cam_coding/ProtectedZoneRadius.h"
#include "etsi_its_cam_coding/ProtectedZoneID.h"
#include <etsi_its_cam_coding/constr_SEQUENCE.h>



#include <etsi_its_cam_coding/asn_application.h>

#ifdef __cplusplus
namespace etsi_its_cam_coding {
extern "C" {
#endif

/* ProtectedCommunicationZone */
typedef struct ProtectedCommunicationZone {
	ProtectedZoneType_t	 protectedZoneType;
	TimestampIts_t	*expiryTime;	/* OPTIONAL */
	Latitude_t	 protectedZoneLatitude;
	Longitude_t	 protectedZoneLongitude;
	ProtectedZoneRadius_t	*protectedZoneRadius;	/* OPTIONAL */
	ProtectedZoneID_t	*protectedZoneID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtectedCommunicationZone_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtectedCommunicationZone;
extern asn_SEQUENCE_specifics_t asn_SPC_ProtectedCommunicationZone_specs_1;
extern asn_TYPE_member_t asn_MBR_ProtectedCommunicationZone_1[6];

#ifdef __cplusplus
}
}
#endif


#include <etsi_its_cam_coding/asn_internal.h>
