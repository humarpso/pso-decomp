#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_and_send_field1c__10TObjPlayerFi(s32 arg0);
s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK set_cmd_87__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK draw_and_send__10TObjPlayerFPv(M2C_UNK *);
int TObjPlayer__sub_8011E204(void*, void*);
int set_indexed_flags(void*, void*, void*);
int activate_body_collision__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BE9A8(void*);
int TObjPlayer__sub_801C5B18(void*);
int TObjPlayer__sub_801C8770(void* p);
int deactivate_body_collision__10TObjPlayerFPv(void*);

int handle_6x57(void);
void draw_and_send_field1c__10TObjPlayerFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_cmd_87__10TObjPlayerFPv((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        draw_and_send__10TObjPlayerFPv((M2C_UNK *)&sp8);
    }
}

}
