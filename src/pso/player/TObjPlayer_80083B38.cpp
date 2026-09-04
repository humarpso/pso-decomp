#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80083FB0(void);
void TObjPlayer__sub_80084614(void);
void TObjPlayer__sub_8008463C(void);
s32 check_all_players_ready__10TObjPlayerFv(void);
void reset_movie_state__10TObjPlayerFv(void);
s32 TObjPlayer__sub_80083F9C();
int TObjPlayer__sub_80084694(void);
int TObjPlayer__sub_800846C8(void*);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 get_main_phase();
s32 is_inactive__10TObjPlayerFPv();

    extern int lbl_805D4EE0;
void TObjPlayer__sub_80083FB0(void) { lbl_805D4EE0 = 0; }

s32 check_all_players_ready__10TObjPlayerFv(void) {
    s32 flag;
    s32 counter;

    flag = 1;
    if (TObjPlayer__sub_80083F9C() == 0) {
        return 0;
    }
    if (get_main_phase() == 0xF) {
        counter = 0;
        do {
            if ((TPlayerBattleCtrl4P__sub_801BA74C(counter) != 0U) && (is_inactive__10TObjPlayerFPv() == 0)) {
                flag = 0;
            }
            counter += 1;
        } while (counter < 4);
    }
    return flag;
}

    extern unsigned char lbl_805D4EE4;
void TObjPlayer__sub_80084614(void) { lbl_805D4EE4 = 0; TObjPlayer__sub_80084694(); }

    extern unsigned char lbl_805D4EE4;
void TObjPlayer__sub_8008463C(void) { lbl_805D4EE4 = 0; TObjPlayer__sub_800846C8((void*)0); }

    extern unsigned char lbl_805D4EE4;
void reset_movie_state__10TObjPlayerFv(void) { lbl_805D4EE4 = 0; TObjPlayer__sub_800846C8((void*)1); }

}
