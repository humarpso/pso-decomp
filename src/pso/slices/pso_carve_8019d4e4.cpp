#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8019D4E4 { char pad[0x18]; };
struct VObj_8019D4E4 : Base_8019D4E4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual s32 m31();
};

extern "C" {

s32 fn_801B3588(void *);
s32 TObjPlayer__sub_801B5680();
void *TPlayerBattleCtrl4P__sub_801BA74C(u32);
extern s32 lbl_805D3458;
extern s32 lbl_805D55C0;

u8 fn_8019D4E4(s32 arg0, u16 arg1) {
    void *var_r31;
    u32 id;

    id = arg1;
    var_r31 = NULL;
    if ((id != 0xFFFF) &&((var_r31 = TPlayerBattleCtrl4P__sub_801BA74C(id), ((var_r31 == NULL) != 0)) || (TObjPlayer__sub_801B5680() != 0))) {
        return 0U;
    }
    if ((s32) lbl_805D3458 == 0) {
        return 0U;
    }
    if ((s32) lbl_805D55C0 != 0) {
        return 0U;
    }
    if ((var_r31 != NULL) && (((VObj_8019D4E4 *)var_r31)->m31() != 0)) {
        return 0U;
    }
    if (var_r31 != NULL) {
        return (u8) (fn_801B3588(var_r31) == 0);
    }
    return 1U;
}

}
