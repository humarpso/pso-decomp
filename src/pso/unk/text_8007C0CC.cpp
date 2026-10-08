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
void apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(s32 *self, u32 *data, s32 len);
s32 subtractive_rng_next(s32 *arg0);
int bswap_32__FPUl(void *);
void crypt_data_be__23TAdSinglePlyChrSelectGCFPvPvi(s32 *self, u32 *data, s32 len);
s32 subtractive_rng_next(s32 *arg0);
void subtractive_rng_xor_buffer(s32 *self, u32 *data, s32 len);
void subtractive_rng_refill(Crypt_8007C438 *c);
void subtractive_rng_refill(Crypt_8007C438 *c);
void subtractive_rng_seed(R_8007C48C *arg0, s32 arg1);
extern void* memcpy(void*,const void*,u32);
void subtractive_rng_unshuffle(void* stream,const u8* source,u8* destination,u32 size);
extern u8 lbl_80500398[256], lbl_80500498[256];
extern u16 TAdSinglePlyChrSelectGC__sub_8007C584(s32*,u16);
void subtractive_rng_make_shuffle(s32* stream);
extern void* memcpy(void*,const void*,u32);
extern u8 lbl_80500398[256], lbl_80500398[256];
void permute_save_blocks__23TAdSinglePlyChrSelectGCFPvPvPvUi(void* stream,const u8* source,u8* destination,u32 size);
}

extern "C" {

void apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(s32 *self, u32 *data, s32 len) {
    s32 i;
    s32 n = (len + 3) / 4;
    for (i = 0; i < n; i++) {
        data[i] = subtractive_rng_next(self) - data[i];
    }
}

void subtractive_rng_unshuffle(void* stream,const u8* source,u8* destination,u32 size) {
 u32 block,i;
 memcpy(destination,source,size);
 for(block=0;block<(size>>8);block++) {
  for(i=0;i<256;i++) destination[(block<<8)+lbl_80500498[i]]=source[(block<<8)+i];
 }
}

void permute_save_blocks__23TAdSinglePlyChrSelectGCFPvPvPvUi(void* stream,const u8* source,u8* destination,u32 size) {
 u32 block,i;
 memcpy(destination,source,size);
 for(block=0;block<(size>>8);block++) {
  for(i=0;i<256;i++) destination[(block<<8)+lbl_80500398[i]]=source[(block<<8)+i];
 }
}

void subtractive_rng_make_shuffle(s32* stream) {
 s32 i; u16 index; u8 value;
 for(i=0;i<256;i++) lbl_80500398[i]=(u8)i;
 for(i=255;i>=0;i--) {
  index=TAdSinglePlyChrSelectGC__sub_8007C584(stream,(u16)(i+1));
  value=lbl_80500398[index];
  lbl_80500398[index]=lbl_80500398[i];
  lbl_80500498[value]=(u8)i;
  lbl_80500398[i]=value;
 }
}

void crypt_data_be__23TAdSinglePlyChrSelectGCFPvPvi(s32 *self, u32 *data, s32 len) {
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
