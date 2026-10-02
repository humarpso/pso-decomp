#include "types.h"
#include "pso/camera/FollowCameraController.h"
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

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct V_8006CC7C { f32 x, y, z; };

struct O_8006CC7C { u8 pad[0x1c]; V_8006CC7C pos; };

struct Ply_8006D2B0 { u8 pad[0x60]; s32 f60; };

struct Vec_8006D95C { f32 x, y, z; };

struct Tgt_8006D95C { u8 pad[0x38]; Vec_8006D95C pos; };

struct Cam_8006D95C { u8 pad[0x1C]; Tgt_8006D95C *tgt; u8 pad20[0x10]; s32 f30; u8 pad34[8]; Vec_8006D95C pos; u8 pad48[0xDC - 0x48]; u8 fdc[1]; };

typedef s32 M2C_UNK;
struct Ply_8006D344 {
    u8 pad0[0x60];
    s32 f60;
};

struct VBase_8006E714 { char pad[0x18]; };

struct VObj_8006E714 : VBase_8006E714 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8();
};

struct Slot_8006E714 { u8 data[0x1c]; };

struct Obj_8006E714 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x38 - 0x1c];
    s32 f38;
    u8 pad3c[0x6c - 0x3c];
    Slot_8006E714 slots[4];
    f32 fdc;
    f32 fe0;
    f32 fe4;
    f32 fe8;
    f32 fec;
    f32 ff0;
    s32 ff4;
    s32 ff8;
    s32 ffc;
    s32 f100;
    s32 f104;
    f32 f108;
    s32 f10c;
};

struct Pad_8006D1A4 {
    u8 pad0[0x14];
    s16 sx;
    u8 pad16[0x24 - 0x16];
    f32 mag;
};

struct Pads_8006D1A4 {
    u8 pad0[0x20];
    Pad_8006D1A4 p;
};

struct Obj_8006D1A4 {
    u8 pad0[0x30];
    s32 f30;
};

struct VBase_8006DB68 { char pad[0x18]; };

struct VObj_8006DB68 : VBase_8006DB68 {
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
};

struct Cam_8006DB68 {
    u8 pad0[0x1C];
    u8 *actor;
    u8 pad20[0x18];
    s32 state;
    u8 pad3c[0x1C];
    f32 f58;
    u8 pad5c[0xA0];
    u32 flags;
};

struct Cam_8006DD78 {
    u8 pad0[0x30];
    s32 angle;
    u8 pad34[8];
    FollowVector pos;
    FollowVector target;
};

struct Tgt_8006DD78 {
    u8 pad0[0x38];
    FollowVector pos;
    u8 pad44[0x1C];
    s32 angle;
};

struct Hit_8006DD78 {
    u32 f0;
    FollowVector *point;
};

struct Tgt_8006DEF8 { u8 pad0[0x38]; FollowVector pos; u8 pad44[0x1C]; s32 angle; };

struct Preset_8006DEF8 { FollowVector pos; FollowVector target; s32 id; f32 a; f32 b; };

struct Cam_8006DEF8 {
    u8 pad0[0x30];
    s32 angle;
    u8 pad34[8];
    FollowVector pos;
    FollowVector target;
    s32 id;
};

struct Tgt_8006E170 { u8 pad0[0x38]; FollowVector pos; u8 pad44[0x1C]; s32 angle; };

struct Cam_8006E170 {
    u8 pad0[0x1C];
    Tgt_8006E170 *actor;
    u8 pad20[0x48 - 0x20];
    FollowVector pos;
    u8 pad54[0xE8 - 0x54];
    FollowVector fE8;
    u8 padF4[0x100 - 0xF4];
    s32 f100;
    u8 pad104[4];
    f32 f108;
};

struct Vec_8006D9F0 { f32 x, y, z; };

struct Ply_8006D9F0 { u8 pad[0x60]; s32 f60; };

