#include "types.h"
#include "pso/misc/TWindowSubQuestBoard_8027D148.h"
#include "pso/misc/TWindowSubQuestBoard_8027D1E8.h"
#include "pso/unk/text_8027DA14.h"
#include "pso/misc/TWindowSubQuestBoard.h"
#include "pso/misc/TWindowSubQuestBoardSelect.h"

extern "C" {

void *__nw__7TObjectFUl(int);

extern void *TWindowSubQuestBoard__class_name;

}
TWindowSubQuestBoard::TWindowSubQuestBoard(TObject *arg1, void *arg2) : TObject(arg1) {
    void *o;
    *(void * *)&this->m_name = TWindowSubQuestBoard__class_name;
    *(void **)((s8 *)this + 0x24) = arg1;
    *(void **)((s8 *)this + 0x20) = arg2;
    o = __nw__7TObjectFUl(0x68);
    if (o != NULL) {
        o = TWindowSubQuestBoardSelect__ct((TWindowSubQuestBoardSelect *)((u8 *)o));
    }
    *(void **)((s8 *)this + 0x28) = o;
    this->m_2c = 0;
    this->m_1c = 0;
    TWindowCtrl__sub_8027D214();
}
extern "C" {

u8 TWindowSubQuestBoard::get_page_index() { return *(u8*)((char*)this + 0x61); }
int TWindowSubQuestBoardSelect::is_open() { return this->m_60 & 0x1; }
int TWindowSubQuestBoard__sub_8027D1DC(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
