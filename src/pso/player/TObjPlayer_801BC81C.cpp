#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TObjPlayer__sub_801BC8F0();
M2C_UNK set_flag_400000__10TObjPlayerFi(void *);
M2C_UNK enter_battle_state__10TObjPlayerFPv(void *);
s32 obj_isState2_324();
s32 is_current_room__10TObjRoomIdFPv(s32);
s32 is_final_phase__10TObjPlayerFv();
s32 apply_state_transform__10TObjPlayerFUi(s32);
s32 set_flag_400000__10TObjPlayerFPv(s32);
int queue_destruction__7TObjectFv(void*);
void destroy_owned_object__10TObjPlayerFPv(void* p);
int TWindowSubComCard__sub_801058F8(void*);
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

void init_battle__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_801BC8F0();
    set_flag_400000__10TObjPlayerFi((void *) (arg0));
    enter_battle_state__10TObjPlayerFPv((void *) (arg0 + 0x634));
}

}

}
