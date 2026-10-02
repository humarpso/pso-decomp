#include "types.h"
struct ObjRow_8020E08C { s16 type; s16 flags; u8 pad04[4]; u16 id; u8 tail[0x44 - 0xA]; };

struct EneRow_8020E08C { s16 type; s16 flags; u8 pad04[6]; u16 id; u8 tail[0x48 - 0xC]; };

struct Saved_8020E08C { u16 id; s16 flags; s16 room; s16 wave; };

struct Floor_8020E08C {
    s32 objects;
    s32 enemies;
    u32 objectPlacement;
    u32 enemyPlacement;
    Saved_8020E08C *objectRows;
    Saved_8020E08C *enemyRows;
};

struct Archive_8020E08C { void *objects; void *enemies; };

extern "C" {
s32 get_current_floor(void);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
void send_or_handle_packet__6TLobbyFPvPvPvPvUi(void *, void *, void *, s32, u32);
extern Floor_8020E08C TLobby__data_80513AD0[18];
extern Archive_8020E08C TLobby__data_80513A40[18];
extern void *TLobby__data_805D6104;
extern ObjRow_8020E08C *TLobby__data_805D610C;
extern EneRow_8020E08C *TLobby__data_805D6114;
extern s32 TLobby__data_805D6110;
extern s32 TLobby__data_805D6118;
void TLobby__sub_8020E08C(void);
}

extern "C" {

void TLobby__sub_8020E08C(void) {
    s32 index;
    Floor_8020E08C *floor;
    s32 bytes;
    ObjRow_8020E08C *o;
    Saved_8020E08C *r;
    s32 i;
    EneRow_8020E08C *e;
    Saved_8020E08C *r2;
    s32 j;
    TLobby__data_805D610C = 0;
    TLobby__data_805D6114 = 0;
    TLobby__data_805D6110 = 0;
    TLobby__data_805D6118 = 0;
    index = get_current_floor();
    floor = &TLobby__data_80513AD0[index];
    bytes = floor->objects * 0x44;
    if (bytes > 0) {
        bytes = (bytes + 0x1F) & ~0x1F;
        TLobby__data_805D610C = (ObjRow_8020E08C *)alloc__22TQuestVmDownLoadServerFPv(bytes);
    }
    if (TLobby__data_805D610C != NULL) {
        send_or_handle_packet__6TLobbyFPvPvPvPvUi(TLobby__data_805D6104, TLobby__data_80513A40[index].objects, TLobby__data_805D610C, bytes, 1);
        o = TLobby__data_805D610C;
        r = floor->objectRows;
        for (i = 0; i < floor->objects; i++, o++, r++) {
            if (o->id == r->id) {
                o->flags = r->flags;
            }
        }
        floor->objectPlacement &= ~2U;
        TLobby__data_805D6110 = floor->objects;
    }
    bytes = floor->enemies * 0x48;
    if (bytes > 0) {
        bytes = (bytes + 0x1F) & ~0x1F;
        TLobby__data_805D6114 = (EneRow_8020E08C *)alloc__22TQuestVmDownLoadServerFPv(bytes);
    }
    if (TLobby__data_805D6114 != NULL) {
        send_or_handle_packet__6TLobbyFPvPvPvPvUi(TLobby__data_805D6104, TLobby__data_80513A40[index].enemies, TLobby__data_805D6114, bytes, 1);
        e = TLobby__data_805D6114;
        r2 = floor->enemyRows;
        for (j = 0; j < floor->enemies; j++, e++, r2++) {
            if (e->id == r2->id) {
                e->flags = r2->flags;
            }
        }
        floor->enemyPlacement &= ~4U;
        TLobby__data_805D6118 = floor->enemies;
    }
}

}
