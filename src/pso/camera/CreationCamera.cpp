#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802916D4_lbl_804DAA18 {
    M2C_UNK value;
    u8 remaining[0x5C];
};

#include "pso/camera/CreationCamera.h"

struct Cam_80291784 {
    u8 pad[0x78];
    s32 mode;
    s32 timer;
};

extern "C" {
s32 TObjCMProportion__sub_8029916C(M2C_UNK);
extern s32 lbl_805D6570;
extern const f32 lbl_805DD990;
extern const f32 lbl_805DD994;
void fn_80291538(void *arg0);
f32 TCharaMaking__sub_8028DCCC(void *);
extern RecoveredGlobal_802916D4_lbl_804DAA18 lbl_804DAA18;
extern u8 *lbl_805D6520;
extern s32 lbl_805D6570;
extern const f32 lbl_805DD978;
extern const f32 lbl_805DD99C;
extern const f32 lbl_805DD9A0;
void fn_802916D4(u8 *arg0);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern s32 lbl_805D6570;
extern const f32 lbl_805DD96C,lbl_805DD978,lbl_805DD998;
void advance_creation_review_camera(CreationCameraFields* camera);
f32 TCharaMaking__sub_8028DCCC(void *);
void fn_802912C4(void *, int, int, f32, f32);
u32 TObjCMMainMenu__sub_80291D44();
extern u8 *lbl_805D6520;
extern const f32 lbl_805DD96C;
extern const f32 lbl_805DD998;
extern const f32 lbl_805DD9A4;
extern const f32 lbl_805DD9A8;
extern const f32 lbl_805DD9AC;
extern const f32 lbl_805DD9B0;
void fn_80291784(Cam_80291784 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_80291538(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    if (TObjCMProportion__sub_8029916C(0x6F0) != 0) {
        M2C_FIELD(arg0, u32 *, 0x84) = 0U;
        lbl_805D6570 = 4;
        return;
    }
    M2C_FIELD(arg0, u32 *, 0x84) = (u32) (M2C_FIELD(arg0, u32 *, 0x84) + 1);
    if (M2C_FIELD(arg0, u32 *, 0x84) & 0x100) {
        if ((M2C_FIELD(arg0, s32 *, 0x70) > -0x6D) && (M2C_FIELD(arg0, s32 *, 0x70) < 0x6D)) {
            M2C_FIELD(arg0, s32 *, 0x70) = 0;
        } else {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x70);
            if (temp_r0 < 0) {
                M2C_FIELD(arg0, s32 *, 0x70) = temp_r0 + 0x6D;
            } else {
                M2C_FIELD(arg0, s32 *, 0x70) = temp_r0 - 0x6D;
            }
        }
        temp_r0_2 = ((u32) M2C_FIELD(arg0, u32 *, 0x84) >> 9U) & 3;
        switch (temp_r0_2) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x74) = (s32) (M2C_FIELD(arg0, s32 *, 0x74) + 0xDA);
            return;
        case 1:
            M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) + lbl_805DD990);
            return;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x74) = (s32) (M2C_FIELD(arg0, s32 *, 0x74) - 0xDA);
            return;
        case 3:
            M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) + lbl_805DD994);
            break;
        }
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
typedef char RecoveredGlobal_802916D4_lbl_804DAA18_size[sizeof(RecoveredGlobal_802916D4_lbl_804DAA18) == 0x60 ? 1 : -1];

#pragma push
#pragma fp_contract on
void advance_creation_review_camera(CreationCameraFields* camera) {
 if(--camera->ticks<=0) {camera->ticks=0;lbl_805D6570=3;return;}
 const f32 weight=lbl_805DD96C*(lbl_805DD978+TBoss8Dragon__sub_803D64DC((camera->ticks<<15)/120));
 const f32 start=camera->startDistance;
 camera->distance=weight*(lbl_805DD998-start)+start;
}
#pragma pop

void fn_802916D4(u8 *arg0) {
    f32 temp_f2;
    s32 temp_r7;
    if ((void *) lbl_805D6520 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (lbl_805DD99C * TCharaMaking__sub_8028DCCC((void *) (lbl_805D6520)));
        M2C_FIELD(arg0, f32 *, 0x80) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
        temp_r7 = (s8) M2C_FIELD(lbl_805D6520, u8 *, 0x31) * 8;
        temp_f2 = M2C_FIELD(((u8 *)(&lbl_804DAA18.value) + temp_r7), f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (lbl_805DD9A0 * (((lbl_805DD978 - M2C_FIELD(lbl_805D6520, f32 *, 0x4C)) * (M2C_FIELD(((u8 *)(&lbl_804DAA18.value) + temp_r7), f32 *, 4) - temp_f2)) + temp_f2));
        M2C_FIELD(arg0, s32 *, 0x74) = 0;
        M2C_FIELD(arg0, s32 *, 0x70) = 0;
        lbl_805D6570 = 2;
        M2C_FIELD(arg0, s32 *, 0x84) = 0x78;
    }
}
#pragma pop

void fn_80291784(Cam_80291784 *arg0) {
    s32 want;
    switch (TObjCMMainMenu__sub_80291D44()) {
    case 0:
    case 1:
    case 2:
    case 4:
        want = 0;
        break;
    case 6:
    case 8:
        want = 1;
        break;
    default:
        want = 2;
        break;
    }
    if (arg0->mode == want) {
        arg0->timer = 0;
    } else if (++arg0->timer > 30) {
        arg0->mode = want;
        arg0->timer = 0;
    }
    if (lbl_805D6520 != NULL) {
        f32 s = TCharaMaking__sub_8028DCCC(lbl_805D6520);
        switch (arg0->mode) {
        case 0:
            fn_802912C4(arg0, 0, 0, lbl_805DD96C * s, lbl_805DD9A4 * s);
            break;
        case 1:
            fn_802912C4(arg0, 0, 0, lbl_805DD998, lbl_805DD9A8);
            break;
        case 2:
            fn_802912C4(arg0, 0, 0, lbl_805DD9AC * s, lbl_805DD9B0 * s);
            break;
        }
    }
}

}
