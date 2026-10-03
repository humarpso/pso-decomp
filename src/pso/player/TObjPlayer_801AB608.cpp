#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_801ABBAC {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct Color_801ABAA0 { f32 a, r, g, b; };

struct Vec_801ABAA0 { f32 x, y, z; };

struct Self_801ABAA0 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801ABAA0 pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x15C - 0x14E];
    Color_801ABAA0 color;
    u8 pad5[0x1C4 - 0x16C];
    s32 started;
};

typedef struct Vec_801AB6A0 {
    f32 x, y, z;
} Vec_801AB6A0;

typedef struct Packet_801AB6A0 {
    Vec_801AB6A0 origin;
    Vec_801AB6A0 target;
    Vec_801AB6A0 direction;
    u8 pad24[0xC];
    void *owner;
    u32 angle;
} Packet_801AB6A0;

typedef struct Golla_801AB6A0 {
    u8 pad0[0x38];
    Vec_801AB6A0 pos;
    u8 pad44[0x158 - 0x44];
    u16 owner_id;
    u8 pad15A[0x19C - 0x15A];
    void *f19c;
    u8 pad1A0[8];
    u8 *f1a8;
    Vec_801AB6A0 f1ac;
} Golla_801AB6A0;

typedef struct Owner_801AB6A0 {
    u8 pad0[0x3C];
    f32 y;
    u8 pad40[0x20];
    s32 rot;
} Owner_801AB6A0;

typedef struct Vec_801AB868 {
    f32 x, y, z;
} Vec_801AB868;

typedef struct Target_801AB868 {
    u8 pad0[0x2FC];
    Vec_801AB868 pos;
} Target_801AB868;

typedef struct Owner_801AB868 {
    u8 pad0[0x38];
    Vec_801AB868 pos;
    u8 pad44[0x60 - 0x44];
    s32 rot;
} Owner_801AB868;

typedef struct Flags_801AB868 {
    u8 pad0[0x18];
    u32 flags;
} Flags_801AB868;

