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

typedef s32 M2C_UNK;
struct Vec_8001C620 { s32 x, y, z; };

struct Obj_8001C620 { u8 pad[0x1C]; s32 f1c; s32 f20; };

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
u8 *TLoadCtrl__ct(u8 *arg0, s32 arg1);
M2C_UNK TNowLoading__sub_8001D4D4();
M2C_UNK TCameraCtrl__sub_800693F4();
M2C_UNK TCameraCtrl__sub_8006A35C();
M2C_UNK TCameraCtrl__ct(u8 *, s32);
M2C_UNK TLoadCtrl__sub_80226DA0(int);
s32 select_area_entrance(void *);
s32 __nw__7TObjectFUl(int);
M2C_UNK TAdLoadQuestGC__sub_80309850();
M2C_UNK fn_8034AD2C();
extern M2C_UNK lbl_80515BA0[];
extern u32 TLoadCtrl__data_805D4A80;
extern s32 TLoadCtrl__data_805D4A84;
extern s32 tl_su;
extern s32 tl_camera;
void TLoadCtrl__sub_8001C978(u32 arg0);
M2C_UNK TNowLoading__ct(s32, void *, void *);
M2C_UNK TCameraCtrl__sub_80069C94(void *, void *);
M2C_UNK TCameraCtrl__sub_80069E7C(int);
M2C_UNK TKeyBoardControl__sub_801A5EC4();
M2C_UNK controller_stuff__Fv();
M2C_UNK update_sound_request_slots();
s32 __nw__7TObjectFUl(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
M2C_UNK TAdLoadQuestGC__ct(s32, void *);
M2C_UNK __ct__14TAdFloorLoadGCFv(s32, void *, int);
extern u8 lbl_804349CC[];
extern Vec_8001C620 lbl_804349D8;
extern Vec_8001C620 lbl_804349E4;
extern u32 TLoadCtrl__data_805D4A80;
extern s32 TLoadCtrl__data_805D4A84;
extern s32 TLoadCtrl__data_805D4A88;
void run_task__9TLoadCtrlFv(Obj_8001C620 *self);
}

extern "C" {

void cleanup_scene__9TLoadCtrlFv(void);
void poll_default__9TLoadCtrlFv(void);
void render__9TLoadCtrlFv(void);
M2C_UNK TAdLoadQuestGC__sub_8030984C();
M2C_UNK TCameraCtrl__sub_80069318();
M2C_UNK TCameraCtrl__sub_800693F4();
M2C_UNK TCameraCtrl__sub_8006A35C();
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

void run_task__9TLoadCtrlFv(Obj_8001C620 *self) {
    s32 o;
    if (TLoadCtrl__data_805D4A80 != 0U) {
        if ((u32)TLoadCtrl__data_805D4A88 != 0U && all_parents_unqueued_for_destruction__7TObjectFv(TLoadCtrl__data_805D4A88) == 0) {
            TLoadCtrl__data_805D4A88 = 0;
        }
        if (++self->f20 == 2) {
            switch (TLoadCtrl__data_805D4A84) {
            case 0:
                o = __nw__7TObjectFUl(0x3C);
                if ((u32)o != 0) {
                    TNowLoading__ct(o, self, lbl_804349CC);
                }
                break;
            case 1:
                o = __nw__7TObjectFUl(0x20);
                if ((u32)o != 0) {
                    TAdLoadQuestGC__ct(o, self);
                }
                break;
            case 2:
                break;
            case 3:
                o = __nw__7TObjectFUl(0x1C);
                if ((u32)o != 0) {
                    __ct__14TAdFloorLoadGCFv(o, self, 0);
                }
                break;
            case 4:
                o = __nw__7TObjectFUl(0x1C);
                if ((u32)o != 0) {
                    __ct__14TAdFloorLoadGCFv(o, self, 1);
                }
                break;
            }
        }
        if (self->f1c != 0) {
            controller_stuff__Fv();
            TKeyBoardControl__sub_801A5EC4();
        }
        update_sound_request_slots();
        Vec_8001C620 a = lbl_804349D8;
        Vec_8001C620 b = lbl_804349E4;
        TCameraCtrl__sub_80069E7C(9);
        TCameraCtrl__sub_80069C94(&a, &b);
    }
}

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

void TLoadCtrl__sub_8001C978(u32 arg0) {
    s32 temp_r3;
    u8 *var_r0;
    u8 *temp_cam;
    u32 var_r31;
    var_r31 = arg0;
    TCameraCtrl__sub_8006A35C();
    TCameraCtrl__sub_800693F4();
    if (var_r31 == 2U) {
        temp_r3 = select_area_entrance((void *) (lbl_80515BA0));
        if (temp_r3 == 0) {
            var_r31 = 3U;
        } else if (temp_r3 == 1) {
            var_r31 = 4U;
        } else {
            var_r31 = 0U;
        }
    }
    switch ((s32) var_r31) {
    case 0:
        TNowLoading__sub_8001D4D4();
        break;
    case 1:
        TAdLoadQuestGC__sub_80309850();
        break;
    case 3:
    case 4:
        fn_8034AD2C();
        break;
    }
    TLoadCtrl__data_805D4A84 = (s32) var_r31;
    switch ((s32) var_r31) {
    case 2:
        break;
    case 0:
        TLoadCtrl__sub_80226DA0((int) (0));
        break;
    case 1:
        TLoadCtrl__sub_80226DA0((int) (3));
        break;
    case 3:
        TLoadCtrl__sub_80226DA0((int) (1));
        break;
    case 4:
        TLoadCtrl__sub_80226DA0((int) (2));
        break;
    }
    temp_cam = (u8 *) __nw__7TObjectFUl((int) (0x1D4));
    if (temp_cam != NULL) {
        TCameraCtrl__ct(temp_cam, tl_camera);
    }
    var_r0 = (u8 *) __nw__7TObjectFUl((int) (0x24));
    if (var_r0 != NULL) {
        var_r0 = TLoadCtrl__ct(var_r0, tl_su);
    }
    TLoadCtrl__data_805D4A80 = (u32) var_r0;
}

void poll_default__9TLoadCtrlFv(void) { TLoadCtrl__sub_8001C978((u32)((void*)(0))); }

}
