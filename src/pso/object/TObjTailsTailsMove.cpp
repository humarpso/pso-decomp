#include "pso/TObjTailsTailsMove.h"

#include "types.h"

extern "C" {
s32 advance_field28__23TAdSinglePlyChrSelectGCFPv();
s32 fn_800FFC6C();
void *__nw__7TObjectFUl(int);
void *TObjTailsTailsMove__ct(void *, void *);
}

extern "C" {

void *TObjTailsTailsMove__ct(void *arg0, void *arg1);
int TObjTailsTailsMove__sub_800FFE04(void);
void TObjTailsTailsMove__sub_800FFE0C(void);
void TObjTailsTailsMove__sub_800FFE10(void);
int TObjTailsTailsMove__sub_800FFE14(void);
void __ct__7TObjectFP7TObject(void *);
int clear_item_flags__10TObjPlayerFPvUi(void*, int);
int set_flag_1024__11TItemObjectFPv(void* p);
s32 test_item_flags__10TObjPlayerFPvUi(s32, s32);

extern s32 __vt__18TObjTailsTailsMove[];
extern void *TObjTailsTailsMove__name;

void run_task__18TObjTailsTailsMoveFv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x24);
    switch (temp_r0) {
    case 0:
        fn_800FFC6C();
        return;
    case 1:
        advance_field28__23TAdSinglePlyChrSelectGCFPv();
        return;
    }
}

TObjTailsTailsMove::~TObjTailsTailsMove() {}
void *TObjTailsTailsMove__ct(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjTailsTailsMove;
    *(void **)((s8 *)arg0 + 0x0) = TObjTailsTailsMove__name;
    *(void **)((s8 *)arg0 + 0x1C) = arg1;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    return arg0;
}

void * create__18TObjTailsTailsMoveFPv(void *arg0) {
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