struct CamBase_8006D9F0 { u8 pad0[0x18]; };

struct Cam_8006D9F0 : CamBase_8006D9F0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12(s32);
    Ply_8006D9F0 *ply;
    u8 pad20[0xDC - 0x20];
    Vec_8006D9F0 pos;
    f32 fE8;
    f32 fEC;
    f32 fF0;
    u8 padF4[0xFC - 0xF4];
    u32 flags;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern RecoveredGlobal_8006CD78_TCameraCtrl__data_80488DE8 TCameraCtrl__data_80488DE8;
extern RecoveredGlobal_8006CD78_lbl_80488DF4 lbl_80488DF4;
extern u8 TCameraCtrl__data_805D4E20;
void TCameraCtrl__sub_8006CD78(u8 *arg0, u8 *arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_player_by_client_id(u32);
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
u8 * csnVector(void *, void *, u32);
extern const f32 TCameraCtrl__data_805D9050;
void TCameraCtrl__sub_8006DCD4(struct RecoveredFields_8006DCD4_arg0 *arg0, u8 *arg1, u8 *arg2);
M2C_UNK set_field_100__11TCameraCtrlFPvi(void* p, s32 v);
s32 angle_difference_abs(int, void *);
extern RecoveredGlobal_8006D494_camera_controller_registry camera_controller_registry;
extern RecoveredGlobal_8006D494_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
void TCameraCtrl__sub_8006D610(void);
extern u8 TCameraCtrl__data_805D4E20;
extern u16 TCameraCtrl__data_805D2840;
extern void *lbl_805D53A0;
s32 get_player_by_client_id(u32);
void reset_cameras_to_actor(void *p, s32 x);
void TCameraCtrl__sub_8006CCEC(void);
extern O_8006CC7C *lbl_805005D0[];
extern const V_8006CC7C lbl_804384E8;
extern s16 lbl_805D4EC8;
V_8006CC7C TCameraCtrl__sub_8006CC7C(void);
s32 is_split_screen();
s32 get_player_by_client_id(u32);
extern void *lbl_805D53A0;
void TCameraCtrl__sub_8006D2B0(void *arg0, void *arg1, u16 arg2);
void push_matrix_from(void *);
void rotate_matrix_y(s32, s32);
void TCameraCtrl__sub_803D8934(s32, void *, void *);
void TCameraCtrl__sub_803D9858(s32);
extern u8 lbl_8058D490[];
void TCameraCtrl__sub_8006D95C(Cam_8006D95C *self);
int get_camera_mode__11TCameraCtrlFv();
extern FollowView *lbl_805D4DF0;
extern const f32 lbl_805D9078,lbl_805D907C;
s32 conversation_camera_obstructed(FollowController *self,s32 heading);
s32 is_split_screen();
u16 TCameraCtrl__sub_80068958(s32 n);
void set_pos_target__11TCameraCtrlFPvPvPvi(void *arg0, void *arg1, void *arg2, s32 arg3);
s32 get_player_by_client_id(u32);
extern RecoveredGlobal_8006D494_camera_controller_registry camera_controller_registry;
extern RecoveredGlobal_8006D494_TCameraCtrl__data_804FF628 TCameraCtrl__data_804FF628;
void TCameraCtrl__sub_8006D344(void *arg0, void *arg1, s32 arg2, u16 arg3);
void set_target__11TCameraCtrlFPvUi(void *, s32);
int TCameraCtrl__sub_80068714(void);
void TCameraCtrl__sub_8006E804(void* a0);
s32 get_player_by_client_id(u32);
extern M2C_UNK lbl_80488E00[];
extern u16 TCameraCtrl__data_805D2840;
extern u8 TCameraCtrl__data_805D4E20;
extern void *lbl_805D53A0;
extern const float TCameraCtrl__data_805D905C;
void *TCameraCtrl__sub_8006E714(void *arg0);
s32 is_split_screen();
extern Pads_8006D1A4 lbl_8050E208;
extern const f32 lbl_805D9068;
extern const f32 lbl_805D906C;
extern const f32 lbl_805D9070;
void TCameraCtrl__sub_8006D1A4(Obj_8006D1A4 *arg0);
s32 is_split_screen();
int get_camera_mode__11TCameraCtrlFv();
s32 TCameraCtrl__sub_8006809C(void *);
s32 get_camera_id__11TCameraCtrlFv();
f32 horizontal_distance_squared(void *, void *);
extern FollowView *lbl_805D4DF0;
extern const f32 lbl_805D9088;
extern const f32 lbl_805D909C;
extern const f32 lbl_805D90A0;
extern const f32 lbl_805D90A4;
void TCameraCtrl__sub_8006DB68(Cam_8006DB68 *arg0);
u8 * csnVector(void *, void *, u32);
void TCameraCtrl__sub_803D8934(s32, void *, void *);
f32 TCameraCtrl__sub_803D8D00(FollowVector *);
void rotate_matrix_y(s32, s32);
void TNpcPlayer__sub_803D97B4(FollowVector *);
void push_matrix_from(void *);
void TCameraCtrl__sub_803D9858(s32);
extern FollowVector lbl_80438534;
extern u8 lbl_8058D490[];
extern const f32 TCameraCtrl__data_805D9050;
extern const float TCameraCtrl__data_805D905C;
void TCameraCtrl__sub_8006DD78(Cam_8006DD78 *arg0, Tgt_8006DD78 *arg1);
s32 get_global_state__14TOKeyMachine01Fv();
void TCameraCtrl__sub_803D8934(s32, void *, void *);
void rotate_matrix_y(s32, s32);
void push_matrix_from(void *);
void TCameraCtrl__sub_803D9858(s32);
s32 get_player_by_client_id(u32);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TCameraCtrl__sub_803D662C(f32, f32);
void TCameraCtrl__sub_801E32E4(void *, s32);
void update_camera_state__11TCameraCtrlFv(f32, f32, f32);
extern u8 lbl_8058D490[];
extern void *lbl_805D53A0;
extern FollowVector lbl_80438528;
extern Preset_8006DEF8 *lbl_80488A18[];
extern u8 lbl_804FF5E8[];
extern const f32 TCameraCtrl__data_805D9050;
extern const f32 lbl_805D90A8;
void follow_camera_init_pose(Cam_8006DEF8 *self);
s32 is_split_screen();
int get_camera_mode__11TCameraCtrlFv();
FollowVector *get_position_ptr__10TObjPlayerFPv(void *);
FollowVector *get_target_ptr__11TCameraCtrlFPv(void *);
void TCameraCtrl__sub_8006BCD8(void *, f32 *, f32);
s32 get_global_state__14TOKeyMachine01Fv();
void TCameraCtrl__sub_803D8934(s32, void *, void *);
f32 TCameraCtrl__sub_803D8D00(FollowVector *);
void rotate_matrix_y(s32, s32);
void push_matrix_from(void *);
void TCameraCtrl__sub_803D9858(s32);
extern u8 lbl_8058D490[];
extern const float TCameraCtrl__data_805D905C;
extern const f32 lbl_805D9094;
extern const f32 lbl_805D90AC;
extern const f32 lbl_805D90B0;
void TCameraCtrl__sub_8006E170(Cam_8006E170 *self);
s32 is_split_screen();
void TBoss1Dragon__sub_8002AA0C(Vec_8006D9F0 *, Vec_8006D9F0 *);
void TBoss8Dragon__sub_80065EA0(Vec_8006D9F0 *, Vec_8006D9F0 *);
s32 get_camera_id__11TCameraCtrlFv();
void TCameraCtrl__sub_8006D2B0(void *arg0, void *arg1, u16 arg2);
s32 get_global_state__14TOKeyMachine01Fv();
void TBoss8Dragon__sub_802FDC1C(Vec_8006D9F0 *, Vec_8006D9F0 *);
extern Vec_8006D9F0 lbl_80488DD0;
extern const f32 TCameraCtrl__data_805D9050;
extern const float TCameraCtrl__data_805D905C;
extern const f32 lbl_805D9090;
extern const f32 lbl_805D9094;
extern const f32 lbl_805D9098;
void TCameraCtrl__sub_8006D9F0(Cam_8006D9F0 *arg0);
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

V_8006CC7C TCameraCtrl__sub_8006CC7C(void) {
    V_8006CC7C def = lbl_804384E8;
    O_8006CC7C *o = lbl_805005D0[lbl_805D4EC8];
    if (o != 0) {
        return o->pos;
    }
    return def;
}

void TCameraCtrl__sub_8006CCEC(void) {
    TCameraCtrl__data_805D4E20 = 0;
    TCameraCtrl__data_805D2840 = 0xFFFF;
    reset_cameras_to_actor(((void *)get_player_by_client_id((u32)(lbl_805D53A0))), 0);
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
            temp_r3 = (u8 *)(get_player_by_client_id((u32) TCameraCtrl__data_805D2840));
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

void TCameraCtrl__sub_8006D1A4(Obj_8006D1A4 *arg0) {
    Pad_8006D1A4 *p;
    f32 mag;
    s16 sx;
    s16 amt;
    if (is_split_screen() != 0) {
        return;
    }
    p = &lbl_8050E208.p;
    if (p == 0) {
        return;
    }
    mag = p->mag;
    sx = p->sx;
    if (mag > lbl_805D9068) {
        amt = (s16)(lbl_805D906C * mag);
        if (sx > 0) {
            arg0->f30 += (s32)(lbl_805D9070 * (f32)amt);
        } else {
            arg0->f30 -= (s32)(lbl_805D9070 * (f32)amt);
        }
        arg0->f30 = (u16)arg0->f30;
    }
}

void TCameraCtrl__sub_8006D2B0(void *arg0, void *arg1, u16 arg2) {
    Ply_8006D2B0 *p;
    s32 v;
    v = 0x8000;
    p = NULL;
    if (is_split_screen() != 0) {
        if (arg2 != 0xFFFF) {
            p = ((Ply_8006D2B0 *)get_player_by_client_id((u32)(arg2)));
        }
    } else {
        p = ((Ply_8006D2B0 *)get_player_by_client_id((u32)((*(s32 *)&lbl_805D53A0))));
    }
    if (p != NULL) {
        v = p->f60 + 0x8000;
    }
    TCameraCtrl__sub_8006D344((void *)(arg0), (void *)(arg1), (s32)(v), arg2);
}

#define REG_8006D344 ((void **)&camera_controller_registry)
void TCameraCtrl__sub_8006D344(void *arg0, void *arg1, s32 arg2, u16 arg3) {
    void *cam;
    Ply_8006D344 *p;
    s32 i;
    s32 v;
    if (TCameraCtrl__data_804FF628.value <= 2 || TCameraCtrl__data_804FF628.value == 3) {
        if (is_split_screen() != 0) {
            if (arg3 == 0xFFFF) {
                for (i = 0; i < 4; i++) {
                    cam = REG_8006D344[TCameraCtrl__data_804FF628.value + i];
                    p = (Ply_8006D344 *)get_player_by_client_id(TCameraCtrl__sub_80068958(i));
                    v = arg2;
                    if (p != 0) {
                        v = p->f60 + arg2;
                    }
                    set_pos_target__11TCameraCtrlFPvPvPvi(cam, arg0, arg1, v);
                }
                return;
            }
            cam = REG_8006D344[TCameraCtrl__data_804FF628.value + arg3];
        } else {
            cam = REG_8006D344[TCameraCtrl__data_804FF628.value];
        }
        if (cam != 0) {
            set_pos_target__11TCameraCtrlFPvPvPvi(cam, arg0, arg1, arg2);
        }
    }
}
#undef REG_8006D344

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

s32 conversation_camera_obstructed(FollowController *self,s32 heading) {
    FollowVector eye,candidate,offset;
    const FollowVector *source;
    if(((int)is_split_screen()))
        source=&lbl_805D4DF0->split_positions[get_camera_mode__11TCameraCtrlFv()];
    else
        source=&lbl_805D4DF0->position;
    VecCopy__FP3VecPC3Vec((void *)(&eye), (void *)(source));
    VecCopy__FP3VecPC3Vec((void *)(&offset), (void *)(&self->position_offset));
    offset.z += lbl_805D9078;
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0,heading);
    TCameraCtrl__sub_803D8934(0,&offset,&offset);
    TCameraCtrl__sub_803D9858(1);
    VecCopy__FP3VecPC3Vec((void *)(&candidate), (void *)(&self->actor->position));
    candidate.x+=offset.x;
    candidate.y+=lbl_805D907C+offset.y;
    candidate.z+=offset.z;
    if(((u32)csnVector((void *)(&eye), (void *)(&candidate), (u32)(0x100))))return 1;
    return ((u32)csnVector((void *)(&candidate), (void *)(&lbl_805D4DF0->target), (u32)(0x100))) ? 1 : 0;
}

void TCameraCtrl__sub_8006D610(void) {
    s32 temp_r30;
    s32 temp_r31;
    s32 var_r30;
    s32 var_r31;
    u8 *temp_r29;
    u8 *temp_r3;
    if (((u8) (*(RecoveredGlobal_8006D610_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value == 0) && (temp_r29 = M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_8006D610_camera_controller_registry *)&camera_controller_registry).value) + (((*(RecoveredGlobal_8006D610_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value * 4) & 0x3FC)), u8 **, 0), set_field_100__11TCameraCtrlFPvi((void*)((int) (temp_r29)), (s32)((int) (1))), temp_r3 = M2C_FIELD(temp_r29, u8 **, 0x1C), ((temp_r3 == NULL) == 0))) {
        temp_r30 = M2C_FIELD(temp_r3, s32 *, 0x60);
        temp_r31 = angle_difference_abs((int) (M2C_FIELD(temp_r29, s32 *, 0x30)), (void *) (temp_r30 + 0x6000));
        if (temp_r31 > angle_difference_abs((int) (M2C_FIELD(temp_r29, s32 *, 0x30)), (void *) (temp_r30 - 0x6000))) {
            var_r31 = temp_r30 - 0x6000;
            var_r30 = temp_r30 + 0x6000;
        } else {
            var_r31 = temp_r30 + 0x6000;
            var_r30 = temp_r30 - 0x6000;
        }
        if (conversation_camera_obstructed((FollowController *)((int) (temp_r29)), (s32)((int) (var_r31))) != 0) {
            if (conversation_camera_obstructed((FollowController *)((int) (temp_r29)), (s32)((int) (var_r30))) == 0) {
                M2C_FIELD(temp_r29, s32 *, 0x30) = var_r30;
            }
        } else {
            M2C_FIELD(temp_r29, s32 *, 0x30) = var_r31;
        }
    }
}
#pragma pop

