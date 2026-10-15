#include "types.h"
#include "pso/TQuestThreadBoard.h"

extern "C" {

s32 queue_destruction__7TObjectFv(void*);

extern u32 quest_thread_board;

void TQuestThreadBoard::destroy_board() {
    if ((u32) quest_thread_board != 0U) {
        queue_destruction__7TObjectFv((void*)quest_thread_board);
    }
}

}
