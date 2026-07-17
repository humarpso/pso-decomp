#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_801618fc { char pad[0x18]; };
struct VObj_801618fc : VBase_801618fc {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

extern "C" {

void render__12TODoorCave01Fv(u8 *arg0);
M2C_UNK TODoorCave01__sub_80161804(void *, int, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoor__sub_803DC894(void *, int, f32);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 fn_801582C4(void *, f32);

extern u8 *TODoorCave01__data_805D595C;
extern const f32 lbl_805DB4A4;

void render__12TODoorCave01Fv(u8 *arg0) {
    u8 *var_r30;
    s32 var_r29;

    if ((((VObj_801618fc *) arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) && (fn_801582C4((void *) (arg0), (f32) (lbl_805DB4A4)) != 0)) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) == 0) {
            var_r29 = 0;
            var_r30 = (unsigned char *) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C));
            do {
                TODoorCave01__sub_80161804((void *) (arg0), (int) (var_r30), M2C_FIELD(arg0, s32 *, 0xD0) & (1 << (var_r29 + 0x10)) ? 1 : 0);
                var_r29 += 1;
                var_r30 = (unsigned char *) (M2C_FIELD(var_r30, void **, 0x30));
            } while (var_r29 < 4);
        } else {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(TODoorCave01__data_805D595C, s32 *, 4)));
            TObjDoor__sub_803DC894((void *) (M2C_FIELD(arg0, void **, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xBC)), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
