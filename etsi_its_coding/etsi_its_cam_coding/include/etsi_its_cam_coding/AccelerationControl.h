#pragma once
/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include <etsi_its_cam_coding/BIT_STRING.h>



#include <etsi_its_cam_coding/asn_application.h>

#ifdef __cplusplus
namespace etsi_its_cam_coding {
extern "C" {
#endif

/* Dependencies */
typedef enum AccelerationControl {
	AccelerationControl_brakePedalEngaged	= 0,
	AccelerationControl_gasPedalEngaged	= 1,
	AccelerationControl_emergencyBrakeEngaged	= 2,
	AccelerationControl_collisionWarningEngaged	= 3,
	AccelerationControl_accEngaged	= 4,
	AccelerationControl_cruiseControlEngaged	= 5,
	AccelerationControl_speedLimiterEngaged	= 6
} e_AccelerationControl;

/* AccelerationControl */
typedef BIT_STRING_t	 AccelerationControl_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AccelerationControl_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AccelerationControl;
asn_struct_free_f AccelerationControl_free;
asn_struct_print_f AccelerationControl_print;
asn_constr_check_f AccelerationControl_constraint;
ber_type_decoder_f AccelerationControl_decode_ber;
der_type_encoder_f AccelerationControl_encode_der;
xer_type_decoder_f AccelerationControl_decode_xer;
xer_type_encoder_f AccelerationControl_encode_xer;
jer_type_encoder_f AccelerationControl_encode_jer;
oer_type_decoder_f AccelerationControl_decode_oer;
oer_type_encoder_f AccelerationControl_encode_oer;
per_type_decoder_f AccelerationControl_decode_uper;
per_type_encoder_f AccelerationControl_encode_uper;
per_type_decoder_f AccelerationControl_decode_aper;
per_type_encoder_f AccelerationControl_encode_aper;

#ifdef __cplusplus
}
}
#endif


#include <etsi_its_cam_coding/asn_internal.h>
