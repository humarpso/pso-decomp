#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TOMineIcon04__vt78(s32 arg0);
}

extern "C" {

int TOMineIcon04__vt80(void* p);
void TOMineIcon04__vt82(void);
void *__dt__12TOMineIcon04Fv(void *arg0, s16 arg1);
void *create__12TOMineIcon04FPv(void *arg0);
void *TOMineIcon04__ct(void *, void *, void *);
int TObjEneDellBiter__sub_80087350(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__6TOMineFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

void TOMineIcon04__vt82(void) {  }
int TOMineIcon04__vt80(void* p) { return TObjEneDellBiter__sub_80087350((char*)p + 0x2fc, 140); }

extern void *tl_05;

void TOMineIcon04__vt78(s32 arg0) {
    u32 temp_r3;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 1:
    case 2:
        TBoss3Volopt__sub_8022675C((int) (0x4C111), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 3:
    case 4:
    case 5:
        TBoss3Volopt__sub_8022675C((int) (0x44110), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 6:
    case 7:
        TBoss3Volopt__sub_8022675C((int) (0x4004C10A), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 8:
    case 9:
    case 10:
        TBoss3Volopt__sub_8022675C((int) (0x4004C111), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 19:
    case 20:
        TBoss3Volopt__sub_8022675C((int) (0x4BC07), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 21:
    case 22:
        TBoss3Volopt__sub_8022675C((int) (0x4004BC07), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
        TBoss3Volopt__sub_8022675C((int) (0x4BC19), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    case 28:
    case 29:
        TBoss3Volopt__sub_8022675C((int) (0x4004BC19), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    default:
        return;
    }
}

void *create__12TOMineIcon04FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x37C);
    if (o != NULL) {
        o = TOMineIcon04__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__12TOMineIcon04[];

void *__dt__12TOMineIcon04Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOMineIcon04;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__6TOMineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