void TCameraCtrl__sub_8006D95C(Cam_8006D95C *self) {
    Vec_8006D95C v;
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0, self->f30);
    TCameraCtrl__sub_803D8934(0, self->fdc, &v);
    TCameraCtrl__sub_803D9858(1);
    self->pos.x = self->tgt->pos.x + v.x;
    self->pos.y = self->tgt->pos.y + v.y;
    self->pos.z = self->tgt->pos.z + v.z;
}

void TCameraCtrl__sub_8006D9F0(Cam_8006D9F0 *arg0) {
    s32 state = get_global_state__14TOKeyMachine01Fv();
    if (state == 11) {
        Vec_8006D9F0 b0;
        Vec_8006D9F0 a0;
        Vec_8006D9F0 b1;
        Vec_8006D9F0 a1;
        TBoss1Dragon__sub_8002AA0C(&a0, &b0);
        TCameraCtrl__sub_8006D2B0(&a0, &b0, 0xFFFF);
        TBoss1Dragon__sub_8002AA0C(&a1, &b1);
        TCameraCtrl__sub_8006D2B0(&a1, &b1, 0xFFFF);
    } else if (state == 30) {
        Vec_8006D9F0 b;
        Vec_8006D9F0 a;
        TBoss8Dragon__sub_80065EA0(&a, &b);
        TCameraCtrl__sub_8006D2B0(&a, &b, 0xFFFF);
    } else if (state == 33) {
        Vec_8006D9F0 b;
        Vec_8006D9F0 a;
        TBoss8Dragon__sub_802FDC1C(&a, &b);
        TCameraCtrl__sub_8006D2B0(&a, &b, 0xFFFF);
    } else {
        if (!(arg0->flags & 8)) {
            arg0->v12(arg0->ply->f60 + 0x8000);
            arg0->fE8 = TCameraCtrl__data_805D905C;
            arg0->fEC = TCameraCtrl__data_805D9050;
            arg0->fF0 = lbl_805D9090;
            arg0->pos.x = lbl_80488DD0.x;
            arg0->pos.y = lbl_80488DD0.y;
            arg0->pos.z = lbl_80488DD0.z;
            if (is_split_screen() != 0 && get_camera_id__11TCameraCtrlFv() == 2) {
                arg0->pos.z *= lbl_805D9094;
                arg0->pos.y *= lbl_805D9098;
            }
        }
        arg0->flags &= ~8;
    }
}

