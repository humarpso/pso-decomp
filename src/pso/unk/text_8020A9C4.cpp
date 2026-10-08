#include "types.h"
struct SpawnRecord_8020A9C4 {
    s16 type;
    u16 flags;
    s16 index;
    s16 children;
    u16 reserved;
    s16 actor_id;
    u8 pad[0x48 - 0xC];
};

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Rec_8020AA94 {
    u8 pad0[4];
    s16 f4;
    u8 pad6[2];
    s16 f8;
    u8 padA[0x44 - 0xA];
};

extern "C" {
s32 get_enemy_factory_child_count(s32, SpawnRecord_8020A9C4 *);
extern s32 TLobby__data_805D60E4;
extern s32 TLobby__data_805D60EC;
void reserve_enemy_set_actor_ids(SpawnRecord_8020A9C4 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_8020C030(void *, Rec_8020AA94 *);
extern s32 TLobby__data_805D60E0;
extern s32 TLobby__data_805D60E8;
void assign_object_ids__6TLobbyFPviPv(Rec_8020AA94 *arg0, s32 arg1, void *arg2);
}

extern "C" {

void reserve_enemy_set_actor_ids(SpawnRecord_8020A9C4 *arg0, s32 arg1, s32 arg2) {
    SpawnRecord_8020A9C4 *r;
    s32 i;
    s32 n;
    for (i = 0; i < arg1; i++) {
        r = &arg0[i];
        r->actor_id = TLobby__data_805D60EC++ + 0x1000;
        r->index = TLobby__data_805D60E4++;
        if (r->children > 0) {
            TLobby__data_805D60E4 += r->children;
            TLobby__data_805D60EC += r->children;
        } else {
            n = get_enemy_factory_child_count(arg2, r);
            if (n > 0) {
                TLobby__data_805D60E4 += n;
                TLobby__data_805D60EC += n;
                r->children = n;
            }
        }
    }
}
void assign_object_ids__6TLobbyFPviPv(Rec_8020AA94 *arg0, s32 arg1, void *arg2) {
    s32 i;
    s32 r;
    for (i = 0; i < arg1; i++) {
        arg0[i].f8 = TLobby__data_805D60E8++ + 0x4000;
        arg0[i].f4 = TLobby__data_805D60E0++;
        r = TLobby__sub_8020C030(arg2, &arg0[i]);
        if (r >= 0) {
            TLobby__data_805D60E0 += r;
            TLobby__data_805D60E8 += r;
        }
    }
}

}