typedef struct Golla_801AB868 {
    u8 pad0[0x38];
    Vec_801AB868 pos;
    u8 pad44[0xA4 - 0x44];
    Flags_801AB868 *fa4;
    u8 padA8[0x150 - 0xA8];
    f32 f150;
    u8 pad154[4];
    u16 owner_id;
    u8 pad15A[0x19C - 0x15A];
    Target_801AB868 *f19c;
    u8 pad1A0[8];
    Target_801AB868 *f1a8;
} Golla_801AB868;

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * alloc_tables__6TLobbyFPvii(void *, s32, s32);
extern u8 *lbl_805D5D28;
extern u32 lbl_805D5D38;
void TObjPlayer__sub_801AB640(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, int);
s32 spawn_particle_effect(void *, int);
s32 advance_animation_playback(void *);
s32 find_entity_by_id(int);
s32 begin_photon_summon_camera(void *, int);
s32 update_photon_blast_attachments(void *);
s32 TObjPlayer__sub_801A7748(void *, int);
s32 update_state__10TSceneSoraFPv(void *);
s32 TPhotonMagicSquare__ct(int, void *, int, void *, int, f32);
s32 play_persistent_sound(int, void *, int, int, int);
u32 __nw__7TObjectFUl(int);
extern const f32 lbl_805DC1A0;
extern const f32 lbl_805DC1A4;
extern const f32 lbl_805DC1A8;
void TObjPlayer__sub_801ABBAC(u8 *arg0);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 scroll_strip_uvs(void *, s16, int);
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 TObjPlayer__sub_801A7638(void *);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 TObjPlayer__sub_803D9B2C();
s32 pop_matrix();
s32 TOHangerMachine01__sub_803D9C00(void *);
s32 set_global_param__8TObjFishFi(int);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern Color_801ABAA0 lbl_8050BEC0;
extern Color_801ABAA0 lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *lbl_805D5D40;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_801ABAA0(Self_801ABAA0 *self);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 find_entity_by_id(int);
u32 __nw__7TObjectFUl(int);
s32 rotate_matrix_y(int, int);
void TPhotonConcentrate__ct(void *, void *, void *, int);
u32 __cvt_fp2unsigned(f32);
int rand(void);
void TBoss4Zako__sub_803D8910(void *, void *);
void rotate_vector_by_matrix(int, void *, void *);
void TBoss6Type1__sub_803D9370(void *, void *);
void TNpcPlayer__sub_803D97B4(void *);
void push_matrix_from(void *);
void TCameraCtrl__sub_803D9858(int);
extern const Packet_801AB6A0 lbl_80446D68;
extern u8 lbl_8058D490[];
extern const float lbl_805DC188;
extern const f32 lbl_805DC18C;
extern const f32 lbl_805DC190;
extern const f32 lbl_805DC194;
extern const f32 lbl_805DC198;
s32 TObjPlayer__sub_801AB6A0(void *arg0);
s32 find_entity_by_id(int);
s32 rotate_matrix_y(int, int);
void init_all_slots__10TObjPlayerFv(void);
void mark_enemy_body_contacts(void *);
Target_801AB868 *get_battle_param__10TObjPlayerFi(s32);
void TBoss6Type1__sub_803D9370(void *, void *);
f32 TCameraCtrl__sub_803D8D00(void *);
void TNpcPlayer__sub_803D97B4(void *);
void push_matrix_from(void *);
void rotate_vector_by_matrix(int, void *, void *);
void TCameraCtrl__sub_803D9858(int);
f32 TObjPlayer__sub_803D89C0(void *, void *);
u16 obj_getField1c(void *);
void queue_photon_blast_hit(u32, int, int, f32);
extern u8 lbl_8058D490[];
extern const float lbl_805DC188;
extern const f32 lbl_805DC190;
extern const f32 lbl_805DC19C;
void collect_hit_targets__12TPhotonGollaFPv(void *arg0);
}

extern "C" {

void TObjPlayer__sub_801AB688(void* a0);
void destroy_buffers__10TObjPlayerFv(void);
M2C_UNK destroy_buffer_pair(void*, M2C_UNK);

extern u32 lbl_805D5D38;

void destroy_buffers__10TObjPlayerFv(void) {
    if ((u32) lbl_805D5D38 != 0U) {
        destroy_buffer_pair((void*)lbl_805D5D38, 1);
    }
    lbl_805D5D38 = 0U;
}

    extern const float lbl_805DC188;

void TObjPlayer__sub_801AB640(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x14);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (alloc_tables__6TLobbyFPvii((void *) temp_r3, M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 8), 0));
    }
    (*(s32 *)&lbl_805D5D38) = var_r0;
}

