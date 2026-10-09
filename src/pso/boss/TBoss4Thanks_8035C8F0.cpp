#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 fn_8035C2B4();
int is_door_0x97_open__12TBoss4ThanksFv(void*);
s32 is_door_open_and_ready__12TBoss4ThanksFPv(void* self);
}

extern "C" {

int TBoss4Thanks__sub_8035C96C(void* p);
s32 check_ready__12TBoss4ThanksFv(void);
void *create__12TBoss4ThanksFv(void);
void *TBoss4Thanks__ct(void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK dispatch_main_phase__12TBoss4ThanksFv();
s32 fn_8035C2B4();
s32 any_player_has_listed_item();
s32 get_main_phase();
int is_door_0x97_open__12TBoss4ThanksFv(void*);
s32 is_split_screen();

extern void *tl_02;

void *create__12TBoss4ThanksFv(void) {
    void *o = __nw__7TObjectFUl(0x54);
    if (o != NULL) {
        o = TBoss4Thanks__ct(o, tl_02);
    }
    return o;
}

s32 is_door_open_and_ready__12TBoss4ThanksFPv(void* self) {
    if ((is_door_0x97_open__12TBoss4ThanksFv((void*)self) != 0) && (fn_8035C2B4() == 0)) {
        return 1;
    }
    return 0;
}

int TBoss4Thanks__sub_8035C96C(void* p) { return is_door_0x97_open__12TBoss4ThanksFv(p); }

extern s32 game_difficulty_selection;

s32 check_ready__12TBoss4ThanksFv(void) {
    if (((s32) game_difficulty_selection == 0) || ((get_main_phase() == 0xE) && (is_split_screen() == 0)) || (any_player_has_listed_item() == 0)) {
        return 0;
    }
    dispatch_main_phase__12TBoss4ThanksFv();
    return 1;
}

}
