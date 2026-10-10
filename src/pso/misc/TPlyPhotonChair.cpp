#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"

extern "C" {
extern char lbl_804796E0[];
extern char lbl_804796F4[];
extern char lbl_80479708[];
extern char lbl_8047971C[];
extern char lbl_80479734[];
extern const char *bm_ply_photon_chair_model_names[3];
extern const char *bm_ply_photon_chair_motion_names[3];
extern BmlResourceDescriptor photon_chair_resource_descriptor;
}
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8035B2DC_lbl_804F1CB8 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8035B2DC_lbl_804F1CB8_size[sizeof(RecoveredGlobal_8035B2DC_lbl_804F1CB8) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8035B630_lbl_804A7488 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8035B3C0_lbl_8047975C { M2C_UNK value; u8 remaining[0xA0]; };

struct RecoveredGlobal_8035B3C0___vt__15TPlyPhotonChair { M2C_UNK value; u8 remaining[0x34]; };

struct Vec_8035B058 { f32 x, y, z; };

struct Quat_8035B058 { f32 w, x, y, z; };

struct PBase_8035B058 { char pad[0x18]; };

struct Player_8035B058 : PBase_8035B058 {
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
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63(s32, Vec_8035B058 *);
};

struct SBase_8035B058 { char pad[4]; };

struct Sub_8035B058 : SBase_8035B058 {
    virtual void s0();
    virtual void s1();
};

struct Chair_8035B058 {
    u8 pad0[0x24];
    s32 x24;
    u8 pad28[0x38 - 0x28];
    Vec_8035B058 pos;
    u8 pad44[0x5C - 0x44];
    u8 rot[4];
    s32 x60;
    u8 pad64[4];
    u8 x68[0x98 - 0x68];
    Sub_8035B058 a;
    u8 padA0[0xB4 - 0xA0];
    Sub_8035B058 b;
    u8 padBC[0xD0 - 0xBC];
    u8 parts[4];
};

extern "C" {
void set_field90__15TPlyPhotonChairFPvs(void* p, s32 v);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK update_scale_state__15TPlyPhotonChairFPv(void *);
M2C_UNK update_bob_motion__15TPlyPhotonChairFPv(void *);
f32 get_float_c__15TPlyPhotonChairFPv(void *);
u32 get_player_by_client_id(int);
s32 is_mounted__15TPlyPhotonChairFPv();
u16 TPlyPhotonChair__sub_8035B530(void* p);
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v);
void set_state_ready__15TPlyPhotonChairFPv(void* p);
extern const f32 lbl_805E0128;
extern const float lbl_805E012C;
void run_task__15TPlyPhotonChairFv(u8 *arg0);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern u32 TPlyPhotonChair__data_805D6F40;
s32 load_resources__15TPlyPhotonChairFv(void);
void TPlyPhotonChair__sub_8035B66C(void* p);
extern RecoveredGlobal_8035B630_lbl_804A7488 lbl_804A7488;
u8 *init_parts__15TPlyPhotonChairFPv(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_bml_motion(int, int);
s32 TObjFish__sub_8001EDB0(int, int);
s32 get_bml_model(int, int);
s32 get_actor_section_id(int);
s32 get_rader_map__11TMainCursorFPv(void *, void *);
s32 TMainCursor__sub_8013F1F0(void *);
s32 construct_world_actor_base(void *, void *);
u32 get_player_by_client_id(int);
void set_field90__15TPlyPhotonChairFPvs(void* p, s32 v);
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v);
void set_state_ready__15TPlyPhotonChairFPv(void* p);
void sync_field10_from_child__15TPlyPhotonChairFPv(void *arg0);
void set_field_8__15TPlyPhotonChairFPvi(void* p, s32 v);
void set_type__15TPlyPhotonChairFPvi(void* p, s32 v);
void *init__15TPlyPhotonChairFPv(void *arg0);
extern RecoveredGlobal_8035B3C0_lbl_8047975C TPlyPhotonChair__section_id_color_table;
extern M2C_UNK __vt__15TPlyPhotonChair[];
extern s32 lbl_805D4418;
extern u32 TPlyPhotonChair__data_805D6F40;
extern const f32 lbl_805E0130;
u8 *TPlyPhotonChair__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 get_state_flag__9TMainTaskFv();
int copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 is_inactive__10TObjPlayerFPv(void *);
int play_sound_with_arg__15TPlyPhotonChairFPvPv(void *, void *);
int update_parts__15TPlyPhotonChairFPv(void *);
int update_parts2__15TPlyPhotonChairFPv(void *);
u32 get_player_by_client_id(int);
u16 TPlyPhotonChair__sub_8035B530(void* p);
void render__15TPlyPhotonChairFPvPv(void* p, void* a1);
int rotate_matrix_y(int, int);
int push_matrix();
int pop_matrix();
int scale_current_matrix(void *);
int post_translate_matrix(void *);
int set_global_param__8TObjFishFi(int);
extern const f32 lbl_805E0124;
void render__15TPlyPhotonChairFv(Chair_8035B058 *self);
}

