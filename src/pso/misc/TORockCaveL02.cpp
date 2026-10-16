#include "types.h"

extern "C" {

void *TORockCaveL02__create(void *arg0);
void *__dt__13TORockCaveL02Fv(void *arg0, s16 arg1);
void *TORockCaveL02__ct(void *, void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__10TORockCaveFv(void *, s32);
void *__nw__7TObjectFUl(int);
s32 unregister_object_by_id__13TUnk_804AF8A0Fv(s32 *);
s32 free_collision_body_parts(void *);

void *TORockCaveL02__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TORockCaveL02__ct(o, arg0);
    }
    return o;
}

extern s32 __vt__13TORockCaveL02[];

void *__dt__13TORockCaveL02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TORockCaveL02;
        unregister_object_by_id__13TUnk_804AF8A0Fv((s32 *)arg0);
        free_collision_body_parts(arg0);
        __dt__10TORockCaveFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
