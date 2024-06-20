#pragma once
/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include <etsi_its_cam_coding/UTF8String.h>



#include <etsi_its_cam_coding/asn_application.h>

#ifdef __cplusplus
namespace etsi_its_cam_coding {
extern "C" {
#endif

/* OpeningDaysHours */
typedef UTF8String_t	 OpeningDaysHours_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OpeningDaysHours;
asn_struct_free_f OpeningDaysHours_free;
asn_struct_print_f OpeningDaysHours_print;
asn_constr_check_f OpeningDaysHours_constraint;
ber_type_decoder_f OpeningDaysHours_decode_ber;
der_type_encoder_f OpeningDaysHours_encode_der;
xer_type_decoder_f OpeningDaysHours_decode_xer;
xer_type_encoder_f OpeningDaysHours_encode_xer;
jer_type_encoder_f OpeningDaysHours_encode_jer;
oer_type_decoder_f OpeningDaysHours_decode_oer;
oer_type_encoder_f OpeningDaysHours_encode_oer;
per_type_decoder_f OpeningDaysHours_decode_uper;
per_type_encoder_f OpeningDaysHours_encode_uper;
per_type_decoder_f OpeningDaysHours_decode_aper;
per_type_encoder_f OpeningDaysHours_encode_aper;

#ifdef __cplusplus
}
}
#endif


#include <etsi_its_cam_coding/asn_internal.h>
