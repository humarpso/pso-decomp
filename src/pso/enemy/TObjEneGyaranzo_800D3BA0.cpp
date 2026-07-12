#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneGyaranzo__sub_800D3BA0(void);
M2C_UNK TLobby__sub_8001FE7C(u32, s32);

extern u32 lbl_805D51FC;

struct Base_800D3BA0 { char pad[0xC]; };
struct VObj_800D3BA0 : Base_800D3BA0 {
    virtual void m0(s32);
};
extern struct VObj_800D3BA0 *lbl_805D5208;

void TObjEneGyaranzo__sub_800D3BA0(void) {
    if (lbl_805D51FC != 0U) {
        TLobby__sub_8001FE7C(lbl_805D51FC, 1);
        lbl_805D51FC = 0U;
    }
    if (lbl_805D5208 != 0) {
        if (lbl_805D5208 != 0) {
            lbl_805D5208->m0(1);
        }
        lbl_805D5208 = 0;
    }
}

}
