#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcARM00__vt88(s32 arg0);
void * TObjNpcARW00__create(void *arg0);
void *__dt__12TObjNpcARM00Fv(void *arg0, s16 arg1);
void free_resources__12TObjNpcARM00Fv(void);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
void *TObjNpcARW00__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcARM00__data_805D5728;
extern u32 TObjNpcARM00__data_805D572C;

void free_resources__12TObjNpcARM00Fv(void) {
    if ((u32) TObjNpcARM00__data_805D572C != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcARM00__data_805D572C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcARM00__data_805D572C);
        TObjNpcARM00__data_805D572C = 0U;
    }
    if ((u32) TObjNpcARM00__data_805D5728 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcARM00__data_805D5728);
        TObjNpcARM00__data_805D5728 = 0U;
    }
}

extern M2C_UNK __vt__12TObjNpcARM00[];

void *__dt__12TObjNpcARM00Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcARM00;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjNpcARM00__vt88(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x40003B08, arg0 + 0x38, 0, 0);
}

extern void *tl_04;

void * TObjNpcARW00__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcARW00__ct(o2, o, arg0);
    }
    return o2;
}

}
