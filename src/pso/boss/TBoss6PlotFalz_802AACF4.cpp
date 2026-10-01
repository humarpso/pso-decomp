#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Player_802AAE78 { u8 pad[0x32C]; s16 f32c; };

extern "C" {
extern u16 lbl_80540B28[];
u16 TBoss6PlotFalz__sub_802AAE48(s32 i);
Player_802AAE78 *get_player_data__10TObjPlayerFi(s32);
s16 obj_getField1c(void *);
s32 is_active__14TBoss6PlotFalzFPv(void *arg0);
extern u16 lbl_80540B28[];
extern s32 lbl_805D586C;
s32 TBoss6PlotFalz__sub_802AAE78(void);
}

extern "C" {

s32 is_active__14TBoss6PlotFalzFPv(void *arg0);
s32 is_state_1f__14TBoss6PlotFalzFUi();

u16 TBoss6PlotFalz__sub_802AAE48(s32 i) {
    if (i < 0 || i >= 4) return 0xFFFF;
    return lbl_80540B28[i];
}

s32 TBoss6PlotFalz__sub_802AAE78(void) {
    s32 vals[4];
    s32 i;
    s32 j;
    s32 n;
    Player_802AAE78 *p;
    s32 t;
    s32 k;
    u16 s;
    for (i = 0; i < 4; i++) {
        lbl_80540B28[i] = 0xFFFF;
        vals[i] = -1;
    }
    n = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && is_active__14TBoss6PlotFalzFPv(p) != 0 && p->f32c != 0) {
            lbl_80540B28[n] = obj_getField1c(p);
            vals[n] = p->f32c;
            n++;
        }
    }
    for (i = 2; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            k = j + 1;
            if (vals[j] < vals[k]) {
                t = vals[j];
                vals[j] = vals[k];
                vals[k] = t;
                s = lbl_80540B28[j];
                lbl_80540B28[j] = lbl_80540B28[k];
                lbl_80540B28[k] = s;
            }
        }
    }
    return n;
}

s32 is_active__14TBoss6PlotFalzFPv(void *arg0) {
    if ((is_state_1f__14TBoss6PlotFalzFUi() != 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000800)) {
        return 1;
    }
    return 0;
}

}
