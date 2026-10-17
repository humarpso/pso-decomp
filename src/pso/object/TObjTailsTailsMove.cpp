#include "pso/TObjTailsTailsMove.h"
#include "pso/object/TObjTailsTailsMove.h"

#include "types.h"
#include "pso/item/TItemObject.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 advance_field28__23TAdSinglePlyChrSelectGCFv();
s32 sub_800FFC6C__18TObjTailsTailsMoveFv();
void *__nw__7TObjectFUl(int);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__18TObjTailsTailsMove[];
extern void *TObjTailsTailsMove__name;

void TObjTailsTailsMove::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x24);
    switch (temp_r0) {
    case 0:
        sub_800FFC6C__18TObjTailsTailsMoveFv();
        return;
    case 1:
        advance_field28__23TAdSinglePlyChrSelectGCFv();
        return;
    }
}

TObjTailsTailsMove::~TObjTailsTailsMove() {}
void *TObjTailsTailsMove__ct(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjTailsTailsMove;
    *(void * *)&((TObjTailsTailsMove *)arg0)->m_name = TObjTailsTailsMove__name;
    *(void **)((s8 *)arg0 + 0x1C) = arg1;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    return arg0;
}

void *TObjTailsTailsMove::create(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TObjTailsTailsMove__ct(o, arg0);
    }
    return o;
}

int TObjTailsTailsMove__sub_800FFE04(void) { return 0; }
void TObjTailsTailsMove__sub_800FFE0C(void) {  }
void TObjTailsTailsMove__sub_800FFE10(void) {  }
int TObjTailsTailsMove__sub_800FFE14(void) { return 0; }

}
