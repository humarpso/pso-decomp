#include "types.h"
#include "pso/misc/TQuestListVM_8007EAF8.h"
#include "pso/misc/TWindowSubComCardList_8026CB08.h"
#include "pso/misc/TWindowSubComCardList.h"

extern "C" {

s32 delete_if_allocated(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

    extern const float lbl_805DD270;
void TWindowSubComCardList::init(int a1, int a2, int a3) { *(unsigned char *)&this->m_name = a1; *(unsigned char*)((char*)this + 0x1) = a2; *(int *)&this->m_flags = a3; *(float *)&this->m_prev = lbl_805DD270; }

}