void TCameraCtrl__sub_8006DB68(Cam_8006DB68 *arg0) {
    FollowVector *src;
    arg0->state = 5;
    if (get_camera_id__11TCameraCtrlFv() == 2) {
        arg0->f58 = lbl_805D909C;
    } else {
        arg0->f58 = lbl_805D9088;
    }
    if (is_split_screen() != 0) {
        src = &lbl_805D4DF0->split_positions[get_camera_mode__11TCameraCtrlFv()];
    } else {
        src = &lbl_805D4DF0->position;
    }
    if (horizontal_distance_squared(&lbl_805D4DF0->target, src) >= lbl_805D90A0) {
        arg0->flags |= 4;
    } else {
        arg0->flags &= ~4;
    }
    if (TCameraCtrl__sub_8006809C(arg0) != 0) {
        if (is_split_screen() != 0) {
            src = &lbl_805D4DF0->split_positions[get_camera_mode__11TCameraCtrlFv()];
        } else {
            src = &lbl_805D4DF0->position;
        }
        if (horizontal_distance_squared(src, arg0->actor + 0x38) > lbl_805D90A4) {
            arg0->flags |= 1;
        } else {
            arg0->flags |= 1;
            arg0->flags |= 0x10;
        }
    } else {
        arg0->flags &= ~1;
        arg0->flags &= ~0x10;
    }
    ((VObj_8006DB68 *)arg0)->m11();
}

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
        temp_r3 = (u8 *)(csnVector(&arg0->field_48, &arg0->field_3C, 0x100));
        if (temp_r3 != NULL) {
            VecCopy__FP3VecPC3Vec((void *)(&arg0->field_3C), (void *)(M2C_FIELD(temp_r3, s32 *, 4)));
        }
    }
}

