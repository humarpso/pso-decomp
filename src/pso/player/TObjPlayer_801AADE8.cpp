#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Color_801AAF00 { f32 a, r, g, b; };

struct Vec_801AAF00 { f32 x, y, z; };

struct Self_801AAF00 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801AAF00 pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x184 - 0x14E];
    Color_801AAF00 color;
    u8 pad5[0x1A0 - 0x194];
    s32 started;
};

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * alloc_tables__6TLobbyFPvii(void *, s32, s32);
extern u8 *lbl_805D5D28;
extern u32 lbl_805D5D30;
void TObjPlayer__sub_801AAE20(void);
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
extern Color_801AAF00 lbl_8050BEC0;
extern Color_801AAF00 lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *lbl_805D5D38;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_801AAF00(Self_801AAF00 *self);
}

extern "C" {

void TObjPlayer__sub_801AAE6C(void* a0);
void destroy_global_buffer__10TObjPlayerFv(void);
void update_all_slots__10TObjPlayerFPv(void *arg0);
M2C_UNK mark_enemy_body_contacts(void *);
M2C_UNK queue_photon_blast_hit(u16, M2C_UNK, M2C_UNK, f32);
M2C_UNK destroy_buffer_pair(void*, M2C_UNK);
u32 get_battle_param__10TObjPlayerFi(s32);
M2C_UNK init_all_slots__10TObjPlayerFv();
u32 obj_getField1c();

extern u32 lbl_805D5D30;

void destroy_global_buffer__10TObjPlayerFv(void) {
    if ((u32) lbl_805D5D30 != 0U) {
        destroy_buffer_pair((void*)lbl_805D5D30, 1);
    }
    lbl_805D5D30 = 0U;
}

    extern const float lbl_805DC158;

void TObjPlayer__sub_801AAE20(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x14);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (alloc_tables__6TLobbyFPvii((void *) temp_r3, M2C_FIELD(M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), void **, 0x98), s32 *, 0x2C), 0));
    }
    (*(s32 *)&lbl_805D5D30) = var_r0;
}

void TObjPlayer__sub_801AAE6C(void* a0) { *(float*)((char*)a0 + 0x184) = lbl_805DC158; *(float*)((char*)a0 + 0x188) = lbl_805DC158; *(float*)((char*)a0 + 0x18c) = lbl_805DC158; *(float*)((char*)a0 + 0x190) = lbl_805DC158; }

void update_all_slots__10TObjPlayerFPv(void *arg0) {
    s32 var_r31;

    init_all_slots__10TObjPlayerFv();
    mark_enemy_body_contacts(arg0);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x100000) {
        var_r31 = 0;
        do {
            if (get_battle_param__10TObjPlayerFi(var_r31) != 0U) {
                queue_photon_blast_hit((u16) obj_getField1c(), 0, 0, M2C_FIELD(arg0, f32 *, 0x150));
            }
            var_r31 += 1;
        } while (var_r31 < 0x10);
    }
}
void TObjPlayer__sub_801AAF00(Self_801AAF00 *self) {
    if (self->started != 0) {
        scroll_strip_uvs(lbl_805D5D38, self->f14C, 0);
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

}
