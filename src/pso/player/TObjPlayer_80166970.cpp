#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void on_zone_exit__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOSignCave03__sub_803DB510(int);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjDoor__sub_803DC894(void *, int, f32);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

struct VBase18_80166970 { char pad[0x18]; };
struct VObj18_80166970 : VBase18_80166970 {
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

void on_zone_exit__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r31;

    if (((VObj18_80166970 *) arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD0) == 0) {
            TObjDoor__sub_803DC894((void *) (M2C_FIELD(arg0, void **, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xBC)), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
        } else {
            temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (temp_r31 + 8));
            TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (M2C_FIELD(temp_r31, s32 *, 0x1C)));
            TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(temp_r31, s32 *, 0x14)));
            TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(temp_r31, s32 *, 0x18)));
            TBoss7Tentacle__sub_803D9BA0((void *) (temp_r31 + 0x20));
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31, s32 *, 4)));
            TObjPlayer__sub_803D9B78();
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
