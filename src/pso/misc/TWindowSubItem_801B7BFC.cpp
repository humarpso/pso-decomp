#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801D4368(void * a0 = 0);
s32 TObjPlayer__sub_80019248(void * a0 = 0);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
s32 obj_testFlags30(s32, s32);
s32 TLobby__sub_800495BC(s32);
s32 TLobby__sub_800822E8(s32, s32);
u32 TObjPlayer__sub_801BE778();
void handle_6x99(void);
void handle_6x98(void);

void handle_6x99(void) {  }

void handle_6x98(void) {  }

s32 is_usable__14TWindowSubItemFi(s32 arg0) {
    if ((TObjPlayer__sub_801BE778() != 0U) || (TLobby__sub_800822E8(arg0, 0x43001E) == 0) || (obj_testFlags30(arg0, 0x20) != 0) || (TLobby__sub_800495BC(arg0) != 0)) {
        return 0;
    }
    return 1;
}

}
