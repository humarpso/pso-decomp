#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8001C8B8_8001C61C { char pad[0x18]; };
struct VObj_8001C8B8_8001C61C : Base_8001C8B8_8001C61C {
    virtual void m0(s32);
};

struct RecoveredGlobal_8001C828___vt__9TLoadCtrl {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8001C7A0___vt__9TLoadCtrl { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
s32 __nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 __ct__9TAdFadeGCFv(int, int, int);
extern RecoveredGlobal_8001C828___vt__9TLoadCtrl __vt__9TLoadCtrl;
extern s32 lbl_805D2630;
extern s32 TLoadCtrl__data_805D4A84;
extern s32 TLoadCtrl__data_805D4A88;
extern s32 tl_fade;
u8 *TLoadCtrl__ct(u8 *arg0, s32 arg1);
u8 * __dt__7TObjectFv(void *, s16);
M2C_UNK queue_destruction__7TObjectFv(u32);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_8001C828___vt__9TLoadCtrl __vt__9TLoadCtrl;
extern u32 TLoadCtrl__data_805D4A80;
extern s32 TLoadCtrl__data_805D4A88;
u8 *__dt__9TLoadCtrlFv(u8 *arg0, s16 arg1);
extern u32 TLoadCtrl__data_805D4A80;
bool TLoadCtrl__sub_8001C60C(void);
}

extern "C" {

void cleanup_scene__9TLoadCtrlFv(void);
int poll_default__9TLoadCtrlFv(void);
void render__9TLoadCtrlFv(void);
M2C_UNK TAdLoadQuestGC__sub_8030984C();
M2C_UNK TCameraCtrl__sub_80069318();
M2C_UNK TCameraCtrl__sub_800693F4();
M2C_UNK TCameraCtrl__sub_8006A35C();
int TLoadCtrl__sub_8001C978(void*);
M2C_UNK TNowLoading__sub_8001D4D0();
M2C_UNK create__11TCameraCtrlFv();
M2C_UNK fn_8034AD28();
M2C_UNK queue_destruction__7TObjectFv(u32);
M2C_UNK release_bgm_resource__6TLobbyFv();
M2C_UNK reset__11TCameraCtrlFv();

bool TLoadCtrl__sub_8001C60C(void) {
    return (*(s32 *)&TLoadCtrl__data_805D4A80) != 0;
}

void render__9TLoadCtrlFv(void) {  }

extern u32 TLoadCtrl__data_805D4A80;
extern s32 TLoadCtrl__data_805D4A84;
extern void *lbl_805D4DF0;

typedef char RecoveredGlobal_8001C828___vt__9TLoadCtrl_size[sizeof(RecoveredGlobal_8001C828___vt__9TLoadCtrl) == 0x18 ? 1 : -1];

u8 *__dt__9TLoadCtrlFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8001C7A0___vt__9TLoadCtrl *)&__vt__9TLoadCtrl).value;
        if ((void *) (*(u8 * *)&TLoadCtrl__data_805D4A88) != NULL) {
            queue_destruction__7TObjectFv((u32)((*(u8 * *)&TLoadCtrl__data_805D4A88)));
            (*(u8 * *)&TLoadCtrl__data_805D4A88) = NULL;
        }
        if ((u32) TLoadCtrl__data_805D4A80 != 0U) {
            TLoadCtrl__data_805D4A80 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

u8 *TLoadCtrl__ct(u8 *arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r0;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__9TLoadCtrl.value;
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    TLoadCtrl__data_805D4A88 = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2630;
    if (((u32) (*(u32 *)&TLoadCtrl__data_805D4A84) == 0U) || ((u32) (*(u32 *)&TLoadCtrl__data_805D4A84) == 1U)) {
        temp_r3 = __nw__7TObjectFUl((int) (0x38));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = __ct__9TAdFadeGCFv((int) (temp_r3), (int) (tl_fade), (int) (2));
        }
        TLoadCtrl__data_805D4A88 = var_r0;
    }
    return arg0;
}

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
            ((VObj_8001C8B8_8001C61C *)lbl_805D4DF0)->m0(1);
        }
        lbl_805D4DF0 = NULL;
    }
    TCameraCtrl__sub_8006A35C();
    TCameraCtrl__sub_800693F4();
    create__11TCameraCtrlFv();
}

int poll_default__9TLoadCtrlFv(void) { return TLoadCtrl__sub_8001C978((void*)(0)); }

}
