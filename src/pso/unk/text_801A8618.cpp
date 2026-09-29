#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern s32 lbl_8050E880[];
void TObjPlayer__sub_801A8840(void);
s32 is_split_screen();
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 get_stat_by_key_state__10TObjPlayerFPv(void *);
u16 get_section_id__10TObjPlayerFPv(void *);
void *TPlayerBattleCtrl4P__sub_801BA74C(u32);
extern s32 lbl_805D53A0;
s32 TObjPlayer__sub_801A8618(u32 owner_id, void *records);
}

extern "C" {

s32 TObjPlayer__sub_801A8618(u32 owner_id, void *records) {
    void *local;
    void *owner;
    s16 group;
    if (is_split_screen() != 0) {
        return 1;
    }
    if (lbl_805D53A0 == get_section_id__10TObjPlayerFPv(records)) {
        return 1;
    }
    local = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (local == NULL) {
        return 0;
    }
    group = get_stat_by_key_state__10TObjPlayerFPv(local);
    owner = TPlayerBattleCtrl4P__sub_801BA74C(owner_id);
    if (owner != NULL) {
        if (get_field_3e4__10TObjPlayerFPv(local) == get_field_3e4__10TObjPlayerFPv(owner) && group == (s16) get_stat_by_key_state__10TObjPlayerFPv(owner)) {
            return 1;
        }
    }
    return 0;
}

void TObjPlayer__sub_801A8840(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        lbl_8050E880[i] = 0;
    }
}

}
