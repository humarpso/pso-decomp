#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjBase803537 { char pad[0x18]; };
struct TObjKabochaLobby803537 : TObjBase803537 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

extern "C" {

void *TObjKabochaLobby__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK init_map_object_base();
s32 TLobby__sub_80351DFC();

extern M2C_UNK __vt__16TObjKabochaLobby[];
extern s32 lbl_805D4384;
extern void *TObjKabochaLobby__data_805D6EE8;
extern s32 TObjKabochaLobby__data_805D6EEC;
extern const f32 TObjKabochaLobby__data_805DFF38;

void *TObjKabochaLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjKabochaLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4384;
    ((TObjKabochaLobby803537 *)arg0)->ct(arg2);
    if (TLobby__sub_80351DFC() == 5) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) TObjKabochaLobby__data_805DFF38;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjKabochaLobby__data_805D6EE8, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) TObjKabochaLobby__data_805D6EEC;
    return arg0;
}

}
