#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802DDF40 {
    s32 sp8;
    s32 spC;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi();
M2C_UNK TWindow__close(void *);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5BCC(s32, s32 *, s32 *);
M2C_UNK init__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(M2C_UNK);
s32 count_ready__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C658C();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6920();
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0024(s32, s32);
M2C_UNK set_select_mode__22TAdMultiPlyChrSelectGCFii(s32, M2C_UNK);
M2C_UNK set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 get_ready_state__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK TAdGameStartGC__sub_802E644C(s32);
s32 TAdMultiPlyChrSelectGC__sub_8030E2E4(void *, M2C_UNK);
M2C_UNK TAdChrMoveEffectGC__sub_803490AC();
void TAdMultiPlyChrSelectGC__sub_802DDF40(void *arg0);
}

extern "C" {

void update_select__22TAdMultiPlyChrSelectGCFPv(void *arg0);
u32 open_yes_no_window__16TAdChrSelASlotGCFiii(u32, M2C_UNK *, s32);
s32 TAdChrSelBSlotGC__sub_8030E378(s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802DBDE0(void *, s32);
s32 TAdMultiPlyChrSelectGC__sub_802DC294(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
M2C_UNK close__17TWindowSubComCardFPv(void *);
u32 __ct__9TAdFadeGCFv(u32, s32, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
u32 TAdSinglePlyChrSelectGC__sub_801FE3E4(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FE800(s32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_selection__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 TAdSinglePlyChrSelectGC__sub_802E012C(s32, M2C_UNK);
M2C_UNK set_status_value__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

M2C_UNK load_tables(s32);
extern M2C_UNK lbl_80472860[];
extern M2C_UNK lbl_8050E3B8[];
extern s32 tl_fade;

void update_select__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r30;
    s32 temp_r5;
    u32 var_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x90));
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x8C));
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    temp_r5 = get_instance__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C)) * 0x50;
    if (TWindowShortListCtrl__check_controller_button((M2C_UNK *)((s8 *)lbl_8050E3B8 + temp_r5 + 0x20), 2, temp_r5) != 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            TAdMultiPlyChrSelectGC__sub_802C6A10();
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    temp_r30 = TAdMultiPlyChrSelectGC__sub_802DC294(arg0, get_cursor__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C)));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) != TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C))) {
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
        if (TAdSinglePlyChrSelectGC__sub_801FE3E4(temp_r30) != 0U) {
            load_tables(temp_r30);
            set_status_value__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), temp_r30);
            set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 2);
            if ((TAdSinglePlyChrSelectGC__sub_802E012C(temp_r30, 1) != 0U) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x40) = 1;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x30) = TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x50) != 0) {
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x15;
        return;
    }
    if (get_selection__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C)) != 0) {
        load_tables(temp_r30);
        if (TAdSinglePlyChrSelectGC__sub_801FE800(temp_r30) != 0) {
            if (TAdChrSelBSlotGC__sub_8030E378(M2C_FIELD(arg0, s32 *, 0x6C), temp_r30) == 0) {
                M2C_FIELD(arg0, s32 *, 0x88) = TAdMultiPlyChrSelectGC__sub_802DBDE0(arg0, get_instance__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C)));
                M2C_FIELD(arg0, s32 *, 0x20) = 0xF;
                return;
            }
            var_r0 = __nw__7TObjectFUl(0x38);
            if (var_r0 != 0U) {
                var_r0 = __ct__9TAdFadeGCFv(var_r0, tl_fade, 0);
            }
            M2C_FIELD(arg0, u32 *, 0x74) = var_r0;
            M2C_FIELD(arg0, u32 *, 0x8C) = open_yes_no_window__16TAdChrSelASlotGCFiii(M2C_FIELD(arg0, u32 *, 0x68), lbl_80472860, get_instance__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 0x10;
            return;
        }
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
    }
}
void TAdMultiPlyChrSelectGC__sub_802DDF40(void *arg0) {
    Stack_802DDF40 stack;
    s32 temp_r31;
    s32 temp_r3;
    if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
        TAdChrMoveEffectGC__sub_803490AC();
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
        TAdMultiPlyChrSelectGC__sub_802C6920();
        TAdMultiPlyChrSelectGC__sub_802C658C();
        if ((is_slot_active__23TAdSinglePlyChrSelectGCFUi() == 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x54) == 0)) {
            TAdMultiPlyChrSelectGC__sub_802C5BCC(TAdMultiPlyChrSelectGC__sub_802C6920(), &stack.spC, &stack.sp8);
            init__22TAdMultiPlyChrSelectGCFv();
            set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x5C), stack.spC);
            TAdMultiPlyChrSelectGC__sub_802E0024(M2C_FIELD(arg0, s32 *, 0x5C), stack.sp8);
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x84));
        M2C_FIELD(arg0, u32 *, 0x84) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x88));
        M2C_FIELD(arg0, u32 *, 0x88) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = TAdMultiPlyChrSelectGC__sub_8030E2E4(arg0, 1);
    set_select_mode__22TAdMultiPlyChrSelectGCFii(M2C_FIELD(arg0, s32 *, 0x5C), 0);
    set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
    if ((get_ready_state__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x78)) == 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() > 1) && (TAdMultiPlyChrSelectGC__sub_802C64D0(0) != 0)) {
        temp_r31 = count_ready__22TAdMultiPlyChrSelectGCFv();
        temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6558();
        if (temp_r3 != temp_r31) {
            TAdGameStartGC__sub_802E644C(M2C_FIELD(arg0, s32 *, 0x78));
        }
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}

}
