#include "types.h"
#include "pso/boss/TBoss6PlotFalz.h"

struct Obj_802B0204 { u8 pad[0xbe]; s16 fbe; };

extern "C" {
void TPlayerFootStamp__sub_802B0204(Obj_802B0204 *self, s32 v);
}

extern "C" {

void TBoss6PlotFalz__sub_802B0228(void *arg0);
void load_player_footstamp(void);
s32 award_exp_and_destroy__14TBoss6PlotFalzFv(void *);
s32 end_cutscene_camera__14TBoss6PlotFalzFPv();
int freeze_all_players__14TBoss6PlotFalzFv(void*);
int load_gvm_texture_file(void*);
int create__16TObjOnlineEndingFPv(void*);

    extern unsigned char lbl_80470908[];
    extern int player_footstamp_texture_gvm_handle;
void load_player_footstamp(void) { player_footstamp_texture_gvm_handle = load_gvm_texture_file(lbl_80470908); }

void TPlayerFootStamp__sub_802B0204(Obj_802B0204 *self, s32 v) {
    if (v < 0 || v > 1) {
        self->fbe = 0;
    } else {
        self->fbe = v;
    }
}

void TBoss6PlotFalz__sub_802B0228(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x3CC) + 1;
    *(s32 *)((s8 *)arg0 + 0x3CC) = temp_r0;
    if (temp_r0 > 0x1C6) {
        end_cutscene_camera__14TBoss6PlotFalzFPv();
        award_exp_and_destroy__14TBoss6PlotFalzFv(arg0);
    }
}

void TBoss6PlotFalz::reset_ending_state() { freeze_all_players__14TBoss6PlotFalzFv(this); *(int*)((char*)this + 0x3d0) = 0; *(int*)((char*)this + 0x3cc) = 0; create__16TObjOnlineEndingFPv(this); }

}
