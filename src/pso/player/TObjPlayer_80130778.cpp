#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_80130778(void *arg0, s16 arg1);
void TObjPlayer__sub_801307D0(void *arg0);
void TObjPlayer__sub_801307E4(void* p);
int draw_icon__10TObjPlayerFPvii(void*, void*, void*);
int TObjPlayer__sub_80120908(void*);
int TObjPlayer__sub_80120BBC(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);

extern M2C_UNK lbl_804A69C0[];

void *TObjPlayer__sub_80130778(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A69C0;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_801307D0(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x204) = 1;
    }
}

void TObjPlayer__sub_801307E4(void* p) { TObjPlayer__sub_80120908(p); draw_icon__10TObjPlayerFPvii(p, (void*)3, (char*)p + 0x208); draw_icon__10TObjPlayerFPvii(p, (void*)1, (char*)p + 0x220); TObjPlayer__sub_80120BBC(p, (void*)35); draw_icon__10TObjPlayerFPvii(p, (void*)3, (char*)p + 0x214); draw_icon__10TObjPlayerFPvii(p, (void*)1, (char*)p + 0x22c); }

}
