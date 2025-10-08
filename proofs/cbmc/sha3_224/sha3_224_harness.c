/*
 * Copyright (c) The mldsa-native project authors
 * SPDX-License-Identifier: Apache-2.0 OR ISC OR MIT
 */

/*
 * Proof for mld_sha3_224()
 */

#include <assert.h>
#include <stdint.h>

#include "fips202.h"

void harness(void)
{
  uint8_t in[65536];
  uint8_t out[28];
  size_t inlen;

  mld_sha3_224(out, in, inlen);
}
