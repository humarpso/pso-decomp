#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_board__17TQuestThreadBoardFv(void);
M2C_UNK queue_destruction__7TObjectFv(void*);

extern u32 quest_thread_board;

void destroy_board__17TQuestThreadBoardFv(void) {
    if ((u32) quest_thread_board != 0U) {
        queue_destruction__7TObjectFv((void*)quest_thread_board);
    }
}

}
