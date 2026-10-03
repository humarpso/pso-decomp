#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Crypt_8007C438 { s32 pos; u32 k[0x38]; };

struct R_8007C48C { s32 f0; s32 tbl[55]; s32 fe0; s32 fe4; };

extern "C" {
s32 subtractive_rng_next(s32 *arg0);
s32 subtractive_rng_next(s32 *arg0);
void TAdSinglePlyChrSelectGC__sub_8007C0CC(s32 *self, u32 *data, s32 len);
s32 subtractive_rng_next(s32 *arg0);
int bswap_32__FPUl(void *);
void TAdSinglePlyChrSelectGC__sub_8007C2FC(s32 *self, u32 *data, s32 len);
s32 subtractive_rng_next(s32 *arg0);
void subtractive_rng_xor_buffer(s32 *self, u32 *data, s32 len);
void subtractive_rng_refill(Crypt_8007C438 *c);
void subtractive_rng_refill(Crypt_8007C438 *c);
void subtractive_rng_seed(R_8007C48C *arg0, s32 arg1);
}

extern "C" {

void TAdSinglePlyChrSelectGC__sub_8007C0CC(s32 *self, u32 *data, s32 len) {
    s32 i;
    s32 n = (len + 3) / 4;
    for (i = 0; i < n; i++) {
        data[i] = subtractive_rng_next(self) - data[i];
    }
}

void TAdSinglePlyChrSelectGC__sub_8007C2FC(s32 *self, u32 *data, s32 len) {
    u32 *p;
    s32 i;
    s32 n = (len + 3) / 4;
    for (i = 0; i < n; i++) {
        p = &data[i];
        bswap_32__FPUl(p);
        *p ^= subtractive_rng_next(self);
        bswap_32__FPUl(p);
    }
}

void subtractive_rng_xor_buffer(s32 *self, u32 *data, s32 len) {
    s32 i;
    s32 n = (len + 3) / 4;
    for (i = 0; i < n; i++) {
        data[i] ^= subtractive_rng_next(self);
    }
}

s32 subtractive_rng_next(s32 *arg0) {
    s32 temp_r4;
    temp_r4 = *arg0;
    *arg0 = temp_r4 + 1;
    if (temp_r4 + 1 > 0x37) {
        subtractive_rng_refill((Crypt_8007C438 *)((void *)(arg0)));
        *arg0 = 1;
    }
    return arg0[*arg0 + 1];
}
void subtractive_rng_refill(Crypt_8007C438 *c) {
    s32 i;
    for (i = 1; i < 0x19; i++) {
        c->k[i] -= c->k[i + 0x1F];
    }
    for (i = 0x19; i < 0x38; i++) {
        c->k[i] -= c->k[i - 0x18];
    }
}
void subtractive_rng_seed(R_8007C48C *arg0, s32 arg1) {
    s32 x;
    s32 idx;
    s32 a;
    s32 i;
    arg0->fe4 = arg1;
    arg0->fe0 = arg1;
    a = 1;
    for (i = 1; i < 0x37; i++) {
        idx = (0x15 * i) % 0x37;
        arg0->tbl[idx] = a;
        a = arg1 - a;
        arg1 = arg0->tbl[idx];
    }
    subtractive_rng_refill((Crypt_8007C438 *)arg0);
    subtractive_rng_refill((Crypt_8007C438 *)arg0);
    subtractive_rng_refill((Crypt_8007C438 *)arg0);
    subtractive_rng_refill((Crypt_8007C438 *)arg0);
    arg0->f0 = 0x37;
}

}
