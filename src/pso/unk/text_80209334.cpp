#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802093EC_lbl_805139F8 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct Obj_80209410 { s32 x; s32 *items; s32 idx; s32 count; };

struct S_802094AC { s32 a; s32 *arr; s32 f8; s32 count; };

struct Arg_80209334 { u8 pad[0xC]; s32 c; s32 d; };

extern "C" {
extern RecoveredGlobal_802093EC_lbl_805139F8 lbl_805139F8;
s32 TLobby__sub_802093EC(s32 arg0);
s32 TLobby__sub_80209410(Obj_80209410 *s);
void TLobby__sub_80209440(void *);
void TLobby__sub_802094AC(S_802094AC *arg0, s32 arg1);
s32 get_current_floor();
void queue_destruction__7TObjectFv(void *);
void *TEnemyTaskList__ct(void *, void *, s32);
s32 TLobby__sub_802093EC(s32 arg0);
void *__nw__7TObjectFUl(u32);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 __vt__14TSetEvtDestroy[];
extern s32 lbl_805D3630;
void *TSetEvtDestroy__ct(void *arg0, void *parent, Arg_80209334 *arg2);
}

extern "C" {

typedef char RecoveredGlobal_802093EC_lbl_805139F8_size[sizeof(RecoveredGlobal_802093EC_lbl_805139F8) == 0x48 ? 1 : -1];

void *TSetEvtDestroy__ct(void *arg0, void *parent, Arg_80209334 *arg2) {
    s32 *p;
    void *t;
    __ct__7TObjectFP7TObject(arg0, parent);
    M2C_FIELD(arg0, void **, 0x18) = __vt__14TSetEvtDestroy;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3630;
    p = (s32 *)TLobby__sub_802093EC(get_current_floor());
    M2C_FIELD(arg0, void **, 0x1C) = NULL;
    M2C_FIELD(arg0, void **, 0x30) = NULL;
    if (p != NULL) {
        M2C_FIELD(arg0, void **, 0x1C) = arg2;
        M2C_FIELD(arg0, void **, 0x20) = (void *)((u8 *)p + *p);
        M2C_FIELD(arg0, s32 *, 0x24) = arg2->d;
        M2C_FIELD(arg0, s32 *, 0x28) = arg2->c;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        t = __nw__7TObjectFUl(0x2C);
        if (t != NULL) {
            t = TEnemyTaskList__ct(t, arg0, 0x20);
        }
        M2C_FIELD(arg0, void **, 0x30) = t;
    } else {
        queue_destruction__7TObjectFv(arg0);
    }
    return arg0;
}

s32 TLobby__sub_802093EC(s32 arg0) {
    if (arg0 < 0x12) {
        return M2C_FIELD(&lbl_805139F8.value, M2C_UNK *, (arg0 * 4));
    }
    return 0;
}
s32 TLobby__sub_80209410(Obj_80209410 *s) {
    if (s->count < s->idx) return 0;
    return s->items[s->idx++];
}
void TLobby__sub_802094AC(S_802094AC *arg0, s32 arg1) {
    s32 off;
    s32 i = 0;
    arg0->f8 = off = 0;
    arg0->count = arg1;
    while (i < arg0->count) {
        *(s32 *)((u8 *)arg0->arr + off) = i;
        i++;
        off += 4;
    }
    TLobby__sub_80209440(arg0);
    TLobby__sub_80209440(arg0);
    TLobby__sub_80209440(arg0);
    TLobby__sub_80209440(arg0);
}

}
