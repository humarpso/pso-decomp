#include "types.h"
#include "pso/misc/TQuestThread.h"
#include "pso/object/TObjQuestCol.h"

extern "C" {

s32 update_trigger_state__16TObjQuestColBaseFf(f32);
int destroy_board__17TQuestThreadBoardFv(void*);

int TObjQuestCol::vfunc_16() { destroy_board__17TQuestThreadBoardFv(this); create__12TQuestThreadFi(this->m_b0); }

int TObjQuestCol::vfunc_15() {
    return (u32)__cntlzw(1 - update_trigger_state__16TObjQuestColBaseFf(*(f32 *)&this->unk_AC)) >> 5;
}

}
