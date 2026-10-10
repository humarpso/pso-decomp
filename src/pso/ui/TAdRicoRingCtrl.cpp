#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8001BE80_lbl_804809C0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8001BE80_lbl_804809C0_size[sizeof(RecoveredGlobal_8001BE80_lbl_804809C0) == 0x10 ? 1 : -1];

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8001BE80_lbl_804809C0 TAdRicoRingCtrl__resource_descriptor;
extern u32 TAdRicoRing__resource_bundle;
void load_static_resource__15TAdRicoRingCtrlFv(void);
}

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

extern u32 TAdRicoRing__resource_bundle;

void release_global_805D4A00__15TAdRicoRingCtrlFv(void) {
    if ((u32) TAdRicoRing__resource_bundle != 0U) {
        TLobby__sub_8001FE7C((void*)TAdRicoRing__resource_bundle, 1);
        TAdRicoRing__resource_bundle = 0U;
    }
}

void load_static_resource__15TAdRicoRingCtrlFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &TAdRicoRingCtrl__resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TAdRicoRing__resource_bundle) = var_r0;
}

void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v) { *(f32*)((char*)p + 0x34) = v; }

}
