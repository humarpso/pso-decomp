#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base { char pad[0x18]; };
struct VObj : Base { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

extern "C" {

u8 *fn_80184AB8();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(s32);
M2C_UNK fn_803E4AF4(s32, s32, f32);
extern M2C_UNK lbl_8050DC50[];
extern const f32 lbl_805DBC40;
extern const f32 lbl_805DBC44;

void fn_80184314(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = fn_80184AB8();
    if ((temp_r3 != NULL) && (((VObj *)arg0)->m8(lbl_805DBC44, lbl_805DBC40) != 0)) {
        fn_803DA798(M2C_FIELD(lbl_8050DC50, s32 *, 8));
        fn_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        fn_803E4AF4(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x78), M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x430), s32 *, 0xC), M2C_FIELD(arg0, f32 *, 0xB0));
        fn_803E4AF4(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x68), M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x430), s32 *, 4), M2C_FIELD(arg0, f32 *, 0xB0));
        fn_803E46BC(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x88));
        fn_803E46BC(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x98));
        fn_803D9B78();
    }
}

}
