#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802A9948___vt__9TTecKafun { M2C_UNK value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_802A9948___vt__9TTecKafun_size[sizeof(RecoveredGlobal_802A9948___vt__9TTecKafun) == 0x28 ? 1 : -1];

struct RecoveredGlobal_802A9880___vt__9TTecKafun { M2C_UNK value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_802A9880___vt__9TTecKafun_size[sizeof(RecoveredGlobal_802A9880___vt__9TTecKafun) == 0x28 ? 1 : -1];

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
u32 TPhotonMylla__sub_80154CB4(int);
M2C_UNK TObjPlayer__sub_8022BD74(void *);
void run_task__9TTecKafunFv(u8 *arg0);
u16 obj_getField1c(void *);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
u8 * fn_8022C2A8(void *, s32, s32, s32, s16);
extern M2C_UNK __vt__9TTecKafun[];
extern s32 lbl_805D3E30;
u8 *TTecKafun__sub_802A9948(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, f32 farg0, f32 farg1);
u16 obj_getField1c(void *);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
u8 * fn_8022C2A8(void *, s32, s32, s32, s16);
extern M2C_UNK __vt__9TTecKafun[];
extern s32 lbl_805D3E30;
u8 *TTecKafun__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s16 arg6, f32 farg0, f32 farg1);
}

extern "C" {

void *__dt__9TTecKafunFv(void *arg0, s16 arg1);
void render__9TTecKafunFv(void);
void __dl__7TObjectFPv(void *);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

extern M2C_UNK __vt__9TTecKafun[];

void *__dt__9TTecKafunFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecKafun;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void render__9TTecKafunFv(void) {  }
void run_task__9TTecKafunFv(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, u32 *, 0x1C) = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0xB4)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0xF0)));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xFC) == 1) {
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0xF4)));
    }
    TObjPlayer__sub_8022BD74((void *) (arg0));
    queue_destruction__7TObjectFv((void *) (arg0));
}

u8 *TTecKafun__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s16 arg6, f32 farg0, f32 farg1) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    fn_8022C2A8(arg0, arg1, arg2, arg2, arg6);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802A9880___vt__9TTecKafun *)&__vt__9TTecKafun).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E30;
    M2C_FIELD(arg0, f32 *, 0xEC) = farg0;
    M2C_FIELD(arg0, s32 *, 0xF8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xFC) = 1;
    M2C_FIELD(arg0, s32 *, 0xF0) = arg4;
    M2C_FIELD(arg0, s32 *, 0xF4) = arg5;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xE8));
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0xA4), f32 *, 0xC) = farg1;
    }
    TBoss3Volopt__sub_8022675C(0x4002A50A, (u32) (arg0 + 0x20), 0, 0);
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    if (temp_r3_2 != NULL) {
        M2C_FIELD(arg0, u16 *, 0xB4) = obj_getField1c(temp_r3_2);
    }
    return arg0;
}

u8 *TTecKafun__sub_802A9948(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, f32 farg0, f32 farg1) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    fn_8022C2A8(arg0, arg1, arg2, arg2, arg5);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802A9948___vt__9TTecKafun *)&__vt__9TTecKafun).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E30;
    M2C_FIELD(arg0, f32 *, 0xEC) = farg0;
    M2C_FIELD(arg0, s32 *, 0xF8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0) = arg4;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xE8));
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0xA4), f32 *, 0xC) = farg1;
    }
    TBoss3Volopt__sub_8022675C(0x4002A50A, (u32) (arg0 + 0x20), 0, 0);
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    if (temp_r3_2 != NULL) {
        M2C_FIELD(arg0, u16 *, 0xB4) = obj_getField1c(temp_r3_2);
    }
    return arg0;
}

}
