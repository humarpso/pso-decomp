#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TObjNpcMaleFat__create(void *arg0);
void *__dt__16TObjNpcMaleDwarfFv(void *arg0, s16 arg1);
void free_static_model__14TObjNpcMaleFatFv(void);
void unload_static_data__16TObjNpcMaleDwarfFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjNpcMaleFat__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);

extern u32 TObjNpcMaleDwarf__data_805D57E8;

void unload_static_data__16TObjNpcMaleDwarfFv(void) {
    if ((u32) TObjNpcMaleDwarf__data_805D57E8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcMaleDwarf__data_805D57E8, 1);
        TObjNpcMaleDwarf__data_805D57E8 = 0U;
    }
}

extern M2C_UNK __vt__16TObjNpcMaleDwarf[];

void *__dt__16TObjNpcMaleDwarfFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjNpcMaleDwarf;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void * TObjNpcMaleFat__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcMaleFat__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjNpcMaleFat__data_805D57F0;

void free_static_model__14TObjNpcMaleFatFv(void) {
    if ((u32) TObjNpcMaleFat__data_805D57F0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcMaleFat__data_805D57F0, 1);
        TObjNpcMaleFat__data_805D57F0 = 0U;
    }
}

}
