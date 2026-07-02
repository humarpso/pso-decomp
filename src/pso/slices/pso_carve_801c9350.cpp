#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801CB874(void * a0 = 0);
s32 fn_801BEAB0(void);
s32 TObjPlayer__sub_801B95C8(void * a0 = 0);
s32 TObjPlayer__sub_801B1E54(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_clearFlags30(void * a0 = 0, s32 a1 = 0);
s32 obj_getField1c(void * a0 = 0);
s32 obj_getS16_32C(void * a0 = 0);
int TFontSmallLobby__sub_801C0228(void*);
void fn_801C959C(void);

int handle_6x53(void) { return 0; }
void* fn_801C93D0(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
int fn_801C9400(void) { return 0; }
int fn_801C94B8(void) { return 0; }
void fn_801C950C(void *arg0) {
    s32 temp_r31;

    if (M2C_FIELD(arg0, s16 *, 0x328) == 0) {
        if (fn_801BEAB0() != 0) {
            temp_r31 = obj_getField1c(arg0);
            TObjPlayer__sub_801B1E54(temp_r31, temp_r31, obj_getS16_32C(arg0));
            obj_clearFlags30(arg0, 0x200);
            return;
        }
        if (fn_801CB874(arg0) != 0) {
            TObjPlayer__sub_801B95C8(arg0);
        }
    }
}
void fn_801C959C(void) {  }
int fn_801C95A0(void) { return 0; }

}
