#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__9TLoadCtrlFv(void);

void render__9TLoadCtrlFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8001C8B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8001C8B8 { char pad[0x18]; };
struct VObj_8001C8B8 : Base_8001C8B8 {
    virtual void m0(s32);
};

extern "C" {

void cleanup_scene__9TLoadCtrlFv(void);
M2C_UNK create__11TCameraCtrlFv();
M2C_UNK TCameraCtrl__sub_80069318();
M2C_UNK TCameraCtrl__sub_800693F4();
M2C_UNK reset__11TCameraCtrlFv();
M2C_UNK TCameraCtrl__sub_8006A35C();
M2C_UNK TNowLoading__sub_8001D4D0();
M2C_UNK release_bgm_resource__6TLobbyFv();
M2C_UNK TAdLoadQuestGC__sub_8030984C();
M2C_UNK fn_8034AD28();
M2C_UNK queue_destruction__7TObjectFv(u32);

extern u32 TLoadCtrl__data_805D4A80;
extern s32 TLoadCtrl__data_805D4A84;
extern void *lbl_805D4DF0;

void cleanup_scene__9TLoadCtrlFv(void) {
    u32 t;

    t = TLoadCtrl__data_805D4A80;
    if (t != 0U) {
        queue_destruction__7TObjectFv(t);
        TLoadCtrl__data_805D4A80 = 0U;
    }
    switch (TLoadCtrl__data_805D4A84) {
    case 0:
        release_bgm_resource__6TLobbyFv();
        TNowLoading__sub_8001D4D0();
        break;
    case 1:
        release_bgm_resource__6TLobbyFv();
        TAdLoadQuestGC__sub_8030984C();
        break;
    case 3:
    case 4:
        release_bgm_resource__6TLobbyFv();
        fn_8034AD28();
        break;
    }
    TCameraCtrl__sub_80069318();
    reset__11TCameraCtrlFv();
    if (lbl_805D4DF0 != NULL) {
        if (lbl_805D4DF0 != NULL) {
            ((VObj_8001C8B8 *)lbl_805D4DF0)->m0(1);
        }
        lbl_805D4DF0 = NULL;
    }
    TCameraCtrl__sub_8006A35C();
    TCameraCtrl__sub_800693F4();
    create__11TCameraCtrlFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001CAB0
#include "types.h"

extern "C" {

int poll_default__9TLoadCtrlFv(void);
int TLoadCtrl__sub_8001C978(void*);

int poll_default__9TLoadCtrlFv(void) { return TLoadCtrl__sub_8001C978((void*)(0)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9F00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLoadCtrl__sub_800F9F00(void);

extern s32 TLoadCtrl__data_805D4A88;

s32 TLoadCtrl__sub_800F9F00(void) {
    return TLoadCtrl__data_805D4A88;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80227390
#include "types.h"

extern "C" {

void step__9TLoadCtrlFv(void);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);

void step__9TLoadCtrlFv(void) { TLobby__sub_8022743C(); TLobby__sub_80227248(); }

}
#endif
#endif
