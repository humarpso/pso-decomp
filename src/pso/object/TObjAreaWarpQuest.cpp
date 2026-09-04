#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

s32 get_dest_area__17TObjAreaWarpQuestFPv(void* p);
void TObjAreaWarpQuest__sub_8019DCD8(void* p, s32 v);
void bswap_6x94_inter_level_warp(void* p);
void fn_8019DD14(void* p, u32 v);
void fn_8019DD24(void* p, u32 v);

int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

s32 get_dest_area__17TObjAreaWarpQuestFPv(void* p) { return *(s32*)((char*)p + 0xc); }
void TObjAreaWarpQuest__sub_8019DCD8(void* p, s32 v) { *(s32*)((char*)p + 0x3c8) = v; }
void bswap_6x94_inter_level_warp(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); }
void fn_8019DD14(void* p, u32 v) { *(u32*)((char*)p + 0x8) &= ~v; }
void fn_8019DD24(void* p, u32 v) { *(u32*)((char*)p + 0x8) |= v; }

}
#else
#if PSO_CLASS_PACKAGE == 0x8019C3FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjAreaWarpQuestFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

extern M2C_UNK __vt__17TObjAreaWarpQuest[];

void *__dt__17TObjAreaWarpQuestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjAreaWarpQuest;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A29BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjAreaWarpQuest__create(void *arg0);
void *TObjAreaWarpQuest__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjAreaWarpQuest__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TObjAreaWarpQuest__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
