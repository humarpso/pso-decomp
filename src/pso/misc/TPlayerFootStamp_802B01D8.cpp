#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_802B0204 { u8 pad[0xbe]; s16 fbe; };

extern "C" {
void TPlayerFootStamp__sub_802B0204(Obj_802B0204 *self, s32 v);
}

extern "C" {

void TBoss6PlotFalz__sub_802B0228(void *arg0);
void load_player_footstamp(void);
void reset_ending_state__14TBoss6PlotFalzFPv(void* p);
M2C_UNK award_exp_and_destroy__14TBoss6PlotFalzFPv(void *);
M2C_UNK end_cutscene_camera__14TBoss6PlotFalzFPv();
int freeze_all_players__14TBoss6PlotFalzFv(void*);
int load_gvm_texture_file(void*);
int create__16TObjOnlineEndingFPv(void*);

    extern unsigned char lbl_80470908[];
    extern int lbl_805D6710;
void load_player_footstamp(void) { lbl_805D6710 = load_gvm_texture_file(lbl_80470908); }

void TPlayerFootStamp__sub_802B0204(Obj_802B0204 *self, s32 v) {
    if (v < 0 || v > 1) {
        self->fbe = 0;
    } else {
        self->fbe = v;
    }
}

void TBoss6PlotFalz__sub_802B0228(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x1C6) {
        end_cutscene_camera__14TBoss6PlotFalzFPv();
        award_exp_and_destroy__14TBoss6PlotFalzFPv(arg0);
    }
}

void reset_ending_state__14TBoss6PlotFalzFPv(void* p) { freeze_all_players__14TBoss6PlotFalzFv(p); *(int*)((char*)p + 0x3d0) = 0; *(int*)((char*)p + 0x3cc) = 0; create__16TObjOnlineEndingFPv(p); }

}
