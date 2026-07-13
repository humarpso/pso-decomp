#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubShortMail__sub_8027FBF0(void *arg0);
void *TWindowSubShortMail__sub_8027FC58(void *arg0, s16 arg1);
s32 TWindowSubComCard__sub_80073DB8(s32);
s32 TWindowSubComCard__sub_80265BF8(s32);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK fn_8027FD94(s32, s16);
M2C_UNK is_player_input_active(s32);

struct VObj_8027FBF0_Base_8027fbf0 { char pad[0x18]; };
struct VObj_8027FBF0 : VObj_8027FBF0_Base_8027fbf0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
};

void TWindowSubShortMail__sub_8027FBF0(void *arg0) {
    is_player_input_active(M2C_FIELD(arg0, s32 *, 0x1C));
    if (TWindowSubComCard__sub_80073DB8(M2C_FIELD(arg0, s32 *, 0x24)) != 0) {
        ((VObj_8027FBF0 *) M2C_FIELD(arg0, void **, 0x20))->m7();
    }
    fn_8027FD94(M2C_FIELD(arg0, s32 *, 0x28), TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x24)));
}

extern M2C_UNK lbl_804D1AD0[];

void *TWindowSubShortMail__sub_8027FC58(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D1AD0;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
