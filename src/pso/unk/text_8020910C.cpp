#include "types.h"
struct Obj_8020910C { u8 pad[0xC]; Obj_8020910C *next; u8 pad2[4]; Obj_8020910C *child; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
extern s32 lbl_805D3630;
void fn_8020910C(Obj_8020910C *arg0);
}

extern "C" {

void fn_8020910C(Obj_8020910C *arg0) {
    Obj_8020910C *p = arg0->child;
    Obj_8020910C *cur;
    while (arg0->child != 0 && p != 0) {
        cur = p;
        p = p->next;
        if (check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D3630) != 0) {
            queue_destruction__7TObjectFv(cur);
        } else {
            fn_8020910C(cur);
        }
    }
}

}
