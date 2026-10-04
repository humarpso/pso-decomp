#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Obj_80034034;
struct Obj_800341F0;
struct Vec_800310F8 { f32 x, y, z; };

struct Self_800310F8 {
    u8 pad0[0xB8];
    s16 fB8;
    u8 padBA[0x390 - 0xBA];
    u8 *f390;
    u8 pad394[0x3C0 - 0x394];
    s32 flags;
    u8 pad3C4[0x620 - 0x3C4];
    void *parts[4];
    u8 pad630[0x654 - 0x630];
    s32 dir;
    u8 pad658[0x6E0 - 0x658];
    s32 phase;
    s32 timer;
    s32 idx;
    s32 limit;
    s32 life;
};

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(int, void *);
void TBoss2DeRolLe__sub_800342C0(s32 arg0);
s32 check_v2_mode__9TObjEneDDFv(void);
void advance_animation_playback(void *);
void set_move_direction__13TBoss2DeRolLeFPv(void *, s32);
s32 enemy_has_live_target(void *);
s32 get_random_scaled__9TObjEneDDFv(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
s32 adjust_to_ground__15TObjBoss2TunnelFiPv(s32 arg0, void *arg1);
void TBoss2Tentacle__sub_80039E88(void *, void *, s32);
s32 TBoss2Tentacle__sub_80039CA0(void *);
void TBoss2Tentacle__sub_80039E68(void *);
extern u8 *TBoss2DeRolLe__data_805D4BA0;
extern const f32 lbl_805D8340;
extern const f32 lbl_805D8344;
void TBoss2DeRolLe__sub_800310F8(void *arg0, void *arg1, int arg2);
}

extern "C" {

struct Stack_800339BC {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_800339BC_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct Obj_80034034 { u8 pad[0x326]; s16 f326; };

struct Obj_800333F4 { u8 pad0[0xB8]; s16 f_B8; };

struct Obj_8002F73C { u8 pad0[0xB8]; s16 fB8; u8 pad1[0x3C0 - 0xBA]; u32 f3C0; };

struct Obj_8002FCE4 {
    u8 pad0[0x5C];
    s32 f5C;
    u8 pad1[0xB8 - 0x60];
    s16 fB8;
    u8 pad2[0x3C0 - 0xBA];
    u32 f3C0;
    u8 pad3[0x6A4 - 0x3C4];
    f32 f6A4;
};

typedef struct DeRolLe_8002FD9C {
    u8 pad0[0xB8];
    s16 state;
    u8 padBA[0x3C0 - 0xBA];
    s32 flags;
    u8 pad3C4[0x654 - 0x3C4];
    s32 mode;
} DeRolLe_8002FD9C;

struct Vec_80030720 { f32 x, y, z; };

struct Obj_80030720 {
    u8 pad0[0xB8];
    s16 fB8;
    u8 padBA[0x390 - 0xBA];
    s32 f390;
    u8 pad394[0x3C0 - 0x394];
    u32 f3C0;
    u8 pad3C4[0x4D0 - 0x3C4];
    u8 f4D0[0x524 - 0x4D0];
    u8 f524[0x630 - 0x524];
    s32 f630[5];
    s32 f644[3];
    u8 pad650[4];
    s32 f654;
};

struct Obj_80034034;

typedef char RecoveredGlobal_800339BC_lbl_804FF5E8_size[sizeof(RecoveredGlobal_800339BC_lbl_804FF5E8) == 0x28 ? 1 : -1];

struct VBase_800341F0 { char pad[0x18]; };

struct V_800341F0 : VBase_800341F0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5();
    virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17();
    virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41();
    virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53();
    virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65();
    virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77();
    virtual void m78(); virtual void m79(); virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93();
    virtual void m94();
};

struct Obj_800341F0 : V_800341F0 {
    u8 pad1c[0x5e0 - 0x1c];
    V_800341F0 *parts[10];
};

struct B_80034258 { u8 pad[0x18]; };

struct V_80034258 : B_80034258 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93();
};

struct Obj_80034258 : V_80034258 {
    u8 pad2[0x5e0 - 0x1c];
    V_80034258 *parts[10];
};

struct Vec_80030588 { f32 x, y, z; };

struct Rec_80030898 { f32 a; f32 b; f32 c; };

struct Obj_80030898 { u8 pad0[0x544]; Rec_80030898 recs[8]; };

