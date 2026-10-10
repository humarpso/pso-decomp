#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

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

extern M2C_UNK __vt__10TButterfly[];
extern void *TButterfly__name;

void *TButterfly__ct(void *arg0, void *arg1, void *arg2) {
    construct_world_actor_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TButterfly;
    M2C_FIELD(arg0, void **, 0x0) = TButterfly__name;
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