extern "C" {

int TPlyPhotonChair__sub_8035B520(void* p);
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v);
void TPlyPhotonChair__sub_8035B610(void* a0);
void TPlyPhotonChair__sub_8035B66C(void* p);
void *__dt__15TPlyPhotonChairFv(void *arg0, s16 arg1);
void free_instance__15TPlyPhotonChairFv(void);
void free_static_model__15TPlyPhotonChairFv(void);
void *init__15TPlyPhotonChairFPv(void *arg0);
void render__15TPlyPhotonChairFPvPv(void* p, void* a1);
void set_field_8__15TPlyPhotonChairFPvi(void* p, s32 v);
void set_state_ready__15TPlyPhotonChairFPv(void* p);
void set_type__15TPlyPhotonChairFPvi(void* p, s32 v);
void sync_field10_from_child__15TPlyPhotonChairFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
int copy_vec4__13TRaderMapCoreFPvPv(void*, void*);
void destroy__11TMainCursorFPvs(void *, int);
void destroy__15TPlyPhotonChairFPvs(void *, int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern u32 TPlyPhotonChair__data_805D6F40;

void render__15TPlyPhotonChairFv(Chair_8035B058 *self) {
    Vec_8035B058 out;
    Quat_8035B058 q;
    Quat_8035B058 q2;
    Player_8035B058 *pl;
    pl = (Player_8035B058 *)get_player_by_client_id(TPlyPhotonChair__sub_8035B530(self));
    if (pl != NULL) {
        render__15TPlyPhotonChairFPvPv(self->parts, &q);
        {
            q2.w = q.w;
            q2.x = 0.5f * q.x;
            q2.y = 0.5f * q.y;
            q2.z = 0.5f * q.z;
        }
        pl->m63(2, &out);
        self->pos.x = out.x;
        self->pos.y = out.y - lbl_805E0124;
        self->pos.z = out.z;
        copy_xyz__10TObjPlayerFPvPv(self->rot, (u8 *)pl + 0x5C);
        if (is_inactive__10TObjPlayerFPv(pl) != 0) {
            update_parts2__15TPlyPhotonChairFPv(self->parts);
            set_global_param__8TObjFishFi(self->x24);
            push_matrix();
            post_translate_matrix(&self->pos);
            rotate_matrix_y(0, self->x60);
            scale_current_matrix(self->x68);
            if (get_state_flag__9TMainTaskFv() != 0) {
                play_sound_with_arg__15TPlyPhotonChairFPvPv(self->parts, &q);
                self->a.s1();
            } else {
                play_sound_with_arg__15TPlyPhotonChairFPvPv(self->parts, &q2);
                self->b.s1();
            }
            pop_matrix();
            update_parts__15TPlyPhotonChairFPv(self->parts);
        }
    }
}

void run_task__15TPlyPhotonChairFv(u8 *arg0) {
    u32 temp_r0;
    if (get_player_by_client_id((int) (TPlyPhotonChair__sub_8035B530((void*)(arg0)))) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x94) == 0U) && (is_mounted__15TPlyPhotonChairFPv() == 0)) {
        M2C_FIELD(arg0, u32 *, 0x94) = 1U;
        set_state_ready__15TPlyPhotonChairFPv((void*)((void *) (arg0 + 0x98)));
        TPlyPhotonChair__sub_8035B56C((void*)((void *) (arg0 + 0x98)), (f32) (lbl_805E0128));
        set_state_ready__15TPlyPhotonChairFPv((void*)((void *) (arg0 + 0xB4)));
        TPlyPhotonChair__sub_8035B56C((void*)((void *) (arg0 + 0xB4)), (f32) (lbl_805E0128));
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x94);
    switch ((s32) temp_r0) {
    case 0:
        update_bob_motion__15TPlyPhotonChairFPv((void *) (arg0 + 0x98));
        update_bob_motion__15TPlyPhotonChairFPv((void *) (arg0 + 0xB4));
        return;
    case 1:
        update_scale_state__15TPlyPhotonChairFPv((void *) (arg0 + 0x98));
        update_scale_state__15TPlyPhotonChairFPv((void *) (arg0 + 0xB4));
        if (get_float_c__15TPlyPhotonChairFPv((void *) (arg0 + 0x98)) <= (*(const f32 *)&lbl_805E012C)) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
        return;
    }
}

