#include "types.h"

extern "C" {

void destroy_board__17TQuestThreadBoardFv(void);
s32 queue_destruction__7TObjectFv(void*);

extern u32 quest_thread_board;

void destroy_board__17TQuestThreadBoardFv(void) {
    if ((u32) quest_thread_board != 0U) {
        queue_destruction__7TObjectFv((void*)quest_thread_board);
    }
}

}
