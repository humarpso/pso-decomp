#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__14TObjBoss1FloorFv(void);
s32 TMainTask__sub_8001A430();
M2C_UNK TOSignCave03__sub_803DB510(int);
M2C_UNK TObjFish__sub_803DA798(void *);
M2C_UNK TObjPlayer__sub_80083914(void *, void *);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK apply_single_screen_state__6TSceneFv();
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK draw_if_all_ready__10TObjPlayerFv();
M2C_UNK end_effect_render__13TParticleCtrlFv(int);
M2C_UNK func_80141618__Fv();
s32 is_any_teammate_in_state__10TObjPlayerFv();
M2C_UNK set_depth_buffer_settings_id__FUl(int);

extern u8 *lbl_805D4B50;
extern s32 lbl_805D4B54;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

void render__14TObjBoss1FloorFv(void) {
    s32 temp_r3;
    u8 *temp_r31;

    if ((is_any_teammate_in_state__10TObjPlayerFv() == 0) && ((check_v2_mode__9TObjEneDDFv() != 0) || (TMainTask__sub_8001A430() != 1))) {
        temp_r3 = some_id_805c6f74;
        lbl_805D5660 = temp_r3;
        some_id_805c6f74 = temp_r3 | 0x400;
        end_effect_render__13TParticleCtrlFv((int) (temp_r3));
        TObjPlayer__sub_803D9B2C();
        some_id_805c6f74 = 1;
        set_depth_buffer_settings_id__FUl((int) (3));
        draw_if_all_ready__10TObjPlayerFv();
        TObjFish__sub_803DA798((void *) (lbl_805D4B54));
        temp_r31 = (unsigned char *) (M2C_FIELD(M2C_FIELD(lbl_805D4B50, void **, 0x42C), void **, 0x58));
        TObjPlayer__sub_80083914((void *) (temp_r31 + 8), (void *) (temp_r31 + 0x14));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        apply_single_screen_state__6TSceneFv();
        func_80141618__Fv();
        TObjPlayer__sub_803D9B78();
        some_id_805c6f74 = lbl_805D5660;
    }
}

}
