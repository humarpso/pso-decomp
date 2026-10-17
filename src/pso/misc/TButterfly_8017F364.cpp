#include "types.h"
#include "pso/system/vector.h"
#include "pso/misc/TButterfly.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *TButterfly__create(void *arg0);
void *TButterfly__ct(void *arg0, void *arg1, void *arg2);
void TLobby__sub_8001FE7C(void*, int);
void construct_world_actor_base(void *);
void *__nw__7TObjectFUl(int);

extern s32 __vt__10TButterfly[];
extern void *TButterfly__name;

void *TButterfly__ct(void *arg0, void *arg1, void *arg2) {
    construct_world_actor_base(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TButterfly;
    *(void * *)&((TButterfly *)arg0)->m_name = TButterfly__name;
    VecCopy((Vec *)((char *)arg0 + 56), (const Vec *)((char *)arg2 + 12));
    ((TObjPlayer *)((char *)arg0 + 92))->copy_xyz((void *)((char *)arg2 + 24));
    VecCopy((Vec *)((char *)arg0 + 104), (const Vec *)((char *)arg2 + 36));
    ((TButterfly *)arg0)->init_motion();
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

void TButterfly::destroy_instance() {
    if ((u32) butterfly_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)butterfly_bml_resource, 1);
        butterfly_bml_resource = 0U;
    }
}

}
