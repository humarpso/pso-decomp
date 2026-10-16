#include "types.h"
#include "pso/misc/TWindowSubQuestBoard.h"
#include "pso/misc/TWindowSubQuestBoardSelect.h"
#include "pso/misc/TWindowSubQuestBoard.h"

extern "C" {

void *__ct__20TWindowSubQuestBoardFP7TObjectPv(void *arg0, void *arg1, void *arg2);
int TWindowSubQuestBoard__sub_8027D1DC(void* p);
void TWindowCtrl__sub_8027D214(void);
void *TWindowSubQuestBoardSelect__ct(void *);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern s32 __vt__20TWindowSubQuestBoard[];
extern void *TWindowSubQuestBoard__class_name;

}
TWindowSubQuestBoard::TWindowSubQuestBoard(TObject *arg1, void *arg2) : TObject(arg1) {
    void *o;
    *(void **)((s8 *)this + 0x0) = TWindowSubQuestBoard__class_name;
    *(void **)((s8 *)this + 0x24) = arg1;
    *(void **)((s8 *)this + 0x20) = arg2;
    o = __nw__7TObjectFUl(0x68);
    if (o != NULL) {
        o = TWindowSubQuestBoardSelect__ct(o);
    }
    *(void **)((s8 *)this + 0x28) = o;
    *(u32 *)((s8 *)this + 0x2C) = 0;
    *(u8 *)((s8 *)this + 0x1C) = 0;
    TWindowCtrl__sub_8027D214();
}
extern "C" {

u8 TWindowSubQuestBoard::get_page_index() { return *(u8*)((char*)this + 0x61); }
int TWindowSubQuestBoardSelect::is_open() { return this->m_60 & 0x1; }
int TWindowSubQuestBoard__sub_8027D1DC(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
