#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8006CE78_8006CC30 { char pad[0x18]; };
struct VObj_8006CE78_8006CC30 : Base_8006CE78_8006CC30 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12(s32);
};

struct RecoveredGlobal_8006CD78_TCameraCtrl__data_80488DE8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006CD78_lbl_80488DF4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006CDD0_TCameraCtrl__data_80488DE8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006CDD0_lbl_80488DF4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006CD2C_TCameraCtrl__data_80488DE8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006D494_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_8006D494_TCameraCtrl__data_804FF628 {
    u8 value;
    u8 remaining[0xB];
};

struct RecoveredGlobal_8006D460_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_8006D460_TCameraCtrl__data_804FF628 {
    u8 value;
    u8 remaining[0xB];
};

struct RecoveredFields_8006DCD4_arg0 {
    u8 unknown_0[0x3C];
    f32 field_3C;
    f32 field_40;
    f32 field_44;
    f32 field_48;
    f32 field_4C;
    f32 field_50;
};

struct RecoveredGlobal_8006D610_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_8006D610_TCameraCtrl__data_804FF628 {
    u8 value;
    u8 remaining[0xB];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern RecoveredGlobal_8006CD78_TCameraCtrl__data_80488DE8 TCameraCtrl__data_80488DE8;
extern RecoveredGlobal_8006CD78_lbl_80488DF4 lbl_80488DF4;
extern u8 TCameraCtrl__data_805D4E20;
void TCameraCtrl__sub_8006CD78(u8 *arg0, u8 *arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
extern RecoveredGlobal_8006CD78_TCameraCtrl__data_80488DE8 TCameraCtrl__data_80488DE8;
extern RecoveredGlobal_8006CD78_lbl_80488DF4 lbl_80488DF4;
extern u16 TCameraCtrl__data_805D2840;
extern u8 TCameraCtrl__data_805D4E20;
extern const f32 TCameraCtrl__data_805D9050;
s32 TCameraCtrl__sub_8006CDD0(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern RecoveredGlobal_8006CD78_TCameraCtrl__data_80488DE8 TCameraCtrl__data_80488DE8;
extern u16 TCameraCtrl__data_805D2840;
extern u8 TCameraCtrl__data_805D4E20;
void TCameraCtrl__sub_8006CD2C(u8 *arg0, s16 arg1);
extern RecoveredGlobal_8006D494_camera_controller_registry camera_controller_registry;
extern RecoveredGlobal_8006D494_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
void TCameraCtrl__sub_8006D494(void);
extern RecoveredGlobal_8006D494_camera_controller_registry camera_controller_registry;
extern RecoveredGlobal_8006D494_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
void TCameraCtrl__sub_8006D460(void);
void VecCopy__FP3VecPC3Vec(void *, void *);
u8 * TObjButterflyLobby__sub_8007A5D8(s32, void *, M2C_UNK, f32);
extern const f32 TCameraCtrl__data_805D9050;
void TCameraCtrl__sub_8006DCD4(struct RecoveredFields_8006DCD4_arg0 *arg0, u8 *arg1, u8 *arg2);
s32 TCameraCtrl__sub_8006D4E0(int, int);
M2C_UNK set_field_100__11TCameraCtrlFPvi(void* p, s32 v);
s32 TObjPlayer__sub_80141F84(int, void *);
extern RecoveredGlobal_8006D494_camera_controller_registry camera_controller_registry;
extern RecoveredGlobal_8006D494_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
void TCameraCtrl__sub_8006D610(void);
extern u8 TCameraCtrl__data_805D4E20;
extern u16 TCameraCtrl__data_805D2840;
extern void *lbl_805D53A0;
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
void TCameraCtrl__sub_8006A410(void *p, s32 x);
void TCameraCtrl__sub_8006CCEC(void);
}

extern "C" {

void* TCameraCtrl__sub_8006CC30(void* a0);
void TCameraCtrl__sub_8006DCC8(void* p);
void TCameraCtrl__sub_8006DEF4(void);
s32 TCameraCtrl__sub_8006E7FC(void* p);
void TCameraCtrl__sub_8006E804(void* a0);
void *TCameraCtrl__vt0(void);
void *deleting_dtor__11TCameraCtrlFPvs(void *arg0, s16 arg1);
s32 is_flag_set__11TCameraCtrlFv(void);
void set_pos_target__11TCameraCtrlFPvPvPvi(void *arg0, void *arg1, void *arg2, s32 arg3);
void TCameraCtrl__sub_800686BC(void *, int);
int TCameraCtrl__sub_80068714(void);
void *TCameraCtrl__sub_8006E714(void *);
void *TKeyBoardControl__sub_803DEB74(M2C_UNK);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 is_split_screen();

    extern unsigned char lbl_80488DA0[];
    extern const float lbl_805D9044;
void* TCameraCtrl__sub_8006CC30(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488DA0; *(float*)((char*)a0 + 0x6c) = lbl_805D9044; *(int*)((char*)a0 + 0x38) = 0; return a0; }

typedef char RecoveredGlobal_8006CD78_TCameraCtrl__data_80488DE8_size[sizeof(RecoveredGlobal_8006CD78_TCameraCtrl__data_80488DE8) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006CD78_lbl_80488DF4_size[sizeof(RecoveredGlobal_8006CD78_lbl_80488DF4) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8006CD2C_TCameraCtrl__data_80488DE8_size[sizeof(RecoveredGlobal_8006CD2C_TCameraCtrl__data_80488DE8) == 0xC ? 1 : -1];

void TCameraCtrl__sub_8006CCEC(void) {
    TCameraCtrl__data_805D4E20 = 0;
    TCameraCtrl__data_805D2840 = 0xFFFF;
    TCameraCtrl__sub_8006A410(((void *)TPlayerBattleCtrl4P__sub_801BA74C((u32)(lbl_805D53A0))), 0);
}

void TCameraCtrl__sub_8006CD2C(u8 *arg0, s16 arg1) {
    TCameraCtrl__data_805D4E20 |= 2;
    VecCopy__FP3VecPC3Vec(&(*(RecoveredGlobal_8006CD2C_TCameraCtrl__data_80488DE8 *)&TCameraCtrl__data_80488DE8).value, arg0);
    (*(s16 *)&TCameraCtrl__data_805D2840) = arg1;
}

void TCameraCtrl__sub_8006CD78(u8 *arg0, u8 *arg1) {
    TCameraCtrl__data_805D4E20 |= 1;
    VecCopy__FP3VecPC3Vec(&TCameraCtrl__data_80488DE8.value, arg0);
    VecCopy__FP3VecPC3Vec(&lbl_80488DF4.value, arg1);
}

typedef char RecoveredGlobal_8006CDD0_TCameraCtrl__data_80488DE8_size[sizeof(RecoveredGlobal_8006CDD0_TCameraCtrl__data_80488DE8) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006CDD0_lbl_80488DF4_size[sizeof(RecoveredGlobal_8006CDD0_lbl_80488DF4) == 0xC ? 1 : -1];
s32 TCameraCtrl__sub_8006CDD0(u8 *arg0) {
    u8 *temp_r3;
    if ((u8) TCameraCtrl__data_805D4E20 != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        VecCopy__FP3VecPC3Vec(arg0 + 0x3C, &(*(RecoveredGlobal_8006CDD0_TCameraCtrl__data_80488DE8 *)&TCameraCtrl__data_80488DE8).value);
        if (TCameraCtrl__data_805D4E20 & 2) {
            temp_r3 = (u8 *)(TPlayerBattleCtrl4P__sub_801BA74C((u32) TCameraCtrl__data_805D2840));
            if (temp_r3 != NULL) {
                M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(temp_r3, f32 *, 0x38);
                M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (TCameraCtrl__data_805D9050 + M2C_FIELD(temp_r3, f32 *, 0x3C));
                M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(temp_r3, f32 *, 0x40);
            }
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x48, &(*(RecoveredGlobal_8006CDD0_lbl_80488DF4 *)&lbl_80488DF4).value);
        }
        return 1;
    }
    return 0;
}

void set_pos_target__11TCameraCtrlFPvPvPvi(void *arg0, void *arg1, void *arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (M2C_FIELD(arg0, s32 *, 0xFC) | 8);
    ((VObj_8006CE78_8006CC30*)arg0)->m12(arg3);
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) M2C_FIELD(arg2, f32 *, 8);
}

s32 is_flag_set__11TCameraCtrlFv(void) {
    if (is_split_screen() != 0) {
        return 0;
    }
    return ((u32) M2C_FIELD(TKeyBoardControl__sub_803DEB74(0x12), u32 *, 8) >> 0x11U) & 1;
}

typedef char RecoveredGlobal_8006D494_camera_controller_registry_size[sizeof(RecoveredGlobal_8006D494_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_8006D494_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_8006D494_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8006D460_camera_controller_registry_size[sizeof(RecoveredGlobal_8006D460_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_8006D460_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_8006D460_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
void TCameraCtrl__sub_8006D460(void) {
    u8 *temp_r3;
    if ((u8) (*(RecoveredGlobal_8006D460_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value == 0) {
        temp_r3 = (u8 *)(M2C_FIELD(&(*(RecoveredGlobal_8006D460_camera_controller_registry *)&camera_controller_registry).value, M2C_UNK *, (((*(RecoveredGlobal_8006D460_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value * 4) & 0x3FC)));
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s32 *, 0x104) = 1;
        }
    }
}

void TCameraCtrl__sub_8006D494(void) {
    u32 temp_r3;
    if ((u8) TCameraCtrl__data_804FF628.value == 0) {
        temp_r3 = M2C_FIELD(&camera_controller_registry.value, M2C_UNK *, ((TCameraCtrl__data_804FF628.value * 4) & 0x3FC));
        if (temp_r3 != 0U) {
            set_field_100__11TCameraCtrlFPvi((void*)((int) (temp_r3)), (s32)((int) (0)));
        }
    }
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8006D610_camera_controller_registry_size[sizeof(RecoveredGlobal_8006D610_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_8006D610_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_8006D610_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
void TCameraCtrl__sub_8006D610(void) {
    s32 temp_r30;
    s32 temp_r31;
    s32 var_r30;
    s32 var_r31;
    u8 *temp_r29;
    u8 *temp_r3;
    if (((u8) (*(RecoveredGlobal_8006D610_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value == 0) && (temp_r29 = M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_8006D610_camera_controller_registry *)&camera_controller_registry).value) + (((*(RecoveredGlobal_8006D610_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value * 4) & 0x3FC)), u8 **, 0), set_field_100__11TCameraCtrlFPvi((void*)((int) (temp_r29)), (s32)((int) (1))), temp_r3 = M2C_FIELD(temp_r29, u8 **, 0x1C), ((temp_r3 == NULL) == 0))) {
        temp_r30 = M2C_FIELD(temp_r3, s32 *, 0x60);
        temp_r31 = TObjPlayer__sub_80141F84((int) (M2C_FIELD(temp_r29, s32 *, 0x30)), (void *) (temp_r30 + 0x6000));
        if (temp_r31 > TObjPlayer__sub_80141F84((int) (M2C_FIELD(temp_r29, s32 *, 0x30)), (void *) (temp_r30 - 0x6000))) {
            var_r31 = temp_r30 - 0x6000;
            var_r30 = temp_r30 + 0x6000;
        } else {
            var_r31 = temp_r30 + 0x6000;
            var_r30 = temp_r30 - 0x6000;
        }
        if (TCameraCtrl__sub_8006D4E0((int) (temp_r29), (int) (var_r31)) != 0) {
            if (TCameraCtrl__sub_8006D4E0((int) (temp_r29), (int) (var_r30)) == 0) {
                M2C_FIELD(temp_r29, s32 *, 0x30) = var_r30;
            }
        } else {
            M2C_FIELD(temp_r29, s32 *, 0x30) = var_r31;
        }
    }
}
#pragma pop

void TCameraCtrl__sub_8006DCC8(void* p) { *(s32*)((char*)p + 0xfc) = 0; }

void TCameraCtrl__sub_8006DCD4(struct RecoveredFields_8006DCD4_arg0 *arg0, u8 *arg1, u8 *arg2) {
    f32 temp_f1;
    u8 *temp_r3;
    if (arg1 != NULL) {
        arg0->field_48 = M2C_FIELD(arg1, f32 *, 0x38);
        arg0->field_4C = TCameraCtrl__data_805D9050 + M2C_FIELD(arg1, f32 *, 0x3C);
        arg0->field_50 = M2C_FIELD(arg1, f32 *, 0x40);
        arg0->field_3C = arg0->field_48 + M2C_FIELD(arg2, f32 *, 0);
        arg0->field_40 = arg0->field_4C + M2C_FIELD(arg2, f32 *, 4);
        temp_f1 = arg0->field_50;
        arg0->field_44 = temp_f1 + M2C_FIELD(arg2, f32 *, 8);
        temp_r3 = (u8 *)(TObjButterflyLobby__sub_8007A5D8((s32) &arg0->field_48, &arg0->field_3C, 0x100, temp_f1));
        if (temp_r3 != NULL) {
            VecCopy__FP3VecPC3Vec((void *)(&arg0->field_3C), (void *)(M2C_FIELD(temp_r3, s32 *, 4)));
        }
    }
}

void TCameraCtrl__sub_8006DEF4(void) {  }

void *TCameraCtrl__vt0(void) {
    void *o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        o = TCameraCtrl__sub_8006E714(o);
    }
    return o;
}

extern M2C_UNK lbl_80488E00[];

void *deleting_dtor__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488E00;
        M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0;
        M2C_FIELD(arg0, M2C_UNK *, 0x100) = 0;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

M2C_UNK set_field_100__11TCameraCtrlFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x100) = v; }
s32 TCameraCtrl__sub_8006E7FC(void* p) { return *(s32*)((char*)p + 0x10c); }

    extern const float TCameraCtrl__data_805D905C;
void TCameraCtrl__sub_8006E804(void* a0) { *(int*)((char*)a0 + 0x18) = 0; *(float*)((char*)a0 + 0x0) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x4) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x8) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0xc) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x10) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x14) = TCameraCtrl__data_805D905C; }

}
