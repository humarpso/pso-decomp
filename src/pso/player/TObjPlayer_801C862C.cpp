#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801D0888(void *);
s32 TObjPlayer__sub_801D0E94();
void TObjPlayer__sub_801C862C(void);
void TObjPlayer__sub_801C8678(void);
int try_change_action_wrapper__10TObjPlayerFPv(void* p);
int try_change_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801C862C(void) {  }
void update_if_flagged__10TObjPlayerFPv(void *arg0) {
    if ((TObjPlayer__sub_801D0E94() == 0) && (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10)) {
        TObjPlayer__sub_801D0888(arg0);
    }
}
void TObjPlayer__sub_801C8678(void) {  }
int try_change_action_wrapper__10TObjPlayerFPv(void* p) { return try_change_action__10TObjPlayerFi(p); }

}
