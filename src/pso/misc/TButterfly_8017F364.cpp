#include "types.h"

extern "C" {

void *TButterfly__create(void *arg0);
void *TButterfly__ct(void *arg0, void *arg1, void *arg2);
void destroy_instance__10TButterflyFv(void);
void TLobby__sub_8001FE7C(void*, int);
void construct_world_actor_base(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
void *__nw__7TObjectFUl(int);
void copy_xyz__10TObjPlayerFPvPv(void *, void *);
void init_motion__10TButterflyFPv(void *);

extern s32 __vt__10TButterfly[];
extern void *TButterfly__name;

void *TButterfly__ct(void *arg0, void *arg1, void *arg2) {
    construct_world_actor_base(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TButterfly;
    *(void **)((s8 *)arg0 + 0x0) = TButterfly__name;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 56), (void *)((char *)arg2 + 12));
    copy_xyz__10TObjPlayerFPvPv((void *)((char *)arg0 + 92), (void *)((char *)arg2 + 24));
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 104), (void *)((char *)arg2 + 36));
    init_motion__10TButterflyFPv(arg0);
    return arg0;
}

extern void *tl_05;

void *TButterfly__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TButterfly__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern u32 butterfly_bml_resource;

void destroy_instance__10TButterflyFv(void) {
    if ((u32) butterfly_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)butterfly_bml_resource, 1);
        butterfly_bml_resource = 0U;
    }
}

}
