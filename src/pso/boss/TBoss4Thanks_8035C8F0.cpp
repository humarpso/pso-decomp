#include "types.h"
#include "pso/boss/TBoss4Thanks.h"

extern "C" {
s32 fn_8035C2B4();
int is_door_0x97_open__12TBoss4ThanksFv(void*);
int TBoss4Thanks__sub_8035C96C(void* p);
void *TBoss4Thanks__ct(void *, void *);
void *__nw__7TObjectFUl(int);
s32 any_player_has_listed_item();
s32 get_main_phase();
s32 is_split_screen();

extern void *tl_02;

void *TBoss4Thanks::create() {
    void *o = __nw__7TObjectFUl(0x54);
    if (o != NULL) {
        o = TBoss4Thanks__ct(o, tl_02);
    }
    return o;
}

s32 TBoss4Thanks::is_door_open_and_ready() {
    if ((is_door_0x97_open__12TBoss4ThanksFv((void*)this) != 0) && (fn_8035C2B4() == 0)) {
        return 1;
    }
    return 0;
}

int TBoss4Thanks__sub_8035C96C(void* p) { return is_door_0x97_open__12TBoss4ThanksFv(p); }

extern s32 game_difficulty_selection;

s32 TBoss4Thanks::check_ready() {
    if (((s32) game_difficulty_selection == 0) || ((get_main_phase() == 0xE) && (is_split_screen() == 0)) || (any_player_has_listed_item() == 0)) {
        return 0;
    }
    TBoss4Thanks::dispatch_main_phase();
    return 1;
}

}
