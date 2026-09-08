#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TLobby__sub_80076F48(s32, s32);
M2C_UNK TLobby__sub_8036B1AC(s32);
void send_slot_entity__6TLobbyFPvUsi(void *arg0, u16 arg1, s32 arg2);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(s32);
extern M2C_UNK lbl_804F3640[];
extern u32 lbl_805D7008;
void *destroy_boss4_rock__6TLobbyFPvs(void *arg0, s16 arg1);
void *TLobby__sub_8036B424(void *, void *);
void *__nw__7TObjectFUl(int);
extern u32 lbl_805D7008;
void create_singleton__6TLobbyFPv(void *arg0);
void TLobby__sub_8036B50C(void);
void TLobby__sub_8036B510(void);
}

extern "C" {

void dispatch_by_index__6TLobbyFUsi(u16 arg0, s32 arg1);
void send_slot_entity_or_local__6TLobbyFUsi(u16 arg0, s32 arg1);
M2C_UNK TLobby__sub_8036B1AC(s32);
M2C_UNK TLobby__sub_8036B2E8(u32, u16, s32);

extern u32 lbl_805D7008;

void send_slot_entity_or_local__6TLobbyFUsi(u16 arg0, s32 arg1) {
    if (((u32) lbl_805D7008 != 0U) && (arg0 < 4U)) {
        send_slot_entity__6TLobbyFPvUsi((void *)(lbl_805D7008), arg0, (s32)(arg1));
        return;
    }
    TLobby__sub_8036B1AC(arg1);
}

extern u32 lbl_805D7008;

void dispatch_by_index__6TLobbyFUsi(u16 arg0, s32 arg1) {
    if (((u32) lbl_805D7008 != 0U) && (arg0 < 4U)) {
        TLobby__sub_8036B2E8(lbl_805D7008, arg0, arg1);
    }
}
void send_slot_entity__6TLobbyFPvUsi(void *arg0, u16 arg1, s32 arg2) {
    u32 temp_r6;
    temp_r6 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r6 != 0U) {
        TLobby__sub_80076F48(arg2, temp_r6 + (arg1 * 0x3C));
        return;
    }
    TLobby__sub_8036B1AC(arg2);
}
void *destroy_boss4_rock__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F3640;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x1C));
        (*(s32 *)&lbl_805D7008) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void create_singleton__6TLobbyFPv(void *arg0) {
    void *o;
    if ((*(void * *)&lbl_805D7008) == NULL) {
        o = __nw__7TObjectFUl(0x30);
        if (o != NULL) {
            TLobby__sub_8036B424(o, arg0);
        }
    }
}
void TLobby__sub_8036B50C(void) {  }
void TLobby__sub_8036B510(void) {  }

}
