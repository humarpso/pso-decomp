#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TItemProUnit__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2);
M2C_UNK TItemEquipBase__ct();
M2C_UNK TItemProUnit__sub_80118D58(void *);
s16 TItemData__sub_8010CD98(void *);
u8 *TItemData__sub_8010EA38(void *);

M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
extern M2C_UNK __vt__12TItemProUnit[];
extern s32 lbl_805D2C40;
extern const f32 TItemProUnit__data_805DABF8;

struct VItemProUnit {
    char pad[0x18];
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
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17(s8);
};

u8 *TItemProUnit__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    s16 temp_r0;
    u8 *temp_r3;

    TItemEquipBase__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TItemProUnit;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C40;
    ((VItemProUnit *)arg0)->m17((s8) (M2C_FIELD(arg2, u8 *, 4) + 9));
    M2C_FIELD(arg0, s16 *, 0x190) = 0;
    M2C_FIELD(arg0, f32 *, 0x1B8) = (f32) TItemProUnit__data_805DABF8;
    temp_r3 = TItemData__sub_8010EA38(arg2);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s16 *, 0x18C) = (s16) M2C_FIELD(temp_r3, s16 *, 8);
        M2C_FIELD(arg0, s16 *, 0x18E) = (s16) M2C_FIELD(temp_r3, s16 *, 0xA);
        M2C_FIELD(arg0, s16 *, 0x1BE) = (s16) (M2C_FIELD(temp_r3, s16 *, 0xC) * 2);
    } else {
        M2C_FIELD(arg0, s16 *, 0x18C) = 0;
        M2C_FIELD(arg0, s16 *, 0x18E) = 0;
        M2C_FIELD(arg0, s16 *, 0x1BE) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x1BC) = TItemData__sub_8010CD98(arg2);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x1BC);
    if ((temp_r0 <= -0xA) || (temp_r0 >= 0xA)) {
        M2C_FIELD(arg0, s16 *, 0x1BC) = 0;
    }
    memset(arg0 + 0x192, 0, 0x26);
    TItemProUnit__sub_80118D58(arg0);
    return arg0;
}

}
