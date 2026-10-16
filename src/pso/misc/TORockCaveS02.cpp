#include "types.h"
#include "pso/object/TObjMotion.h"

extern "C" {

void *TORockCaveS02__create(void *arg0);
void *__dt__13TORockCaveS02Fv(void *arg0, s16 arg1);
void *TORockCaveS02__ct(void *, void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__10TORockCaveFv(void *, s32);
void *__nw__7TObjectFUl(int);
s32 free_collision_body_parts(void *);

void *TORockCaveS02__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TORockCaveS02__ct(o, arg0);
    }
    return o;
}

extern s32 __vt__13TORockCaveS02[];

void *__dt__13TORockCaveS02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TORockCaveS02;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        __dt__10TORockCaveFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
