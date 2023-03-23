/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER`
 */

#include "ProtectedCommunicationZone.h"

asn_TYPE_member_t asn_MBR_ProtectedCommunicationZone_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ProtectedCommunicationZone, protectedZoneType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtectedZoneType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protectedZoneType"
		},
	{ ATF_POINTER, 1, offsetof(struct ProtectedCommunicationZone, expiryTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimestampIts,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"expiryTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProtectedCommunicationZone, protectedZoneLatitude),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Latitude,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protectedZoneLatitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ProtectedCommunicationZone, protectedZoneLongitude),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Longitude,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protectedZoneLongitude"
		},
	{ ATF_POINTER, 2, offsetof(struct ProtectedCommunicationZone, protectedZoneRadius),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtectedZoneRadius,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protectedZoneRadius"
		},
	{ ATF_POINTER, 1, offsetof(struct ProtectedCommunicationZone, protectedZoneID),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtectedZoneID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protectedZoneID"
		},
};
static const int asn_MAP_ProtectedCommunicationZone_oms_1[] = { 1, 4, 5 };
static const ber_tlv_tag_t asn_DEF_ProtectedCommunicationZone_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ProtectedCommunicationZone_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* protectedZoneType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* expiryTime */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* protectedZoneLatitude */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* protectedZoneLongitude */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* protectedZoneRadius */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* protectedZoneID */
};
asn_SEQUENCE_specifics_t asn_SPC_ProtectedCommunicationZone_specs_1 = {
	sizeof(struct ProtectedCommunicationZone),
	offsetof(struct ProtectedCommunicationZone, _asn_ctx),
	asn_MAP_ProtectedCommunicationZone_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_ProtectedCommunicationZone_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ProtectedCommunicationZone = {
	"ProtectedCommunicationZone",
	"ProtectedCommunicationZone",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtectedCommunicationZone_tags_1,
	sizeof(asn_DEF_ProtectedCommunicationZone_tags_1)
		/sizeof(asn_DEF_ProtectedCommunicationZone_tags_1[0]), /* 1 */
	asn_DEF_ProtectedCommunicationZone_tags_1,	/* Same as above */
	sizeof(asn_DEF_ProtectedCommunicationZone_tags_1)
		/sizeof(asn_DEF_ProtectedCommunicationZone_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ProtectedCommunicationZone_1,
	6,	/* Elements count */
	&asn_SPC_ProtectedCommunicationZone_specs_1	/* Additional specs */
};

