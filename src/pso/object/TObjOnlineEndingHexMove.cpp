#include "pso/TObjOnlineEndingHexMove.h"

void TObjOnlineEndingHexMove::run_task() {}

TObjOnlineEndingHexMove::~TObjOnlineEndingHexMove() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK;
extern "C" {
void *__nw__7TObjectFUl(int);
void * fn_802E6218(void *arg0);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK create__23TObjOnlineEndingHexLineFPvPv(void *, void *);
void copy_move_params__23TObjOnlineEndingHexMoveFPvPv(void* p, void* q);
extern u32 lbl_804E3AC8[];
extern u32 lbl_804E3AD8[];
extern M2C_UNK __vt__23TObjOnlineEndingHexMove[];
extern u8 lbl_805412B0[];
extern s32 lbl_805D3FA0;
u8 *TObjOnlineEndingHexMove__ct(u8 *arg0, void *arg1);
}

extern "C" {

void copy_move_params__23TObjOnlineEndingHexMoveFPvPv(void* p, void* q);

u8 *TObjOnlineEndingHexMove__ct(u8 *arg0, void *arg1) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TObjOnlineEndingHexMove;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3FA0;
    for (i = 0; i < 4; i++) {
        create__23TObjOnlineEndingHexLineFPvPv(arg1, &lbl_804E3AC8[i]);
    }
    copy_move_params__23TObjOnlineEndingHexMoveFPvPv((void*)(lbl_805412B0), (void*)(lbl_804E3AD8));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1E;
    return arg0;
}

void copy_move_params__23TObjOnlineEndingHexMoveFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); }

void * fn_802E6218(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjOnlineEndingHexMove__ct((u8 *)(o), (void *)(arg0));
    }
    return o;
}

}
