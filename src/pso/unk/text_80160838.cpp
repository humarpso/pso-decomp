#include "types.h"
#include "pso/misc/TODoorAncient09.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOBarrierEnergy01.h"
struct State_80160838 { s16 a; s16 b; };

struct Pkt_80160838 { s16 hdr; u16 id; s32 state; s32 kind; };

struct Obj_80160838 { u8 pad[4]; s16 kind; };

struct Self_80160838 { u8 pad[0x1C]; u16 id; u8 pad1e[0x80 - 0x1E]; Obj_80160838 *obj; };

extern "C" {
s32 access_object_saved_state__13TUnk_804AF8A0FPvs(u8 *arg0, s32 arg1, s16 arg2);
void update_and_send_60__6TLobbyFPv(void *);
void door_ancient09_sync_state__15TODoorAncient09FPv(Self_80160838 *self, State_80160838 *src);
}

extern "C" {

void TODoorAncient09::door_ancient09_sync_state(void *src_arg) {
    Self_80160838 *self = (Self_80160838 *)this;
    State_80160838 *src = (State_80160838 *)src_arg;
    State_80160838 st;
    Obj_80160838 *obj;
    if (src != 0) {
        ((TLobby *)(&st))->copy_short_fields(src);
    } else {
        access_object_saved_state__13TUnk_804AF8A0FPvs((u8 *)self, (s32)&st, 1);
    }
    obj = self->obj;
    if (obj != 0) {
        Pkt_80160838 pkt;
        ((TOBarrierEnergy01 *)(&pkt))->init();
        pkt.id = self->id;
        pkt.state = st.a;
        pkt.kind = obj->kind;
        update_and_send_60__6TLobbyFPv(&pkt);
    }
}

}
