#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_802F33C8 { f32 x, y, z; };

struct Ent_802F33C8 { u8 pad0[0x38]; f32 x, y, z; u8 pad44[0x60 - 0x44]; s32 rot; };

extern "C" {
u16 get_part_count_plus__12TBoss8DragonFPvi(void *, s32);
s32 get_enemy_entity();
extern u8 *lbl_805D6978;
s32 TBoss8Dragon__sub_802F3348(s32 arg0);
u16 get_part_count_plus__12TBoss8DragonFPvi(void *, s32);
extern u8 *lbl_805D6978;
u16 TBoss8Dragon__sub_802F3388(s32 arg0);
f32 calc_random_ratio__10TObjPlayerFv(void *);
void subtractive_rng_seed(void *, s32);
void init_single_player_chr_select__6TLobbyFPv(void *);
s32 get_enemy_entity();
void TBoss8Dragon__sub_802F3A48(void *, Vec_802F33C8 *, u16, s32, s32);
u16 get_part_count_plus__12TBoss8DragonFPvi(void *, s32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern u8 *lbl_805D6978;
extern const f32 lbl_805DED40;
extern const f32 lbl_805DED44;
void TBoss8Dragon__sub_802F33C8(s32 n, s32 arg1, s32 arg2);
}

extern "C" {

s32 TBoss8Dragon__sub_802F3348(s32 arg0) {
    if ((void *) lbl_805D6978 == NULL) {
        return 0;
    }
    get_part_count_plus__12TBoss8DragonFPvi(lbl_805D6978, arg0);
    return get_enemy_entity();
}
u16 TBoss8Dragon__sub_802F3388(s32 arg0) {
    if ((void *) lbl_805D6978 == NULL) {
        return 0xFFFFU;
    }
    return get_part_count_plus__12TBoss8DragonFPvi(lbl_805D6978, arg0);
}
void TBoss8Dragon__sub_802F33C8(s32 n, s32 arg1, s32 arg2) {
    Vec_802F33C8 v;
    u8 buf[0xEC];
    s32 ang;
    s32 step;
    s32 i;
    Ent_802F33C8 *e;
    init_single_player_chr_select__6TLobbyFPv(buf);
    if (n <= 5 && lbl_805D6978 != NULL) {
        subtractive_rng_seed(buf, arg2);
        ang = (s32)(lbl_805DED40 * calc_random_ratio__10TObjPlayerFv(buf));
        step = 0x10000 / (n + 1);
        get_part_count_plus__12TBoss8DragonFPvi(lbl_805D6978, 0);
        e = (Ent_802F33C8 *)get_enemy_entity();
        e->x = lbl_805DED44 * TBoss8Dragon__sub_803D64C0(ang);
        e->z = lbl_805DED44 * TBoss8Dragon__sub_803D64DC(ang);
        e->rot = (u16)(ang + 0x8000);
        for (i = 0; i < n; i++) {
            ang += step;
            v.x = lbl_805DED44 * TBoss8Dragon__sub_803D64C0(ang);
            v.y = e->y;
            v.z = lbl_805DED44 * TBoss8Dragon__sub_803D64DC(ang);
            TBoss8Dragon__sub_802F3A48(lbl_805D6978, &v, ang + 0x8000, arg1, i + 1);
        }
    }
}

}
