#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjBase80364A_80364A74 { char pad[0x18]; };
struct TObjTreeLobby80364A_80364A74 : TObjBase80364A_80364A74 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

struct Base_80364B6C { char pad[0x18]; };

struct Ctrl_80364B6C : Base_80364B6C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21(void *, void *, s32, s32, s32);
};

struct P_80364B6C { s32 a; f32 b; };

struct Q_80364B6C { s32 a; s32 b; };

struct Obj_80364B6C { u8 pad0[0x1C]; f32 f1C; u16 h20; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
Ctrl_80364B6C *TPlayerBattleCtrl4P__sub_801BA74C(u16);
void TObjTreeLobby__sub_80364B6C(Obj_80364B6C *arg0);
}

extern "C" {

void *TObjTreeLobby__ct(void *arg0, s32 arg1, s32 arg2);
void *TObjTreeLobby__sub_80364BE8(void *arg0, s16 arg1);
void *__dt__13TObjTreeLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy_key_base__5TOKeyFPvs(void *, int);
M2C_UNK init_map_object_base();
s32 is_lobby_event_active();

extern M2C_UNK __vt__13TObjTreeLobby[];

void *__dt__13TObjTreeLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjTreeLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__13TObjTreeLobby[];
extern s32 lbl_805D4484;
extern void *TObjTreeLobby__data_805D6FC0;
extern s32 lbl_805D6FC4;
extern const f32 TObjTreeLobby__data_805E0290;

void *TObjTreeLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjTreeLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4484;
    ((TObjTreeLobby80364A_80364A74 *)arg0)->ct(arg2);
    if (is_lobby_event_active() != 0) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
    }
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) TObjTreeLobby__data_805E0290;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TObjTreeLobby__data_805D6FC0, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) lbl_805D6FC4;
    return arg0;
}

extern M2C_UNK lbl_804F2B60[];

void TObjTreeLobby__sub_80364B6C(Obj_80364B6C *arg0) {
    Ctrl_80364B6C *c = TPlayerBattleCtrl4P__sub_801BA74C(arg0->h20);
    if (c != 0) {
        P_80364B6C sp10;
        sp10.a = 0x15;
        sp10.b = arg0->f1C;
        P_80364B6C sp8 = sp10;
        c->v21(c, &sp8, 0, -1, -1);
        queue_destruction__7TObjectFv(arg0);
    }
}

void *TObjTreeLobby__sub_80364BE8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F2B60;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
