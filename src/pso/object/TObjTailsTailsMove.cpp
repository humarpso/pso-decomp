#include "pso/TObjTailsTailsMove.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
M2C_UNK advance_field28__23TAdSinglePlyChrSelectGCFPv();
M2C_UNK fn_800FFC6C();
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

extern M2C_UNK __vt__18TObjTailsTailsMove[];
extern void *lbl_805D2B58;

void run_task__18TObjTailsTailsMoveFv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjTailsTailsMove;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2B58;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
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
