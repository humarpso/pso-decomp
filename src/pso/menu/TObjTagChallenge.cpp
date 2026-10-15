#include "pso/TObjTagChallenge.h"

extern "C" {
s32 TWindowCtrlMain__sub_8024CE58(void);
void close_active_window__11TWindowCtrlFv(void);
void fn_800740DC(void);
void open_status_111__11TWindowCtrlFv(void);
void queue_destruction__7TObjectFv(void *);
}

void TObjTagChallenge::run_task() {
    if (TWindowCtrlMain__sub_8024CE58() != 0) {
        close_active_window__11TWindowCtrlFv();
        fn_800740DC();
        open_status_111__11TWindowCtrlFv();
        queue_destruction__7TObjectFv(this);
    }
}

TObjTagChallenge::~TObjTagChallenge() {}

#include "types.h"

extern "C" {

void *TObjTagChallenge__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__16TObjTagChallenge[];
extern void *TObjTagChallenge__class_name;

void *TObjTagChallenge__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjTagChallenge;
    *(void **)((s8 *)arg0 + 0x0) = TObjTagChallenge__class_name;
    return arg0;
}

}

#define TObjTagChallenge__ct (*(void * (*)(void *, void *))&TObjTagChallenge__ct)

#include "types.h"

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