void TObjPlayer__sub_801AB688(void* a0) { *(float*)((char*)a0 + 0x15c) = lbl_805DC188; *(float*)((char*)a0 + 0x160) = lbl_805DC188; *(float*)((char*)a0 + 0x164) = lbl_805DC188; *(float*)((char*)a0 + 0x168) = lbl_805DC188; }

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
#define self ((Golla_801AB6A0 *)arg0)
s32 TObjPlayer__sub_801AB6A0(void *arg0) {
    Vec_801AB6A0 target;
    Vec_801AB6A0 local;
    Vec_801AB6A0 rotated;
    Owner_801AB6A0 *owner;
    f32 random;
    u32 angle;
    u32 beam;
    if (self->f19c == NULL) {
        owner = (Owner_801AB6A0 *)find_entity_by_id(self->owner_id);
        local.x = (*(const f32 *)&lbl_805DC188);
        if (owner != NULL) {
            local.y = owner->y;
        }
        local.z = lbl_805DC18C;
        push_matrix_from(lbl_8058D490);
        if (owner != NULL) {
            rotate_matrix_y(0, owner->rot);
        }
        rotate_vector_by_matrix(0, &local, &rotated);
        TCameraCtrl__sub_803D9858(1);
        VecCopy__FP3VecPC3Vec(&target, &self->pos);
        TBoss4Zako__sub_803D8910(&target, &rotated);
    } else {
        VecCopy__FP3VecPC3Vec(&target, self->f1a8 + 0x2FC);
    }
    Vec_801AB6A0 direction = target;
    TBoss6Type1__sub_803D9370(&direction, &self->f1ac);
    TNpcPlayer__sub_803D97B4(&direction);
    random = lbl_805DC198 * (f32)rand();
    angle = __cvt_fp2unsigned(lbl_805DC194 * random + lbl_805DC190);
    Packet_801AB6A0 packet = lbl_80446D68;
    packet.origin.x = self->f1ac.x;
    packet.origin.y = self->f1ac.y;
    packet.origin.z = self->f1ac.z;
    packet.target.x = target.x;
    packet.target.y = target.y;
    packet.target.z = target.z;
    packet.direction.x = direction.x;
    packet.direction.y = direction.y;
    packet.direction.z = direction.z;
    packet.owner = self->f1a8;
    packet.angle = angle;
    beam = __nw__7TObjectFUl(0x10C);
    if (beam != 0) {
        TPhotonConcentrate__ct((void *)beam, &packet, self, self->owner_id);
    }
}
#undef self
#pragma pop

#define self ((Golla_801AB868 *)arg0)
#pragma push
#pragma opt_common_subs off
#pragma opt_loop_invariants off
void collect_hit_targets__12TPhotonGollaFPv(void *arg0) {
    s32 i;
    Target_801AB868 *candidate;
    init_all_slots__10TObjPlayerFv();
    mark_enemy_body_contacts(self);
    if (self->fa4->flags & 0x100000) {
        for (i = 0; i < 16; i++) {
            candidate = get_battle_param__10TObjPlayerFi(i);
            if (candidate != NULL) {
                if (self->f1a8 != NULL) {
                    Vec_801AB868 selected_delta = self->f1a8->pos;
                    Owner_801AB868 *owner;
                    f32 selected_distance;
                    TBoss6Type1__sub_803D9370(&selected_delta, &self->pos);
                    Vec_801AB868 candidate_delta = candidate->pos;
                    TBoss6Type1__sub_803D9370(&candidate_delta, &self->pos);
                    selected_distance = TCameraCtrl__sub_803D8D00(&selected_delta);
                    if (TCameraCtrl__sub_803D8D00(&candidate_delta) < selected_distance) {
                        self->f1a8 = candidate;
                    }
                    owner = (Owner_801AB868 *)find_entity_by_id(self->owner_id);
                    Vec_801AB868 direction = self->f1a8->pos;
                    Vec_801AB868 forward;
                    Vec_801AB868 left;
                    Vec_801AB868 right;
                    if (owner != NULL) {
                        TBoss6Type1__sub_803D9370(&direction, &owner->pos);
                    }
                    TNpcPlayer__sub_803D97B4(&direction);
                    forward.y = forward.x = lbl_805DC188;
                    forward.z = lbl_805DC190;
                    push_matrix_from(lbl_8058D490);
                    if (owner != NULL) {
                        rotate_matrix_y(0, owner->rot + 0x1555);
                    }
                    rotate_vector_by_matrix(0, &forward, &left);
                    TCameraCtrl__sub_803D9858(1);
                    push_matrix_from(lbl_8058D490);
                    if (owner != NULL) {
                        rotate_matrix_y(0, owner->rot - 0x1555);
                    }
                    rotate_vector_by_matrix(0, &forward, &right);
                    TCameraCtrl__sub_803D9858(1);
                    TObjPlayer__sub_803D89C0(&direction, &left);
                    TObjPlayer__sub_803D89C0(&direction, &right);
                    if (!(TObjPlayer__sub_803D89C0(&direction, &left) > lbl_805DC19C) ||
                        !(TObjPlayer__sub_803D89C0(&direction, &right) > lbl_805DC19C)) {
                        self->f1a8 = NULL;
                    }
                } else {
                    self->f1a8 = candidate;
                }
            }
        }
    }
    if (self->f1a8 != NULL) {
        queue_photon_blast_hit(obj_getField1c(self->f1a8), 2, 0, self->f150);
    }
    self->f19c = self->f1a8;
}
#pragma pop
#undef self

