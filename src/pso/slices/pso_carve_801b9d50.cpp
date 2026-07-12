#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_801B9D50 { char pad[0x18]; };
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct VObj_801B9D50 : Base_801B9D50 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m19();
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual s32 m31();
};

extern "C" {

u8 TObjPlayer__sub_8001972C(void *);
s32 TLobby__sub_800822E8(s32, M2C_UNK);
u8 TOSwitchItem__sub_80102C44(void *);
M2C_UNK TObjPlayer__sub_80143434(s32, s32);
s32 TObjPlayer__sub_801B1968(s32);
M2C_UNK TObjPlayer__sub_801B9CE0(s32);
M2C_UNK TObjPlayer__sub_801BF8EC(s32, s8, M2C_UNK);

void TObjPlayer__sub_801B9D50(s32 arg0, void *arg1) {
    VObj_801B9D50 *self = (VObj_801B9D50 *)arg1;

    TObjPlayer__sub_801BF8EC(arg0 + 0xD04, self->m31(), 0);
    self->m19();
    if ((TOSwitchItem__sub_80102C44(arg1) == 1) && (TObjPlayer__sub_8001972C(arg1) == 1)) {
        TObjPlayer__sub_801B9CE0(arg0);
    }
    if (TLobby__sub_800822E8(arg0, 2) != 0) {
        TObjPlayer__sub_80143434(arg0, TObjPlayer__sub_801B1968(arg0));
    }
}

}