f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(int, void *);
s32 get_player_data__10TObjPlayerFi(int);
void queue_destruction__7TObjectFv(void *);
s32 get_game_mode__6TLobbyFv();
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
void TBoss2DeRolLe__sub_8002F73C(Obj_8002F73C *self, u32 kind);
s32 TBoss2DeRolLe__sub_8002F7C4(void *, void *);
void TBoss2DeRolLe__sub_8002FCE4(Obj_8002FCE4 *self, u32 kind);
void TBoss2DeRolLe__sub_8002FD9C(DeRolLe_8002FD9C *self, u32 arg1, s32 arg2);
s32 TBoss2DeRolLe__sub_8002FE60(void *, void *);
void TBoss2DeRolLe__sub_80030588(u8 *arg0, u32 arg1);
void TBoss2DeRolLe__sub_80030720(Obj_80030720 *self, u32 arg1, s32 arg2);
void TBoss2DeRolLe__sub_80030898(u8 *arg0, u32 arg1, s32 arg2);
s32 TBoss2DeRolLe__sub_80030A38(void *, void *);
void TBoss2DeRolLe__sub_80030DFC(void *, void *, int);
s32 TBoss2DeRolLe__sub_800313F8(void *, void *, int);
s32 TBoss2DeRolLe__sub_80031AD4(void *, void *);
s32 TBoss2DeRolLe__sub_800320B4(void *, void *, int, int);
s32 TBoss2DeRolLe__sub_800327C8(void *, void *, int, int);
s32 TBoss2DeRolLe__sub_80032B28(void *, void *);
s32 TBoss2DeRolLe__sub_80032E38(void *, void *);
void TBoss2DeRolLe__sub_800333F4(Obj_800333F4 *self, u32 arg1);
void TBoss2DeRolLe__sub_8003344C(s32 arg0, u32 arg1, s32 arg2);
void TBoss2DeRolLe__sub_8003383C(u8 *arg0);
int spawn_trap__13TBoss2DeRolLeFPvii(void* p, int a1, int a2);
int play_sound(void* p, int a1);
void TBoss2DeRolLe__sub_800338BC(void);
void update_projectile_spawns__13TBoss2DeRolLeFPv(u8 *arg0);
void TBoss2DeRolLe__sub_800339BC(s32 arg0, f32 farg0, f32 farg1);
void spawn_ceil_junk__13TBoss2DeRolLeFii(s32 arg1, s32 arg2);
void TBoss2DeRolLe__sub_80033A80(M2C_UNK arg0, s32 arg1);
void TBoss2DeRolLe__sub_80033D44(Obj_80034034 *self);
void reset_fields_3d0__13TBoss2DeRolLeFPv(void* p);
void set_params__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1);
void init_from_param__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1);
void handle_6x14_de_rol_le_boss_actions_with_target(void *arg0);
void handle_6x13_de_rol_le_boss_actions(void *arg0);
void TBoss2DeRolLe__sub_80034034(Obj_80034034 *self);
void clear_play_flags__13TBoss2DeRolLeFPv(void *arg0);
void set_flags_play_sound__13TBoss2DeRolLeFPv(u8 *arg0);
void TBoss2DeRolLe__sub_80034134(u8 *arg0, s32 arg1);
void update_check__13TBoss2DeRolLeFPv(void *arg0);
void TBoss2DeRolLe__sub_800341F0(Obj_800341F0 *self);
void TBoss2DeRolLe__sub_80034258(Obj_80034258 *self);
void TBoss2DeRolLe__sub_800342C0(s32 arg0);
M2C_UNK TBoss2DeRolLe__sub_800344A4(void *, int, int);
void TBoss2DeRolLe__sub_80034C90(void *, s32);
void TBoss2DeRolLe__sub_80034E90(Obj_80034034 *self, s32 mode);
void swap_endian__13TBoss2DeRolLeFPv(void *);
void swap_6x13_fields__13TBoss2DeRolLeFPv(void *);
M2C_UNK TBoss2Mine__sub_80037AEC(s32, void *, s32, s32);
M2C_UNK TBoss2Mine__sub_800380B8(s32, void *, void *);
M2C_UNK create_particle__17TObjBoss2CeilJunkFv(s32, M2C_UNK);
M2C_UNK TObjBoss2Tunnel__sub_8003B1D8(void *);
void set_global_flag_200__15TObjBoss2TunnelFv(void);
s32 is_active__15TObjBoss2TunnelFv(void);
void set_global_flag_800__15TObjBoss2TunnelFv(void);
s32 spawn_particle_effect_with_flags(void *, int, int);
s32 enemy_has_live_target(void *);
M2C_UNK enemy_clear_target(void *);
M2C_UNK TBoss2DeRolLe__sub_800B98D8(void *, int);
s32 enemy_set_target_id(void * a0 = 0, u16 a1 = 0);
s32 check_v2_mode__9TObjEneDDFv(void);
M2C_UNK project_sound_origin_from_camera(void *, void *, f32);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
M2C_UNK TObjEneDD__vt90();
s32 is_alive__9TObjEneDDFPv();
s32 transition_enemy_state(void * a0 = 0, s16 a1 = 0);
void * get_enemy_entity(int);
s32 objInBand__FP7GameObjf(void *, f32);
void advance_animation_playback(void *);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
int play_sound_effect(void*, int, int, int);
M2C_UNK vec3_add_to(int, void *);

extern Vec_80030720 TBoss2DeRolLe__data_804FE268[];
extern const f32 TBoss2DeRolLe__data_805D827C;
extern const f32 TBoss2DeRolLe__data_805D8280;
extern const f32 TBoss2DeRolLe__data_805D8288;
extern const f32 TBoss2DeRolLe__data_805D8294;
extern const f32 TBoss2DeRolLe__data_805D82A0;
extern const f32 TBoss2DeRolLe__data_805D82A8;
extern const f32 TBoss2DeRolLe__data_805D82AC;
extern const f32 TBoss2DeRolLe__data_805D82DC;
extern const f32 TBoss2DeRolLe__data_805D82E4;
extern const f32 TBoss2DeRolLe__data_805D82F0;
extern const f32 TBoss2DeRolLe__data_805D82FC;
extern s32 lbl_80482108[];
extern s32 lbl_804821B8[];
extern RecoveredGlobal_800339BC_lbl_804FF5E8 lbl_804FF5E8;
extern const f32 lbl_805D82CC;
extern const f32 lbl_805D82EC;
extern const f32 lbl_805D82F4;
extern const f32 lbl_805D82F8;

extern "C" {
void TBoss2DeRolLe__sub_80033D44(Obj_80034034 *self);
void TBoss2DeRolLe__sub_800341F0(Obj_800341F0 *self);
void TBoss2DeRolLe__sub_80034E90(Obj_80034034 *self, s32 mode);
}

