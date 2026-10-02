#include "types.h"

extern "C" {

s32 obj_isState2_324();
s32 is_current_room__10TObjRoomIdFPv(s32);
s32 is_final_phase__10TObjPlayerFv();
s32 apply_state_transform__10TObjPlayerFUi(s32);
s32 set_flag_400000__10TObjPlayerFPv(s32);
int queue_destruction__7TObjectFv(void*);
void destroy_owned_object__10TObjPlayerFPv(void* p);
int is_script_controlled__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801AFF50(void*);
int TObjPlayer__sub_801AFF80(void*);
void update_if_active__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCA0C(void);
void TObjPlayer__sub_801BCA10(void);
void TObjPlayer__sub_801BCAB0(void);
void TObjPlayer__sub_801BCB28(void);
int can_cast_technique__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BCC50(void);
int check_technique_castable__10TObjPlayerFi(void*);

void TObjPlayer__sub_801BCAB0(void) {  }
void update_state__10TObjPlayerFi(s32 arg0) {
    if (obj_isState2_324() != 0) {
        set_flag_400000__10TObjPlayerFPv(arg0);
    } else {
        TObjPlayer__sub_801AFF80((void*)(arg0));
        TObjPlayer__sub_801AFF50((void*)(arg0));
    }
    if ((is_final_phase__10TObjPlayerFv() != 0) && (is_current_room__10TObjRoomIdFPv(arg0) != 0)) {
        apply_state_transform__10TObjPlayerFUi(arg0);
    }
}
void TObjPlayer__sub_801BCB28(void) {  }
void update_if_active__10TObjPlayerFPv(void* p) { if (is_script_controlled__10TObjPlayerFPv(p) != 0) { TObjPlayer__sub_801AFF80(p); TObjPlayer__sub_801AFF50(p); } }

}
