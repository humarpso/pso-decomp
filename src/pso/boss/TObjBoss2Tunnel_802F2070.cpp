#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2Tunnel__sub_802F273C(void);
void TObjBoss2Tunnel__sub_802F2C4C(void);
void TObjBoss2Tunnel__sub_802F2C50(void);
void TObjBoss2Tunnel__sub_802F2C84(void);
void advance_effect_timer__15TObjBoss2TunnelFPv(void *arg0);
void *destroy__15TObjBoss2TunnelFPvs(void *arg0, s16 arg1);
void update_phase_motion__15TObjBoss2TunnelFPv(u8 *arg0);
M2C_UNK TObjBoss2Tunnel__sub_8007DEE4(void *, f32, f32, f32, f32, f32);
void* TObjBoss2Tunnel__sub_802F2A2C(void*, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void* __nw__7TObjectFUl(u32);
s32 advance_phase__15TObjBoss2TunnelFPv(void *, void *);
s32 check_both__15TObjBoss2TunnelFi();
void dt__15TObjBoss2TunnelFis(void *, int);
f32 get_random_float__8TObjFishFv(f32);
s32 is_phase_active__15TObjBoss2TunnelFv(void *);
void queue_destruction__7TObjectFv(void *);
f32 update_position__15TObjBoss2TunnelFPv(void *);

extern const f32 lbl_805DEC68;
extern const f32 lbl_805DECFC;

void advance_effect_timer__15TObjBoss2TunnelFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) (M2C_FIELD(arg0, f32 *, 0x5C) + lbl_805DECFC);
    if (M2C_FIELD(arg0, f32 *, 0x5C) > lbl_805DEC68) {
        M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805DEC68;
    }
}

void TObjBoss2Tunnel__sub_802F273C(void) {  }

extern const f32 lbl_805DEC98;
extern const f32 lbl_805DEC9C;
extern const f32 lbl_805DECC4;
extern const f32 lbl_805DECC8;
extern const f32 lbl_805DECF8;
extern const f32 lbl_805DED00;
extern const f32 lbl_805DED04;
extern const f32 lbl_805DED08;

void update_phase_motion__15TObjBoss2TunnelFPv(u8 *arg0) {
    f32 sp8;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
    switch (temp_r0) {
    case 0:
        if (check_both__15TObjBoss2TunnelFi() != 0) {
            if (is_phase_active__15TObjBoss2TunnelFv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805DECC8;
            } else {
                M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805DEC98;
            }
            M2C_FIELD(arg0, s32 *, 0x4C) = 1;
            TObjBoss2Tunnel__sub_8007DEE4((void *) (arg0 + 0x20), (f32) (lbl_805DECC4), (f32) (lbl_805DED00), (f32) (lbl_805DED04), (f32) (lbl_805DED08), (f32) (lbl_805DECF8));
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DEC9C;
        }
        break;
    case 1:
        if (check_both__15TObjBoss2TunnelFi() == 0) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 3;
            sp8 = get_random_float__8TObjFishFv((f32) (M2C_FIELD(arg0, f32 *, 0x54)));
            TObjBoss2Tunnel__sub_8007DEE4((void *) (arg0 + 0x20), (f32) (lbl_805DECC4), (f32) (lbl_805DED00), (f32) (M2C_FIELD(arg0, f32 *, 0x54)), (f32) (-update_position__15TObjBoss2TunnelFPv((void *) (arg0 + 0x20))), (f32) (lbl_805DECF8));
            return;
        }
        if (advance_phase__15TObjBoss2TunnelFPv((void *) (arg0 + 0x20), (void *) (&sp8)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 2;
        }
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (sp8 * M2C_FIELD(arg0, f32 *, 0x50));
        return;
    case 2:
        if (check_both__15TObjBoss2TunnelFi() == 0) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 3;
            TObjBoss2Tunnel__sub_8007DEE4((void *) (arg0 + 0x20), (f32) (lbl_805DECC4), (f32) (lbl_805DED00), (f32) (lbl_805DED04), (f32) (lbl_805DEC9C), (f32) (lbl_805DECF8));
            return;
        }
        break;
    case 3:
        if (advance_phase__15TObjBoss2TunnelFPv((void *) (arg0 + 0x20), (void *) (&sp8)) != 0) {
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DEC9C;
            M2C_FIELD(arg0, s32 *, 0x4C) = 0;
            return;
        }
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) * (lbl_805DED04 - sp8));
        break;
    }
}

extern M2C_UNK lbl_804E4B3C[];

void *destroy__15TObjBoss2TunnelFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E4B3C;
        if (M2C_FIELD(arg0, void **, 0x88) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x88)); }
        dt__15TObjBoss2TunnelFis((s8 *)arg0 + 0x20, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjBoss2Tunnel__sub_802F2C4C(void) {  }

extern s32 tl_04;

void TObjBoss2Tunnel__sub_802F2C50(void) {
    void* obj = __nw__7TObjectFUl(0x94);
    if (obj != 0) {
        TObjBoss2Tunnel__sub_802F2A2C(obj, tl_04);
    }
}

    extern int lbl_805D6968;
void TObjBoss2Tunnel__sub_802F2C84(void) { lbl_805D6968 = 0; }

}