void TBoss2DeRolLe__sub_8002F73C(Obj_8002F73C *self, u32 kind) {
    switch (kind) {
    case 4:
        self->fB8 = 0x10;
        ((void (*)(void))TBoss2DeRolLe__sub_80034258)();
        self->f3C0 = self->f3C0 | 4;
        self->f3C0 = self->f3C0 & 0xFFFFFEFF;
        set_global_flag_200__15TObjBoss2TunnelFv();
        if (is_active__15TObjBoss2TunnelFv() != 0) {
            set_global_flag_800__15TObjBoss2TunnelFv();
        }
        break;
    case 0:
        queue_destruction__7TObjectFv(self);
        break;
    case 1:
        return;
    case 2:
        return;
    case 3:
        return;
    case 5:
        return;
    case 6:
        return;
    case 7:
        return;
    case 8:
        return;
    case 9:
        return;
    }
}

void TBoss2DeRolLe__sub_8002FCE4(Obj_8002FCE4 *self, u32 kind) {
    switch (kind) {
    case 4:
        self->f3C0 = self->f3C0 | 4;
        self->f3C0 = self->f3C0 & 0xFFFFFEFF;
        ((void (*)(void))TBoss2DeRolLe__sub_80034258)();
        self->f5C = 0;
        self->f6A4 = TBoss2DeRolLe__data_805D827C;
        return;
    case 9:
        if (self->fB8 == 1) {
            TBoss2DeRolLe__sub_80033D44((Obj_80034034 *)(self));
        }
        break;
    case 8:
        if (self->f6A4 < lbl_805D82CC) {
            TBoss2DeRolLe__sub_80034E90((Obj_80034034 *)(self), (s32)(0x1F));
            return;
        }
        break;
    case 0:
        self->f6A4 = self->f6A4 - TBoss2DeRolLe__data_805D82A0;
        break;
    case 1:
        return;
    case 2:
        return;
    case 3:
        return;
    case 5:
        return;
    case 6:
        return;
    case 7:
        return;
    }
}

void TBoss2DeRolLe__sub_8002FD9C(DeRolLe_8002FD9C *self, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 4:
        self->flags &= ~4;
        self->flags |= 0x100;
        self->state = 0xE;
        ((void (*)(void *))TBoss2DeRolLe__sub_800341F0)(self);
        self->mode = 3;
        TBoss2DeRolLe__sub_80034C90(self, self->mode);
        if (arg2 != 0) {
            set_global_flag_800__15TObjBoss2TunnelFv();
        }
        break;
    case 2:
        if (self->state == 1) {
            TBoss2DeRolLe__sub_80034E90((Obj_80034034 *)((struct Obj_80034034 *)self), (s32)(2));
        }
        break;
    case 9:
        if (self->state == 1) {
            TBoss2DeRolLe__sub_80033D44((Obj_80034034 *)((struct Obj_80034034 *)self));
        }
        break;
    case 0:
        ((M2C_UNK (*)(void *))advance_animation_playback)(self);
        break;
    }
}

#pragma push
#pragma fp_contract on
void TBoss2DeRolLe__sub_80030588(u8 *arg0, u32 arg1) {
    Vec_80030588 v;
    f32 frame;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x3C0) = M2C_FIELD(arg0, s32 *, 0x3C0) & ~4;
        M2C_FIELD(arg0, s32 *, 0x3C0) = M2C_FIELD(arg0, s32 *, 0x3C0) | 0x100;
        ((M2C_UNK (*)(void))TBoss2DeRolLe__sub_800341F0)();
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xC;
        M2C_FIELD(arg0, s32 *, 0x654) = 3;
        ((M2C_UNK (*)(void *, int))TBoss2DeRolLe__sub_80034C90)(arg0, M2C_FIELD(arg0, s32 *, 0x654));
        M2C_FIELD(arg0, s32 *, 0x6E0) = 0;
        M2C_FIELD(arg0, s32 *, 0x6DC) = 0;
        return;
    case 2:
        if (M2C_FIELD(arg0, s16 *, 0xB8) == 0xF) {
            TBoss2DeRolLe__sub_80034E90((Obj_80034034 *)arg0, 0x1B);
        }
    default:
        return;
    case 9:
        if (M2C_FIELD(arg0, s16 *, 0xB8) == 0xF) {
            TBoss2DeRolLe__sub_80033D44((Obj_80034034 *)arg0);
            return;
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        M2C_FIELD(arg0, s32 *, 0x6E0) = M2C_FIELD(arg0, s32 *, 0x6E0) + 1;
        frame = M2C_FIELD(arg0, f32 *, 0xC0);
        if (frame >= TBoss2DeRolLe__data_805D82E4 && frame <= lbl_805D82EC && (f32)M2C_FIELD(arg0, s32 *, 0x6E0) >= TBoss2DeRolLe__data_805D82F0) {
            M2C_FIELD(arg0, s32 *, 0x6E0) = 0;
            VecCopy__FP3VecPC3Vec((int)&v, arg0 + 0x38);
            v.x = TBoss2DeRolLe__data_805D82DC * calc_elapsed_scaled__9TObjEneDDFv(arg0) + v.x;
            v.y = TBoss2DeRolLe__data_805D82A8;
            v.z = v.z + TBoss2DeRolLe__data_805D82AC;
            spawn_ceil_junk__13TBoss2DeRolLeFii((s32)arg0, (s32)&v);
        }
        if (objInBand__FP7GameObjf(arg0, TBoss2DeRolLe__data_805D82E4) != 0) {
            ((int (*)(int, void *))play_sound)(0x4003AD12, arg0 + 0x518);
        }
        break;
    }
}
extern int fold_flush_0;
#pragma pop

