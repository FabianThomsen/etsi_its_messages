#pragma once
/*
 * Copyright (c) 2007-2017 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */


#include <etsi_its_denm_coding/per_opentype.h>

#ifdef __cplusplus
namespace etsi_its_denm_coding {
extern "C" {
#endif

asn_dec_rval_t aper_open_type_get(const asn_codec_ctx_t *opt_codec_ctx,
                                  const asn_TYPE_descriptor_t *td,
                                  const asn_per_constraints_t *constraints,
                                  void **sptr, asn_per_data_t *pd);


int aper_open_type_skip(const asn_codec_ctx_t *opt_codec_ctx, asn_per_data_t *pd);

int aper_open_type_put(const asn_TYPE_descriptor_t *td,
                       const asn_per_constraints_t *constraints,
                       const void *sptr, asn_per_outp_t *po);

#ifdef __cplusplus
}
}
#endif


