#include "types.h"
struct State_80160838 { s16 a; s16 b; };

struct Pkt_80160838 { s16 hdr; u16 id; s32 state; s32 kind; };

struct Obj_80160838 { u8 pad[4]; s16 kind; };

struct Self_80160838 { u8 pad[0x1C]; u16 id; u8 pad1e[0x80 - 0x1E]; Obj_80160838 *obj; };

extern "C" {
void copy_short_fields__6TLobbyFPvPv(void *, void *);
s32 TLobby__sub_80156A80(u8 *arg0, s32 arg1, s16 arg2);
void init__17TOBarrierEnergy01FPv(void *);
void update_and_send_60__6TLobbyFPv(void *);
void fn_80160838(Self_80160838 *self, State_80160838 *src);
}

extern "C" {

void fn_80160838(Self_80160838 *self, State_80160838 *src) {
    State_80160838 st;
    Obj_80160838 *obj;
    if (src != 0) {
        copy_short_fields__6TLobbyFPvPv(&st, src);
    } else {
        TLobby__sub_80156A80((u8 *)self, (s32)&st, 1);
    }
    obj = self->obj;
    if (obj != 0) {
        Pkt_80160838 pkt;
        init__17TOBarrierEnergy01FPv(&pkt);
        pkt.id = self->id;
        pkt.state = st.a;
        pkt.kind = obj->kind;
        update_and_send_60__6TLobbyFPv(&pkt);
    }
}

}
