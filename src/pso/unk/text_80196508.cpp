#include "types.h"
struct Obj_80196508 { u8 pad[0x6]; u16 id; };

extern "C" {
void *__nw__7TObjectFUl(int);
void *TObjQuestColALock__ct(void *self, void *parent, void *arg);
extern u32 lbl_805D5C50;
Obj_80196508 *fn_80196508(void *arg, s32 *out_id);
}

extern "C" {

Obj_80196508 *fn_80196508(void *arg, s32 *out_id) {
    Obj_80196508 *o = (Obj_80196508 *)__nw__7TObjectFUl(0xbc);
    if (o != 0) {
        o = (Obj_80196508 *)TObjQuestColALock__ct(o, (void *)lbl_805D5C50, arg);
    }
    if (o != 0) {
        *out_id = o->id;
    } else {
        *out_id = -1;
    }
    return o;
}

}
