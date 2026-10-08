#include "pso/TObjTagChallenge.h"

extern "C" {
s32 TWindowCtrlMain__sub_8024CE58(void);
void close_active_window__11TWindowCtrlFv(void);
void fn_800740DC(void);
void open_status_111__11TWindowCtrlFv(void);
}

void TObjTagChallenge::run_task() {
    if (TWindowCtrlMain__sub_8024CE58() != 0) {
        close_active_window__11TWindowCtrlFv();
        fn_800740DC();
        open_status_111__11TWindowCtrlFv();
        queue_destruction();
    }
}

TObjTagChallenge::~TObjTagChallenge() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjTagChallenge__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__16TObjTagChallenge[];
extern void *lbl_805D2888;

void *TObjTagChallenge__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjTagChallenge;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2888;
    return arg0;
}

}

#define TObjTagChallenge__ct (*(void * (*)(void *, void *))&TObjTagChallenge__ct)

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);

void *create_obj_tag_challenge(void *arg0) {
    void *o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = TObjTagChallenge__ct(o, arg0);
    }
    return o;
}

}

#undef TObjTagChallenge__ct
