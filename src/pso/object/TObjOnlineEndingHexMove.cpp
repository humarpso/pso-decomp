#include "pso/TObjOnlineEndingHexMove.h"

void TObjOnlineEndingHexMove::run_task() {}

TObjOnlineEndingHexMove::~TObjOnlineEndingHexMove() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern "C" {
void *__nw__7TObjectFUl(int);
void *TObjOnlineEndingHexMove__ct(void *, void *);
void * fn_802E6218(void *arg0);
}

extern "C" {

void copy_move_params__23TObjOnlineEndingHexMoveFPvPv(void* p, void* q);

void copy_move_params__23TObjOnlineEndingHexMoveFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); }

void * fn_802E6218(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjOnlineEndingHexMove__ct(o, arg0);
    }
    return o;
}

}
