#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_80191BEC { char pad[0x18]; };
struct VObj_80191BEC : Base_80191BEC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(s32);
};

extern "C" {

M2C_UNK fn_8015858C();
u8 TODoorAncient08__sub_80229220(u16, f32);
extern M2C_UNK __vt__13TObjHashiBase[];
extern s32 lbl_805D3374;
extern const f32 lbl_805DBE24;
extern const f32 lbl_805DBE28;
extern const f32 lbl_805DBE34;
extern const f32 lbl_805DBE38;

void *TObjHashiBase__ct(void *arg0, s32 arg1, s32 arg2) {
    fn_8015858C();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjHashiBase;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3374;
    ((VObj_80191BEC *)arg0)->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DBE24;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBE28;
    if (TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s32 *, 0xC8), lbl_805DBE24) == 1) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 2;
        M2C_FIELD(arg0, f32 *, 0xCC) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, f32 *, 0xD0) = (f32) lbl_805DBE34;
    } else {
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
        M2C_FIELD(arg0, f32 *, 0xCC) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - lbl_805DBE38);
        M2C_FIELD(arg0, f32 *, 0xD0) = (f32) lbl_805DBE34;
    }
    return arg0;
}

}
