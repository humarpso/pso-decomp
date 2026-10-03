#include "types.h"

extern "C" {
s32 obj_getField1c();
s32 TObjPlayer__sub_801AFDB0(void *);
void TObjPlayer__sub_801C1F78(void *, s32);
s32 TObjPlayer__sub_801C21C4(void *, s32);
s32 TObjPlayer__sub_801C21D4(void *, s32);
void clamp_and_set_unit_value__10TObjPlayerFiUci(void *, u8, s16);
void TObjPlayer__sub_801D955C(void *, s32);
void TObjPlayer__sub_801D9B90(void *, s32);
void TObjPlayer__sub_801BCA14(u8 *arg0, void *arg1);
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
int TObjPlayer__sub_801AFF80(void*);
void update_if_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCA0C(void);
void TObjPlayer__sub_801BCA10(void);
void TObjPlayer__sub_801BCAB0(void);
void TObjPlayer__sub_801BCB28(void);
int can_cast_technique__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCC50(void);
int check_technique_castable__10TObjPlayerFi(void*);

void TObjPlayer__sub_801BCA14(u8 *arg0, void *arg1) {
    s32 i;
    TObjPlayer__sub_801C1F78(arg0 + 0x4AC, obj_getField1c());
    TObjPlayer__sub_801D955C(arg0 + 0x428, TObjPlayer__sub_801AFDB0(arg0));
    TObjPlayer__sub_801D9B90(arg0 + 0x428, 0x1D);
    i = 0;
    do {
        clamp_and_set_unit_value__10TObjPlayerFiUci(arg0, TObjPlayer__sub_801C21D4(arg1, i) + TObjPlayer__sub_801C21C4(arg1, i), (s16)i);
        i += 1;
    } while (i < 0x13);
}

}
