#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800F083C(void);
void clear_alt_model_flag__10TObjPlayerFv(void);
void update_lights__10TObjPlayerFv(void);
int TObjLight__sub_801337A0(void*);
int TObjLight__sub_801337F8(void*);
M2C_UNK set_global_pair__10TObjPlayerFii(M2C_UNK, M2C_UNK);

    extern int lbl_805D5560;
void update_lights__10TObjPlayerFv(void) { TObjLight__sub_801337A0((void*)(lbl_805D5560)); TObjLight__sub_801337F8((void*)(lbl_805D5560)); }

void TObjPlayer__sub_800F083C(void) {  }

extern s32 some_id_805c6f74;

void clear_alt_model_flag__10TObjPlayerFv(void) {
    some_id_805c6f74 &= 0xFFFFF7FF;
    set_global_pair__10TObjPlayerFii(0xFF00, 0);
}

}
