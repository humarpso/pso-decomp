#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct E12_801BC948 { u8 b[12]; } E12_801BC948;

typedef struct E1C_801BC948 { u8 pad[0x1C]; } E1C_801BC948;

typedef struct Src_801BC948 {
    u8 pad0[0x28];
    E12_801BC948 recs[5];
    u8 pad64[0xB4 - 0x64];
    u8 levels[0x13];
    u8 padc7[0x142 - 0xC7];
    E1C_801BC948 bonus[0x13];
} Src_801BC948;

typedef struct Player_801BC948 {
    u8 pad0[0x254];
    E12_801BC948 recs[5];
    u8 pad290[0x428 - 0x290];
    u8 techs[0x4AC - 0x428];
    u8 f4ac[4];
} Player_801BC948;

extern "C" {
s32 obj_getField1c(void *);
M2C_UNK TObjPlayer__sub_801BF9E0(void *, int);
M2C_UNK TObjPlayer__sub_801C2244(void *, void *);
M2C_UNK update_follow_particle__10TObjPlayerFii(void *, void *);
void TObjPlayer__sub_801BC8F0(s32 arg0);
s32 obj_getField1c(void *);
s32 get_class_index__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BEF44(void *, void *);
void TObjPlayer__sub_801C1F78(void *, s32);
void clamp_and_set_unit_value__10TObjPlayerFiUci(void *, u8, s16);
void TObjPlayer__sub_801D955C(void *, s32);
void copy_all_technique_entries__10TObjPlayerFPvPv(void *, s32);
void init_session_technique_caps__10TObjPlayerFPvPv(Player_801BC948 *self, Src_801BC948 *src);
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

void TObjPlayer__sub_801BC8F0(s32 arg0) {
    TObjPlayer__sub_801BF9E0((void *) (arg0 + 0x634), (int) (obj_getField1c((void *) (arg0))));
    update_follow_particle__10TObjPlayerFii((void *) (arg0 + 0x384), (void *) (arg0));
    TObjPlayer__sub_801C2244((void *) (arg0 + 0x34C), (void *) (obj_getField1c((void *) (arg0))));
}
void init_session_technique_caps__10TObjPlayerFPvPv(Player_801BC948 *self, Src_801BC948 *src) {
    s32 i;
    TObjPlayer__sub_801C1F78(self->f4ac, obj_getField1c(self));
    TObjPlayer__sub_801D955C(self->techs, get_class_index__10TObjPlayerFPv(self));
    copy_all_technique_entries__10TObjPlayerFPvPv(self->techs, 0x1D);
    for (i = 0; i < 0x13; i++) {
        clamp_and_set_unit_value__10TObjPlayerFiUci(self, src->levels[i] + src->bonus[i].pad[0], i);
    }
    for (i = 0; i < 5; i++) {
        TObjPlayer__sub_801BEF44(&self->recs[i], &src->recs[i]);
    }
}

}
