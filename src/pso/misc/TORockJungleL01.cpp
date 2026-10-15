#include "types.h"
#include "pso/misc/TORockJungleL01.h"

extern "C" {

void *TORockJungleL01__create(void *arg0);
void *TORockJungleL01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__10TORockCaveFv(void *, int);
void *__nw__7TObjectFUl(int);
void TObjPlayer__sub_800D7C58(void *, int);
void unregister_object_by_id(void *);
void free_collision_body_parts(void *);
void queue_destruction__7TObjectFv(void *);

void *TORockJungleL01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TORockJungleL01__ct(o, arg0);
    }
    return o;
}

extern s32 lbl_804DC448[];

void *TORockJungleL01::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804DC448;
        if (*(void **)((s8 *)this + 0xD4) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0xD4)); *(s32 *)((s8 *)this + 0xD4) = 0; }
        unregister_object_by_id(this);
        free_collision_body_parts(this);
        TObjPlayer__sub_800D7C58((s8 *)this + 0xB4, -1);
        __dt__10TORockCaveFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
