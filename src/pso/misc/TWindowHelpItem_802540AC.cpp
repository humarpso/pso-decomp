#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_displayed_item_colored__15TWindowHelpItemFPvUi(void *arg0, u32 arg1);
void set_displayed_item_data__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2);
void set_items_and_refresh__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2);
void update_stat_disp2__15TWindowHelpItemFPv(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 TWindowHelpItem__sub_80104FCC(s32, s32, M2C_UNK *);
int TWindowHelpItem__sub_80255440(void*);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK set_flag_0x10__15TWindowHelpItemFPvi(s32, M2C_UNK);
int update_cursor_selection__15TWindowHelpItemFPv(void*);

void update_stat_disp2__15TWindowHelpItemFPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r28;
    s32 temp_r27;
    s32 temp_r3;
    u32 temp_r4;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
    if ((temp_r3 != 0) && (temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0), temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1), temp_r29 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2), temp_r28 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3), temp_r27 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4), (temp_r4 = M2C_FIELD(arg0, u32 *, 0x70), (temp_r4 == 0U) == 0))) {
        if (TWindowHelpItem__sub_80104FCC(temp_r3, temp_r4, &sp8) != 0) {
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r31, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r30, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r29, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r28, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r27, 1);
            return;
        }
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r31, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r30, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r29, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r28, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r27, 0);
    }
}

void set_displayed_item_colored__15TWindowHelpItemFPvUi(void *arg0, u32 arg1) {
    M2C_UNK var_r5;

    var_r5 = -0x100;
    if (arg1 == 0U) {
        var_r5 = -1;
    }
    set_displayed_item_data__15TWindowHelpItemFPvPvPv((void*)((void*)(arg0)), (void*)((void*)(arg1)), (void*)((void*)(var_r5)));
}

void set_displayed_item_data__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa4) = a2; *(void**)((char*)p + 0x70) = a1; update_cursor_selection__15TWindowHelpItemFPv(p); TWindowHelpItem__sub_80255440(p); }

void set_items_and_refresh__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa0) = a2; *(void**)((char*)p + 0x6c) = a1; update_cursor_selection__15TWindowHelpItemFPv(p); TWindowHelpItem__sub_80255440(p); }

}
