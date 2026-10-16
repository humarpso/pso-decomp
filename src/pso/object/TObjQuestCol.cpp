#include "types.h"

extern "C" {

s32 TObjQuestCol__vt13(void *arg0);
void TObjQuestCol__vt14(void* p);
s32 update_trigger_state__16TObjQuestColBaseFf(f32);
int destroy_board__17TQuestThreadBoardFv(void*);
int create__12TQuestThreadFi(void*);

void TObjQuestCol__vt14(void* p) { destroy_board__17TQuestThreadBoardFv(p); create__12TQuestThreadFi(*(void**)((char*)p + 0xb0)); }

s32 TObjQuestCol__vt13(void *arg0) {
    return (u32)__cntlzw(1 - update_trigger_state__16TObjQuestColBaseFf(*(f32 *)((s8 *)arg0 + 0xAC))) >> 5;
}

}
