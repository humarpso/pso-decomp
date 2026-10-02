#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

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

void *destroy__16TOFenceAncient01FPvs(void *arg0, s16 arg1);
void *init_fields__16TOFenceAncient01FPv(void *arg0);
void on_zone_exit__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOSignCave03__sub_803DB510(int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjDoor__sub_803DC894(void *, int, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
void init_map_object_base(void *);
M2C_UNK set_global_param__8TObjFishFi(int);

void on_zone_exit__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r31;

    if (((VObj18_80166970 *) arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD0) == 0) {
            TObjDoor__sub_803DC894((void *) (M2C_FIELD(arg0, void **, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xBC)), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
        } else {
            temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (temp_r31 + 8));
            rotate_matrix_z((int) (0), (int) (M2C_FIELD(temp_r31, s32 *, 0x1C)));
            rotate_matrix_x((int) (0), (int) (M2C_FIELD(temp_r31, s32 *, 0x14)));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(temp_r31, s32 *, 0x18)));
            TBoss7Tentacle__sub_803D9BA0((void *) (temp_r31 + 0x20));
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31, s32 *, 4)));
            TObjPlayer__sub_803D9B78();
        }
        TObjPlayer__sub_803D9B78();
    }
}

extern M2C_UNK lbl_804B1B80[];

void *destroy__16TOFenceAncient01FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B1B80;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804B1B80[];

void *init_fields__16TOFenceAncient01FPv(void *arg0) {
    init_map_object_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B1B80;
    M2C_FIELD(arg0, u32 *, 0xAC) = 0;
    M2C_FIELD(arg0, u32 *, 0xCC) = -1;
    M2C_FIELD(arg0, u32 *, 0xC8) = 0;
    M2C_FIELD(arg0, u32 *, 0xD0) = 0;
    M2C_FIELD(arg0, u32 *, 0xD4) = 0;
    return arg0;
}

}
