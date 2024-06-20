#pragma once
/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include <etsi_its_denm_coding/NativeEnumerated.h>



#include <etsi_its_denm_coding/asn_application.h>

#ifdef __cplusplus
namespace etsi_its_denm_coding {
extern "C" {
#endif

/* Dependencies */
typedef enum HardShoulderStatus {
	HardShoulderStatus_availableForStopping	= 0,
	HardShoulderStatus_closed	= 1,
	HardShoulderStatus_availableForDriving	= 2
} e_HardShoulderStatus;

/* HardShoulderStatus */
typedef long	 HardShoulderStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_HardShoulderStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_HardShoulderStatus;
extern const asn_INTEGER_specifics_t asn_SPC_HardShoulderStatus_specs_1;
asn_struct_free_f HardShoulderStatus_free;
asn_struct_print_f HardShoulderStatus_print;
asn_constr_check_f HardShoulderStatus_constraint;
ber_type_decoder_f HardShoulderStatus_decode_ber;
der_type_encoder_f HardShoulderStatus_encode_der;
xer_type_decoder_f HardShoulderStatus_decode_xer;
xer_type_encoder_f HardShoulderStatus_encode_xer;
jer_type_encoder_f HardShoulderStatus_encode_jer;
oer_type_decoder_f HardShoulderStatus_decode_oer;
oer_type_encoder_f HardShoulderStatus_encode_oer;
per_type_decoder_f HardShoulderStatus_decode_uper;
per_type_encoder_f HardShoulderStatus_encode_uper;
per_type_decoder_f HardShoulderStatus_decode_aper;
per_type_encoder_f HardShoulderStatus_encode_aper;

#ifdef __cplusplus
}
}
#endif


#include <etsi_its_denm_coding/asn_internal.h>