void TCameraCtrl__sub_8006DD78(Cam_8006DD78 *arg0, Tgt_8006DD78 *arg1) {
    FollowVector v = lbl_80438534;
    FollowVector d;
    Hit_8006DD78 *hit;
    if (arg1 != NULL) {
        arg0->angle = arg1->angle + 0x8000;
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, arg0->angle);
        TCameraCtrl__sub_803D8934(0, &v, &v);
        TCameraCtrl__sub_803D9858(1);
        arg0->target.x = arg1->pos.x;
        arg0->target.y = TCameraCtrl__data_805D9050 + arg1->pos.y;
        arg0->target.z = arg1->pos.z;
        arg0->pos.x = arg0->target.x + v.x;
        arg0->pos.y = arg0->target.y + v.y;
        arg0->pos.z = arg0->target.z + v.z;
        hit = (Hit_8006DD78 *)csnVector(&arg0->target, &arg0->pos, 0x100);
        if (hit != NULL) {
            d.x = arg0->pos.x - arg0->target.x;
            d.y = arg0->pos.y - arg0->target.y;
            d.z = arg0->pos.z - arg0->target.z;
            if (TCameraCtrl__data_805D905C != TCameraCtrl__sub_803D8D00(&d)) {
                TNpcPlayer__sub_803D97B4(&d);
            }
            arg0->pos.x = hit->point->x - d.x;
            arg0->pos.y = hit->point->y - d.y;
            arg0->pos.z = hit->point->z - d.z;
        }
    }
}

