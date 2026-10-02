#include "types.h"
#include "pso/misc/CharacterAppearance.h"
#include "pso/system/ChunkMaterialState.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028DE78_lbl_804D9164 {
    M2C_UNK value;
    u8 remaining[0x410];
};

struct C_8028DCCC { u8 pad0[0x31]; s8 f31; u8 pad32[0x1a]; f32 f4c; };

struct P_8028DCCC { f32 a; f32 b; };

extern "C" {
extern RecoveredGlobal_8028DE78_lbl_804D9164 lbl_804D9164;
u8 *TCharaMaking__sub_8028DE78(s32 arg0);
M2C_UNK TObjPlayer__sub_801415BC();
M2C_UNK TObjFish__sub_803E46BC(void *);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 TCharaMaking__data_805DD92C;
extern s32 lbl_805DD930;
extern const f32 lbl_805DD934;
s32 TCharaMaking__sub_8028DC74(s8 *arg0);
extern P_8028DCCC lbl_804D398C[];
extern const f32 lbl_805DD928;
extern const f32 TCharaMaking__data_805DD92C;
f32 TCharaMaking__sub_8028DCCC(void *p);
}

extern "C" {

void free_loaded_buffers__12TCharaMakingFPv(u8 *arg0);
s32 query_state__12TCharaMakingFv(void);
void setup_from_data__12TCharaMakingFii(M2C_UNK arg0, M2C_UNK arg1);
void update_body_parts__12TCharaMakingFPv(u8 *arg0);
M2C_UNK TCharaMaking__sub_8028DF98(void *);
M2C_UNK TCharaMaking__bind_appearance_texture_lists(void *, void *, void *, void *);
M2C_UNK TLobby__sub_803DA16C(void *);
s32 TObjCMMainMenu__sub_8028EBCC(void*);
M2C_UNK create__12TChCrLoadReqFPv(void *);

extern u32 lbl_805D6524;

s32 query_state__12TCharaMakingFv(void) {
    if ((u32) lbl_805D6524 == 0U) {
        return -1;
    }
    return TObjCMMainMenu__sub_8028EBCC((void*)lbl_805D6524);
}

extern const f32 TCharaMaking__data_805DD92C;

s32 TCharaMaking__sub_8028DC74(s8 *arg0) {
    s32 sum = 0;
    s32 i;
    s32 r;
    for (i = 0; i < 12 && arg0[i] != 0; i++) {
        sum += arg0[i];
    }
    sum %= 10;
    if (sum < 0 || sum >= 10) sum = 0;
    return sum;
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
f32 TCharaMaking__sub_8028DCCC(void *p) {
    C_8028DCCC *arg0 = (C_8028DCCC *)p;
    f32 a;
    f32 b;
    f32 v = arg0->f4c;
    s32 k = arg0->f31;
    a = lbl_804D398C[k].a;
    b = lbl_804D398C[k].b;
    if (v < lbl_805DD928 || v > TCharaMaking__data_805DD92C) {
        v = lbl_805DD928;
    }
    return v * (a - b) + b;
}
#pragma pop

#pragma push
#pragma opt_dead_assignments off
#pragma opt_propagation off
void TCharaMaking__draw_colored_hair(f32 farg0, s32 arg0, CharacterAppearanceFields *arg1, s32 arg2) {
    struct Color { f32 a, r, g, b; } color;
    s32 temp_r3;
    s32 second;
    s32 first;
    s32 temp_r8;
    temp_r8 = some_id_805c6f74;
    first = lbl_805D7784;
    second = lbl_805D7780;
    temp_r3 = temp_r8 & 0xFFFFFFDF;
    some_id_805c6f74 = temp_r3;
    lbl_805D5660 = temp_r8;
    lbl_805D5664 = first;
    lbl_805D5668 = second;
    some_id_805c6f74 = temp_r3 | lbl_805DD930;
    if (farg0 < TCharaMaking__data_805DD92C) {
        set_chunk_material_override_pair((int) (-1), (int) (0x800));
    }
    if (arg2 != 0) {
        TObjPlayer__sub_801415BC();
    } else {
        color.a = farg0;
        color.r = lbl_805DD934 * (f32) arg1->red;
        color.g = lbl_805DD934 * (f32) arg1->green;
        color.b = lbl_805DD934 * (f32) arg1->blue;
        set_chunk_material_color(&color.a);
    }
    TObjFish__sub_803E46BC((void *) (arg0));
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
    some_id_805c6f74 = lbl_805D5660;
}
#pragma pop

void setup_from_data__12TCharaMakingFii(M2C_UNK arg0, M2C_UNK arg1) {
    TCharaMaking__draw_colored_hair(TCharaMaking__data_805DD92C, arg0, (CharacterAppearanceFields *)arg1, 0);
}

typedef char RecoveredGlobal_8028DE78_lbl_804D9164_size[sizeof(RecoveredGlobal_8028DE78_lbl_804D9164) == 0x414 ? 1 : -1];
u8 *TCharaMaking__sub_8028DE78(s32 arg0) {
    s32 var_r3;
    var_r3 = arg0;
    if ((var_r3 < 0) || (var_r3 >= 0xD)) {
        var_r3 = 0;
    }
    return (u8 *)&lbl_804D9164.value + (var_r3 * 0x50);
}

void free_loaded_buffers__12TCharaMakingFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8B8) != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0xCFC) & 1)) {
            TLobby__sub_803DA16C(arg0 + 0xA1C);
        }
        M2C_FIELD(arg0, s32 *, 0x8B8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA24) != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0xCFC) & 2)) {
            TLobby__sub_803DA16C(arg0 + 0xB88);
        }
        M2C_FIELD(arg0, s32 *, 0xA24) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB90) != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0xCFC) & 4)) {
            TLobby__sub_803DA16C(arg0 + 0xCF4);
        }
        M2C_FIELD(arg0, s32 *, 0xB90) = 0;
    }
}

void update_body_parts__12TCharaMakingFPv(u8 *arg0) {
    TCharaMaking__sub_8028DF98(arg0 + 0x85C);
    M2C_FIELD(arg0, f32 *, 0xD48) = TCharaMaking__sub_8028DCCC((void *)(arg0 + 0x85C));
    TCharaMaking__bind_appearance_texture_lists(arg0 + 0x8B8, arg0 + 0xA24, arg0 + 0xB90, arg0 + 0x85C);
    create__12TChCrLoadReqFPv(arg0);
}

}
