#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8036B2E8 { u8 pad0[0x1C]; u32 base; s32 t[4]; };
struct Obj_8036B340 { u8 pad0[0x1C]; u32 base; s32 t[4]; };

struct Ent_8036B424 { u8 b[0x3C]; };

struct Mgr_8036B424 {
    u8 pad0[0x18];
    void *vt;
    Ent_8036B424 *buf;
    void *ptrs[4];
};

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
void *__nw__7TObjectFUl(int);
extern u32 lbl_805D7008;
void create_singleton__6TLobbyFPv(void *arg0);
void TLobby__sub_8036B50C(void);
void TLobby__sub_8036B510(void);
void queue_destruction__7TObjectFv(void *);
void *alloc_buffer__11TOBoss4RockFPv(s32);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK TLobby__sub_8036B1AC(s32);
extern M2C_UNK lbl_804F3640[];
extern u32 lbl_805D7008;
Mgr_8036B424 *TLobby__sub_8036B424(Mgr_8036B424 *arg0, void * _w1);
}

extern "C" {

void dispatch_by_index__6TLobbyFUsi(u16 arg0, s32 arg1);
void send_slot_entity_or_local__6TLobbyFUsi(u16 arg0, s32 arg1);
M2C_UNK TLobby__sub_8036B1AC(s32);
void start_entry_timer__6TLobbyFPvUsi(Obj_8036B2E8 *arg0, u16 arg1, s32 arg2);
void TLobby__sub_8036B340(Obj_8036B340 *arg0);

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
        start_entry_timer__6TLobbyFPvUsi((Obj_8036B2E8 *)lbl_805D7008, arg0, arg1);
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
void start_entry_timer__6TLobbyFPvUsi(Obj_8036B2E8 *arg0, u16 arg1, s32 arg2) {
    if (arg0->base != 0) {
        s32 i = arg1;
        TLobby__sub_80076F48(arg0->base + i * 0x3C, arg2);
        arg0->t[i] = 0x78;
    }
}

void TLobby__sub_8036B340(Obj_8036B340 *arg0) {
    s32 i;
    for (i = 0; i != 4; i++) {
        if (arg0->t[i] != 0) {
            arg0->t[i] = arg0->t[i] - 1;
            if (arg0->t[i] == 0) {
                TLobby__sub_8036B1AC(arg0->base + i * 0x3C);
            }
        }
    }
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

Mgr_8036B424 *TLobby__sub_8036B424(Mgr_8036B424 *arg0, void * _w1) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0);
    arg0->vt = ((s32 *)&lbl_804F3640);
    arg0->buf = (Ent_8036B424 *)alloc_buffer__11TOBoss4RockFPv(0xF0);
    if (arg0->buf != 0) {
        for (i = 0; i != 4; i++) {
            TLobby__sub_8036B1AC((s32)&arg0->buf[i]);
            arg0->ptrs[i] = 0;
        }
    } else {
        queue_destruction__7TObjectFv(arg0);
    }
    lbl_805D7008 = (u32)arg0;
    return arg0;
}

void create_singleton__6TLobbyFPv(void *arg0) {
    void *o;
    if ((*(void * *)&lbl_805D7008) == NULL) {
        o = __nw__7TObjectFUl(0x30);
        if (o != NULL) {
            TLobby__sub_8036B424((Mgr_8036B424 *)(o), (void *)(arg0));
        }
    }
}
void TLobby__sub_8036B50C(void) {  }
void TLobby__sub_8036B510(void) {  }

}