void TCameraCtrl__sub_8006DEF4(void) {  }

void follow_camera_init_pose(Cam_8006DEF8 *self) {
    FollowVector v = lbl_80438528;
    Tgt_8006DEF8 *p;
    s32 state;
    p = (Tgt_8006DEF8 *)get_player_by_client_id((u32)lbl_805D53A0);
    state = get_global_state__14TOKeyMachine01Fv();
    if (p != NULL) {
        self->angle = p->angle + 0x8000;
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, self->angle);
        TCameraCtrl__sub_803D8934(0, &v, &v);
        TCameraCtrl__sub_803D9858(1);
        self->target.x = p->pos.x;
        self->target.y = lbl_805D90A8 + (TCameraCtrl__data_805D9050 + p->pos.y);
        self->target.z = p->pos.z;
        self->pos.x = self->target.x + v.x;
        self->pos.y = self->target.y + v.y;
        self->pos.z = self->target.z + v.z;
    } else {
        switch (state) {
        case 0:
            VecCopy__FP3VecPC3Vec(&self->pos, &lbl_80488A18[0][0].pos);
            VecCopy__FP3VecPC3Vec(&self->target, &lbl_80488A18[0][0].target);
            self->id = lbl_80488A18[0][0].id;
            TCameraCtrl__sub_803D662C(lbl_80488A18[0][0].a, lbl_80488A18[0][0].b);
            break;
        case 15:
            VecCopy__FP3VecPC3Vec(&self->pos, &lbl_80488A18[0][1].pos);
            VecCopy__FP3VecPC3Vec(&self->target, &lbl_80488A18[0][1].target);
            self->id = lbl_80488A18[0][1].id;
            TCameraCtrl__sub_803D662C(lbl_80488A18[0][1].a, lbl_80488A18[0][1].b);
            break;
        case 18:
            VecCopy__FP3VecPC3Vec(&self->pos, &lbl_80488A18[0][2].pos);
            VecCopy__FP3VecPC3Vec(&self->target, &lbl_80488A18[0][2].target);
            self->id = lbl_80488A18[0][2].id;
            TCameraCtrl__sub_803D662C(lbl_80488A18[0][2].a, lbl_80488A18[0][2].b);
            break;
        }
    }
    TCameraCtrl__sub_801E32E4(lbl_804FF5E8, self->id);
    update_camera_state__11TCameraCtrlFv(self->pos.x, self->pos.y, self->pos.z);
}

