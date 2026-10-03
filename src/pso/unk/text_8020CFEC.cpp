#include "types.h"

extern "C" {
typedef s32 (*Fn_8020CFEC)(void *);
struct Ent_8020CFEC { s32 a; Fn_8020CFEC fn; s32 b; s32 c; };
struct Msg_8020CFEC { s16 id; s16 pad; u8 data[1]; };
s32 get_global_state__14TOKeyMachine01Fv();
extern Ent_8020CFEC *TLobby__data_804C1ED8[];
s32 TLobby__sub_8020CFEC(s32 arg0, Msg_8020CFEC *arg1) {
    Fn_8020CFEC f = TLobby__data_804C1ED8[get_global_state__14TOKeyMachine01Fv()][arg1->id].fn;
    if (f != 0) {
        return f(arg1->data);
    }
    return 0;
}

typedef s32 (*Fn_8020D054)(void *);
struct Out_8020D054 { s32 a; Fn_8020D054 fn; };
struct Msg_8020D054 { s16 id; s16 pad; u8 data[1]; };
s32 find_set_factory_index(void *, void *);
s32 create_set_object_from_row(Msg_8020D054 *arg0) {
    Out_8020D054 o;
    if (arg0->id != -1 && find_set_factory_index(arg0, &o) >= 0) {
        return o.fn(arg0->data);
    }
    return 0;
}

}
