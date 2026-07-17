#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_fish_on_easter_egg(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
u8 *TObjCity_Season_EasterEgg__sub_80184AB8();

extern M2C_UNK lbl_8050DC50[];
extern const f32 lbl_805DBC40;
extern const f32 lbl_805DBC44;

struct VBase_8018455c { char pad[0x18]; };
struct VObj_8018455c : VBase_8018455c {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

void notify_fish_on_easter_egg(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = TObjCity_Season_EasterEgg__sub_80184AB8();
    if ((temp_r3 != NULL) && (((VObj_8018455c*)arg0)->m8(lbl_805DBC44, lbl_805DBC40) != 0)) {
        TObjFish__sub_803DA798(lbl_8050DC50[0]);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjFish__sub_803E46BC(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x18));
        TObjFish__sub_803E46BC(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x8));
        TObjPlayer__sub_803D9B78();
    }
}

}
