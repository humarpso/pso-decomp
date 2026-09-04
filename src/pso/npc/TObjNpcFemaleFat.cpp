#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TObjNpcFemaleMacho__create(void *arg0);
void *__dt__16TObjNpcFemaleFatFv(void *arg0, s16 arg1);
void close_dialog_window__18TObjNpcFemaleMachoFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjNpcFemaleMacho__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *, int);

extern M2C_UNK __vt__16TObjNpcFemaleFat[];

void *__dt__16TObjNpcFemaleFatFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjNpcFemaleFat;
        destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

void * TObjNpcFemaleMacho__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcFemaleMacho__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjNpcFemaleMacho__data_805D5780;

void close_dialog_window__18TObjNpcFemaleMachoFv(void) {
    if ((u32) TObjNpcFemaleMacho__data_805D5780 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcFemaleMacho__data_805D5780, 1);
        TObjNpcFemaleMacho__data_805D5780 = 0U;
    }
}

}
