#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int obj_testFlags30(void*, int);
s32 obj_getField1c(void* a0);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_800100A0(s32 arg0, s32 arg1);
int obj_testFlags30(void*, int);
s32 obj_getField1c(void* a0);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_80010128(s32 arg0, s32 arg1);
int obj_testFlags30(void*, int);
s32 obj_getField1c(void* a0);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_800101B0(s32 arg0, s32 arg1);
int obj_testFlags30(void*, int);
s32 obj_getField1c(void* a0);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_80010238(s32 arg0, s32 arg1);
int obj_testFlags30(void*, int);
s32 obj_getField1c(void* a0);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_800102C0(s32 arg0, s32 arg1);
int obj_testFlags30(void*, int);
void create__10TObjPlayerFUiii(u32, s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_8001000C(u8 *arg0, u32 arg1, s32 arg2);
}

extern "C" {

s32 TObjPlayer__sub_80087638(s32, s32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 trigger_switch_attack__10TObjPlayerFPvi(s32, s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80019248(s32);
int test_flag_1000__10TObjPlayerFPv(void* p);
int has_flag_0x800__10TObjPlayerFPv(void* p);
int test_flag30_512__10TObjPlayerFPv(void* p);
int test_flag_256__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_8000FF4C(void* p, s16 v);
u16 get_field_2d4__10TObjPlayerFPv(void* p);
int obj_testFlags30(void*, int);

void TObjPlayer__sub_8001000C(u8 *arg0, u32 arg1, s32 arg2) {
    u32 temp_r4;
    if (((s32)obj_testFlags30((void*)(arg0), (int)(0x02000000))) == 0) {
        if (arg1 != 0U) {
            create__10TObjPlayerFUiii((u32) arg0, (s32) arg1, 0x96);
        } else {
            temp_r4 = M2C_FIELD(arg0, u32 *, 0xA4);
            if (temp_r4 != 0U) {
                create__10TObjPlayerFUiii((u32) arg0, (s32) temp_r4, 0x96);
            }
        }
        if (arg2 != 0) {
            TBoss3Volopt__sub_8022675C((s32)(0xB20F), (s32)((u32) (arg0 + 0x38)), (s32)(0), (s32)(0));
        }
    }
}

void TObjPlayer__sub_800100A0(s32 arg0, s32 arg1) {
    s32 temp_r3;
    if (((s32)obj_testFlags30((void*)(arg0), (int)(0x02000000))) == 0) {
        temp_r3 = TOSwitchAttack__sub_80087278((s32)(arg0 + 0x2FC), (s32)(0x21), (s32)(0x50));
        if (temp_r3 != 0) {
            TObjPlayer__sub_80087638(temp_r3, obj_getField1c((void*)(arg0)));
        }
        if (arg1 != 0) {
            TBoss3Volopt__sub_8022675C((s32)(0xB210), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    }
}

void TObjPlayer__sub_80010128(s32 arg0, s32 arg1) {
    s32 temp_r3;
    if (((s32)obj_testFlags30((void*)(arg0), (int)(0x02000000))) == 0) {
        temp_r3 = TOSwitchAttack__sub_80087278((s32)(arg0 + 0x2FC), (s32)(0x24), (s32)(0x50));
        if (temp_r3 != 0) {
            TObjPlayer__sub_80087638(temp_r3, obj_getField1c((void*)(arg0)));
        }
        if (arg1 != 0) {
            TBoss3Volopt__sub_8022675C((s32)(0xB20E), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    }
}

void TObjPlayer__sub_800101B0(s32 arg0, s32 arg1) {
    s32 temp_r3;
    if (((s32)obj_testFlags30((void*)(arg0), (int)(0x02000000))) == 0) {
        temp_r3 = TOSwitchAttack__sub_80087278((s32)(arg0 + 0x2FC), (s32)(0x27), (s32)(0x50));
        if (temp_r3 != 0) {
            TObjPlayer__sub_80087638(temp_r3, obj_getField1c((void*)(arg0)));
        }
        if (arg1 != 0) {
            TBoss3Volopt__sub_8022675C((s32)(0xB20D), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    }
}

void TObjPlayer__sub_80010238(s32 arg0, s32 arg1) {
    s32 temp_r3;
    if (((s32)obj_testFlags30((void*)(arg0), (int)(0x02000000))) == 0) {
        temp_r3 = TOSwitchAttack__sub_80087278((s32)(arg0 + 0x2FC), (s32)(0x26), (s32)(0x50));
        if (temp_r3 != 0) {
            TObjPlayer__sub_80087638(temp_r3, obj_getField1c((void*)(arg0)));
        }
        if (arg1 != 0) {
            TBoss3Volopt__sub_8022675C((s32)(0xB20C), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    }
}
void TObjPlayer__sub_800102C0(s32 arg0, s32 arg1) {
    s32 temp_r3;
    if (((s32)obj_testFlags30((void*)(arg0), (int)(0x02000000))) == 0) {
        temp_r3 = TOSwitchAttack__sub_80087278((s32)(arg0 + 0x2FC), (s32)(0x25), (s32)(0x50));
        if (temp_r3 != 0) {
            TObjPlayer__sub_80087638(temp_r3, obj_getField1c((void*)(arg0)));
        }
        if (arg1 != 0) {
            TBoss3Volopt__sub_8022675C((s32)(0xCD0B), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    }
}

}
