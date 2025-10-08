/*
 * Copyright (c) The mldsa-native project authors
 * Copyright (c) The slhdsa-c project authors
 * SPDX-License-Identifier: Apache-2.0 OR ISC OR MIT
 */

#ifndef MLD_SHA2_SHA2_H
#define MLD_SHA2_SHA2_H


/* FIPS 180-4 (SHA-2) */

#include <stddef.h>
#include <stdint.h>
#include "../cbmc.h"

#define SHA2_224_HASHBYTES 28
#define SHA2_256_HASHBYTES 32
#define SHA2_384_HASHBYTES 48
#define SHA2_512_HASHBYTES 64
#define SHA2_512_224_HASHBYTES 28
#define SHA2_512_256_HASHBYTES 32

#define FIPS180_NAMESPACE(s) mldsa_fips180_ref_##s

#define mld_sha2_224 FIPS180_NAMESPACE(sha2_224)
/*************************************************
 * Name:        mld_sha2_224
 *
 * Description: SHA2-224 hash function
 *
 * Arguments:   - uint8_t *out: pointer to output (28 bytes)
 *              - const uint8_t *in: pointer to input
 *              - size_t inlen: length of input in bytes
 **************************************************/
void mld_sha2_224(uint8_t *out, const uint8_t *in, size_t inlen);

#define mld_sha2_256 FIPS180_NAMESPACE(sha2_256)
/*************************************************
 * Name:        mld_sha2_256
 *
 * Description: SHA2-256 hash function
 *
 * Arguments:   - uint8_t *out: pointer to output (32 bytes)
 *              - const uint8_t *in: pointer to input
 *              - size_t inlen: length of input in bytes
 **************************************************/
void mld_sha2_256(uint8_t *out, const uint8_t *in, size_t inlen);

#define mld_sha2_384 FIPS180_NAMESPACE(sha2_384)
/*************************************************
 * Name:        mld_sha2_384
 *
 * Description: SHA2-384 hash function
 *
 * Arguments:   - uint8_t *out: pointer to output (48 bytes)
 *              - const uint8_t *in: pointer to input
 *              - size_t inlen: length of input in bytes
 **************************************************/
void mld_sha2_384(uint8_t *out, const uint8_t *in, size_t inlen);

#define mld_sha2_512 FIPS180_NAMESPACE(sha2_512)
/*************************************************
 * Name:        mld_sha2_512
 *
 * Description: SHA2-512 hash function
 *
 * Arguments:   - uint8_t *out: pointer to output (64 bytes)
 *              - const uint8_t *in: pointer to input
 *              - size_t inlen: length of input in bytes
 **************************************************/
void mld_sha2_512(uint8_t *out, const uint8_t *in, size_t inlen);

#define mld_sha2_512_224 FIPS180_NAMESPACE(sha2_512_224)
/*************************************************
 * Name:        mld_sha2_512_224
 *
 * Description: SHA2-512/224 hash function
 *
 * Arguments:   - uint8_t *out: pointer to output (28 bytes)
 *              - const uint8_t *in: pointer to input
 *              - size_t inlen: length of input in bytes
 **************************************************/
void mld_sha2_512_224(uint8_t *out, const uint8_t *in, size_t inlen);

#define mld_sha2_512_256 FIPS180_NAMESPACE(sha2_512_256)
/*************************************************
 * Name:        mld_sha2_512_256
 *
 * Description: SHA2-512/256 hash function
 *
 * Arguments:   - uint8_t *out: pointer to output (32 bytes)
 *              - const uint8_t *in: pointer to input
 *              - size_t inlen: length of input in bytes
 **************************************************/
void mld_sha2_512_256(uint8_t *out, const uint8_t *in, size_t inlen);

#endif /* !MLD_SHA2_SHA2_H */
