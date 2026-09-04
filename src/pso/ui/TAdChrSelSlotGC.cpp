#include "pso/TAdChrSelSlotGC.h"

TAdChrSelSlotGC::~TAdChrSelSlotGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct S802C7498_802C70AC { u8 pad[0x118]; s32 arr[1]; };

extern "C" {

void TAdChrSelSlotGC__sub_802C70AC(void);
void TAdChrSelSlotGC__sub_802C7498(struct S802C7498_802C70AC *arg0, s32 arg1);
void TLobby__sub_802C78EC(void);
void *destroy__15TAdChrSelSlotGCFPvs(void *arg0, s16 arg1);
void render__15TAdChrSelSlotGCFv(void *arg0);
void reset_all_slots__15TAdChrSelSlotGCFPv(void* p);
M2C_UNK TAdChrSelSlotGC__sub_802C7314(void *);
int TAdChrSelSlotGC__sub_802C754C(void*, void*);
void TLobby__sub_803DA16C(void*);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);
M2C_UNK fn_80141A30();
s32 get_state_flag__9TMainTaskFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
s32 toggle_flag_9__10TObjPlayerFPv();

void TAdChrSelSlotGC__sub_802C70AC(void) {  }

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

void render__15TAdChrSelSlotGCFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x124) == 1) {
        if (get_state_flag__9TMainTaskFv() == 1) {
            return;
        }
        goto block_5;
    }
    if (toggle_flag_9__10TObjPlayerFPv() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        TAdChrSelSlotGC__sub_802C7314(arg0);
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x124) == 0) {
            fn_80141A30();
        }
    }
}

void reset_all_slots__15TAdChrSelSlotGCFPv(void* p) { TAdChrSelSlotGC__sub_802C754C(p, (void*)0); TAdChrSelSlotGC__sub_802C754C(p, (void*)1); TAdChrSelSlotGC__sub_802C7498((struct S802C7498_802C70AC *)((struct S802C7498_802C70AC *)(p)), (s32)((s32)((void*)0))); TAdChrSelSlotGC__sub_802C7498((struct S802C7498_802C70AC *)((struct S802C7498_802C70AC *)(p)), (s32)((s32)((void*)1))); TAdChrSelSlotGC__sub_802C7498((struct S802C7498_802C70AC *)((struct S802C7498_802C70AC *)(p)), (s32)((s32)((void*)2))); }

void TAdChrSelSlotGC__sub_802C7498(struct S802C7498_802C70AC *arg0, s32 arg1) {
    arg0->arr[arg1] = 0;
}

extern u32 lbl_805D67F0;

void TLobby__sub_802C78EC(void) {
    if ((u32) lbl_805D67F0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D67F0);
        lbl_805D67F0 = 0U;
    }
}

}
