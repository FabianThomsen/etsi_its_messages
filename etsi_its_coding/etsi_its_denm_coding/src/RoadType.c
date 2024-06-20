#ifdef __cplusplus
namespace etsi_its_denm_coding {
#endif
/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */

#include "etsi_its_denm_coding/RoadType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_RoadType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_RoadType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_RoadType_value2enum_1[] = {
	{ 0,	43,	"urban-NoStructuralSeparationToOppositeLanes" },
	{ 1,	45,	"urban-WithStructuralSeparationToOppositeLanes" },
	{ 2,	46,	"nonUrban-NoStructuralSeparationToOppositeLanes" },
	{ 3,	48,	"nonUrban-WithStructuralSeparationToOppositeLanes" }
};
static const unsigned int asn_MAP_RoadType_enum2value_1[] = {
	2,	/* nonUrban-NoStructuralSeparationToOppositeLanes(2) */
	3,	/* nonUrban-WithStructuralSeparationToOppositeLanes(3) */
	0,	/* urban-NoStructuralSeparationToOppositeLanes(0) */
	1	/* urban-WithStructuralSeparationToOppositeLanes(1) */
};
const asn_INTEGER_specifics_t asn_SPC_RoadType_specs_1 = {
	asn_MAP_RoadType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RoadType_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RoadType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RoadType = {
	"RoadType",
	"RoadType",
	&asn_OP_NativeEnumerated,
	asn_DEF_RoadType_tags_1,
	sizeof(asn_DEF_RoadType_tags_1)
		/sizeof(asn_DEF_RoadType_tags_1[0]), /* 1 */
	asn_DEF_RoadType_tags_1,	/* Same as above */
	sizeof(asn_DEF_RoadType_tags_1)
		/sizeof(asn_DEF_RoadType_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_RoadType_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_RoadType_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RoadType_specs_1	/* Additional specs */
};


#ifdef __cplusplus
}
#endif
