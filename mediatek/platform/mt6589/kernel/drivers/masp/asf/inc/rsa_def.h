
#ifndef _RSA_H
#define _RSA_H

#include "bgn_export.h"
#include "sec_cust_struct.h"

#include "alg_sha1.h"

#define SIG_RSA_RAW     0
#define RSA_SIGN        1

typedef struct
{
    int len; 

    int pad;  
    int h_id;  
    int (*f_rng)(void *); 
    void *p_rng;    

    /* keys { */
    bgn N;
    bgn E;
    bgn D;

    bgn RN;
    bgn RP;
    bgn RQ;          
    /* keys } */    
}
rsa_ctx;

int rsa_sign( rsa_ctx *ctx, int h_len, const unsigned char *hash, unsigned char *sig );
int rsa_verify( rsa_ctx *ctx, int h_len, const unsigned char *hash, unsigned char *sig );    

extern rsa_ctx rsa;


#define E_RSA_BAD_INPUT_DATA                    0x0001
#define E_RSA_INVALID_PADDING                   0x0002
#define E_RSA_KEY_GEN_FAILED                    0x0003
#define E_RSA_KEY_CHECK_FAILED                  0x0004
#define E_RSA_PUBLIC_FAILED                     0x0005
#define E_RSA_PRIVATE_FAILED                    0x0006
#define E_RSA_VERIFY_FAILED                     0x0007
#define E_RSA_OUTPUT_TOO_LARGE                  0x0008

#endif
