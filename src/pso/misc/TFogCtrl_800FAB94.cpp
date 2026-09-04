#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TFogCtrl__sub_800FB0F8(u8 *arg0, s32 arg1, s32 arg2);
s32 get_param__8TFogCtrlFPv(void* p);
s32 TFogCtrl__sub_800FAF3C(u8 *arg0, s32 arg1);
}

extern "C" {

s32 TFogCtrl__sub_800FAC84(void* p);
int TFogCtrl__sub_800FAC90(void);
int TFogCtrl__sub_800FAFE0(void);
int TFogCtrl__sub_800FB06C(void);
void clear_active_flag__8TFogCtrlFPv(void *arg0);
void* get_entry__8TFogCtrlFi(int a0);
void update_all__8TFogCtrlFv(void);
M2C_UNK TFogCtrl__sub_800FAE1C(void *);
s32 get_param__8TFogCtrlFPv(void* p);
s32 is_split_screen();

s32 TFogCtrl__sub_800FAC84(void* p) { return *(s32*)((char*)*(void**)((char*)p + 0x174) + 0x40); }

int TFogCtrl__sub_800FAC90(void) { return 0; }

    extern int lbl_805D5388;
void* get_entry__8TFogCtrlFi(int a0) {  return (char*)(lbl_805D5388) + a0 * 64; }

extern M2C_UNK TFogCtrl__data_80501188[];

void update_all__8TFogCtrlFv(void) {
    s32 var_r29;
    s32 var_r31;
    s32 temp_r3;

    if (is_split_screen() == 0) {
        var_r29 = 0;
        var_r31 = 0;
        do {
            temp_r3 = *(TFogCtrl__data_80501188 + var_r31);
            if ((u32)temp_r3 != 0U) {
                clear_active_flag__8TFogCtrlFPv((void *)(temp_r3));
            }
            var_r29 += 1;
            var_r31 += 1;
        } while (var_r29 != 4);
    }
}

void clear_active_flag__8TFogCtrlFPv(void *arg0) {
    s32 temp_r3;

    if (is_split_screen() == 0) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_r3 & 1) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r3 & 0xFFFFFFFE);
            TFogCtrl__sub_800FAE1C(arg0);
        }
    } else {
        TFogCtrl__sub_800FAE1C(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFFFE);
    }
}

s32 TFogCtrl__sub_800FAF3C(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    if (get_param__8TFogCtrlFPv((void*)arg0) != 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x184);
    if (temp_r0 == 0) {
        return 1;
    }
    if ((temp_r0 == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x1B4) == 0)) {
        return 1;
    }
    if (arg1 & 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = 2;
    }
    M2C_FIELD(arg0, s32 *, 0x19C) = (s32) M2C_FIELD(arg0, s32 *, 0x184);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    return 1;
}

int TFogCtrl__sub_800FAFE0(void) { return 0; }
int TFogCtrl__sub_800FB06C(void) { return 0; }

void TFogCtrl__sub_800FB0F8(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg2 & 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = 2;
    }
    M2C_FIELD(arg0, s32 *, 0x19C) = (s32) M2C_FIELD(arg0, s32 *, 0x184);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 2;
    M2C_FIELD(arg0, s32 *, 0x1A4) = arg1;
}

}
