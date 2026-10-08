#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DA3D8;
s32 TObjPlayer__sub_800D9560(f32 *arg0);
extern u32 player_corpse_mark_resource;
extern s32 player_particle_effect_enabled;
extern u8 lbl_80494A48[];
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void load_corpse_mark_resource(void);
}

extern "C" {

void clear_flag_and_notify__10TObjPlayerFv(void);
void destroy_static_lobby__10TObjPlayerFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK set_chunk_blend(M2C_UNK);
M2C_UNK set_chunk_material_override_pair(M2C_UNK, M2C_UNK);

extern u32 player_corpse_mark_resource;

void destroy_static_lobby__10TObjPlayerFv(void) {
    if ((u32) player_corpse_mark_resource != 0U) {
        TLobby__sub_8001FE7C((void*)player_corpse_mark_resource, 1);
        player_corpse_mark_resource = 0U;
    }
}

extern s32 some_id_805c6f74;

void load_corpse_mark_resource(void) {
    u8 *p = (u8 *)alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    if (p != 0) {
        p = load_resource_from_descriptor(p, 1, lbl_80494A48, 0, 0, 0);
    }
    player_corpse_mark_resource = (u32)p;
    player_particle_effect_enabled = 1;
}

s32 TObjPlayer__sub_800D9560(f32 *arg0) {
    return *arg0 > lbl_805DA3D8;
}

void clear_flag_and_notify__10TObjPlayerFv(void) {
    some_id_805c6f74 &= 0xFFFF77DF;
    set_chunk_material_override_pair(0xFF00, 0);
    set_chunk_blend(0x2500);
}

}
