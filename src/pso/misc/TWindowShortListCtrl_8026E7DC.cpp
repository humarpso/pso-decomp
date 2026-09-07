#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
void TWindowShortListCtrl__sub_8026F66C(u8 *arg0);
u8 * TLobby__sub_80101AB0(s32);
u8 get_field_ec__12TOSwitchItemFPv(void *);
s32 TMainCursor__sub_8013B41C(M2C_UNK, s32, u8, u8);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
u32 TItemObject__sub_80115DE8(int);
M2C_UNK set_slot__20TWindowActionPaletteFPvUc(int, int);
M2C_UNK set_mode__20TWindowActionPaletteFPvUc(int, int);
M2C_UNK TMainCursor__sub_8013DFC4(int);
void TWindowShortListCtrl__sub_8026E93C(u32 arg0, u32 arg1);
extern M2C_UNK lbl_805DD380;
void TWindowShortListCtrl__sub_8026EA48(u8 *arg0);
}

extern "C" {

int TWindowShortListCtrl__sub_8026EBB0(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void *__dt__20TWindowShortListCtrlFv(void *arg0, s16 arg1);
void *create_window__20TWindowShortListCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
void destroy_children__20TWindowShortListCtrlFPv(void *arg0);
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
s16 get_selected_index__20TWindowShortListCtrlFPv(void* p);
s32 is_technique_usable__20TWindowShortListCtrlFPv(u8 *arg0);
void render__20TWindowShortListCtrlFv(void);
void set_card_window_flags__20TWindowShortListCtrlFii(s32 arg0, s32 arg1);
void set_displayed_item__20TWindowShortListCtrlFPvi(void *arg0, s32 arg1);
void *TCheckRoomSequence__sub_802664A8(s32, s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowChat__sub_8024AD30(s32);
s32 TWindowCtrl__sub_8024A1A8();
s32 TWindowCtrl__sub_8024AF74(s32);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(u32);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK clear_flag_8__11TWindowCtrlFv();
M2C_UNK init_parts__10TObjPlayerFPv(s32);
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);
s32 set_flag70_bit100__17TWindowOptionCtrlFPv(void *);
s32 set_flag70_bit10__16TObjCityMainWarpFPv();

void set_displayed_item__20TWindowShortListCtrlFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x38))) {
        M2C_FIELD(arg0, s32 *, 0x38) = arg1;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, u32 *, 0x34));
    }
}

s32 is_technique_usable__20TWindowShortListCtrlFPv(u8 *arg0) {
    u32 temp_r3;
    u8 *temp_r31;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)((int) (M2C_FIELD(arg0, s32 *, 0x24))));
    if (temp_r3 == 0U) {
        return 0;
    }
    temp_r31 = (unsigned char *) (temp_r3 + 0x85C);
    if (temp_r31 == NULL) {
        return 0;
    }
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        return 1;
    }
    return ((u32) M2C_FIELD(temp_r31, u32 *, 0x34) >> 4U) & 1;
}

void TWindowShortListCtrl__sub_8026E93C(u32 arg0, u32 arg1) {
    s32 var_r30;
    s32 var_r4;
    s32 var_r5;
    u32 temp_r3;
    u32 var_r29;
    u32 var_r31;
    u32 var_r3;
    u8 var_r6;
    var_r31 = arg0;
    var_r3 = arg1;
    var_r30 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r3));
    if (var_r30 != 0) {
        var_r29 = M2C_FIELD(var_r30, u32 *, 0x424);
        if (var_r29 != 0U) {
            var_r3 = var_r31;
            temp_r3 = (unsigned long) (TLobby__sub_80101AB0((s32) var_r3));
            var_r31 = temp_r3;
            if ((var_r31 != 0) && (get_field_ec__12TOSwitchItemFPv((void *) temp_r3) == 3)) {
                var_r3 = var_r31;
                var_r31 = TItemObject__sub_80115DE8((int) (var_r3));
                if ((s32) var_r31 != -1) {
                    var_r4 = var_r30;
                    var_r3 = var_r29 + 0x520;
                    var_r6 = (u8) var_r31;
                    var_r5 = 4;
                    if (TMainCursor__sub_8013B41C((s32) var_r3, var_r4, 4U, var_r6) != 0) {
                        var_r3 = var_r29 + 0x520;
                        var_r4 = 4;
                        set_mode__20TWindowActionPaletteFPvUc((int) (var_r3), (int) (4));
                        var_r3 = var_r29 + 0x520;
                        var_r4 = (s32) (u8) var_r31;
                        set_slot__20TWindowActionPaletteFPvUc((int) (var_r3), (int) (var_r4));
                        var_r3 = var_r29 + 0x520;
                        TMainCursor__sub_8013DFC4((int) (var_r3));
                    }
                }
            }
        }
    }
}

void destroy_children__20TWindowShortListCtrlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
}

void TWindowShortListCtrl__sub_8026EA48(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) M2C_FIELD(((u8 *)(&lbl_805DD380) + (s8) M2C_FIELD(arg0, u8 *, 0x1C)), u8 *, 0);
}

int TWindowShortListCtrl__sub_8026EBB0(void* a0, void* a1, void* a2) { return 0; }

void *create_window__20TWindowShortListCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r31;

    temp_r31 = TCheckRoomSequence__sub_802664A8(arg1, 0x13, M2C_FIELD(arg0, s32 *, 0x24));
    set_flag70_bit10__16TObjCityMainWarpFPv();
    M2C_FIELD(temp_r31, s32 *, 0x5C) = 0x01000000;
    set_flag70_bit100__17TWindowOptionCtrlFPv(temp_r31);
    TWindowShortListCtrl__sub_8026EBB0((void*)((void*)(arg0)), (void*)((void*)(temp_r31)), (void*)((void*)(arg2)));
    return temp_r31;
}
void render__20TWindowShortListCtrlFv(void) {  }

extern void *__vt__20TWindowShortListCtrl[];

void *__dt__20TWindowShortListCtrlFv(void *arg0, s16 arg1) {
    s32 temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = __vt__20TWindowShortListCtrl;
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(M2C_FIELD(arg0, s32 *, 0x24)));
        if ((temp_r3 != 0) && (TWindowCtrl__sub_8024AF74(M2C_FIELD(arg0, s32 *, 0x24)) == 0) && (TWindowCtrl__sub_8024A1A8() == 0)) {
            init_parts__10TObjPlayerFPv(temp_r3);
        }
        TWindowChat__sub_8024AD30(M2C_FIELD(arg0, s32 *, 0x24));
        clear_flag_8__11TWindowCtrlFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void set_card_window_flags__20TWindowShortListCtrlFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 0x10, 0xFFFCFFFF);
}
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p) { return *(s16*)((char*)p + 0x78); }

void TWindowShortListCtrl__sub_8026F66C(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x7A) = get_cursor_pos__20TWindowShortListCtrlFPv((void*)arg0);
}

s16 get_selected_index__20TWindowShortListCtrlFPv(void* p) { return *(s16*)((char*)p + 0x7a); }

}
