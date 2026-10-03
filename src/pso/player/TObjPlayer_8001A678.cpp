#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_8001A8F0 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s8 sp14;
    s8 sp15;
    u8 trailing_storage[0x12];
};

struct RecoveredGlobal_8001A8F0_lbl_8043455C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8001A8F0_lbl_80480938 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Vec_8001A77C { f32 x, y, z; };

struct Cam_8001A77C { u8 pad0[0x14]; s32 f14; s32 f18; Vec_8001A77C v1c; Vec_8001A77C v28; s32 tail[4]; };

typedef struct Color_8001A6A8 { u8 r, g, b, a; } Color_8001A6A8;

typedef struct ColorF_8001A6A8 { f32 r, g, b, a; } ColorF_8001A6A8;

typedef struct Light_8001A6A8 { u8 bytes[0xC]; } Light_8001A6A8;

extern "C" {
s32 init__9TItemDataFv(void *);
s32 query_darkfalz_state__10TObjPlayerFPv(int, void *);
s32 TObjPlayer__sub_801D86F8(int);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8001A8F0_lbl_8043455C lbl_8043455C;
extern M2C_UNK lbl_80480938[];
extern s32 lbl_805D49E0;
extern s8 lbl_805D49E4;
u8 *TObjPlayer__sub_8001A8F0(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
void set_active_camera_pose_from_params(void *);
void activate_camera_mode(int);
extern Vec_8001A77C lbl_80434568;
extern Vec_8001A77C lbl_80434574;
int TObjPlayer__sub_8001A77C(void *p);
M2C_UNK publish_light_direction_color(int, void *, void *);
extern Color_8001A6A8 lbl_80434478[];
extern Light_8001A6A8 lbl_804344CC[];
extern s8 lbl_805D49E4;
int TObjPlayer__sub_8001A6A8(void *p);
}

extern "C" {

void TObjPlayer__sub_8001A860(void);
void TObjPlayer__sub_8001A864(void* p);
void *destroy_base__10TObjPlayerFPvs(void *arg0, s16 arg1);
s32 get_flag890_state__10TObjPlayerFPv(void *arg0);
void update_flag890_state__10TObjPlayerFi(s32 arg0);
M2C_UNK TObjPlayer__sub_8001A4CC(s32, s8);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 fn_8001A988();

s32 get_flag890_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r4;
    s32 var_r3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x890);
    var_r3 = 0;
    if (temp_r4 & 0x20) {
        var_r3 = 0;
    }
    if (temp_r4 & 0x40) {
        var_r3 = 1;
    }
    if (temp_r4 & 0x80) {
        return 2;
    }
    return var_r3;
}

extern s32 lbl_805D49E0;
extern s8 lbl_805D49E4;
extern s32 lbl_805D49E8;
extern s32 lbl_805D5550;

int TObjPlayer__sub_8001A6A8(void *p) {
    ColorF_8001A6A8 c;
    c.r = lbl_80434478[lbl_805D49E4].r / 255.0f;
    c.g = lbl_80434478[lbl_805D49E4].g / 255.0f;
    c.b = lbl_80434478[lbl_805D49E4].b / 255.0f;
    c.a = lbl_80434478[lbl_805D49E4].a / 255.0f;
    return publish_light_direction_color(0, &lbl_804344CC[lbl_805D49E4], &c);
}

int TObjPlayer__sub_8001A77C(void *p) {
    Cam_8001A77C sp20;
    Vec_8001A77C sp14 = lbl_80434568;
    Vec_8001A77C sp8 = lbl_80434574;
    activate_camera_mode(9);
    VecCopy__FP3VecPC3Vec(&sp20.v1c, &sp14);
    VecCopy__FP3VecPC3Vec(&sp20.v28, &sp8);
    sp20.f14 = 0x1693;
    set_active_camera_pose_from_params(&sp20);
}

void update_flag890_state__10TObjPlayerFi(s32 arg0) {
    if (((s32) lbl_805D5550 != 3) && (fn_8001A988() == 0)) {
        s32 temp;
        lbl_805D49E4 = (s8) arg0;
        temp = get_flag890_state__10TObjPlayerFPv((void *)(lbl_805D49E0));
        lbl_805D49E8 = temp;
        TObjPlayer__sub_8001A4CC(temp, (s8) arg0);
    }
}

void TObjPlayer__sub_8001A860(void) {  }
void TObjPlayer__sub_8001A864(void* p) { TObjPlayer__sub_8001A77C((void *)(p)); TObjPlayer__sub_8001A6A8((void *)(p)); }

extern M2C_UNK lbl_80480938[];

void *destroy_base__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80480938;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8001A8F0_lbl_8043455C_size[sizeof(RecoveredGlobal_8001A8F0_lbl_8043455C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8001A8F0_lbl_80480938_size[sizeof(RecoveredGlobal_8001A8F0_lbl_80480938) == 0x18 ? 1 : -1];
u8 *TObjPlayer__sub_8001A8F0(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_8001A8F0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8001A8F0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8001A8F0, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8001A8F0, sp14) == 0xC) ? 1 : -1];
    typedef char sp15_offset[(offsetof(Stack_8001A8F0, sp15) == 0xD) ? 1 : -1];
    Stack_8001A8F0 stack;
    s32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8001A8F0_lbl_80480938 *)&lbl_80480938).value;
    lbl_805D49E4 = 0;
    stack.sp8 = M2C_FIELD(&lbl_8043455C.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043455C.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8043455C.value, s32 *, 8);
    temp_r3 = TObjPlayer__sub_801D86F8((int) (get_char_index__23TAdSinglePlyChrSelectGCFUi((int) (0xFFFF))));
    lbl_805D49E0 = temp_r3;
    query_darkfalz_state__10TObjPlayerFPv((int) (temp_r3), (void *) (&stack.sp8));
    init__9TItemDataFv((void *) (&stack.sp14));
    stack.sp14 = 2;
    stack.sp15 = 0;
    return arg0;
}

}