void *TCameraCtrl__vt0(void) {
    void *o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        o = TCameraCtrl__sub_8006E714((void *)(o));
    }
    return o;
}

extern M2C_UNK lbl_80488E00[];

#pragma push
#pragma fp_contract on
void TCameraCtrl__sub_8006E170(Cam_8006E170 *self) {
    FollowVector o;
    FollowVector d;
    f32 k;
    FollowVector *t;
    FollowVector *p;
    f32 x;
    f32 y;
    f32 z;
    t = get_target_ptr__11TCameraCtrlFPv(self->actor);
    p = get_position_ptr__10TObjPlayerFPv(self->actor);
    d.x = p->x - t->x;
    d.y = p->y - t->y;
    d.z = p->z - t->z;
    TCameraCtrl__sub_803D8D00(&d);
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0, self->actor->angle + 0x8000);
    TCameraCtrl__sub_803D8934(0, &self->fE8, &o);
    TCameraCtrl__sub_803D9858(1);
    x = o.x + self->actor->pos.x + lbl_805D90AC * d.x;
    y = o.y + self->actor->pos.y;
    z = o.z + self->actor->pos.z + lbl_805D90AC * d.z;
    if (is_split_screen() != 0) {
        get_camera_mode__11TCameraCtrlFv();
    }
    self->pos.x = x;
    self->pos.y = y;
    self->pos.z = z;
    if (get_global_state__14TOKeyMachine01Fv() == 0 || get_global_state__14TOKeyMachine01Fv() == 0x12) {
        if (self->f100 != 0) {
            k = lbl_805D90B0;
            TCameraCtrl__sub_8006BCD8(&self->f108, &k, lbl_805D9094);
        } else {
            k = TCameraCtrl__data_805D905C;
            TCameraCtrl__sub_8006BCD8(&self->f108, &k, lbl_805D9094);
        }
    }
    self->pos.y += self->f108;
}
#pragma pop

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

