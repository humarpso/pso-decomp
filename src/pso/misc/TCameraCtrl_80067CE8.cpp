#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80067EE0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

#include <stddef.h>
struct Stack_80067E30 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80067E30_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80067E30_lbl_8058D490_size[sizeof(RecoveredGlobal_80067E30_lbl_8058D490) == 0x30 ? 1 : -1];

struct Vec_80067D20 { f32 x, y, z; };

struct Pad_80067D20 {
    u32 buttons;
    u8 pad4[0x14 - 0x4];
    s16 sx;
    s16 sy;
};

struct Obj_80067D20 {
    u8 pad0[0x2c];
    s32 yaw;
    s32 pitch;
    u8 pad34[0x3c - 0x34];
    Vec_80067D20 eye;
    Vec_80067D20 at;
    u8 pad54[0x6c - 0x54];
    Pad_80067D20 *pad;
    f32 dist;
};

extern "C" {
void *__nw__7TObjectFUl(int);
void *TCameraCtrl__sub_80068018(void *);
M2C_UNK set_target_pos__11TCameraCtrlFPvPv(void *, void *, f32);
u8 *get_player_by_client_id(M2C_UNK);
extern const f32 lbl_805D8F78;
void TCameraCtrl__sub_80067EE0(s32 arg0);
u8 *get_player_by_client_id(M2C_UNK);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 TObjPlayer__sub_803D97F0(void *);
s32 pop_matrix();
extern RecoveredGlobal_80067E30_lbl_8058D490 lbl_8058D490;
extern const f32 lbl_805D8F74;
void TCameraCtrl__sub_80067E30(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
void TCameraCtrl__sub_80067D20(Obj_80067D20 *arg0);
}

extern "C" {

void TCameraCtrl__sub_80067CE0(void* p, s32 v);

void * TCameraCtrl__vt7(void) {
    void *o;
    o = __nw__7TObjectFUl(0x74);
    if (o != NULL) {
        o = TCameraCtrl__sub_80068018(o);
    }
    return o;
}

#pragma push
#pragma fp_contract on
void TCameraCtrl__sub_80067D20(Obj_80067D20 *arg0) {
    Pad_80067D20 *pad = arg0->pad;
    f32 d = arg0->dist;
    u32 btn = pad->buttons;
    s16 sx = pad->sx;
    s16 sy = pad->sy;
    f32 r;
    if (btn & 0x400) {
        if (btn & 0x20000) {
            d += 2.0f;
            if (d > 1000.0f) {
                d = 1000.0f;
            }
            arg0->dist = d;
        } else if (btn & 0x10000) {
            d = d - 2.0f;
            if (d < 15.0f) {
                d = 15.0f;
            }
            arg0->dist = d;
        }
        arg0->pitch += sx * 3;
        arg0->yaw += sy * 3;
    }
    r = arg0->dist * TBoss8Dragon__sub_803D64DC(arg0->yaw);
    arg0->eye.x = r * TBoss8Dragon__sub_803D64C0(arg0->pitch) + arg0->at.x;
    arg0->eye.y = arg0->at.y - arg0->dist * TBoss8Dragon__sub_803D64C0(arg0->yaw);
    arg0->eye.z = r * TBoss8Dragon__sub_803D64DC(arg0->pitch) + arg0->at.z;
}
#pragma pop

void TCameraCtrl__sub_80067E30(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80067E30, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80067E30, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80067E30, sp10) == 0x8) ? 1 : -1];
    Stack_80067E30 stack;
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_player_by_client_id((M2C_UNK)(0)));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(temp_r3, s32 *, 0x60);
        stack.sp8 = lbl_805D8F74;
        stack.spC = lbl_805D8F74;
        stack.sp10 = M2C_FIELD(arg0, f32 *, 0x70);
        TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x30)));
        TCameraCtrl__sub_803D8934((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
        pop_matrix();
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x48) + stack.sp8);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C) + stack.spC);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + stack.sp10);
    }
}

void TCameraCtrl__sub_80067EE0(s32 arg0) {
    Stack_80067EE0 stack;
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_player_by_client_id(0));
    if (temp_r3 != NULL) {
        stack.sp8 = M2C_FIELD(temp_r3, f32 *, 0x38);
        stack.spC = lbl_805D8F78 + M2C_FIELD(temp_r3, f32 *, 0x3C);
        stack.sp10 = M2C_FIELD(temp_r3, f32 *, 0x40);
        set_target_pos__11TCameraCtrlFPvPv((void *) (arg0), (void *) (&stack.sp8), (f32) (lbl_805D8F78));
    }
}

}