void TObjPlayer__sub_801ABAA0(Self_801ABAA0 *self) {
    if (self->started != 0) {
        scroll_strip_uvs(lbl_805D5D40, self->f14C, 0);
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(self->f24);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(&self->pos);
        rotate_matrix_y(0, self->f60);
        TObjPlayer__sub_801A7638(self);
        lbl_805D5660 = some_id_805c6f74;
        copy_vec4__13TRaderMapCoreFPvPv(&lbl_8050BEC0, &lbl_8058D4C0);
        lbl_805D5664 = lbl_805D7784;
        lbl_805D5668 = lbl_805D7780;
        some_id_805c6f74 |= 0x200820;
        set_global_flag__10TObjPlayerFv();
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_material_color(&self->color);
        draw__16TObjEneRe7BeruraFPv(self);
        clear_global_state__10TObjPlayerFv();
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        copy_vec4__13TRaderMapCoreFPvPv(&lbl_8058D4C0, &lbl_8050BEC0);
        some_id_805c6f74 = lbl_805D5660;
        clear_render_context__10TObjPlayerFv(self);
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void TObjPlayer__sub_801ABBAC(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_801ABBAC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801ABBAC, spC) == 0x4) ? 1 : -1];
    Stack_801ABBAC stack;
    s32 temp_r0;
    s32 temp_r3;
    u32 temp_r3_2;
    M2C_FIELD(arg0, s32 *, 0x1C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C8) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C8) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C4) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1C4) = 1;
        M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
        temp_r3 = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x158)));
        if (temp_r3 != 0) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (temp_r3 + 0x38));
        }
        stack.spC += lbl_805DC1A0;
        temp_r3_2 = __nw__7TObjectFUl((int) (0xD0));
        if (temp_r3_2 != 0U) {
            TPhotonMagicSquare__ct((int) (temp_r3_2), (void *) (arg0), (int) (3), (void *) (&stack.sp8), (int) (0xFA), (f32) (lbl_805DC1A4));
        }
    }
    if ((lbl_805DC1A8 == (f32) M2C_FIELD(arg0, s32 *, 0x1C8)) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1)) {
        begin_photon_summon_camera((void *) (arg0), (int) (5));
        M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0));
        TObjPlayer__sub_801A7748((void *) (arg0), (int) (2));
    }
    M2C_FIELD(arg0, s16 *, 0x1B8) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    update_state__10TSceneSoraFPv((void *) (arg0));
    advance_animation_playback((void *) (arg0));
    update_photon_blast_attachments((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C8) == 0x50) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1AC), (void *) (M2C_FIELD(arg0, s32 *, 0x148) + 0x44));
        spawn_particle_effect((void *) (arg0 + 0x1AC), (int) (0x133));
        TObjPlayer__sub_801AB6A0((void *)((void *) (arg0)));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C8);
    if ((temp_r0 == 0x56) || (temp_r0 == 0x5C) || (temp_r0 == 0x62) || (temp_r0 == 0x68) || (temp_r0 == 0x6E) || (temp_r0 == 0x74)) {
        TObjPlayer__sub_801AB6A0((void *)((void *) (arg0)));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C4) != 0) {
        play_persistent_sound((int) (0x4002462F), (void *) (arg0), (int) (0), (int) (0), (int) (0));
    }
}

}
