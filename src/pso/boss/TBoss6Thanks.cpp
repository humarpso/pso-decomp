#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TBoss6Thanks__sub_8035CB40(void);
void advance_thanks_state__12TBoss6ThanksFPv(void *arg0);
u8 check_ship_door__12TBoss6ThanksFv(void);
int dispatch_darkfalz_phase__12TBoss6ThanksFv(void);
u8 fn_8035CAE0(void);
void mark_done__12TBoss6ThanksFPv(void* p);
void update_fade_out__12TBoss6ThanksFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Thanks__sub_8035CB88(void *);
int TBoss6Thanks__sub_8035CCD0(void*);
s32 TODoorVoShip__sub_801F44BC(s32);
int dispatch_by_main_phase__14TBoss4DarkFalzFUs(void*);
M2C_UNK queue_destruction__7TObjectFv(void *);

u8 fn_8035CAE0(void) {
    return (u8) (TODoorVoShip__sub_801F44BC(0x9A) != 0);
}
u8 check_ship_door__12TBoss6ThanksFv(void) {
    return (u8) (TODoorVoShip__sub_801F44BC(0x98) != 0);
}
int TBoss6Thanks__sub_8035CB40(void) { return dispatch_by_main_phase__14TBoss4DarkFalzFUs((void*)(154)); }
int dispatch_darkfalz_phase__12TBoss6ThanksFv(void) { return dispatch_by_main_phase__14TBoss4DarkFalzFUs((void*)(152)); }

extern M2C_UNK lbl_80479C08;
extern const f32 lbl_805E01A4;
extern const f32 lbl_805E01A8;
extern const f32 lbl_805E01AC;

void update_fade_out__12TBoss6ThanksFPv(void *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 1) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x34) == 0) {
            TBoss3Volopt__sub_8022675C(0x40033231, 0, 0, 0);
        }
        TBoss6Thanks__sub_8035CB88(arg0);
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (lbl_805E01A4 * (lbl_805E01A8 - ((f32) M2C_FIELD(arg0, s32 *, 0x34) / lbl_805E01AC)));
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x34);
        if (temp_r3 == 0x78) {
            TBoss3Volopt__sub_8022675C(0x40033232, 0, 0, 0);
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r3 + 1);
    }
}

void advance_thanks_state__12TBoss6ThanksFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}

void mark_done__12TBoss6ThanksFPv(void* p) { if (TBoss6Thanks__sub_8035CCD0(p) != 0) { *(int*)((char*)p + 0x24) = 1; *(int*)((char*)p + 0x1c) = 1; } }

}
