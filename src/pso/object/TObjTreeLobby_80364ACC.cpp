#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjBase80364A { char pad[0x18]; };
struct TObjTreeLobby80364A : TObjBase80364A {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

extern "C" {

void *TObjTreeLobby__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8015858C();
s32 fn_80351E38();

extern M2C_UNK __vt__13TObjTreeLobby[];
extern s32 lbl_805D4484;
extern void *TObjTreeLobby__data_805D6FC0;
extern s32 lbl_805D6FC4;
extern const f32 TObjTreeLobby__data_805E0290;

void *TObjTreeLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    fn_8015858C();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjTreeLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4484;
    ((TObjTreeLobby80364A *)arg0)->ct(arg2);
    if (fn_80351E38() != 0) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
    }
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) TObjTreeLobby__data_805E0290;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjTreeLobby__data_805D6FC0, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) lbl_805D6FC4;
    return arg0;
}

}
