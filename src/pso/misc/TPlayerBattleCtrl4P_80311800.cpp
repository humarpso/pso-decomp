#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__vt21(void* p);
void TPlayerBattleCtrl4P__vt24(s32 arg0);
void TPlayerBattleCtrl4P__vt27(void *arg0);
void TPlayerBattleCtrl4P__vt28(void);
void TPlayerBattleCtrl4P__vt29(void);
void TPlayerBattleCtrl4P__vt30(void *arg0);
void TPlayerBattleCtrl4P__vt32(s32 arg0);
void TPlayerBattleCtrl4P__vt33(void);
void reset_random_enemies_mode__19TPlayerBattleCtrl4PFv(void);
int TKeyBoardControl__sub_8000F950(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
int TPlayerBattleCtrl4P__sub_8031012C(void*);
int TPlayerBattleCtrl4P__sub_803101D4(void*);
M2C_UNK TPlayerBattleCtrl4P__sub_80311380();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
s32 check_flag_100__10TObjPlayerFPv();
int clear_counter__6TLobbyFv(void);
void *init__22THunterGuildSeqOfflineFPvPvPv(void *, void *, void *);
M2C_UNK play_effect_default__10TObjPlayerFii(u32, M2C_UNK);
void queue_destruction__7TObjectFv(void *);
int reset_settings_to_default__6TLobbyFPv(void*);
M2C_UNK set_fade_params__6TLobbyFi(M2C_UNK *);
int set_score__19TPlayerBattleCtrl4PFPvi(void*, void*);
int update_players__19TPlayerBattleCtrl4PFv(void*);

void TPlayerBattleCtrl4P__vt29(void) {  }
void TPlayerBattleCtrl4P__vt28(void) {  }

    extern unsigned char lbl_8050EA40[];
    extern int evt2_random_enemies_mode;
void reset_random_enemies_mode__19TPlayerBattleCtrl4PFv(void) { clear_counter__6TLobbyFv(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); reset_settings_to_default__6TLobbyFPv(lbl_8050EA40); }

extern void *tl_00;

void TPlayerBattleCtrl4P__vt27(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        init__22THunterGuildSeqOfflineFPvPvPv(o, tl_00, (M2C_UNK *)reset_random_enemies_mode__19TPlayerBattleCtrl4PFv);
    }
    queue_destruction__7TObjectFv(arg0);
}

void TPlayerBattleCtrl4P__vt33(void) {  }

extern M2C_UNK reset_ctrl_to_default__19TPlayerBattleCtrl4PFv[];
extern s32 lbl_805D6AAC;

void TPlayerBattleCtrl4P__vt32(s32 arg0) {
    if ((s32) lbl_805D6AAC != 0) {
        TPlayerBattleCtrl4P__sub_80311380();
        set_fade_params__6TLobbyFi(reset_ctrl_to_default__19TPlayerBattleCtrl4PFv);
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(arg0), (void*)(3));
    }
}

void TPlayerBattleCtrl4P__vt30(void *arg0) {
    s32 var_r31;
    u32 ret;

    var_r31 = 0;
    do {
        ret = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if (ret != 0U) {
            play_effect_default__10TObjPlayerFii(ret, -1);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
    M2C_FIELD(arg0, s32 *, 0x240) = 0xF;
    set_score__19TPlayerBattleCtrl4PFPvi((void*)(arg0), (void*)(1));
}

extern s8 lbl_8050E208[];
extern s32 lbl_805D53A0;

void TPlayerBattleCtrl4P__vt24(s32 arg0) {
    if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) && (check_flag_100__10TObjPlayerFPv() == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 6) != 0)) {
        set_score__19TPlayerBattleCtrl4PFPvi((void*)(arg0), (void*)(5));
    }
}

void TPlayerBattleCtrl4P__vt21(void* p) { if (TPlayerBattleCtrl4P__sub_8031012C(p) != 0) { TPlayerBattleCtrl4P__sub_803101D4(p); update_players__19TPlayerBattleCtrl4PFv(p); set_score__19TPlayerBattleCtrl4PFPvi((void*)(p), (void*)((void*)5)); } }

}
