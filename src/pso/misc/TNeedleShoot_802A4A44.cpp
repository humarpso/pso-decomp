#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TNeedleShoot__sub_802A4B60(void *arg0, s16 arg1);
void* get_shoot_data__12TNeedleShootFPv(void* p);
void init_velocity__12TNeedleShootFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void __dt__12TNeedleShootFv(void *, int);
s32 get_global_state__14TOKeyMachine01Fv();
int queue_destruction__7TObjectFv(void*);

void* get_shoot_data__12TNeedleShootFPv(void* p) { return (char*)p + 0x28; }

#include "types.h"
extern "C" {

}

#include "types.h"
extern "C" {
int queue_destruction__7TObjectFv(void*);
void TNeedleShoot__sub_802A4A4C(u8 *arg0);
}

extern "C" {

void TNeedleShoot__sub_802A4A4C(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC0) - 1;
    M2C_FIELD(arg0, s32 *, 0xC0) = temp_r0;
    if (temp_r0 <= 0) {
        queue_destruction__7TObjectFv((void*)arg0);
    }
}

void init_velocity__12TNeedleShootFPv(u8 *arg0) {
    if (get_global_state__14TOKeyMachine01Fv() == 0x22) {
        TBoss3Volopt__sub_8022675C((int) (0x4003B20E), (void *) (arg0 + 0x6C), (int) (0), (int) (0));
    } else {
        TBoss3Volopt__sub_8022675C((int) (0x3A847), (void *) (arg0 + 0x6C), (int) (0), (int) (0));
    }
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
}

}

extern M2C_UNK lbl_804DCFF8[];

void *TNeedleShoot__sub_802A4B60(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DCFF8;
        __dt__12TNeedleShootFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
