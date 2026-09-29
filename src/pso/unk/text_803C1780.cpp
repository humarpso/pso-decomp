#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef void (*RecoveredCallback_1268626c296b)(void *);
struct Obj_803C1A24 { u8 pad[0xAC]; void *fac; };

extern "C" {
void TLobby__sub_803C1A00(u8 *arg0, s32 arg1);
extern RecoveredCallback_1268626c296b lbl_805D7514;
void TLobby__sub_803C1A24(Obj_803C1A24 *arg0);
}

extern "C" {

void TLobby__sub_803C19D8(void);
extern M2C_UNK (*lbl_805D7510)();

void TLobby__sub_803C19D8(void) {
    lbl_805D7510();
}
void TLobby__sub_803C1A00(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB0) = arg1;
    M2C_FIELD(arg0, u32 *, 0xB4) = (u32) (arg1 / 96);
}
void TLobby__sub_803C1A24(Obj_803C1A24 *arg0) {
    if (arg0->fac != 0) {
        lbl_805D7514(arg0->fac);
    }
}

}
