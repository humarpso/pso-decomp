#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdChrSelSlotGC.h"

TAdChrSelSlotGC::~TAdChrSelSlotGC() {}
#else
#if PSO_CLASS_PACKAGE == 0x802C70AC
#include "types.h"

extern "C" {

void TAdChrSelSlotGC__sub_802C70AC(void);

void TAdChrSelSlotGC__sub_802C70AC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C71BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__15TAdChrSelSlotGCFPvs(void *arg0, s16 arg1);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

extern M2C_UNK lbl_804E0B28[];
extern s32 lbl_805D67E8;

void *destroy__15TAdChrSelSlotGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E0B28;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x4C));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x48));
            M2C_FIELD(arg0, u32 *, 0x48) = 0U;
        }
        lbl_805D67E8 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C7438
#include "types.h"
struct S802C7498 { u8 pad[0x118]; s32 arr[1]; };

extern "C" {

void reset_all_slots__15TAdChrSelSlotGCFPv(void* p);
void TAdChrSelSlotGC__sub_802C7498(struct S802C7498 *arg0, s32 arg1);
int TAdChrSelSlotGC__sub_802C754C(void*, void*);

void reset_all_slots__15TAdChrSelSlotGCFPv(void* p) { TAdChrSelSlotGC__sub_802C754C(p, (void*)0); TAdChrSelSlotGC__sub_802C754C(p, (void*)1); TAdChrSelSlotGC__sub_802C7498((struct S802C7498 *)(p), (s32)((void*)0)); TAdChrSelSlotGC__sub_802C7498((struct S802C7498 *)(p), (s32)((void*)1)); TAdChrSelSlotGC__sub_802C7498((struct S802C7498 *)(p), (s32)((void*)2)); }

void TAdChrSelSlotGC__sub_802C7498(struct S802C7498 *arg0, s32 arg1) {
    arg0->arr[arg1] = 0;
}

}
#endif
#endif
