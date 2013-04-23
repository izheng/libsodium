#ifndef crypto_stream_xsalsa20_H
#define crypto_stream_xsalsa20_H

#include "export.h"

#define crypto_stream_xsalsa20_KEYBYTES 32
#define crypto_stream_xsalsa20_NONCEBYTES 24

#ifdef __cplusplus
extern "C" {
#endif

SODIUM_EXPORT
int crypto_stream_xsalsa20(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_xsalsa20_xor(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_xsalsa20_beforenm(unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_xsalsa20_afternm(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_xsalsa20_xor_afternm(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

#ifdef __cplusplus
}
#endif

#define crypto_stream_xsalsa20_ref crypto_stream_xsalsa20
#define crypto_stream_xsalsa20_ref_xor crypto_stream_xsalsa20_xor
#define crypto_stream_xsalsa20_ref_beforenm crypto_stream_xsalsa20_beforenm
#define crypto_stream_xsalsa20_ref_afternm crypto_stream_xsalsa20_afternm
#define crypto_stream_xsalsa20_ref_xor_afternm crypto_stream_xsalsa20_xor_afternm

#endif