void free_static_model__15TPlyPhotonChairFv(void) {
    if ((u32) TPlyPhotonChair__data_805D6F40 != 0U) {
        TLobby__sub_8001FE7C((void*)TPlyPhotonChair__data_805D6F40, 1);
        TPlyPhotonChair__data_805D6F40 = 0U;
    }
}

extern M2C_UNK __vt__15TPlyPhotonChair[];

s32 load_resources__15TPlyPhotonChairFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &photon_chair_resource_descriptor, 0, 0, 0));
    }
    (*(u8 * *)&TPlyPhotonChair__data_805D6F40) = (unsigned char *) ((void *) var_r0);
    if ((u32) var_r0 == 0U) {
        return 0;
    }
    return 1;
}

void *__dt__15TPlyPhotonChairFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TPlyPhotonChair;
        destroy__11TMainCursorFPvs((s8 *)arg0 + 0xD0, -1);
        destroy__15TPlyPhotonChairFPvs((s8 *)arg0 + 0xB4, -1);
        destroy__15TPlyPhotonChairFPvs((s8 *)arg0 + 0x98, -1);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TPlyPhotonChair__ct(u8 *arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;
    construct_world_actor_base((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8035B3C0___vt__15TPlyPhotonChair *)&__vt__15TPlyPhotonChair).value;
    init__15TPlyPhotonChairFPv((void *) (arg0 + 0x98));
    init__15TPlyPhotonChairFPv((void *) (arg0 + 0xB4));
    TMainCursor__sub_8013F1F0((void *) (arg0 + 0xD0));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4418;
    set_field90__15TPlyPhotonChairFPvs((void*)((void *) (arg0)), (s32)((void *) (arg1)));
    M2C_FIELD(arg0, s16 *, 0x92) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    temp_r3 = get_player_by_client_id((int)((void *) ((s32) (u16) arg1)));
    if (temp_r3 == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return arg0;
    }
    get_rader_map__11TMainCursorFPv((void *) (arg0 + 0xD0), (void *) ((u8 *)&TPlyPhotonChair__section_id_color_table.value + (get_actor_section_id((int) (temp_r3)) * 0x10)));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((int) ((*(s32 *)&TPlyPhotonChair__data_805D6F40)), (int) (1));
    set_type__15TPlyPhotonChairFPvi((void*)((void *) (arg0 + 0x98)), (s32)((int) (get_bml_model((int) ((*(s32 *)&TPlyPhotonChair__data_805D6F40)), (int) (1)))));
    set_field_8__15TPlyPhotonChairFPvi((void*)((void *) (arg0 + 0x98)), (s32)((int) (get_bml_motion((int) ((*(s32 *)&TPlyPhotonChair__data_805D6F40)), (int) (1)))));
    sync_field10_from_child__15TPlyPhotonChairFPv((void *) (arg0 + 0x98));
    TPlyPhotonChair__sub_8035B56C((void*)((void *) (arg0 + 0x98)), (f32) (lbl_805E0130));
    set_state_ready__15TPlyPhotonChairFPv((void*)((void *) (arg0 + 0x98)));
    set_type__15TPlyPhotonChairFPvi((void*)((void *) (arg0 + 0xB4)), (s32)((int) (get_bml_model((int) ((*(s32 *)&TPlyPhotonChair__data_805D6F40)), (int) (0)))));
    set_field_8__15TPlyPhotonChairFPvi((void*)((void *) (arg0 + 0xB4)), (s32)((int) (get_bml_motion((int) ((*(s32 *)&TPlyPhotonChair__data_805D6F40)), (int) (0)))));
    sync_field10_from_child__15TPlyPhotonChairFPv((void *) (arg0 + 0xB4));
    TPlyPhotonChair__sub_8035B56C((void*)((void *) (arg0 + 0xB4)), (f32) (lbl_805E0130));
    set_state_ready__15TPlyPhotonChairFPv((void*)((void *) (arg0 + 0xB4)));
    return arg0;
}