#define O_8006E714 ((Obj_8006E714 *)arg0)
void *TCameraCtrl__sub_8006E714(void *arg0) {
    s32 i;
    TCameraCtrl__sub_80068714();
    O_8006E714->vt = ((u8 *)&lbl_80488E00);
    TCameraCtrl__data_805D4E20 = 0;
    TCameraCtrl__data_805D2840 = 0xFFFF;
    O_8006E714->ffc = 0;
    O_8006E714->ff4 = 0;
    O_8006E714->ff8 = 0;
    O_8006E714->fdc = (*(const f32 *)&TCameraCtrl__data_805D905C);
    O_8006E714->fe0 = (*(const f32 *)&TCameraCtrl__data_805D905C);
    O_8006E714->fe4 = (*(const f32 *)&TCameraCtrl__data_805D905C);
    O_8006E714->fe8 = (*(const f32 *)&TCameraCtrl__data_805D905C);
    O_8006E714->fec = (*(const f32 *)&TCameraCtrl__data_805D905C);
    O_8006E714->ff0 = (*(const f32 *)&TCameraCtrl__data_805D905C);
    O_8006E714->f38 = 5;
    set_target__11TCameraCtrlFPvUi(O_8006E714, get_player_by_client_id((u32)lbl_805D53A0));
    ((VObj_8006E714 *)O_8006E714)->m8();
    O_8006E714->f100 = 0;
    O_8006E714->f104 = 0;
    O_8006E714->f10c = 0;
    O_8006E714->f108 = (*(const f32 *)&TCameraCtrl__data_805D905C);
    for (i = 0; i < 4; i++) {
        TCameraCtrl__sub_8006E804((void*)(&O_8006E714->slots[i]));
    }
    return arg0;
}
#undef O_8006E714

M2C_UNK set_field_100__11TCameraCtrlFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x100) = v; }
s32 TCameraCtrl__sub_8006E7FC(void* p) { return *(s32*)((char*)p + 0x10c); }

    extern const float TCameraCtrl__data_805D905C;
void TCameraCtrl__sub_8006E804(void* a0) { *(int*)((char*)a0 + 0x18) = 0; *(float*)((char*)a0 + 0x0) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x4) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x8) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0xc) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x10) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x14) = TCameraCtrl__data_805D905C; }

}
