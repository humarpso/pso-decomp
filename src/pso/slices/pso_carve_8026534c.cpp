#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __ct__7TObjectFP7TObject();
s32 TWindowMakeTeam__sub_80264A90(u8);
s32 TWindowMakeTeam__sub_80264AB8(u8);
struct TWMT;
s32 TWindowMakeTeam__sub_80264DF4(struct TWMT *);
M2C_UNK TWindowMakeTeam__sub_80268650(s32, s32, M2C_UNK);
extern void* __vt__15TWindowMakeTeam[];
extern s32 lbl_805D3958;

void *TWindowMakeTeam__ct(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r0;
    s32 v;
    register struct TWMT *self;

    __ct__7TObjectFP7TObject();
    self = (struct TWMT *) arg0;
    M2C_FIELD(self, void **, 0x18) = (void *) __vt__15TWindowMakeTeam;
    v = lbl_805D3958;
    M2C_FIELD(self, s32 *, 0) = v;
    M2C_FIELD(self, s8 *, 0x1C) = 0;
    M2C_FIELD(self, s8 *, 0x1D) = 0;
    M2C_FIELD(self, s32 *, 0x20) = arg2;
    M2C_FIELD(self, s32 *, 0x2C) = TWindowMakeTeam__sub_80264DF4(self);
    M2C_FIELD(self, s32 *, 0x30) = 0;
    M2C_FIELD(self, s32 *, 0x34) = 0;
    M2C_FIELD(self, s32 *, 0x24) = 0;
    M2C_FIELD(self, s32 *, 0x28) = 0;
    M2C_FIELD(self, u8 *, 0x1E) = 0U;
    M2C_FIELD(self, u8 *, 0x1F) = 0U;
    temp_r0 = M2C_FIELD(self, s32 *, 0x20);
    if ((temp_r0 == 1) || (temp_r0 == 2)) {
        TWindowMakeTeam__sub_80268650(M2C_FIELD(self, s32 *, 0x2C), TWindowMakeTeam__sub_80264AB8(M2C_FIELD(self, u8 *, 0x1E)), 2);
    }
    TWindowMakeTeam__sub_80268650(M2C_FIELD(self, s32 *, 0x2C), TWindowMakeTeam__sub_80264A90(M2C_FIELD(self, u8 *, 0x1F)), 3);
    return arg0;
}

}
