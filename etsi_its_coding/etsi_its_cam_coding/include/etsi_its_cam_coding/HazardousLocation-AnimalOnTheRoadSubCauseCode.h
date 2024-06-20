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
typedef enum HazardousLocation_AnimalOnTheRoadSubCauseCode {
	HazardousLocation_AnimalOnTheRoadSubCauseCode_unavailable	= 0,
	HazardousLocation_AnimalOnTheRoadSubCauseCode_wildAnimals	= 1,
	HazardousLocation_AnimalOnTheRoadSubCauseCode_herdOfAnimals	= 2,
	HazardousLocation_AnimalOnTheRoadSubCauseCode_smallAnimals	= 3,
	HazardousLocation_AnimalOnTheRoadSubCauseCode_largeAnimals	= 4
} e_HazardousLocation_AnimalOnTheRoadSubCauseCode;

/* HazardousLocation-AnimalOnTheRoadSubCauseCode */
typedef long	 HazardousLocation_AnimalOnTheRoadSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HazardousLocation_AnimalOnTheRoadSubCauseCode;
asn_struct_free_f HazardousLocation_AnimalOnTheRoadSubCauseCode_free;
asn_struct_print_f HazardousLocation_AnimalOnTheRoadSubCauseCode_print;
asn_constr_check_f HazardousLocation_AnimalOnTheRoadSubCauseCode_constraint;
ber_type_decoder_f HazardousLocation_AnimalOnTheRoadSubCauseCode_decode_ber;
der_type_encoder_f HazardousLocation_AnimalOnTheRoadSubCauseCode_encode_der;
xer_type_decoder_f HazardousLocation_AnimalOnTheRoadSubCauseCode_decode_xer;
xer_type_encoder_f HazardousLocation_AnimalOnTheRoadSubCauseCode_encode_xer;
jer_type_encoder_f HazardousLocation_AnimalOnTheRoadSubCauseCode_encode_jer;
oer_type_decoder_f HazardousLocation_AnimalOnTheRoadSubCauseCode_decode_oer;
oer_type_encoder_f HazardousLocation_AnimalOnTheRoadSubCauseCode_encode_oer;
per_type_decoder_f HazardousLocation_AnimalOnTheRoadSubCauseCode_decode_uper;
per_type_encoder_f HazardousLocation_AnimalOnTheRoadSubCauseCode_encode_uper;
per_type_decoder_f HazardousLocation_AnimalOnTheRoadSubCauseCode_decode_aper;
per_type_encoder_f HazardousLocation_AnimalOnTheRoadSubCauseCode_encode_aper;

#ifdef __cplusplus
}
}
#endif


#include <etsi_its_cam_coding/asn_internal.h>
