#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TObjNpcBaseFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__11TObjNpcBase[];

void *__dt__11TObjNpcBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjNpcBase;
        TObjEneGibbles__sub_80156720(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801490F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static__11TObjNpcBaseFv(void);
void TLobby__sub_800F957C(void*);

extern u32 lbl_805D5738;

void free_static__11TObjNpcBaseFv(void) {
    if ((u32) lbl_805D5738 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D5738);
        lbl_805D5738 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8014931C
#include "types.h"

extern "C" {

s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void TObjNpcBase__vt86(void);
void TObjNpcBase__sub_80149358(void* p, s32 v);
void TObjNpcBase__sub_80149360(void* p, s32 v);
void TObjNpcBase__sub_80149368(void* p);

void TObjNpcBase__vt86(void) {  }
void play_voice__11TObjNpcBaseFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x40003804, arg0 + 0x38, 0, 0);
}
void TObjNpcBase__sub_80149358(void* p, s32 v) { *(s32*)((char*)p + 0x3ac) = v; }
void TObjNpcBase__sub_80149360(void* p, s32 v) { *(s32*)((char*)p + 0x3a8) = v; }
void TObjNpcBase__sub_80149368(void* p) { *(s32*)((char*)p + 0x0) = 2; }

}
#endif
#endif
