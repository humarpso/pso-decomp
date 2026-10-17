#include "types.h"
#include "pso/boss/TBoss6Thanks.h"

extern "C" {
s32 fn_8035CAE0();
int check_ship_door__12TBoss6ThanksFv(void*);
int TBoss6Thanks__sub_8035D270(void* p);
void *TBoss6Thanks__ct(void *, void *);
void *__nw__7TObjectFUl(int);
s32 any_player_has_listed_equipment();
s32 get_main_phase();
s32 is_split_screen();

extern void *tl_02;

void *TBoss6Thanks::create() {
    void *o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        o = TBoss6Thanks__ct(o, tl_02);
    }
    return o;
}

s32 TBoss6Thanks::is_ship_door_ready() {
    if ((check_ship_door__12TBoss6ThanksFv((void*)this) != 0) && (fn_8035CAE0() == 0)) {
        return 1;
    }
    return 0;
}

int TBoss6Thanks__sub_8035D270(void* p) { return check_ship_door__12TBoss6ThanksFv(p); }

extern s32 game_difficulty_selection;

s32 TBoss6Thanks::try_dispatch_darkfalz_phase() {
    if (((s32) game_difficulty_selection == 0) || ((get_main_phase() == 0xE) && (is_split_screen() == 0)) || (any_player_has_listed_equipment() == 0)) {
        return 0;
    }
    TBoss6Thanks::dispatch_darkfalz_phase();
    return 1;
}

}
