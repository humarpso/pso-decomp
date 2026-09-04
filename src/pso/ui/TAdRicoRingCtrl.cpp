#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v);
void *create__15TAdRicoRingCtrlFPv(void *arg0);
void release_global_805D4A00__15TAdRicoRingCtrlFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *__ct__11TAdRicoRingFv(void *, void *);
void *__nw__7TObjectFUl(int);
void clear_flags__11TAdRicoRingFPvUi(void* p, u32 v);
void clear_id__10TObjPlayerFPv(void* p);
void set_flags__10TObjPlayerFPvUi(void* p, u32 v);

void *create__15TAdRicoRingCtrlFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x70);
    if (o != NULL) {
        o = __ct__11TAdRicoRingFv(o, arg0);
    }
    return o;
}

extern u32 lbl_805D4A00;

void release_global_805D4A00__15TAdRicoRingCtrlFv(void) {
    if ((u32) lbl_805D4A00 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4A00, 1);
        lbl_805D4A00 = 0U;
    }
}

void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v) { *(f32*)((char*)p + 0x34) = v; }

}