void TBoss2DeRolLe__sub_80030720(Obj_80030720 *self, u32 arg1, s32 arg2) {
    u8 *pos;
    s32 i;
    s32 j;
    switch (arg1) {
    case 4:
        self->f3C0 &= ~4;
        self->f3C0 |= 0x100;
        self->fB8 = 0xB;
        self->f654 = 1;
        TBoss2DeRolLe__sub_80034C90(self, self->f654);
        break;
    case 2:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(self) != 0) {
            TBoss2DeRolLe__sub_80034E90((Obj_80034034 *)self, 2);
        }
        break;
    case 9:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(self) != 0) {
            TBoss2DeRolLe__sub_80033D44((Obj_80034034 *)self);
        }
        break;
    case 0:
        ((M2C_UNK (*)(void *))advance_animation_playback)((void *)(self));
        if (objInBand__FP7GameObjf(self, lbl_805D82F4) != 0) {
            pos = self->f4D0;
            if (arg2 == 0x18) {
                for (i = 0; i < 5; i++) {
                    TBoss2Mine__sub_800380B8(self->f630[i], pos, &TBoss2DeRolLe__data_804FE268[i]);
                }
            } else if (enemy_has_live_target(self) != 0) {
                for (j = 0; j < 3; j++) {
                    TBoss2Mine__sub_80037AEC(self->f644[j], pos, self->f390, j);
                }
            }
            ((int (*)(int, void *))play_sound)(0x4003A303, self->f524);
        }
        break;
    case 6:
        if (arg2 == 0x19) {
            ((M2C_UNK (*)(void *))TBoss2DeRolLe__sub_800342C0)(self);
        }
        break;
    }
}

void TBoss2DeRolLe__sub_80030898(u8 *arg0, u32 arg1, s32 arg2) {
    s32 i;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        ((M2C_UNK (*)(void))TBoss2DeRolLe__sub_800341F0)();
        M2C_FIELD(arg0, s32 *, 0x3C0) = M2C_FIELD(arg0, s32 *, 0x3C0) & ~4;
        M2C_FIELD(arg0, s32 *, 0x3C0) = M2C_FIELD(arg0, s32 *, 0x3C0) & ~0x100;
        M2C_FIELD(arg0, s32 *, 0x654) = arg2;
        ((M2C_UNK (*)(void *, int))TBoss2DeRolLe__sub_80034C90)(arg0, M2C_FIELD(arg0, s32 *, 0x654));
        M2C_FIELD(arg0, s32 *, 0x6E0) = 0;
        M2C_FIELD(arg0, s32 *, 0x6E4) = 0;
        M2C_FIELD(arg0, f32 *, 0x6FC) = lbl_805D82F8;
        M2C_FIELD(arg0, s32 *, 0x6B4) = M2C_FIELD(arg0, s32 *, 0x6B4) + 1;
        if (M2C_FIELD(arg0, s32 *, 0x6B4) >= 3) {
            M2C_FIELD(arg0, s32 *, 0x6B4) = 0;
        }
    default:
        return;
    case 2:
        if (((s32 (*)(void))get_flag_b4__21TObjEneMe3ShinowaRealFPv)() != 0) {
            TBoss2DeRolLe__sub_80034E90((Obj_80034034 *)arg0, 2);
            return;
        }
        break;
    case 9:
        if (((s32 (*)(void))get_flag_b4__21TObjEneMe3ShinowaRealFPv)() != 0) {
            TBoss2DeRolLe__sub_80033D44((Obj_80034034 *)arg0);
            return;
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (M2C_FIELD(arg0, s32 *, 0x6E4)) {
        case 0:
            if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 4)) {
                TBoss2DeRolLe__sub_800344A4(arg0, M2C_FIELD(arg0, s32 *, 0x6E0), M2C_FIELD(arg0, s32 *, 0x6B4));
                M2C_FIELD(arg0, s32 *, 0x6E4) = 1;
                return;
            }
            break;
        case 1:
            i = M2C_FIELD(arg0, s32 *, 0x6E0);
            if (((Obj_80030898 *)arg0)->recs[i].a < ((Obj_80030898 *)arg0)->recs[i + 1].a) {
                M2C_FIELD(arg0, s32 *, 0x6E0) = i + 1;
                if ((f32)M2C_FIELD(arg0, s32 *, 0x6E0) >= TBoss2DeRolLe__data_805D82FC) {
                    M2C_FIELD(arg0, s32 *, 0x6E4) = 2;
                }
                TBoss2DeRolLe__sub_800344A4(arg0, M2C_FIELD(arg0, s32 *, 0x6E0), M2C_FIELD(arg0, s32 *, 0x6B4));
            }
            break;
        }
        break;
    }
}

void clear_global_flag_3000__15TObjBoss2TunnelFv(void);
extern const f32 TBoss2DeRolLe__data_805D82BC;
extern const f32 TBoss2DeRolLe__data_805D8300;
extern const f32 TBoss2DeRolLe__data_805D832C;
extern const f32 TBoss2DeRolLe__data_805D8330;
extern const f32 TBoss2DeRolLe__data_805D8334;
extern const f32 lbl_805D8308;
extern const f32 lbl_805D8338;
extern const f32 lbl_805D833C;
#pragma push
#pragma fp_contract on
#define arg0 ((u8 *)arg0_)
#define F(t, o) M2C_FIELD(arg0, t *, o)

