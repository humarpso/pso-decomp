#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8013630C_main_task { M2C_UNK value; u8 remaining[0x30]; };
typedef char RecoveredGlobal_8013630C_main_task_size[sizeof(RecoveredGlobal_8013630C_main_task) == 0x34 ? 1 : -1];

extern "C" {
s32 clear_flag3_all_tasks__9TMainTaskFv(void *);
s32 TWindow__close(int);
extern RecoveredGlobal_8013630C_main_task main_task;
extern u32 TLobby__data_805D55D8;
void handle_6x72_done_loading_into_game(void);
}

extern "C" {

void handle_6x72_done_loading_into_game(void) {
    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close((int) (TLobby__data_805D55D8));
        TLobby__data_805D55D8 = 0U;
    }
    clear_flag3_all_tasks__9TMainTaskFv((void *) (&main_task.value));
}

}