int TPlyPhotonChair__sub_8035B520(void* p) { return *(u32*)((char*)p + 0x94) == 0; }
u16 TPlyPhotonChair__sub_8035B530(void* p) { return *(u16*)((char*)p + 0x90); }
void set_field90__15TPlyPhotonChairFPvs(void* p, s32 v) { *(s16*)((char*)p + 0x90) = v; }
void render__15TPlyPhotonChairFPvPv(void* p, void* a1) { copy_vec4__13TRaderMapCoreFPvPv(a1, p); }
void TPlyPhotonChair__sub_8035B56C(void* p, f32 v) { *(f32*)((char*)p + 0x14) = v; }
void set_state_ready__15TPlyPhotonChairFPv(void* p) { *(s32*)((char*)p + 0x18) = 2; }

extern const f64 lbl_80479800;

void sync_field10_from_child__15TPlyPhotonChairFPv(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 8);
    if (temp_r4 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(temp_r4, u32 *, 4);
    }
}

void set_field_8__15TPlyPhotonChairFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }
void set_type__15TPlyPhotonChairFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

extern M2C_UNK lbl_804A7478[];

void *init__15TPlyPhotonChairFPv(void *arg0) {
    init_parts__15TPlyPhotonChairFPv((u8 *)(arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x4) = lbl_804A7478;
    TPlyPhotonChair__sub_8035B610((void*)(arg0));
    return arg0;
}

    extern const float lbl_805E012C;
void TPlyPhotonChair__sub_8035B610(void* a0) { *(int*)((char*)a0 + 0x8) = 0; *(float*)((char*)a0 + 0xc) = lbl_805E012C; *(float*)((char*)a0 + 0x10) = lbl_805E012C; *(float*)((char*)a0 + 0x14) = lbl_805E012C; *(int*)((char*)a0 + 0x18) = 0; }

typedef char RecoveredGlobal_8035B630_lbl_804A7488_size[sizeof(RecoveredGlobal_8035B630_lbl_804A7488) == 0x10 ? 1 : -1];
u8 *init_parts__15TPlyPhotonChairFPv(u8 *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_804A7488.value;
    TPlyPhotonChair__sub_8035B66C((void*)((void *) (arg0)));
    return arg0;
}

void TPlyPhotonChair__sub_8035B66C(void* p) { *(s32*)((char*)p + 0x0) = 0; }

extern u32 lbl_805D6F48;

void free_instance__15TPlyPhotonChairFv(void) {
    if ((u32) lbl_805D6F48 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6F48, 1);
        lbl_805D6F48 = 0U;
    }
}

}

extern "C" {
__declspec(section ".data") const char *bm_ply_photon_chair_model_names[3] = { lbl_804796E0, lbl_804796F4, NULL };
__declspec(section ".data") const char *bm_ply_photon_chair_motion_names[3] = { lbl_80479708, lbl_8047971C, NULL };
BmlResourceDescriptor photon_chair_resource_descriptor = { lbl_80479734, bm_ply_photon_chair_model_names, bm_ply_photon_chair_motion_names, 2, 2 };
}