void TBoss2DeRolLe__sub_80030DFC(void *arg0_, void *arg1_, int arg2) {
    switch ((u32)arg1_) {
    case 4:
        TBoss2DeRolLe__sub_800341F0((Obj_800341F0 *)arg0);
        F(s32, 0x3C0) |= 4;
        F(s32, 0x3C0) &= ~0x100;
        F(s32, 0x654) = arg2;
        set_move_direction__13TBoss2DeRolLeFPv(arg0, F(s32, 0x654));
        if (F(s32, 0x654) == 0) {
            F(f32, 0x700) = TBoss2DeRolLe__data_805D832C;
            F(s16, 0xB8) = 9;
        } else {
            F(f32, 0x700) = TBoss2DeRolLe__data_805D82BC;
            F(s16, 0xB8) = 10;
        }
        F(s32, 0x6E0) = 0;
        F(s32, 0x6E4) = 0;
        F(f32, 0x6FC) = TBoss2DeRolLe__data_805D827C;
        F(f32, 0x708) = TBoss2DeRolLe__data_805D832C;
        F(f32, 0x704) = TBoss2DeRolLe__data_805D827C;
        F(s32, 0x6F4) = 0x500;
        clear_global_flag_3000__15TObjBoss2TunnelFv();
        break;
    case 2:
        if (F(s32, 0x6E0) == 2) {
            TBoss2DeRolLe__sub_80034E90((Obj_80034034 *)arg0, 2);
        }
        break;
    case 9:
        if (F(s32, 0x6E0) == 2) {
            TBoss2DeRolLe__sub_80033D44((Obj_80034034 *)arg0);
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        switch (F(s32, 0x6E0)) {
        case 0:
            F(f32, 0x704) += TBoss2DeRolLe__data_805D8300;
            F(f32, 0x40) -= F(f32, 0x704);
            F(f32, 0x6FC) += TBoss2DeRolLe__data_805D8330;
            F(f32, 0x38) += F(f32, 0x6FC) * F(f32, 0x700);
            F(f32, 0x708) += TBoss2DeRolLe__data_805D8334;
            F(f32, 0x6A4) -= F(f32, 0x708);
            F(s32, 0x6F4) = (s32)((f32)F(s32, 0x6F4) + lbl_805D8338);
            if ((f32)F(s32, 0x6F4) >= lbl_805D833C) {
                F(s32, 0x6F4) = 0x4000;
            }
            F(s32, 0x64) = (s32)((f32)F(s32, 0x6F4) * -F(f32, 0x700));
            if (F(s32, 0x6E4) == 0 && F(s32, 0x6F4) >= 0x2200) {
                F(s32, 0x6E4) = 1;
                play_sound((void *)0x4003AD12, (int)(arg0 + 0x518));
            }
            if (F(f32, 0x6A4) < lbl_805D8308) {
                F(s32, 0x6E0) = 1;
                TBoss2DeRolLe__sub_80034C90(arg0, F(s32, 0x654));
                F(f32, 0x6A4) = lbl_805D8308;
                F(s16, 0xB8) = 1;
                F(f32, 0x708) = TBoss2DeRolLe__data_805D827C;
                F(s32, 0x3C0) &= ~4;
                F(s32, 0x3C0) |= 0x100;
            }
            break;
        case 1:
            F(f32, 0x6A4) += 2.0f;
            if (F(f32, 0x6A4) >= 0.0f) {
                F(f32, 0x6A4) = 0.0f;
                F(s32, 0x6E0) = 2;
            }
            break;
        }
        break;
    case 5:
        F(s32, 0x3C0) &= ~4;
        break;
    case 1:
    case 3:
    case 6:
    case 7:
    case 8:
        break;
    }
}

#undef F
#undef arg0
#pragma pop

#define self ((Self_800310F8 *)arg0)
void TBoss2DeRolLe__sub_800310F8(void *arg0, void *arg1, int arg2) {
    Vec_800310F8 v;
    s32 a;
    s32 ok;
    s32 i;
    switch ((u32)arg1) {
    case 4:
        TBoss2DeRolLe__sub_800341F0((Obj_800341F0 *)self);
        self->flags &= ~4;
        self->flags &= ~0x100;
        self->dir = arg2;
        set_move_direction__13TBoss2DeRolLeFPv(self, self->dir);
        if (self->dir == 0) {
            self->fB8 = 9;
        } else {
            self->fB8 = 10;
        }
        self->phase = 0;
        self->timer = 0;
        self->idx = 0;
        if (check_v2_mode__9TObjEneDDFv() != 0) {
            self->limit = M2C_FIELD(TBoss2DeRolLe__data_805D4BA0, s32 *, 0x24);
            self->life = M2C_FIELD(TBoss2DeRolLe__data_805D4BA0, s32 *, 0x28);
        } else {
            self->limit = 0xB4;
            self->life = 0x78;
        }
        break;
    case 2:
        if (self->phase == 3) {
            if (self->dir == 0) {
                TBoss2DeRolLe__sub_80034E90((Obj_80034034 *)self, 0x16);
            } else {
                TBoss2DeRolLe__sub_80034E90((Obj_80034034 *)self, 0x17);
            }
        }
        break;
    case 9:
        if (self->phase == 3) {
            TBoss2DeRolLe__sub_80033D44((Obj_80034034 *)self);
        }
        break;
    case 0:
        advance_animation_playback(self);
        switch (self->phase) {
        case 0:
            self->timer++;
            if (self->timer > 0x28) {
                self->phase = 1;
                self->timer = 0;
                self->idx = 0;
            }
            break;
        case 1:
            self->timer++;
            if (self->timer >= self->limit) {
                self->timer = 0;
                if (enemy_has_live_target(self) != 0) {
                    VecCopy__FP3VecPC3Vec((int)&v, self->f390 + 0x38);
                } else {
                    f32 r = lbl_805D8340 * calc_boss4_scale__10TObjPlayerFi(self);
                    a = get_random_scaled__9TObjEneDDFv(self);
                    v.x = r * sin_table_lookup(a);
                    v.y = lbl_805D8344;
                    v.z = r * cos_table_lookup(a);
                    adjust_to_ground__15TObjBoss2TunnelFiPv((s32)&v, &v);
                }
                {
                    Self_800310F8 *o = (Self_800310F8 *)arg0;
                    TBoss2Tentacle__sub_80039E88(o->parts[o->idx], &v, o->life);
                }
                self->idx++;
                if (self->idx >= 4) {
                    self->timer = 0;
                    self->phase = 2;
                }
            }
            break;
        case 2:
            ok = 1;
            self->timer++;
            for (i = 0; i < 4; i++) {
                if (TBoss2Tentacle__sub_80039CA0(self->parts[i]) == 0) {
                    ok = 0;
                    break;
                }
            }
            if (ok != 0 || self->timer > 0x258) {
                self->phase = 3;
            }
            break;
        }
        break;
    case 6:
        TBoss2DeRolLe__sub_800342C0((s32)self);
        break;
    case 5:
        {
            s32 j;
            for (j = 0; j < 4; j++) {
                TBoss2Tentacle__sub_80039E68(self->parts[j]);
            }
        }
        break;
    }
}
#undef self

void TBoss2DeRolLe__sub_800333F4(Obj_800333F4 *self, u32 arg1) {
    switch (arg1) {
    case 4: self->f_B8 = 1; return;
    case 2: TBoss2DeRolLe__sub_80034E90((Obj_80034034 *)(self), (s32)(1)); return;
    case 0: ((M2C_UNK (*)(void *))advance_animation_playback)(self); return;
    case 1: return;
    case 3: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    }
}

void TBoss2DeRolLe__sub_8003344C(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TBoss2DeRolLe__sub_800333F4((Obj_800333F4 *)((void *) (arg0)), (u32)((void *) (arg2)));
        return;
    case 1:
        TBoss2DeRolLe__sub_80032E38((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        TBoss2DeRolLe__sub_80032B28((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (0), (int) (1));
        return;
    case 4:
        TBoss2DeRolLe__sub_800320B4((void *) (arg0), (void *) (arg2), (int) (0), (int) (2));
        return;
    case 5:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (0), (int) (3));
        return;
    case 6:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (1), (int) (2));
        return;
    case 8:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (1), (int) (0));
        return;
    case 9:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (2), (int) (3));
        return;
    case 10:
        TBoss2DeRolLe__sub_800320B4((void *) (arg0), (void *) (arg2), (int) (2), (int) (0));
        return;
    case 11:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (2), (int) (1));
        return;
    case 12:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (3), (int) (0));
        return;
    case 13:
        TBoss2DeRolLe__sub_80031AD4((void *) (arg0), (void *) (arg2));
        return;
    case 14:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (3), (int) (2));
        return;
    case 18:
        TBoss2DeRolLe__sub_800313F8((void *) (arg0), (void *) (arg2), (int) (0));
        return;
    case 19:
        TBoss2DeRolLe__sub_800313F8((void *) (arg0), (void *) (arg2), (int) (2));
        return;
    case 20:
        TBoss2DeRolLe__sub_800310F8((void *)((void *) (arg0)), (void *)((void *) (arg2)), (int)((int) (0)));
        return;
    case 21:
        TBoss2DeRolLe__sub_800310F8((void *)((void *) (arg0)), (void *)((void *) (arg2)), (int)((int) (2)));
        return;
    case 22:
        TBoss2DeRolLe__sub_80030DFC((void *) (arg0), (void *) (arg2), (int) (0));
        return;
    case 23:
        TBoss2DeRolLe__sub_80030DFC((void *) (arg0), (void *) (arg2), (int) (2));
        return;
    case 16:
        ((s32 (*)(void *, void *, int))TBoss2DeRolLe__sub_80030898)((void *) (arg0), (void *) (arg2), (int) (0));
        return;
    case 17:
        ((s32 (*)(void *, void *, int))TBoss2DeRolLe__sub_80030898)((void *) (arg0), (void *) (arg2), (int) (2));
        return;
    case 15:
        TBoss2DeRolLe__sub_80030A38((void *) (arg0), (void *) (arg2));
        return;
    case 24:
        TBoss2DeRolLe__sub_80030720((Obj_80030720 *)((void *) (arg0)), (u32)((void *) (arg2)), (s32)((int) (0x18)));
        return;
    case 25:
        TBoss2DeRolLe__sub_80030720((Obj_80030720 *)((void *) (arg0)), (u32)((void *) (arg2)), (s32)((int) (0x19)));
        return;
    case 26:
        ((s32 (*)(void *, void *))TBoss2DeRolLe__sub_80030588)((void *) (arg0), (void *) (arg2));
        return;
    case 27:
        TBoss2DeRolLe__sub_8002FE60((void *) (arg0), (void *) (arg2));
        return;
    case 28:
        TBoss2DeRolLe__sub_8002FD9C((DeRolLe_8002FD9C *)((void *) (arg0)), (u32)((void *) (arg2)), (s32)((int) (0)));
        return;
    case 29:
        TBoss2DeRolLe__sub_8002FD9C((DeRolLe_8002FD9C *)((void *) (arg0)), (u32)((void *) (arg2)), (s32)((int) (1)));
        return;
    case 30:
        TBoss2DeRolLe__sub_8002FCE4((Obj_8002FCE4 *)((void *) (arg0)), (u32)((void *) (arg2)));
        return;
    case 31:
        TBoss2DeRolLe__sub_8002F7C4((void *) (arg0), (void *) (arg2));
        return;
    case 32:
        TBoss2DeRolLe__sub_8002F73C((Obj_8002F73C *)((void *) (arg0)), (u32)((void *) (arg2)));
    default:
        return;
    }
}

