#include "types.h"

struct RecoveredGlobal_802841FC_lbl_804D2CE0 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_802841FC___vt__28TWindowSubSymbolChatFaceType {
    s32 value;
    u8 remaining[0x18];
};

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * construct_base__9TWindowDDFPvPvsPv(void *, s32, s16, s32);
s32 construct_type1_heading__20TWindowSubStatusDispFPvii(s32, s32, s32);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_802841FC_lbl_804D2CE0 lbl_804D2CE0;
extern RecoveredGlobal_802841FC___vt__28TWindowSubSymbolChatFaceType __vt__28TWindowSubSymbolChatFaceType;
extern s32 TWindowSubSymbolChatFaceType__name;
u8 *TWindowSubSymbolChatFaceType__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_802841FC_lbl_804D2CE0_size[sizeof(RecoveredGlobal_802841FC_lbl_804D2CE0) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_802841FC___vt__28TWindowSubSymbolChatFaceType_size[sizeof(RecoveredGlobal_802841FC___vt__28TWindowSubSymbolChatFaceType) == 0x1C ? 1 : -1];
u8 *TWindowSubSymbolChatFaceType__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_r31;
    construct_base__9TWindowDDFPvPvsPv(arg0, (s32) &lbl_804D2CE0.value, 4, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__28TWindowSubSymbolChatFaceType.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowSubSymbolChatFaceType__name;
    *(s8 *)((s8 *)arg0 + 0x60) = 0;
    *(s8 *)((s8 *)arg0 + 0x61) = 0;
    *(s8 *)((s8 *)arg0 + 0x62) = 0;
    *(s32 *)((s8 *)arg0 + 0x64) = arg2;
    var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x24);
    if (var_r31 != 0) {
        var_r31 = construct_type1_heading__20TWindowSubStatusDispFPvii(var_r31, get_message_10__20TWindowSubStatusDispFPv((int) (0x33)), (s32) *(s16 *)((s8 *)arg0 + 0x20));
    }
    *(s32 *)((s8 *)arg0 + 0x68) = var_r31;
    return arg0;
}

}
