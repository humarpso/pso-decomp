#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80069094_camera_controller_registry { M2C_UNK value; u8 remaining[0x64]; };
typedef char RecoveredGlobal_80069094_camera_controller_registry_size[sizeof(RecoveredGlobal_80069094_camera_controller_registry) == 0x68 ? 1 : -1];

struct RecoveredGlobal_80069024_TCameraCtrl__data_804FF634 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_80069024_lbl_804FF67C {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800691C8_TCameraCtrl__data_804FF6D0 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_800691C8_TCameraCtrl__data_804FF700 {
    M2C_UNK value;
    u8 remaining[0xBC];
};

struct RecoveredGlobal_800691C8_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80069148_TCameraCtrl__data_804FF6D0 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80069148_TCameraCtrl__data_804FF700 {
    M2C_UNK value;
    u8 remaining[0xBC];
};

struct RecoveredGlobal_80069C94_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_80069C94_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80069D04_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_80069D04_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80069304_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006961C_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_8006961C_lbl_8058CA60 {
    M2C_UNK value;
    u8 remaining[0x54];
};

struct RecoveredGlobal_80069258_TCameraCtrl__data_804FF6D0 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80069258_TCameraCtrl__data_804FF700 {
    M2C_UNK value;
    u8 remaining[0xBC];
};

struct RecoveredGlobal_80069258_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_80069A6C_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_80069A6C_TCameraCtrl__data_804FF628 {
    u8 value;
    u8 remaining[0xB];
};

#include <stddef.h>
struct Stack_80069318 {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    f32 sp14;
    u8 pad_18[0x8];
    f32 sp20;
    u8 pad_24[0xC];
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
};

struct RecoveredGlobal_80069318_lbl_804FF5E8 { M2C_UNK value; u8 remaining[0x24]; };

struct Stack_800693F4 {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    f32 sp14;
    u8 pad_18[0x8];
    f32 sp20;
    u8 pad_24[0xC];
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
};

struct RecoveredGlobal_800693F4_TCameraCtrl__data_804FF634 { M2C_UNK value; u8 remaining[0x44]; };

struct Stack_800694A8 {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    f32 sp14;
    u8 pad_18[0x18];
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
};

struct RecoveredGlobal_800694A8_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_80069534 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_80069534_lbl_804381BC {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80069534_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80069D7C_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct VBase_18_f8ef8c
{
  char pad[0x18];
};

struct VObj_18_f8ef8c : VBase_18_f8ef8c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5();
};

struct RecoveredGlobal_80069E7C_camera_controller_registry
{
  M2C_UNK value;
  u8 remaining[0x64];
};

struct RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628
{
  M2C_UNK value;
  u8 remaining[0x8];
};

extern "C" {
void TCameraCtrl__sub_800689E8(void);
void update_position__11TCameraCtrlFPv(u8 *arg0);
s32 get_camera_no__11TCameraCtrlFv();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
s32 is_split_screen();
M2C_UNK approach_camera_vector(void *, void *, f32);
extern int TCameraCtrl__data_805D4E00;
void TCameraCtrl__sub_80069BD8(u8 *arg0);
s32 set_target__11TCameraCtrlFii(int, int);
s32 set_target_coords__11TCameraCtrlFii(int, int);
s32 GXSetViewport(f32, f32, f32, f32, f32, f32);
s32 GXSetScissor(int, int, int, int);
s32 GXSetScissorBoxOffset(int, int);
extern s16 TCameraCtrl__data_805D2838;
extern s16 TCameraCtrl__data_805D283A;
extern s16 TCameraCtrl__data_805D4DFA;
extern s16 TCameraCtrl__data_805D4DFC;
extern f32 TCameraCtrl__data_805D8FA8;
extern f32 TCameraCtrl__data_805D8FAC;
void TCameraCtrl__sub_80068A68(void);
s32 obj_getField1c(int);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 TCameraCtrl__sub_8006B358(int);
extern RecoveredGlobal_80069094_camera_controller_registry camera_controller_registry;
extern u8 *lbl_805D4DF0;
s32 TCameraCtrl__sub_80069094(s32 arg0);
s32 is_split_screen();
void TCameraCtrl__sub_80068FCC(s32, s32);
void TCameraCtrl__sub_801E32D8(f32, f32);
s32 GXSetScissor(int, int, int, int);
s32 GXSetScissorBoxOffset(int, int);
extern RecoveredGlobal_80069024_TCameraCtrl__data_804FF634 TCameraCtrl__data_804FF634;
extern RecoveredGlobal_80069024_lbl_804FF67C lbl_804FF67C;
extern s16 TCameraCtrl__data_805D4E0A;
extern const f32 TCameraCtrl__data_805D8FC0;
extern const f32 TCameraCtrl__data_805D8FC4;
void TCameraCtrl__sub_80069024(void);
extern RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
void TCameraCtrl__sub_800695E8(u8 *arg0);
s32 is_split_screen();
s32 get_instance__11TCameraCtrlFv(void);
s32 get_mode__11TCameraCtrlFPv(void *);
s32 get_camera_no__11TCameraCtrlFv();
void TCameraCtrl__sub_803D976C(u32, u32);
extern RecoveredGlobal_800691C8_TCameraCtrl__data_804FF6D0 TCameraCtrl__data_804FF6D0;
extern RecoveredGlobal_800691C8_TCameraCtrl__data_804FF700 TCameraCtrl__data_804FF700;
extern RecoveredGlobal_800691C8_main_task main_task;
void TCameraCtrl__sub_800691C8(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
extern RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4 TCameraCtrl__data_804FF6C4;
void TCameraCtrl__sub_800687E4(u8 *arg0);
s32 is_split_screen();
s32 get_camera_no__11TCameraCtrlFv();
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
void TCameraCtrl__sub_803D976C(u32, u32);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_800691C8_TCameraCtrl__data_804FF6D0 TCameraCtrl__data_804FF6D0;
extern RecoveredGlobal_800691C8_TCameraCtrl__data_804FF700 TCameraCtrl__data_804FF700;
void TCameraCtrl__sub_80069148(s32 arg0, s32 arg1);
extern RecoveredGlobal_80069094_camera_controller_registry camera_controller_registry;
extern RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
void TCameraCtrl__sub_80069C94(u8 *arg0, u8 *arg1);
extern RecoveredGlobal_80069094_camera_controller_registry camera_controller_registry;
extern RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
void TCameraCtrl__sub_80069D04(u8 *arg0);
extern RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4 TCameraCtrl__data_804FF6C4;
extern f32 TCameraCtrl__data_805D8FA8;
extern f32 TCameraCtrl__data_805D8FAC;
void TCameraCtrl__sub_800687C8(void);
extern RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
s32 TCameraCtrl__sub_80069304(void);
extern RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
extern RecoveredGlobal_80069024_TCameraCtrl__data_804FF634 TCameraCtrl__data_804FF634;
extern RecoveredGlobal_8006961C_lbl_8058CA60 lbl_8058CA60;
extern f32 TCameraCtrl__data_805D8FAC;
void TCameraCtrl__sub_8006961C(u8 *arg0);
s32 is_split_screen();
s32 get_instance__11TCameraCtrlFv(void);
s32 get_mode__11TCameraCtrlFPv(void *);
s32 get_camera_no__11TCameraCtrlFv();
extern RecoveredGlobal_800691C8_TCameraCtrl__data_804FF6D0 TCameraCtrl__data_804FF6D0;
extern RecoveredGlobal_800691C8_TCameraCtrl__data_804FF700 TCameraCtrl__data_804FF700;
extern RecoveredGlobal_800691C8_main_task main_task;
M2C_UNK *TCameraCtrl__sub_80069258(void);
s32 is_split_screen();
M2C_UNK approach_camera_vector(void *, void *, f32);
s32 get_camera_no__11TCameraCtrlFv();
extern RecoveredGlobal_80069094_camera_controller_registry camera_controller_registry;
extern RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
void TCameraCtrl__sub_80069A6C(u8 *arg0);
void TCameraCtrl__sub_80068A68(void);
s32 set_target__11TCameraCtrlFii(int, int);
s32 set_target_coords__11TCameraCtrlFii(int, int);
s32 TCameraCtrl__sub_801E32E4(void *, int);
s32 fn_803D64F8(void *);
s32 update_camera_state__11TCameraCtrlFv(f32, f32, f32);
s32 TCameraCtrl__sub_803D6558(f32, f32, f32);
s32 TCameraCtrl__sub_803D66DC(void *);
extern RecoveredGlobal_80069318_lbl_804FF5E8 lbl_804FF5E8;
extern f32 lbl_805D4DE8;
extern f32 lbl_805D4DEC;
extern s16 lbl_805D4E08;
extern f32 TCameraCtrl__data_805D8FA8;
extern f32 TCameraCtrl__data_805D8FAC;
extern const f32 TCameraCtrl__data_805D8FB8;
extern const f32 TCameraCtrl__data_805D8FBC;
extern const f32 TCameraCtrl__data_805D8FC0;
extern const f32 TCameraCtrl__data_805D8FC4;
extern const f32 lbl_805D8FCC;
extern const f32 TCameraCtrl__data_805D8FD0;
extern const f32 TCameraCtrl__data_805D8FD4;
extern const f32 TCameraCtrl__data_805D8FD8;
extern const f32 lbl_805D8FE4;
void TCameraCtrl__sub_80069318(void);
void TCameraCtrl__sub_8006961C(u8 *arg0);
s32 set_target__11TCameraCtrlFii(int, int);
s32 set_target_coords__11TCameraCtrlFii(int, int);
s32 TCameraCtrl__sub_803D66DC(void *);
extern RecoveredGlobal_80069024_TCameraCtrl__data_804FF634 TCameraCtrl__data_804FF634;
extern f32 lbl_805D4DE8;
extern f32 lbl_805D4DEC;
extern s16 lbl_805D4E08;
extern f32 TCameraCtrl__data_805D8FA8;
extern f32 TCameraCtrl__data_805D8FAC;
extern const f32 TCameraCtrl__data_805D8FB8;
extern const f32 TCameraCtrl__data_805D8FBC;
extern const f32 TCameraCtrl__data_805D8FC0;
extern const f32 TCameraCtrl__data_805D8FC4;
extern const f32 lbl_805D8FCC;
extern const f32 TCameraCtrl__data_805D8FD0;
extern const f32 TCameraCtrl__data_805D8FD4;
extern const f32 TCameraCtrl__data_805D8FD8;
void TCameraCtrl__sub_800693F4(void);
void TCameraCtrl__sub_8006961C(u8 *arg0);
extern RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
extern f32 TCameraCtrl__data_805D8FA8;
extern f32 TCameraCtrl__data_805D8FAC;
extern const f32 TCameraCtrl__data_805D8FB8;
extern const f32 TCameraCtrl__data_805D8FBC;
extern const f32 TCameraCtrl__data_805D8FC0;
extern const f32 TCameraCtrl__data_805D8FC4;
extern const f32 TCameraCtrl__data_805D8FD0;
extern const f32 TCameraCtrl__data_805D8FD4;
extern const f32 TCameraCtrl__data_805D8FD8;
void TCameraCtrl__sub_800694A8(void);
s32 TCameraCtrl__sub_801E317C(int, void *);
extern RecoveredGlobal_80069534_lbl_804381BC lbl_804381BC;
extern RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
void TCameraCtrl__sub_80069534(void);
extern RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
s32 TCameraCtrl__sub_80069D7C(void);
extern RecoveredGlobal_80069094_camera_controller_registry camera_controller_registry;
extern RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
s32 TCameraCtrl__sub_80069E7C(s32 arg0);
}

extern "C" {

void TCameraCtrl__sub_800687BC(void);
void TCameraCtrl__sub_800689E8(void);
f32 TCameraCtrl__sub_80068A04(void);
void create__11TCameraCtrlFv(void);
f32 get_fov__11TCameraCtrlFv(void);
f32 get_split_offset__11TCameraCtrlFi(s32 arg0);
void* get_target__11TCameraCtrlFPv(void* p);
void* get_target_ptr__11TCameraCtrlFPv(void* p);
f32 get_view_scale__11TCameraCtrlFv(void);
void update_position__11TCameraCtrlFPv(u8 *arg0);
M2C_UNK TCameraCtrl__ct(void *, s32);
void * __nw__7TObjectFUl(M2C_UNK);
s32 get_camera_id__11TCameraCtrlFv();
s32 get_camera_no__11TCameraCtrlFv();
s32 is_split_screen();

void TCameraCtrl__sub_800687BC(void) {  }
void* get_target_ptr__11TCameraCtrlFPv(void* p) { return (char*)p + 0x44; }

    extern int TCameraCtrl__data_805D4E00;

typedef char RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4_size[sizeof(RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4_size[sizeof(RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4) == 0xC ? 1 : -1];
void TCameraCtrl__sub_800687C8(void) {
    M2C_FIELD(&(*(RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4 *)&TCameraCtrl__data_804FF6C4).value, f32 *, 0) = (f32) (*(const f32 *)&TCameraCtrl__data_805D8FA8);
    M2C_FIELD(&(*(RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4 *)&TCameraCtrl__data_804FF6C4).value, f32 *, 4) = (f32) (*(const f32 *)&TCameraCtrl__data_805D8FAC);
    M2C_FIELD(&(*(RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4 *)&TCameraCtrl__data_804FF6C4).value, f32 *, 8) = (f32) (*(const f32 *)&TCameraCtrl__data_805D8FA8);
}

void TCameraCtrl__sub_800687E4(u8 *arg0) {
    VecCopy__FP3VecPC3Vec((void *)(&TCameraCtrl__data_804FF6C4.value), (int)(arg0));
}

void TCameraCtrl__sub_800689E8(void) { TCameraCtrl__data_805D4E00 = 0; }

extern f32 TCameraCtrl__data_805D8FA8;

f32 TCameraCtrl__sub_80068A04(void) {
    return TCameraCtrl__data_805D8FA8;
}

extern f32 TCameraCtrl__data_805D8FA8;
extern f32 lbl_805D8FB0;
extern f32 lbl_805D8FB4;

f32 get_split_offset__11TCameraCtrlFi(s32 arg0) {
    if ((is_split_screen() != 0) && (get_camera_id__11TCameraCtrlFv() == 2)) {
        if (arg0 == 0) {
            return lbl_805D8FB0;
        }
        return lbl_805D8FB4;
    }
    return TCameraCtrl__data_805D8FA8;
}

extern f32 TCameraCtrl__data_805D8FAC;
extern f32 lbl_805D8FC8;

void TCameraCtrl__sub_80068A68(void) {
    set_target_coords__11TCameraCtrlFii((int) (0), (int) (0));
    set_target__11TCameraCtrlFii((int) (0x280), (int) (0x1E0));
    GXSetViewport((f32) TCameraCtrl__data_805D4DFA, (f32) TCameraCtrl__data_805D4DFC, (f32) TCameraCtrl__data_805D2838, (f32) TCameraCtrl__data_805D283A, (f32) ((*(const f32 *)&TCameraCtrl__data_805D8FA8)), (f32) ((*(const f32 *)&TCameraCtrl__data_805D8FAC)));
    GXSetScissor((int) ((s32) TCameraCtrl__data_805D4DFA), (int) ((s32) TCameraCtrl__data_805D4DFC), (int) ((s32) TCameraCtrl__data_805D2838), (int) ((s32) TCameraCtrl__data_805D283A));
    GXSetScissorBoxOffset((int) (0), (int) (0));
}

f32 get_fov__11TCameraCtrlFv(void) {
    if (is_split_screen() != 0) {
        if (get_camera_id__11TCameraCtrlFv() == 2) {
            return TCameraCtrl__data_805D8FAC;
        }
        return lbl_805D8FC8;
    }
    return TCameraCtrl__data_805D8FAC;
}

extern f32 TCameraCtrl__data_805D8FAC;
extern f32 lbl_805D8FC8;

f32 get_view_scale__11TCameraCtrlFv(void) {
    if (is_split_screen() != 0) {
        if (get_camera_id__11TCameraCtrlFv() == 2) {
            return TCameraCtrl__data_805D8FAC;
        }
        return lbl_805D8FC8;
    }
    return TCameraCtrl__data_805D8FAC;
}

extern s32 tl_camera;

typedef char RecoveredGlobal_80069024_TCameraCtrl__data_804FF634_size[sizeof(RecoveredGlobal_80069024_TCameraCtrl__data_804FF634) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_80069024_lbl_804FF67C_size[sizeof(RecoveredGlobal_80069024_lbl_804FF67C) == 0x48 ? 1 : -1];
void TCameraCtrl__sub_80069024(void) {
    if (is_split_screen() == 0) {
        TCameraCtrl__sub_80068FCC((s32) &lbl_804FF67C.value, (s32) &TCameraCtrl__data_804FF634.value);
        TCameraCtrl__sub_801E32D8(TCameraCtrl__data_805D8FC0, TCameraCtrl__data_805D8FC4);
        GXSetScissorBoxOffset((int)(0), (int)(0));
        GXSetScissor((int)(0), (int)(0), (int)(0x280), (int)(0x1E0));
        TCameraCtrl__data_805D4E0A = 0;
    }
}

s32 TCameraCtrl__sub_80069094(s32 arg0) {
    s32 var_r31;
    s32 var_r3;
    u32 temp_r3;
    u32 temp_r3_2;
    if (is_split_screen() != 0) {
        var_r31 = 0xFFFF;
        if (arg0 < 0) {
            var_r3 = arg0;
        } else {
            var_r3 = get_camera_mode__11TCameraCtrlFv();
        }
        if (var_r3 >= 4) {
            return 0xFFFF;
        }
        temp_r3_2 = M2C_FIELD(&camera_controller_registry.value, M2C_UNK *, (var_r3 * 4));
        if (temp_r3_2 != 0U) {
            var_r31 = TCameraCtrl__sub_8006B358((int) (temp_r3_2));
        }
        return var_r31;
    }
    if ((void *) lbl_805D4DF0 != NULL) {
        temp_r3 = M2C_FIELD(lbl_805D4DF0, u32 *, 0x90);
        if (temp_r3 != 0U) {
            return obj_getField1c((int) (temp_r3));
        }
    }
    return 0xFFFF;
}

typedef char RecoveredGlobal_800691C8_TCameraCtrl__data_804FF6D0_size[sizeof(RecoveredGlobal_800691C8_TCameraCtrl__data_804FF6D0) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_800691C8_TCameraCtrl__data_804FF700_size[sizeof(RecoveredGlobal_800691C8_TCameraCtrl__data_804FF700) == 0xC0 ? 1 : -1];
typedef char RecoveredGlobal_800691C8_main_task_size[sizeof(RecoveredGlobal_800691C8_main_task) == 0x34 ? 1 : -1];

typedef char RecoveredGlobal_80069148_TCameraCtrl__data_804FF6D0_size[sizeof(RecoveredGlobal_80069148_TCameraCtrl__data_804FF6D0) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_80069148_TCameraCtrl__data_804FF700_size[sizeof(RecoveredGlobal_80069148_TCameraCtrl__data_804FF700) == 0xC0 ? 1 : -1];
void TCameraCtrl__sub_80069148(s32 arg0, s32 arg1) {
    TObjPlayer__sub_803D9B2C();
    if (is_split_screen() != 0) {
        TCameraCtrl__sub_803D976C((u32)((int) (0)), (u32)((void *) ((u8 *)&(*(RecoveredGlobal_80069148_TCameraCtrl__data_804FF700 *)&TCameraCtrl__data_804FF700).value + (get_camera_no__11TCameraCtrlFv() * 0x30))));
    } else {
        TCameraCtrl__sub_803D976C((u32)((int) (0)), (u32)((void *) (&(*(RecoveredGlobal_80069148_TCameraCtrl__data_804FF6D0 *)&TCameraCtrl__data_804FF6D0).value)));
    }
    TCameraCtrl__sub_803D8934((int) (0), (void *) (arg0), (void *) (arg1));
    TObjPlayer__sub_803D9B78();
}

void TCameraCtrl__sub_800691C8(void) {
    if (is_split_screen() != 0) {
        if (get_mode__11TCameraCtrlFPv(&main_task.value) & 1) {
            TCameraCtrl__sub_803D976C(0U, (u32) ((u8 *)&TCameraCtrl__data_804FF700.value + ((get_instance__11TCameraCtrlFv() - 1) * 0x30)));
            return;
        }
        TCameraCtrl__sub_803D976C(0U, (u32) ((u8 *)&TCameraCtrl__data_804FF700.value + (get_camera_no__11TCameraCtrlFv() * 0x30)));
        return;
    }
    TCameraCtrl__sub_803D976C(0U, (u32) &TCameraCtrl__data_804FF6D0.value);
}

typedef char RecoveredGlobal_80069258_TCameraCtrl__data_804FF6D0_size[sizeof(RecoveredGlobal_80069258_TCameraCtrl__data_804FF6D0) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_80069258_TCameraCtrl__data_804FF700_size[sizeof(RecoveredGlobal_80069258_TCameraCtrl__data_804FF700) == 0xC0 ? 1 : -1];
typedef char RecoveredGlobal_80069258_main_task_size[sizeof(RecoveredGlobal_80069258_main_task) == 0x34 ? 1 : -1];
M2C_UNK *TCameraCtrl__sub_80069258(void) {
    if (is_split_screen() != 0) {
        if (get_mode__11TCameraCtrlFPv((void *) (&(*(RecoveredGlobal_80069258_main_task *)&main_task).value)) & 1) {
            return (long *) ((u8 *)&(*(RecoveredGlobal_80069258_TCameraCtrl__data_804FF700 *)&TCameraCtrl__data_804FF700).value + ((get_instance__11TCameraCtrlFv() - 1) * 0x30));
        }
        return (long *) ((u8 *)&(*(RecoveredGlobal_80069258_TCameraCtrl__data_804FF700 *)&TCameraCtrl__data_804FF700).value + (get_camera_no__11TCameraCtrlFv() * 0x30));
    }
    return &(*(RecoveredGlobal_80069258_TCameraCtrl__data_804FF6D0 *)&TCameraCtrl__data_804FF6D0).value;
}

void create__11TCameraCtrlFv(void) {
    void *obj = __nw__7TObjectFUl(0x1D4);
    if (obj != 0) {
        TCameraCtrl__ct(obj, tl_camera);
    }
}

typedef char RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80069304_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069304_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
s32 TCameraCtrl__sub_80069304(void) {
    return ((u32) M2C_FIELD(&(*(RecoveredGlobal_80069304_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, u32 *, 8) >> 0xAU) & 1;
}

void TCameraCtrl__sub_80069318(void) {
    typedef char sp8_offset[(offsetof(Stack_80069318, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80069318, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80069318, sp14) == 0xC) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80069318, sp20) == 0x18) ? 1 : -1];
    typedef char sp30_offset[(offsetof(Stack_80069318, sp30) == 0x28) ? 1 : -1];
    typedef char sp34_offset[(offsetof(Stack_80069318, sp34) == 0x2C) ? 1 : -1];
    typedef char sp38_offset[(offsetof(Stack_80069318, sp38) == 0x30) ? 1 : -1];
    typedef char sp3C_offset[(offsetof(Stack_80069318, sp3C) == 0x34) ? 1 : -1];
    typedef char sp40_offset[(offsetof(Stack_80069318, sp40) == 0x38) ? 1 : -1];
    typedef char sp44_offset[(offsetof(Stack_80069318, sp44) == 0x3C) ? 1 : -1];
    Stack_80069318 stack;
    lbl_805D4E08 = 0;
    set_target_coords__11TCameraCtrlFii((int) (0), (int) (0));
    set_target__11TCameraCtrlFii((int) (0x280), (int) (0x1E0));
    TCameraCtrl__sub_80068A68();
    TCameraCtrl__sub_80069534();
    fn_803D64F8((void *) (&lbl_804FF5E8.value));
    TCameraCtrl__sub_801E32E4((void *) (&lbl_804FF5E8.value), (int) (0x3555));
    update_camera_state__11TCameraCtrlFv((f32) ((*(const f32 *)&TCameraCtrl__data_805D8FA8)), (f32) ((*(const f32 *)&TCameraCtrl__data_805D8FA8)), (f32) ((*(const f32 *)&TCameraCtrl__data_805D8FA8)));
    TCameraCtrl__sub_803D6558((f32) ((*(const f32 *)&TCameraCtrl__data_805D8FA8)), (f32) ((*(const f32 *)&TCameraCtrl__data_805D8FA8)), (f32) (lbl_805D8FE4));
    stack.sp10 = TCameraCtrl__data_805D8FC0;
    stack.sp14 = TCameraCtrl__data_805D8FC4;
    stack.sp30 = TCameraCtrl__data_805D8FB8;
    stack.sp34 = TCameraCtrl__data_805D8FBC;
    stack.sp20 = lbl_805D8FCC;
    stack.sp38 = (*(const f32 *)&TCameraCtrl__data_805D8FA8);
    stack.sp3C = (*(const f32 *)&TCameraCtrl__data_805D8FA8);
    stack.sp40 = TCameraCtrl__data_805D8FD0;
    stack.sp44 = TCameraCtrl__data_805D8FD4;
    lbl_805D4DE8 = (*(const f32 *)&TCameraCtrl__data_805D8FAC);
    lbl_805D4DEC = TCameraCtrl__data_805D8FD8;
    TCameraCtrl__sub_803D66DC((void *) (&stack.sp8));
}

void TCameraCtrl__sub_800693F4(void) {
    typedef char sp8_offset[(offsetof(Stack_800693F4, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800693F4, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800693F4, sp14) == 0xC) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_800693F4, sp20) == 0x18) ? 1 : -1];
    typedef char sp30_offset[(offsetof(Stack_800693F4, sp30) == 0x28) ? 1 : -1];
    typedef char sp34_offset[(offsetof(Stack_800693F4, sp34) == 0x2C) ? 1 : -1];
    typedef char sp38_offset[(offsetof(Stack_800693F4, sp38) == 0x30) ? 1 : -1];
    typedef char sp3C_offset[(offsetof(Stack_800693F4, sp3C) == 0x34) ? 1 : -1];
    typedef char sp40_offset[(offsetof(Stack_800693F4, sp40) == 0x38) ? 1 : -1];
    typedef char sp44_offset[(offsetof(Stack_800693F4, sp44) == 0x3C) ? 1 : -1];
    typedef char sp48_offset[(offsetof(Stack_800693F4, sp48) == 0x40) ? 1 : -1];
    typedef char sp4C_offset[(offsetof(Stack_800693F4, sp4C) == 0x44) ? 1 : -1];
    Stack_800693F4 stack;
    lbl_805D4E08 = 0;
    set_target_coords__11TCameraCtrlFii((int) (0), (int) (0));
    set_target__11TCameraCtrlFii((int) (0x280), (int) (0x1E0));
    stack.sp10 = TCameraCtrl__data_805D8FC0;
    stack.sp14 = TCameraCtrl__data_805D8FC4;
    stack.sp30 = TCameraCtrl__data_805D8FB8;
    stack.sp34 = TCameraCtrl__data_805D8FBC;
    stack.sp20 = lbl_805D8FCC;
    stack.sp38 = (*(const f32 *)&TCameraCtrl__data_805D8FA8);
    stack.sp3C = (*(const f32 *)&TCameraCtrl__data_805D8FA8);
    stack.sp40 = TCameraCtrl__data_805D8FD0;
    stack.sp44 = TCameraCtrl__data_805D8FD4;
    stack.sp48 = (*(const f32 *)&TCameraCtrl__data_805D8FAC);
    stack.sp4C = TCameraCtrl__data_805D8FD8;
    TCameraCtrl__sub_8006961C((u8 *)((void *) (&stack.sp8)));
    TCameraCtrl__sub_803D66DC((void *) (&(*(RecoveredGlobal_800693F4_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value));
    lbl_805D4DE8 = (*(const f32 *)&TCameraCtrl__data_805D8FAC);
    lbl_805D4DEC = TCameraCtrl__data_805D8FD8;
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
typedef char RecoveredGlobal_800694A8_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_800694A8_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
void TCameraCtrl__sub_800694A8(void) {
    typedef char sp8_offset[(offsetof(Stack_800694A8, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800694A8, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800694A8, sp14) == 0xC) ? 1 : -1];
    typedef char sp30_offset[(offsetof(Stack_800694A8, sp30) == 0x28) ? 1 : -1];
    typedef char sp34_offset[(offsetof(Stack_800694A8, sp34) == 0x2C) ? 1 : -1];
    typedef char sp38_offset[(offsetof(Stack_800694A8, sp38) == 0x30) ? 1 : -1];
    typedef char sp3C_offset[(offsetof(Stack_800694A8, sp3C) == 0x34) ? 1 : -1];
    typedef char sp40_offset[(offsetof(Stack_800694A8, sp40) == 0x38) ? 1 : -1];
    typedef char sp44_offset[(offsetof(Stack_800694A8, sp44) == 0x3C) ? 1 : -1];
    typedef char sp48_offset[(offsetof(Stack_800694A8, sp48) == 0x40) ? 1 : -1];
    typedef char sp4C_offset[(offsetof(Stack_800694A8, sp4C) == 0x44) ? 1 : -1];
    Stack_800694A8 stack;
    if (M2C_FIELD(&(*(RecoveredGlobal_800694A8_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) & 0x400) {
        M2C_FIELD(&(*(RecoveredGlobal_800694A8_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) = (s32) (M2C_FIELD(&(*(RecoveredGlobal_800694A8_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) & 0xFFFFFBFF);
    }
    stack.sp10 = TCameraCtrl__data_805D8FC0;
    stack.sp14 = TCameraCtrl__data_805D8FC4;
    stack.sp30 = TCameraCtrl__data_805D8FB8;
    stack.sp34 = TCameraCtrl__data_805D8FBC;
    stack.sp38 = (*(const f32 *)&TCameraCtrl__data_805D8FA8);
    stack.sp3C = (*(const f32 *)&TCameraCtrl__data_805D8FA8);
    stack.sp40 = TCameraCtrl__data_805D8FD0;
    stack.sp44 = TCameraCtrl__data_805D8FD4;
    stack.sp48 = (*(const f32 *)&TCameraCtrl__data_805D8FAC);
    stack.sp4C = TCameraCtrl__data_805D8FD8;
    TCameraCtrl__sub_8006961C((u8 *)((void *) (&stack.sp8)));
}
#pragma pop

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80069534_lbl_804381BC_size[sizeof(RecoveredGlobal_80069534_lbl_804381BC) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80069534_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069534_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
void TCameraCtrl__sub_80069534(void) {
    typedef char sp8_offset[(offsetof(Stack_80069534, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80069534, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80069534, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80069534, sp14) == 0xC) ? 1 : -1];
    Stack_80069534 stack;
    stack.sp8 = M2C_FIELD(&lbl_804381BC.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804381BC.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804381BC.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_804381BC.value, s32 *, 0xC);
    if (M2C_FIELD(&(*(RecoveredGlobal_80069534_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) & 0x200) {
        M2C_FIELD(&(*(RecoveredGlobal_80069534_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) = (s32) (M2C_FIELD(&(*(RecoveredGlobal_80069534_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) & 0xFFFFFDFF);
    }
    TCameraCtrl__sub_801E317C((int) (0), (void *) (&stack.sp8));
}
#pragma pop

void TCameraCtrl__sub_800695E8(u8 *arg0) {
    if (M2C_FIELD(&TCameraCtrl__data_804FF628.value, s32 *, 8) & 0x400) {
        TCameraCtrl__sub_8006961C((u8 *)(arg0));
    }
}

typedef char RecoveredGlobal_8006961C_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634_size[sizeof(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_8006961C_lbl_8058CA60_size[sizeof(RecoveredGlobal_8006961C_lbl_8058CA60) == 0x58 ? 1 : -1];
void TCameraCtrl__sub_8006961C(u8 *arg0) {
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) = (s32) (M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) | 0x200);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0x18) = (f32) M2C_FIELD(&lbl_8058CA60.value, f32 *, 0x50);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0x1C) = (f32) M2C_FIELD(&lbl_8058CA60.value, f32 *, 0x4C);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0x20) = (f32) (*(const f32 *)&TCameraCtrl__data_805D8FAC);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0x24) = (f32) ((*(const f32 *)&TCameraCtrl__data_805D8FAC) / M2C_FIELD(&lbl_8058CA60.value, f32 *, 0x4C));
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0) = (f32) (M2C_FIELD(&lbl_8058CA60.value, f32 *, 0x4C) * M2C_FIELD(&lbl_8058CA60.value, f32 *, 0x50));
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 4) = (f32) -((*(const f32 *)&TCameraCtrl__data_805D8FAC) * M2C_FIELD(&lbl_8058CA60.value, f32 *, 0x50));
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(&(*(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 *)&TCameraCtrl__data_804FF634).value, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x44);
}

void* get_target__11TCameraCtrlFPv(void* p) { return (char*)p + 0x68; }

typedef char RecoveredGlobal_80069A6C_camera_controller_registry_size[sizeof(RecoveredGlobal_80069A6C_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_80069A6C_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069A6C_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
void TCameraCtrl__sub_80069A6C(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    M2C_FIELD(arg0, f32 *, 0x178) = (f32) M2C_FIELD(arg0, f32 *, 0x1A0);
    M2C_FIELD(arg0, f32 *, 0x17C) = (f32) M2C_FIELD(arg0, f32 *, 0x1A4);
    M2C_FIELD(arg0, f32 *, 0x180) = (f32) M2C_FIELD(arg0, f32 *, 0x1A8);
    M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) M2C_FIELD(arg0, f32 *, 0x178);
    M2C_FIELD(arg0, f32 *, 0x1CC) = (f32) M2C_FIELD(arg0, f32 *, 0x17C);
    M2C_FIELD(arg0, f32 *, 0x1D0) = (f32) M2C_FIELD(arg0, f32 *, 0x180);
    if (is_split_screen() != 0) {
        temp_r3 = (u8 *)(arg0) + (get_camera_no__11TCameraCtrlFv() * 0xC);
        M2C_FIELD(temp_r3, f32 *, 0x134) = (f32) M2C_FIELD(arg0, f32 *, 0x178);
        M2C_FIELD(temp_r3, f32 *, 0x138) = (f32) M2C_FIELD(arg0, f32 *, 0x17C);
        M2C_FIELD(temp_r3, f32 *, 0x13C) = (f32) M2C_FIELD(arg0, f32 *, 0x180);
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_80069A6C_camera_controller_registry *)&camera_controller_registry).value) + ((*(RecoveredGlobal_80069A6C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value * 4)), u8 **, 0));
    if ((temp_r3_2 != NULL) && !(M2C_FIELD(temp_r3_2, s32 *, 0x38) & 0x10)) {
        M2C_FIELD(arg0, f32 *, 0x188) = (f32) M2C_FIELD(arg0, f32 *, 0x1B0);
    }
    approach_camera_vector((void *) ((u8 *)(arg0) + 0x184), (void *) ((u8 *)(arg0) + 0x1AC), (f32) (M2C_FIELD(arg0, f32 *, 0x1BC)));
}

void update_position__11TCameraCtrlFPv(u8 *arg0) {
    u8 *temp_r3;

    M2C_FIELD(arg0, f32 *, 0x178) = (f32) M2C_FIELD(arg0, f32 *, 0x1A0);
    M2C_FIELD(arg0, f32 *, 0x17C) = (f32) M2C_FIELD(arg0, f32 *, 0x1A4);
    M2C_FIELD(arg0, f32 *, 0x180) = (f32) M2C_FIELD(arg0, f32 *, 0x1A8);
    M2C_FIELD(arg0, f32 *, 0x184) = (f32) M2C_FIELD(arg0, f32 *, 0x1AC);
    M2C_FIELD(arg0, f32 *, 0x188) = (f32) M2C_FIELD(arg0, f32 *, 0x1B0);
    M2C_FIELD(arg0, f32 *, 0x18C) = (f32) M2C_FIELD(arg0, f32 *, 0x1B4);
    M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) M2C_FIELD(arg0, f32 *, 0x178);
    M2C_FIELD(arg0, f32 *, 0x1CC) = (f32) M2C_FIELD(arg0, f32 *, 0x17C);
    M2C_FIELD(arg0, f32 *, 0x1D0) = (f32) M2C_FIELD(arg0, f32 *, 0x180);
    if (is_split_screen() != 0) {
        temp_r3 = arg0 + (get_camera_no__11TCameraCtrlFv() * 0xC);
        M2C_FIELD(temp_r3, f32 *, 0x134) = (f32) M2C_FIELD(arg0, f32 *, 0x178);
        M2C_FIELD(temp_r3, f32 *, 0x138) = (f32) M2C_FIELD(arg0, f32 *, 0x17C);
        M2C_FIELD(temp_r3, f32 *, 0x13C) = (f32) M2C_FIELD(arg0, f32 *, 0x180);
    }
}
void TCameraCtrl__sub_80069BD8(u8 *arg0) {
  u8 *new_var;
  u8 *temp_r30;
  u8 *temp_r30_2;
  u8 *temp_r31;
  if ((*(s32 *)&TCameraCtrl__data_805D4E00) & 1)
  {
    update_position__11TCameraCtrlFPv((u8 *)(arg0));
    TCameraCtrl__sub_800689E8();
    return;
  }
  if (is_split_screen() != 0)
  {
    temp_r30 = (u8 *) (arg0 + (get_camera_no__11TCameraCtrlFv() * 0xC));
    new_var = (u8 *) (temp_r30 + 0xD4);
    temp_r31 = new_var;
    approach_camera_vector((void *) temp_r31, (void *) (arg0 + 0x1A0), (f32) (*((f32 *) (((s8 *) arg0) + 0x1B8))));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x178), (int) temp_r31);
    temp_r30_2 = (u8 *) (temp_r30 + 0x104);
    approach_camera_vector((void *) temp_r30_2, (void *) (arg0 + 0x1AC), (f32) (*((f32 *) (((s8 *) arg0) + 0x1BC))));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x184), (int) temp_r30_2);
    return;
  }
  approach_camera_vector((void *) (arg0 + 0x178), (void *) (arg0 + 0x1A0), (f32) (*((f32 *) (((s8 *) arg0) + 0x1B8))));
  approach_camera_vector((void *) (arg0 + 0x184), (void *) (arg0 + 0x1AC), (f32) (*((f32 *) (((s8 *) arg0) + 0x1BC))));
}
typedef char RecoveredGlobal_80069C94_camera_controller_registry_size[sizeof(RecoveredGlobal_80069C94_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_80069C94_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069C94_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
void TCameraCtrl__sub_80069C94(u8 *arg0, u8 *arg1) {
    u8 *temp_r5;
    if ((M2C_FIELD(&(*(RecoveredGlobal_80069C94_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) & 8) || (M2C_FIELD(&(*(RecoveredGlobal_80069C94_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) & 4)) {
        temp_r5 = (u8 *)(M2C_FIELD(&(*(RecoveredGlobal_80069C94_camera_controller_registry *)&camera_controller_registry).value, M2C_UNK *, (M2C_FIELD(&(*(RecoveredGlobal_80069C94_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, u8 *, 0) * 4)));
        if (temp_r5 != NULL) {
            M2C_FIELD(temp_r5, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0);
            M2C_FIELD(temp_r5, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 4);
            M2C_FIELD(temp_r5, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 8);
            M2C_FIELD(temp_r5, f32 *, 0x48) = (f32) M2C_FIELD(arg1, f32 *, 0);
            M2C_FIELD(temp_r5, f32 *, 0x4C) = (f32) M2C_FIELD(arg1, f32 *, 4);
            M2C_FIELD(temp_r5, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 8);
        }
    }
}
typedef char RecoveredGlobal_80069D04_camera_controller_registry_size[sizeof(RecoveredGlobal_80069D04_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_80069D04_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069D04_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
void TCameraCtrl__sub_80069D04(u8 *arg0) {
    u8 *temp_r4;
    if ((M2C_FIELD(&(*(RecoveredGlobal_80069D04_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) & 8) || (M2C_FIELD(&(*(RecoveredGlobal_80069D04_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) & 4)) {
        temp_r4 = (u8 *)(M2C_FIELD(&(*(RecoveredGlobal_80069D04_camera_controller_registry *)&camera_controller_registry).value, M2C_UNK *, (M2C_FIELD(&(*(RecoveredGlobal_80069D04_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, u8 *, 0) * 4)));
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
            M2C_FIELD(temp_r4, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
            M2C_FIELD(temp_r4, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
            M2C_FIELD(temp_r4, f32 *, 0x48) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
            M2C_FIELD(temp_r4, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
            M2C_FIELD(temp_r4, f32 *, 0x50) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
            M2C_FIELD(temp_r4, s32 *, 0x54) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
        }
    }
}
#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
typedef char RecoveredGlobal_80069D7C_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069D7C_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
s32 TCameraCtrl__sub_80069D7C(void) {
    s32 temp_r0;
    if (M2C_FIELD(&(*(RecoveredGlobal_80069D7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) & 8) {
        temp_r0 = M2C_FIELD(&(*(RecoveredGlobal_80069D7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) & 0xFFFFFFF7;
        M2C_FIELD(&(*(RecoveredGlobal_80069D7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) = temp_r0;
        M2C_FIELD(&(*(RecoveredGlobal_80069D7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value, s32 *, 8) = (s32) (temp_r0 | 0x20);
    }
    return 0;
}
#pragma pop

typedef struct RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628;
typedef struct RecoveredGlobal_80069E7C_camera_controller_registry RecoveredGlobal_80069E7C_camera_controller_registry;
typedef struct VBase_18_f8ef8c VBase_18_f8ef8c;
typedef struct VObj_18_f8ef8c VObj_18_f8ef8c;
typedef char RecoveredGlobal_80069E7C_camera_controller_registry_size[((sizeof(RecoveredGlobal_80069E7C_camera_controller_registry)) == 0x68) ? (1) : (-1)];
typedef char RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628_size[((sizeof(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628)) == 0xC) ? (1) : (-1)];
#define PSO_VCALL_VObj_18_f8ef8c_m5(_self) (((VObj_18_f8ef8c *)(_self))->m5())
s32 TCameraCtrl__sub_80069E7C(s32 arg0) {
  u8 *temp_r3;
  short new_var;
  if ((*((s32 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 8))) & 4)
  {
    return 0;
  }
  *((s32 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 8)) = *((s32 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 8));
  new_var = 8;
  *((s32 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + new_var)) = (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + new_var))) | 4;
  if (arg0 == (*((u8 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 0))))
  {
    *((u8 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 0)) = arg0;
  }
  else
  {
    if (((*((u8 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 0))) != 5) && ((*((u8 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 0))) != 9))
    {
      *((u8 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 1)) = *((u8 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 0));
    }
    *((u8 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 0)) = arg0;
  }
  temp_r3 = (u8 *) (*((void **) (((s8 *) (((u8 *) (&(*(RecoveredGlobal_80069E7C_camera_controller_registry *)&camera_controller_registry).value)) + ((*((u8 *) (((s8 *) (&(*(RecoveredGlobal_80069E7C_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 0))) * 4))) + 0)));
  if (temp_r3 != 0)
  {
    PSO_VCALL_VObj_18_f8ef8c_m5(temp_r3);
  }
  return 1;
}

}
