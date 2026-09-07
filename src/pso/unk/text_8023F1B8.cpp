#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8023F1B8_lbl_804CCDA8 {
    M2C_UNK value;
    u8 remaining[0xB4];
};

struct RecoveredGlobal_8023F1B8_lbl_804CCE60 {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_8023F1B8_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 free_heap__13TParticleCtrlFv();
s32 TLobby__sub_800F9B84();
s32 TLobby__sub_800FD6A0(void *, int);
s32 render_tick__Fv();
s32 TLobby__sub_8022743C();
s32 refresh_render_state__6TLobbyFv();
s32 delete_all_task_children__9TMainTaskFv(void *);
extern RecoveredGlobal_8023F1B8_lbl_804CCDA8 lbl_804CCDA8;
extern RecoveredGlobal_8023F1B8_lbl_804CCE60 lbl_804CCE60;
extern RecoveredGlobal_8023F1B8_main_task main_task;
extern u32 lbl_805D63CC;
void TLobby__sub_8023F1B8(void);
}

extern "C" {

typedef char RecoveredGlobal_8023F1B8_lbl_804CCDA8_size[sizeof(RecoveredGlobal_8023F1B8_lbl_804CCDA8) == 0xB8 ? 1 : -1];
typedef char RecoveredGlobal_8023F1B8_lbl_804CCE60_size[sizeof(RecoveredGlobal_8023F1B8_lbl_804CCE60) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_8023F1B8_main_task_size[sizeof(RecoveredGlobal_8023F1B8_main_task) == 0x34 ? 1 : -1];
void TLobby__sub_8023F1B8(void) {
    refresh_render_state__6TLobbyFv();
    TLobby__sub_8022743C();
    if ((u32) lbl_805D63CC != 0U) {
        queue_destruction__7TObjectFv((void *) (lbl_805D63CC));
        lbl_805D63CC = 0U;
    }
    delete_all_task_children__9TMainTaskFv((void *) (&main_task.value));
    TLobby__sub_800FD6A0((void *) (&lbl_804CCE60.value), (int) (0x38));
    TLobby__sub_800FD6A0((void *) (&lbl_804CCDA8.value), (int) (0xB8));
    free_heap__13TParticleCtrlFv();
    TLobby__sub_800F9B84();
    render_tick__Fv();
}

}
