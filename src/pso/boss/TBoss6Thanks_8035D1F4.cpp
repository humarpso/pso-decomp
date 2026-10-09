#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 fn_8035CAE0();
int check_ship_door__12TBoss6ThanksFv(void*);
s32 is_ship_door_ready__12TBoss6ThanksFPv(void* self);
}

extern "C" {

int TBoss6Thanks__sub_8035D270(void* p);
void *create__12TBoss6ThanksFv(void);
s32 try_dispatch_darkfalz_phase__12TBoss6ThanksFv(void);
void *TBoss6Thanks__ct(void *, void *);
void *__nw__7TObjectFUl(int);
int check_ship_door__12TBoss6ThanksFv(void*);
M2C_UNK dispatch_darkfalz_phase__12TBoss6ThanksFv();
s32 fn_8035CAE0();
s32 any_player_has_listed_equipment();
s32 get_main_phase();
s32 is_split_screen();

extern void *tl_02;

void *create__12TBoss6ThanksFv(void) {
    void *o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        o = TBoss6Thanks__ct(o, tl_02);
    }
    return o;
}

s32 is_ship_door_ready__12TBoss6ThanksFPv(void* self) {
    if ((check_ship_door__12TBoss6ThanksFv((void*)self) != 0) && (fn_8035CAE0() == 0)) {
        return 1;
    }
    return 0;
}

int TBoss6Thanks__sub_8035D270(void* p) { return check_ship_door__12TBoss6ThanksFv(p); }

extern s32 game_difficulty_selection;

s32 try_dispatch_darkfalz_phase__12TBoss6ThanksFv(void) {
    if (((s32) game_difficulty_selection == 0) || ((get_main_phase() == 0xE) && (is_split_screen() == 0)) || (any_player_has_listed_equipment() == 0)) {
        return 0;
    }
    dispatch_darkfalz_phase__12TBoss6ThanksFv();
    return 1;
}

}