#pragma push
#pragma opt_common_subs off
void TBoss2DeRolLe__sub_8003383C(u8 *arg0) {
    f32 temp_f1;
    M2C_FIELD(arg0, f32 *, 0x6D4) = (f32) (M2C_FIELD(arg0, f32 *, 0x6D4) + M2C_FIELD(arg0, f32 *, 0x6D8));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x6D4);
    if (temp_f1 >= TBoss2DeRolLe__data_805D82A0) {
        M2C_FIELD(arg0, f32 *, 0x6D4) = (f32) (temp_f1 - TBoss2DeRolLe__data_805D82A0);
    }
}
extern int fold_flush_1;
#pragma pop

int spawn_trap__13TBoss2DeRolLeFPvii(void* p, int a1, int a2) { return play_persistent_sound((int)(p), (void *)(a1), (void *)(a2), (int)(0), (int)(0)); }

int play_sound(void* p, int a1) { return play_sound_effect(p, a1, 0, 0); }

void TBoss2DeRolLe__sub_800338BC(void) {  }

void update_projectile_spawns__13TBoss2DeRolLeFPv(u8 *arg0) {
    u8 *temp_r31;

    project_sound_origin_from_camera((void *) (arg0 + 0x38), (void *) (arg0 + 0x518), (f32) (TBoss2DeRolLe__data_805D8280));
    project_sound_origin_from_camera((void *) (arg0 + 0x4D0), (void *) (arg0 + 0x524), (f32) (TBoss2DeRolLe__data_805D8280));
    temp_r31 = arg0 + 0x530;
    VecCopy__FP3VecPC3Vec((int) (temp_r31), (void *) (arg0 + 0x524));
    vec3_add_to((int) (temp_r31), (void *) (arg0 + 0x524));
    M2C_FIELD(temp_r31, f32 *, 0) = (f32) (M2C_FIELD(temp_r31, f32 *, 0) * TBoss2DeRolLe__data_805D8288);
    M2C_FIELD(temp_r31, f32 *, 4) = (f32) (M2C_FIELD(temp_r31, f32 *, 4) * TBoss2DeRolLe__data_805D8288);
    M2C_FIELD(temp_r31, f32 *, 8) = (f32) (M2C_FIELD(temp_r31, f32 *, 8) * TBoss2DeRolLe__data_805D8288);
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 0x100) && ((objInBand__FP7GameObjf((void *) (arg0), (f32) (TBoss2DeRolLe__data_805D82F0)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (TBoss2DeRolLe__data_805D8294)) != 0))) {
        M2C_FIELD(arg0, s32 *, 0x53C) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x53C) <= 0x10) {
        play_persistent_sound((int)((int) (0x4003AD00)), (void *)((void *) (arg0)), (void *)((void *) (arg0 + 0x530)), (int)((int) (0)), (int)((int) (0)));
        M2C_FIELD(arg0, s32 *, 0x53C) = (s32) (M2C_FIELD(arg0, s32 *, 0x53C) + 1);
    }
}

