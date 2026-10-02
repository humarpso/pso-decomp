#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct { f32 x; f32 y; f32 z; } Vec3;

struct Color_801ADDDC { f32 a, r, g, b; };

struct Vec_801ADDDC { f32 x, y, z; };

struct Self_801ADDDC {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801ADDDC pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x180 - 0x14E];
    Color_801ADDDC color;
    u8 pad5[0x1A4 - 0x190];
    s32 started;
};

typedef struct Vec_801ADD10 { f32 x, y, z; } Vec_801ADD10;

typedef struct Packet_801ADD10 { Vec_801ADD10 pos; u32 w[9]; } Packet_801ADD10;

extern "C" {
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
s32 translate_matrix(int, f32, f32, f32);
s32 set_global_param__8TObjFishFi(int);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern Color_801ADDDC lbl_8050BEC0;
extern Color_801ADDDC lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *lbl_805D5D58;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_801ADDDC(Self_801ADDDC *self);
void TPhotonLaser__ct(void *, void *, void *, u16);
s32 __nw__7TObjectFUl(M2C_UNK);
void TBoss4Zako__sub_803D8910(void *, void *);
extern Packet_801ADD10 lbl_80446EA8;
extern Vec_801ADD10 lbl_804C3A84[];
extern const f32 lbl_805DC22C;
void TObjPlayer__sub_801ADD10(u8 *self);
}

extern "C" {

void TObjPlayer__sub_801ADC6C(void);
void TObjPlayer__sub_801ADC78(void);
void TObjPlayer__sub_801ADC7C(void* a0);
void apply_photon_blast_effects__10TObjPlayerFPv(void *arg0);
void update_photon_blast(void *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK TCameraCtrl__sub_801A7310(void *, M2C_UNK);
M2C_UNK play_persistent_sound(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK mark_enemy_body_contacts(void *);
M2C_UNK queue_photon_blast_hit(u16, M2C_UNK, M2C_UNK, f32);
M2C_UNK update_photon_blast_attachments(void *);
M2C_UNK TObjPlayer__sub_801A7748(void *, M2C_UNK);
M2C_UNK TPhotonMagicSquare__ct(s32, void *, M2C_UNK, Vec3 *, M2C_UNK, f32);
s32 find_entity_by_id(u16);
M2C_UNK VecCopy__FP3VecPC3Vec(Vec3 *, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
u32 get_battle_param__10TObjPlayerFi(s32);
M2C_UNK init_all_slots__10TObjPlayerFv();
u32 obj_getField1c();
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
M2C_UNK update_state__10TSceneSoraFPv(void *);

    extern int lbl_805D5D50;
void TObjPlayer__sub_801ADC6C(void) { lbl_805D5D50 = 0; }

void TObjPlayer__sub_801ADC78(void) {  }

    extern const float lbl_805DC228;
void TObjPlayer__sub_801ADC7C(void* a0) { *(float*)((char*)a0 + 0x180) = lbl_805DC228; *(float*)((char*)a0 + 0x184) = lbl_805DC228; *(float*)((char*)a0 + 0x188) = lbl_805DC228; *(float*)((char*)a0 + 0x18c) = lbl_805DC228; }

void apply_photon_blast_effects__10TObjPlayerFPv(void *arg0) {
    s32 var_r31;

    init_all_slots__10TObjPlayerFv();
    mark_enemy_body_contacts(arg0);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x100000) {
        var_r31 = 0;
        do {
            if (get_battle_param__10TObjPlayerFi(var_r31) != 0U) {
                queue_photon_blast_hit((u16) obj_getField1c(), 2, 0, M2C_FIELD(arg0, f32 *, 0x150));
            }
            var_r31 += 1;
        } while (var_r31 < 0x10);
    }
}

extern const f64 lbl_80446ED8;
extern const f32 lbl_805DC230;
extern const f32 lbl_805DC234;
extern const f32 lbl_805DC238;
extern const f32 lbl_805DC23C;
extern const f32 lbl_805DC240;
extern const f32 lbl_805DC244;
extern const f32 lbl_805DC248;
extern const f32 lbl_805DC24C;
extern const f32 lbl_805DC250;
extern const f32 lbl_805DC254;

void TObjPlayer__sub_801ADD10(u8 *self) {
    Vec_801ADD10 position;
    u8 *laser;
    position.x = M2C_FIELD(self, f32 *, 0x38);
    position.y = lbl_805DC22C;
    position.z = M2C_FIELD(self, f32 *, 0x40);
    TBoss4Zako__sub_803D8910(&position, &lbl_804C3A84[M2C_FIELD(self, s32 *, 0x194)]);
    M2C_FIELD(self, s32 *, 0x194)++;
    Packet_801ADD10 packet = lbl_80446EA8;
    packet.pos.x = position.x;
    packet.pos.y = position.y;
    packet.pos.z = position.z;
    laser = (u8 *) __nw__7TObjectFUl(0x380);
    if (laser != NULL) {
        TPhotonLaser__ct(laser, &packet, self, M2C_FIELD(self, u16 *, 0x17C));
    }
}

void TObjPlayer__sub_801ADDDC(Self_801ADDDC *self) {
    if (self->started != 0) {
        scroll_strip_uvs(lbl_805D5D58, self->f14C, 0);
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(self->f24);
        TObjPlayer__sub_803D9B2C();
        translate_matrix(0, self->pos.x, self->pos.y, self->pos.z);
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

void update_photon_blast(void *arg0) {
    Vec3 sp8;
    s32 temp_r3;
    s32 temp_r3_2;

    M2C_FIELD(arg0, s32 *, 0x1A8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A8) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A8) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x1A4) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1A4) = 1;
        M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
        temp_r3 = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x17C));
        if (temp_r3 != 0) {
            VecCopy__FP3VecPC3Vec(&sp8, temp_r3 + 0x38);
        }
        sp8.y = sp8.y + lbl_805DC230;
        temp_r3 = __nw__7TObjectFUl(0xD0);
        if (temp_r3 != 0U) {
            TPhotonMagicSquare__ct(temp_r3, arg0, 3, &sp8, 0xD2, lbl_805DC234);
        }
    }
    if ((lbl_805DC238 == (f32) M2C_FIELD(arg0, s32 *, 0x1A8)) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1A4) == 1)) {
        TCameraCtrl__sub_801A7310(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
        set_field_b8__14TObjEnePanarmsFPvs(arg0, 0);
        TObjPlayer__sub_801A7748(arg0, 3);
    }
    M2C_FIELD(arg0, s16 *, 0x198) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    update_state__10TSceneSoraFPv(arg0);
    advance_animation_playback(arg0);
    update_photon_blast_attachments(arg0);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x1A8);
    if ((lbl_805DC23C == (f32) temp_r3_2) || (lbl_805DC240 == (f32) temp_r3_2) || (lbl_805DC244 == (f32) temp_r3_2) || (lbl_805DC248 == (f32) temp_r3_2) || (lbl_805DC24C == (f32) temp_r3_2) || (lbl_805DC250 == (f32) temp_r3_2)) {
        TObjPlayer__sub_801ADD10((u8 *)(arg0));
    }
    if (lbl_805DC254 == (f32) M2C_FIELD(arg0, s32 *, 0x1A8)) {
        apply_photon_blast_effects__10TObjPlayerFPv((void *)(arg0));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1A4) != 0) {
        play_persistent_sound(0x4002462F, arg0, 0, 0, 0);
    }
}

}
