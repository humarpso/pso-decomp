#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801AEB74(void);
void TObjPlayer__sub_801AEB80(void);
void *__dt__13TPhotonYoullaFv(void *arg0, s16 arg1);
void run_task__13TPhotonYoullaFv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
s32 TLobby__sub_800822E8(s32, s32);
s32 TLobby__sub_8030A7B0();
int TObjPlayer__sub_80019248(void*);
M2C_UNK TObjPlayer__sub_801A7680(void *);
M2C_UNK TObjPlayer__sub_801A7748(void *, M2C_UNK);
s32 TObjPlayer__sub_801AF868(s32);
int TObjPlayer__sub_801BEF60(void*, void*);
int TObjPlayer__sub_801BEF68(void*);
s32 TObjPlayer__sub_801BF19C(s32);
s32 TObjPlayer__sub_801BF1DC(s32);
s32 TObjPlayer__sub_801BF3E8(s32);
s32 TObjPlayer__sub_80354C7C(s32);
s32 TObjPlayer__sub_80354E3C();
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void __dl__7TObjectFPv(void *);
s32 check_camera_mode__10TObjPlayerFv();
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 check_flag_800000__10TObjPlayerFPv(s32);
void destroy_photon_motion_object(void *, int);
void free_photon__10TObjPlayerFPv(void *);
s32 get_main_phase();
int get_max_level__10TObjPlayerFv(void);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 reset_volopt_state__10TObjPlayerFv(s32);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
int test_flag_2000000__10TObjPlayerFPv(void*);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);
s32 update_movement_by_screen__10TObjPlayerFv(s32);

extern const f64 lbl_80446F18;
extern const f32 lbl_805DC264;
extern const f32 lbl_805DC268;
extern const f32 lbl_805DC26C;
extern const f32 lbl_805DC270;
extern const f32 lbl_805DC274;

void run_task__13TPhotonYoullaFv(void *arg0) {
    f32 temp_f1;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A4) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1A0) = 1;
    }
    if ((lbl_805DC264 == (f32) M2C_FIELD(arg0, s32 *, 0x1A4)) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1)) {
        TObjPlayer__sub_801A7748(arg0, 6);
        M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
        set_field_b8__14TObjEnePanarmsFPvs(arg0, 0);
    }
    M2C_FIELD(arg0, s16 *, 0x194) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    TBoss1Dragon__sub_80143504(arg0);
    TObjPlayer__sub_801A7680(arg0);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    M2C_FIELD(arg0, s32 *, 0x1A4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A4) + 1);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x1A4) > lbl_805DC268) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x184);
        if (temp_f1 > lbl_805DC26C) {
            M2C_FIELD(arg0, f32 *, 0x184) = (f32) (temp_f1 - lbl_805DC270);
        }
    }
    if (lbl_805DC274 == (f32) M2C_FIELD(arg0, s32 *, 0x1A4)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK __vt__13TPhotonYoulla[];

void *__dt__13TPhotonYoullaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TPhotonYoulla;
        free_photon__10TObjPlayerFPv(arg0);
        destroy_photon_motion_object(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int lbl_805D5D60;
void TObjPlayer__sub_801AEB74(void) { lbl_805D5D60 = 0; }

void TObjPlayer__sub_801AEB80(void) {  }

}
