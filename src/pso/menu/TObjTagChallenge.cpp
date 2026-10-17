#include "pso/TObjTagChallenge.h"
#include "pso/menu/TObjTagChallenge.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {
s32 TWindowCtrlMain__sub_8024CE58(void);
void fn_800740DC(void);
}

void TObjTagChallenge::run_task() {
    if (TWindowCtrlMain__sub_8024CE58() != 0) {
        TWindowCtrl::close_active_window();
        fn_800740DC();
        TWindowCtrl::open_status_111();
        queue_destruction__7TObjectFv(this);
    }
}

TObjTagChallenge::~TObjTagChallenge() {}

#include "types.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__16TObjTagChallenge[];
extern void *TObjTagChallenge__class_name;

void *TObjTagChallenge__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjTagChallenge;
    *(void * *)&((TObjTagChallenge *)arg0)->m_name = TObjTagChallenge__class_name;
    return arg0;
}

#define TObjTagChallenge__ct (*(void * (*)(void *, void *))&TObjTagChallenge__ct)

void *__nw__7TObjectFUl(int);
}

void *create_obj_tag_challenge(void *arg0) {
    void *o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = TObjTagChallenge__ct(o, arg0);
    }
    return o;
}

#undef TObjTagChallenge__ct
