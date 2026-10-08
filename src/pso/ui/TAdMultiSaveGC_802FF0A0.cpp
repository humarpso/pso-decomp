#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802FF0D8_lbl_804E6570 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802FF0D8_lbl_804E6570_size[sizeof(RecoveredGlobal_802FF0D8_lbl_804E6570) == 0x10 ? 1 : -1];

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_802FF0D8_lbl_804E6570 lbl_804E6570;
extern u32 lbl_805D69E0;
void load_shared_resource__14TAdMultiSaveGCFv(void);
s32 get_state_flag__9TMainTaskFv(void);
void render__14TAdMultiSaveGCFv(void *self);
}

extern "C" {

void free_window__14TAdMultiSaveGCFv(void);
void TLobby__sub_8001FE7C(void*, int);
int begin_change_game_mode__21TAdMultiChgGameModeGCFv(void);
void queue_destruction__14TAdMultiSaveGCFv(void);
int queue_destruction__7TObjectFv(void);

extern u32 lbl_805D69E0;

void free_window__14TAdMultiSaveGCFv(void) {
    if ((u32) lbl_805D69E0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D69E0, 1);
        lbl_805D69E0 = 0U;
    }
}

void load_shared_resource__14TAdMultiSaveGCFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &lbl_804E6570.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D69E0) = var_r0;
}
void render__14TAdMultiSaveGCFv(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) return;
}

}
