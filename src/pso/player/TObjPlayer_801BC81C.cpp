#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801BC858(void *arg0);
void destroy_owned_object__10TObjPlayerFPv(void* p);
void init_battle__10TObjPlayerFi(s32 arg0);
s32 TObjPlayer__sub_80019248(void *);
int TObjPlayer__sub_801AFF50(void*);
int TObjPlayer__sub_801AFF80(void*);
void TObjPlayer__sub_801B1A84(void *);
M2C_UNK TObjPlayer__sub_801BC8F0();
void TObjPlayer__sub_801BCA0C(void);
void TObjPlayer__sub_801BCA10(void);
void TObjPlayer__sub_801BCAB0(void);
void TObjPlayer__sub_801BCB28(void);
void TObjPlayer__sub_801BCC50(void);
int TWindowSubComCard__sub_801058F8(void*);
s32 apply_state_transform__10TObjPlayerFUi(s32);
int can_cast_technique__10TObjPlayerFPv(void* p);
int check_technique_castable__10TObjPlayerFi(void*);
M2C_UNK enter_battle_state__10TObjPlayerFPv(void *);
s32 is_current_room__10TObjRoomIdFPv(s32);
s32 is_final_phase__10TObjPlayerFv();
s32 obj_isState2_324();
int queue_destruction__7TObjectFv(void*);
s32 set_flag_400000__10TObjPlayerFPv(s32);
M2C_UNK set_flag_400000__10TObjPlayerFi(void *);
void update_child__10TObjPlayerFPvPv(void *, void *);
void update_if_active__10TObjPlayerFPv(void* p);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void init_battle__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_801BC8F0();
    set_flag_400000__10TObjPlayerFi((void *) (arg0));
    enter_battle_state__10TObjPlayerFPv((void *) (arg0 + 0x634));
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern M2C_UNK update_photon_chair__10TObjPlayerFi[];
}

extern "C" {

}

void TObjPlayer__sub_801BC858(void *arg0) {
    s32 x;
    update_child__10TObjPlayerFPvPv((void *)((char *)arg0 + 900), arg0);
    enter_battle_state__10TObjPlayerFPv((void *)((char *)arg0 + 1588));
    x = TObjPlayer__sub_80019248(arg0);
    if (x != 0) {
        TObjPlayer__sub_801B1A84(update_photon_chair__10TObjPlayerFi);
    }
}

void destroy_owned_object__10TObjPlayerFPv(void* p) { if (*(unsigned int*)((char*)p + 0x548) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x548)); *(int*)((char*)p + 0x548) = 0; } }

}
