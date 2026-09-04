#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjBase8035BB_8035BB24 { char pad[0x18]; };
struct TObjCurtainLobby8035BB_8035BB24 : TObjBase8035BB_8035BB24 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

extern "C" {

void *TObjCurtainLobby__ct(void *arg0, s32 arg1, s32 arg2);
void *__dt__16TObjCurtainLobbyFv(void *arg0, s16 arg1);
s32 TObjCurtainLobby__sub_8035B87C(void *);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
M2C_UNK init_map_object_base();

extern M2C_UNK __vt__16TObjCurtainLobby[];

void *__dt__16TObjCurtainLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCurtainLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__16TObjCurtainLobby[];
extern s32 lbl_805D4424;
extern void *TObjCurtainLobby__data_805D6F58;
extern s32 lbl_805D6F5C;
extern const f32 TObjCurtainLobby__data_805E0148;

void *TObjCurtainLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCurtainLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4424;
    ((TObjCurtainLobby8035BB_8035BB24 *)arg0)->ct(arg2);
    if (TObjCurtainLobby__sub_8035B87C(arg0) == 0xC) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) TObjCurtainLobby__data_805E0148;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjCurtainLobby__data_805D6F58, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) lbl_805D6F5C;
    return arg0;
}

}
