#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8027DA14_lbl_804D19A8 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8027DA14___vt__26TWindowSubQuestBoardSelect {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TQuestThread__sub_801F5E58(void);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 get_field_20__17TWindowSubComCardFPv(void *);
u8 * TWindowSubComCard__sub_8026CBB8(s32);
s32 TWindowSubStatusDisp__sub_802880BC(s32, s32, s32);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
u32 TWindowSubStatusDisp__sub_80144D68();
M2C_UNK TWindowDD__sub_802466E0(void *, void *, int, int);
M2C_UNK TWindowSubStatusDisp__sub_8025AC50(int, int, int);
M2C_UNK update_slot_display_flags__26TWindowSubQuestBoardSelectFPv(void *, f32, f32);
M2C_UNK select_next__26TWindowSubQuestBoardSelectFPv(void *);
extern RecoveredGlobal_8027DA14_lbl_804D19A8 lbl_804D19A8;
extern RecoveredGlobal_8027DA14___vt__26TWindowSubQuestBoardSelect __vt__26TWindowSubQuestBoardSelect;
extern s32 lbl_805D3A80;
extern const f32 lbl_805DD6B8;
extern const f32 lbl_805DD6BC;
u8 *TWindowSubQuestBoardSelect__ct(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8027DA14_lbl_804D19A8_size[sizeof(RecoveredGlobal_8027DA14_lbl_804D19A8) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8027DA14___vt__26TWindowSubQuestBoardSelect_size[sizeof(RecoveredGlobal_8027DA14___vt__26TWindowSubQuestBoardSelect) == 0x1C ? 1 : -1];
u8 *TWindowSubQuestBoardSelect__ct(u8 *arg0) {
    f32 temp_f2;
    s32 temp_r30;
    s32 var_r30;
    TWindowDD__sub_802466E0((void *) (arg0), (void *) (&lbl_804D19A8.value), (int) (4), (int) (TWindowSubComCard__sub_8026CBB8(0x70)));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__26TWindowSubQuestBoardSelect.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3A80;
    var_r30 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x24);
    if (var_r30 != 0) {
        var_r30 = TWindowSubStatusDisp__sub_802880BC(var_r30, get_message_10__20TWindowSubStatusDispFPv((int) (0x2B)), (s32) M2C_FIELD(arg0, s16 *, 0x20));
    }
    M2C_FIELD(arg0, s32 *, 0x64) = var_r30;
    M2C_FIELD(arg0, s8 *, 0x60) = 0;
    temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    TWindowSubStatusDisp__sub_8025AC50((int) (temp_r30), (int) (TQuestThread__sub_801F5E58()), (int) (0));
    get_field_20__17TWindowSubComCardFPv((void *) temp_r30);
    temp_f2 = (f32) TWindowSubStatusDisp__sub_80144D68();
    M2C_FIELD(temp_r30, f32 *, 8) = (f32) -((lbl_805DD6BC * temp_f2) - lbl_805DD6B8);
    M2C_FIELD(arg0, s8 *, 0x61) = -1;
    update_slot_display_flags__26TWindowSubQuestBoardSelectFPv((void *) (arg0), (f32) (lbl_805DD6BC), (f32) (temp_f2));
    select_next__26TWindowSubQuestBoardSelectFPv((void *) (arg0));
    return arg0;
}
#pragma pop

}
