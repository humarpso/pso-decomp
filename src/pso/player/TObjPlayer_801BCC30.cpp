#include "types.h"

extern "C" {
s32 TObjPlayer__sub_801B2014(void *);
s32 init_player_data__10TObjPlayerFPv(void *, void *);
s32 TObjPlayer__sub_801BEB68(void *, void *);
s32 TObjPlayer__sub_801BEB8C(void *);
s32 query_field374__10TObjPlayerFPv(void *, void *);
s32 TObjPlayer__sub_801BEBB8(void *);
s32 query_flags_374__10TObjPlayerFPv(void *, void *);
s32 TObjPlayer__sub_801BEBE4(void *);
s32 get_quest_status__10TObjPlayerFPv(void *, void *);
s32 TObjPlayer__sub_801BEC10(void *);
s32 get_field_0x374__10TObjPlayerFPv(void *, void *);
s32 TObjPlayer__sub_801BEC3C(void *);
s32 TObjPlayer__sub_801BEE24(void *, int);
s32 TObjPlayer__sub_801BEE2C(void *, int);
void load_char_data__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
}

extern "C" {

s32 obj_isState2_324();
s32 is_current_room__10TObjRoomIdFPv(s32);
s32 is_final_phase__10TObjPlayerFv();
s32 apply_state_transform__10TObjPlayerFUi(s32);
s32 set_flag_400000__10TObjPlayerFPv(s32);
int queue_destruction__7TObjectFv(void*);
void destroy_owned_object__10TObjPlayerFPv(void* p);
int is_script_controlled__10TObjPlayerFPv(void*);
int sync_current_floor__10TObjPlayerFPv(void*);
int sync_current_area__10TObjPlayerFPv(void*);
void update_if_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCA0C(void);
void TObjPlayer__sub_801BCA10(void);
void TObjPlayer__sub_801BCAB0(void);
void TObjPlayer__sub_801BCB28(void);
int can_cast_technique__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCC50(void);
int check_technique_castable__10TObjPlayerFi(void*);

void load_char_data__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    TObjPlayer__sub_801BEE2C((void *) (arg0), (int) (*(s16 *)((s8 *)arg1 + 0x24)));
    TObjPlayer__sub_801BEE24((void *) (arg0), (int) (*(s16 *)((s8 *)arg1 + 0x26)));
    get_field_0x374__10TObjPlayerFPv((void *) (arg0), (void *) (TObjPlayer__sub_801BEC3C((void *) (arg1))));
    get_quest_status__10TObjPlayerFPv((void *) (arg0), (void *) (TObjPlayer__sub_801BEC10((void *) (arg1))));
    query_flags_374__10TObjPlayerFPv((void *) (arg0), (void *) (TObjPlayer__sub_801BEBE4((void *) (arg1))));
    query_field374__10TObjPlayerFPv((void *) (arg0), (void *) (TObjPlayer__sub_801BEBB8((void *) (arg1))));
    TObjPlayer__sub_801BEB68((void *) (arg0), (void *) (TObjPlayer__sub_801BEB8C((void *) (arg1))));
    init_player_data__10TObjPlayerFPv((void *) (arg0), (void *) (arg1 + 0x118));
    *(s16 *)((s8 *)arg0 + 0x32C) = (s16) *(s16 *)((s8 *)arg1 + 0x22);
    TObjPlayer__sub_801B2014((void *) (arg0));
}

}

#include "types.h"

extern "C" {

int can_cast_technique__10TObjPlayerFPv(void* p) { return check_technique_castable__10TObjPlayerFi(p); }
void TObjPlayer__sub_801BCC50(void) {  }

}
