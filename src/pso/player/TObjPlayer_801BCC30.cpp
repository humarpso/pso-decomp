#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 TObjPlayer__sub_801B2014(void *);
s32 init_player_data__10TObjPlayerFv(void *, void *);
s32 TObjPlayer__sub_801BEB68(void *, void *);
s32 TObjPlayer__sub_801BEB8C(void *);
s32 query_field374__10TObjPlayerFv(void *, void *);
s32 TObjPlayer__sub_801BEBB8(void *);
s32 query_flags_374__10TObjPlayerFv(void *, void *);
s32 TObjPlayer__sub_801BEBE4(void *);
s32 get_quest_status__10TObjPlayerFv(void *, void *);
s32 TObjPlayer__sub_801BEC10(void *);
s32 get_field_0x374__10TObjPlayerFv(void *, void *);
s32 TObjPlayer__sub_801BEC3C(void *);
}

extern "C" {

void TObjPlayer__sub_801BCC50(void);
int check_technique_castable__10TObjPlayerFl(void*);

void TObjPlayer::load_char_data(u8 *arg1) {
    sub_801BEE2C((int) (*(s16 *)((s8 *)arg1 + 0x24)));
    sub_801BEE24((int) (*(s16 *)((s8 *)arg1 + 0x26)));
    get_field_0x374__10TObjPlayerFv((void *) (((u8 *)this)), (void *) (TObjPlayer__sub_801BEC3C((void *) (arg1))));
    get_quest_status__10TObjPlayerFv((void *) (((u8 *)this)), (void *) (TObjPlayer__sub_801BEC10((void *) (arg1))));
    query_flags_374__10TObjPlayerFv((void *) (((u8 *)this)), (void *) (TObjPlayer__sub_801BEBE4((void *) (arg1))));
    query_field374__10TObjPlayerFv((void *) (((u8 *)this)), (void *) (TObjPlayer__sub_801BEBB8((void *) (arg1))));
    TObjPlayer__sub_801BEB68((void *) (((u8 *)this)), (void *) (TObjPlayer__sub_801BEB8C((void *) (arg1))));
    init_player_data__10TObjPlayerFv((void *) (((u8 *)this)), (void *) (arg1 + 0x118));
    *(s16 *)((s8 *)((u8 *)this) + 0x32C) = (s16) *(s16 *)((s8 *)arg1 + 0x22);
    TObjPlayer__sub_801B2014((void *) (((u8 *)this)));
}

}

#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TObjPlayer::can_cast_technique() { return check_technique_castable__10TObjPlayerFl(this); }
void TObjPlayer__sub_801BCC50(void) {  }

}
