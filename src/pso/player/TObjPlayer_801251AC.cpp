#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 TObjPlayer__sub_801251AC(void* p);
void TObjPlayer__sub_801251B4(void *arg0);
void reset_effect_slots__10TObjPlayerFPv(void* p);
void apply_11e618_twice__10TObjPlayerFPv(void* p);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
int TObjPlayer__sub_8011E618(void*);
int TObjPlayer__sub_8011E87C(void*, void*);
s32 update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, s32 *);
int TObjPlayer__sub_80120BBC(void*, void*);
s32 TObjPlayer__sub_80121CA8(void *);
s32 create__8TTecFoieFPvPvPvPv(void *, s32 *, s32, s32);

s16 TObjPlayer__sub_801251AC(void* p) { return *(s16*)((char*)p + 0x12); }
void TObjPlayer__sub_801251B4(void *arg0) {
    s32 sp8;
    void *temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 0, &sp8) != 0) {
            temp_r31 = M2C_FIELD(arg0, void **, 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r31, &sp8, M2C_FIELD(temp_r31, s32 *, 0x60), TObjPlayer__sub_80121CA8(arg0) + 2);
            TObjPlayer__sub_8011E618(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}
void reset_effect_slots__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80120BBC(p, (void*)49); TObjPlayer__sub_8011E87C(p, (void*)0); TObjPlayer__sub_8011E87C(p, (void*)1); TObjPlayer__sub_8011E87C(p, (void*)2); }
void apply_11e618_twice__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8011E618(p); TObjPlayer__sub_8011E618(p); }

}
