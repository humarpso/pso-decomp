#include "types.h"
#include "pso/item/TUnk_804F0C08.h"

extern "C" {

void create__10TItemEffPGFPvPvPv(void *arg0, void *arg1, void *arg2);
void TItemEffPG__ct(void *);
void *__nw__7TObjectFUl(int);

extern s32 lbl_804F0C08[];

void *TUnk_804F0C08::initialize(void *arg1, void *arg2, void *arg3) {
    TItemEffPG__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804F0C08;
    *(void * *)&this->unk_D4 = arg3;
    return this;
}

void create__10TItemEffPGFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        ((TUnk_804F0C08 *)o)->initialize((void *)(arg0), (void *)(arg1), (void *)(arg2));
    }
}

}
