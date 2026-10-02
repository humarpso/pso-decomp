#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct AirBase_80156e8c { char pad[0x18]; };
struct AirV_80156e8c : AirBase_80156e8c {
    virtual M2C_UNK m0(); virtual M2C_UNK m1(); virtual M2C_UNK m2();
    virtual M2C_UNK m3(); virtual M2C_UNK m4(); virtual M2C_UNK m5();
    virtual M2C_UNK m6(); virtual M2C_UNK m7();
    virtual M2C_UNK m8(void *a, f32 b, f32 c);
};

void *create__14TOAirconCave01FPv(void *arg0);
void render__14TOAirconCave01Fv(u8 *arg0);
void *TOAirconCave01__ct(void *, void *, void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_ginja_model(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C(int);
M2C_UNK pop_matrix();
void *__nw__7TObjectFUl(int);
M2C_UNK set_global_param__8TObjFishFi(int);

extern u8 *TOAirconCave01__data_805D5880;

void render__14TOAirconCave01Fv(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r31;
    u8 *temp_r4;

    temp_r4 = (unsigned char *) (M2C_FIELD(TOAirconCave01__data_805D5880, void **, 0x42C));
    temp_r31 = (unsigned char *) (M2C_FIELD(temp_r4, void **, 8));
    if (((AirV_80156e8c *)arg0)->m8(temp_r4, M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x5C);
        M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (temp_r3 + 0x106);
        TObjPlayer__sub_803D9B2C((int) (temp_r3));
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        pop_matrix();
    }
}

extern void *tl_05;

void *create__14TOAirconCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TOAirconCave01__ct(o, tl_05, arg0);
    }
    return o;
}

}
