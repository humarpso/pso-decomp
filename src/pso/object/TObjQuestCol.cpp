#include "types.h"
#include "pso/object/TObjQuestCol.h"

extern "C" {

s32 vfunc_15__12TObjQuestColFv(void *arg0);
void vfunc_16__12TObjQuestColFv(void* p);
s32 update_trigger_state__16TObjQuestColBaseFf(f32);
int destroy_board__17TQuestThreadBoardFv(void*);
int create__12TQuestThreadFi(void*);

int TObjQuestCol::vfunc_16() { destroy_board__17TQuestThreadBoardFv(this); create__12TQuestThreadFi(*(void**)((char*)this + 0xb0)); }

int TObjQuestCol::vfunc_15() {
    return (u32)__cntlzw(1 - update_trigger_state__16TObjQuestColBaseFf(*(f32 *)((s8 *)this + 0xAC))) >> 5;
}

}