#pragma push
#pragma fp_contract on
void TBoss2DeRolLe__sub_800339BC(s32 arg0, f32 farg0, f32 farg1) {
    typedef char sp8_offset[(offsetof(Stack_800339BC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800339BC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800339BC, sp10) == 0x8) ? 1 : -1];
    Stack_800339BC stack;
    VecCopy__FP3VecPC3Vec((int)((void *) (&stack.sp8)), (void *)((void *) (arg0)));
    stack.sp8 = -((M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0xC) * farg1) - stack.sp8);
    stack.spC -= (M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x10) * farg1) - farg0;
    stack.sp10 = -((M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x14) * farg1) - stack.sp10);
    spawn_particle_effect_with_flags((void *) (&stack.sp8), (int) (0x127), (int) (0x40));
}
extern int fold_flush_2;
#pragma pop

void spawn_ceil_junk__13TBoss2DeRolLeFii(s32 arg1, s32 arg2) {
    create_particle__17TObjBoss2CeilJunkFv(arg2, 0x121);
}

void TBoss2DeRolLe__sub_80033A80(M2C_UNK arg0, s32 arg1) {
    TObjBoss2Tunnel__sub_8003B1D8((void *) (arg1));
}

void TBoss2DeRolLe__sub_80033D44(Obj_80034034 *self) {
    s32 retry;
    s32 mode;
    do {
        retry = 0;
        M2C_FIELD(self, s32 *, 0x3D4)++;
        if (check_v2_mode__9TObjEneDDFv() != 0) {
            mode = lbl_804821B8[M2C_FIELD(self, s32 *, 0x3D4)];
        } else {
            mode = lbl_80482108[M2C_FIELD(self, s32 *, 0x3D4)];
        }
        switch (mode) {
        case 33:
            if (calc_elapsed_scaled__9TObjEneDDFv(self) > TBoss2DeRolLe__data_805D827C) {
                mode = 8;
            } else {
                mode = 6;
            }
            break;
        case 34:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 5;
            } else {
                mode = 9;
            }
            break;
        case 35:
            if (calc_elapsed_scaled__9TObjEneDDFv(self) > TBoss2DeRolLe__data_805D827C) {
                mode = 0xC;
            } else {
                mode = 0xE;
            }
            break;
        case 36:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 3;
            } else {
                mode = 0xB;
            }
            break;
        case 37:
            if (calc_elapsed_scaled__9TObjEneDDFv(self) > TBoss2DeRolLe__data_805D827C) {
                mode = 0x18;
            } else {
                mode = 0x19;
            }
            break;
        case 39:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 4;
            } else {
                mode = 0xA;
            }
            break;
        case 40:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 0x10;
            } else {
                mode = 0x11;
            }
            break;
        case 41:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 0x12;
            } else {
                mode = 0x13;
            }
            break;
        case 42:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 0x14;
            } else {
                mode = 0x15;
            }
            break;
        case 43:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 0x16;
            } else {
                mode = 0x17;
            }
            break;
        case 44:
            retry = 1;
            M2C_FIELD(self, s32 *, 0x3D4) = 5;
            break;
        }
    } while (retry != 0);
    TBoss2DeRolLe__sub_80034E90(self, mode);
}

