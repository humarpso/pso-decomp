#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801BD2B8(s32 arg0);
M2C_UNK TKeyBoardControl__sub_801AFCF4(void *, int);
M2C_UNK TObjPlayer__sub_801BD1B4(void *);
void TObjPlayer__sub_801BD314(void);
s16 TObjPlayer__sub_801C2114();
M2C_UNK draw__10TObjPlayerFPv(void *);
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK update_action_animation__10TObjPlayerFPv(void *);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void TObjPlayer__sub_801BD2B8(s32 arg0) {
    if (reset_key_machine_state__10TObjPlayerFv() == 0) {
        TKeyBoardControl__sub_801AFCF4((void *) (arg0), (int) (TObjPlayer__sub_801C2114()));
    }
    TObjPlayer__sub_801BD1B4((void *) (arg0));
    draw__10TObjPlayerFPv((void *) (arg0));
    update_action_animation__10TObjPlayerFPv((void *) (arg0));
}

}

}
