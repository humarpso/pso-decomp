#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
extern "C" {
M2C_UNK reset_lobby_model__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8011E238(void *, int);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, int, int);
M2C_UNK set_flag_20000__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801BF690(void *);
M2C_UNK TObjPlayer__sub_801BF964(void *);
s16 ret_801D26AC();
void draw_and_send_field1c__10TObjPlayerFi(s32 arg0);
s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK TObjPlayer__sub_801D1480(M2C_UNK *);
M2C_UNK draw_and_send__10TObjPlayerFPv(M2C_UNK *);
int TObjPlayer__sub_8011E204(void*, void*);
int set_indexed_flags(void*, void*, void*);
int TObjPlayer__sub_801B12CC(void*);
int TObjPlayer__sub_801BE9A8(void*);
int TObjPlayer__sub_801C5B18(void*);
int TObjPlayer__sub_801C8770(void* p);
int TObjPlayer__sub_801B130C(void*);

void TObjPlayer__sub_801C8790(u8 *arg0) {
    TObjPlayer__sub_801BF690((void *) (arg0 + 0x730));
    TObjPlayer__sub_801BF964((void *) (arg0 + 0x5FC));
    reset_lobby_model__10TObjPlayerFPv((void *) (arg0 + 0x644));
    TObjPlayer__sub_8011E238((void *) (arg0), (int) (4));
    TObjPlayer__sub_801B130C((void *) (arg0));
    set_flag_20000__10TObjPlayerFi((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    set_action_state__10TObjPlayerFPvss((void *) (arg0), (int) (0x16), (int) (ret_801D26AC()));
}

}

}
