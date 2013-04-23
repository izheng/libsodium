#ifndef crypto_sign_ed25519_H
#define crypto_sign_ed25519_H

#include "export.h"

#define crypto_sign_ed25519_SECRETKEYBYTES 64
#define crypto_sign_ed25519_PUBLICKEYBYTES 32
#define crypto_sign_ed25519_BYTES 64

#ifdef __cplusplus
extern "C" {
#endif


SODIUM_EXPORT
int crypto_sign_ed25519(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *);

SODIUM_EXPORT
int crypto_sign_ed25519_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *);

SODIUM_EXPORT
int crypto_sign_ed25519_keypair(unsigned char *,unsigned char *);

SODIUM_EXPORT
int crypto_sign_ed25519_seed_keypair(unsigned char *,unsigned char *,const unsigned char *);

#ifdef __cplusplus
}
#endif

#define crypto_sign_ed25519_ref10 crypto_sign_ed25519
#define crypto_sign_ed25519_ref10_open crypto_sign_ed25519_open
#define crypto_sign_ed25519_ref10_keypair crypto_sign_ed25519_keypair
#define crypto_sign_ed25519_ref10_seed_keypair crypto_sign_ed25519_seed_keypair

#endif
