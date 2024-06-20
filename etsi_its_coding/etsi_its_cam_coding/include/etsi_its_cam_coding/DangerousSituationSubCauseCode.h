#pragma once
/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include <etsi_its_cam_coding/NativeInteger.h>



#include <etsi_its_cam_coding/asn_application.h>

#ifdef __cplusplus
namespace etsi_its_cam_coding {
extern "C" {
#endif

/* Dependencies */
typedef enum DangerousSituationSubCauseCode {
	DangerousSituationSubCauseCode_unavailable	= 0,
	DangerousSituationSubCauseCode_emergencyElectronicBrakeEngaged	= 1,
	DangerousSituationSubCauseCode_preCrashSystemEngaged	= 2,
	DangerousSituationSubCauseCode_espEngaged	= 3,
	DangerousSituationSubCauseCode_absEngaged	= 4,
	DangerousSituationSubCauseCode_aebEngaged	= 5,
	DangerousSituationSubCauseCode_brakeWarningEngaged	= 6,
	DangerousSituationSubCauseCode_collisionRiskWarningEngaged	= 7
} e_DangerousSituationSubCauseCode;

/* DangerousSituationSubCauseCode */
typedef long	 DangerousSituationSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DangerousSituationSubCauseCode;
asn_struct_free_f DangerousSituationSubCauseCode_free;
asn_struct_print_f DangerousSituationSubCauseCode_print;
asn_constr_check_f DangerousSituationSubCauseCode_constraint;
ber_type_decoder_f DangerousSituationSubCauseCode_decode_ber;
der_type_encoder_f DangerousSituationSubCauseCode_encode_der;
xer_type_decoder_f DangerousSituationSubCauseCode_decode_xer;
xer_type_encoder_f DangerousSituationSubCauseCode_encode_xer;
jer_type_encoder_f DangerousSituationSubCauseCode_encode_jer;
oer_type_decoder_f DangerousSituationSubCauseCode_decode_oer;
oer_type_encoder_f DangerousSituationSubCauseCode_encode_oer;
per_type_decoder_f DangerousSituationSubCauseCode_decode_uper;
per_type_encoder_f DangerousSituationSubCauseCode_encode_uper;
per_type_decoder_f DangerousSituationSubCauseCode_decode_aper;
per_type_encoder_f DangerousSituationSubCauseCode_encode_aper;

#ifdef __cplusplus
}
}
#endif


#include <etsi_its_cam_coding/asn_internal.h>
