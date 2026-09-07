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

}
