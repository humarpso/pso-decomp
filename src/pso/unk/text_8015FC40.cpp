#include "types.h"
struct State_8015FC40 { s16 a; s16 b; };

struct Pkt_8015FC40 { s16 hdr; u16 id; s32 state; s32 kind; };

struct Obj_8015FC40 { u8 pad[4]; s16 kind; };

struct Self_8015FC40 { u8 pad[0x1C]; u16 id; u8 pad1e[0x80 - 0x1E]; Obj_8015FC40 *obj; };

extern "C" {
void copy_short_fields__6TLobbyFPv(void *, void *);
s32 access_object_saved_state(u8 *arg0, s32 arg1, s16 arg2);
void init__17TOBarrierEnergy01Fv(void *);
void update_and_send_60__6TLobbyFPv(void *);
void door_ancient08_sync_state(Self_8015FC40 *self, State_8015FC40 *src);
}

extern "C" {

void door_ancient08_sync_state(Self_8015FC40 *self, State_8015FC40 *src) {
    State_8015FC40 st;
    Obj_8015FC40 *obj;
    if (src != 0) {
        copy_short_fields__6TLobbyFPv(&st, src);
    } else {
        access_object_saved_state((u8 *)self, (s32)&st, 1);
    }
    obj = self->obj;
    if (obj != 0) {
        Pkt_8015FC40 pkt;
        init__17TOBarrierEnergy01Fv(&pkt);
        pkt.id = self->id;
        pkt.state = st.a;
        pkt.kind = obj->kind;
        update_and_send_60__6TLobbyFPv(&pkt);
    }
}

}