void reset_fields_3d0__13TBoss2DeRolLeFPv(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3d4) = 0; }

void set_params__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1) {
    enemy_set_target_id(arg0, (u16) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    transition_enemy_state(arg0, M2C_FIELD(arg1, s16 *, 4));
}

void init_from_param__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    transition_enemy_state(arg0, M2C_FIELD(arg1, s16 *, 4));
}

void handle_6x14_de_rol_le_boss_actions_with_target(void *arg0) {
    void *x;
    swap_endian__13TBoss2DeRolLeFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        set_params__13TBoss2DeRolLeFPvPv((void *)(x), (void *)(arg0));
    }
}

void handle_6x13_de_rol_le_boss_actions(void *arg0) {
    void *x;
    swap_6x13_fields__13TBoss2DeRolLeFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        init_from_param__13TBoss2DeRolLeFPvPv((void *)(x), (void *)(arg0));
    }
}

void TBoss2DeRolLe__sub_80034034(Obj_80034034 *self) {
    s16 st = self->f326;
    if (st != 0x1f && st != 0x20) {
        if (st == 0x14 || st == 0x15) {
            TBoss2DeRolLe__sub_80033D44((Obj_80034034 *)(self));
        } else if (st == 0x16 || st == 0x17) {
            TBoss2DeRolLe__sub_80034E90(self, 0x1f);
        } else {
            TBoss2DeRolLe__sub_80034E90(self, 0x1e);
        }
    }
}

u8 is_ready__13TBoss2DeRolLeFPv(void *arg0) {
    int var_r4;

    var_r4 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x6AC) <= 0) && !(M2C_FIELD(arg0, s32 *, 0x3C0) & 4)) {
        var_r4 = 1;
    }
    return (u8)var_r4;
}

void clear_play_flags__13TBoss2DeRolLeFPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r4, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x44) & 0xFFFFFFFE);
    temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r3, s32 *, 0x70) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x70) & 0xFFFFFFFE);
}

void set_flags_play_sound__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 0x88);
    ((M2C_UNK (*)(void))clear_play_flags__13TBoss2DeRolLeFPv)();
    ((M2C_UNK (*)(M2C_UNK, void *))play_sound)(0x4003AA06, arg0 + 0x38);
}

void TBoss2DeRolLe__sub_80034134(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6AC) - (s32) (TBoss2DeRolLe__data_805D8288 * (f32) arg1));
    ((M2C_UNK (*)(M2C_UNK, void *))play_sound)((M2C_UNK)((int) (0x4003A80F)), (void *)((void *) (arg0 + 0x38)));
}

void update_check__13TBoss2DeRolLeFPv(void *arg0) {
    TObjEneDD__vt90();
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 8) || (check_v2_mode__9TObjEneDDFv() != 0)) {
        ((M2C_UNK (*)(void *))clear_play_flags__13TBoss2DeRolLeFPv)(arg0);
    }
}

void TBoss2DeRolLe__sub_800341F0(Obj_800341F0 *self) {
    s32 i;
    self->m94();
    for (i = 0; i < 10; i++) {
        self->parts[i]->m94();
    }
}

void TBoss2DeRolLe__sub_80034258(Obj_80034258 *self) {
    s32 i;
    self->m93();
    for (i = 0; i < 10; i++) {
        self->parts[i]->m93();
    }
}

void TBoss2DeRolLe__sub_800342C0(s32 arg0) {
    s32 n;
    s32 p;
    s32 j;
    s32 i;

    n = get_game_mode__6TLobbyFv();
    if (n == 0) {
        enemy_clear_target((void *) (arg0));
        return;
    }
    if (n == 1) {
        p = get_player_data__10TObjPlayerFi(0);
        TBoss2DeRolLe__sub_800B98D8((void *) (arg0), p);
        return;
    }
    j = (s32) get_random_float__21TObjEneMe3ShinowaRealFv((f32) n * calc_boss4_scale__10TObjPlayerFi((void *) (arg0)));
    enemy_clear_target((void *) (arg0));
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(j);
        if (is_alive__9TObjEneDDFPv() != 0) {
            TBoss2DeRolLe__sub_800B98D8((void *) (arg0), p);
            return;
        }
        if (++j >= n) {
            j = 0;
        }
    }
}

}
