#include "types.h"

struct Entry_8010567C { u16 a; u16 b; };

struct Pkt_8010567C {
    u8 hdr[4];
    u8 f4;
    u8 f5;
    s16 f6;
    f32 x;
    f32 z;
    s16 f10;
    s16 f12;
    u8 f14;
    f32 f18;
    s32 f1c;
    s32 f20;
    s32 f24;
};

struct Obj_8010567C {
    u8 pad[0x28];
    s16 f28;
    u8 pad2a[2];
    s16 f2c;
    u8 pad2e[0x38 - 0x2E];
    f32 x;
    f32 y;
    f32 z;
    u8 pad44[0x70 - 0x44];
    f32 f70;
    u8 pad74[0x84 - 0x74];
    s32 f84;
    s32 f88;
    s32 f8c;
};

struct Player_80105348 { u8 pad[0x890]; s32 traits; };

extern "C" {
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
s8 TObjPlayer__sub_800196EC();
s32 TObjPlayer__sub_80104840(s32);
void build_6x06_guild_card_packet__6TLobbyFPv(void *);
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 get_global_state__14TOKeyMachine01Fv();
void process_and_dispatch_packet__6TLobbyFPv(void *);
extern s32 TLobby__data_805D53AC;
extern Entry_8010567C *TLobby__data_805D6140;
extern s32 lbl_805D53A0;
void TLobby__sub_8010567C(Obj_8010567C *self, void *unused, s16 arg2);
int TItemMag__sub_80105348(Player_80105348 *player, s32 perm);
}

extern "C" {

int TLobby__sub_8010540C(void* p);
int TObjPlayer__sub_8011C974(void*);

int TItemMag__sub_80105348(Player_80105348 *player, s32 perm) {
    s32 t = player->traits;
    if (t & 0x20) {
        if (!(perm & 1)) return 0;
    } else if (t & 0x40) {
        if (!(perm & 2)) return 0;
    } else if (!(perm & 4)) {
        return 0;
    }
    if (t & 0x10) {
        if (!(perm & 0x10)) return 0;
    } else if (t & 8) {
        if (!(perm & 0x20)) return 0;
    } else if (t & 4) {
        if (!(perm & 8)) return 0;
    }
    if (t & 1) {
        if (!(perm & 0x40)) return 0;
    } else if (t & 2) {
        if (!(perm & 0x80)) return 0;
    }
    return 1;
}

int TLobby__sub_8010540C(void* p) { return TObjPlayer__sub_8011C974(p); }
void TLobby__sub_8010567C(Obj_8010567C *self, void *unused, s16 arg2) {
    void *p1;
    void *p2;
    if (self != 0) {
        p1 = TPlayerBattleCtrl4P__sub_801BA74C(TLobby__data_805D53AC);
        p2 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
        if (p1 != 0 && p2 != 0 && TObjPlayer__sub_80104840(get_global_state__14TOKeyMachine01Fv()) != 0 &&
            (get_field_3e4__10TObjPlayerFPv(p1) != get_field_3e4__10TObjPlayerFPv(p2) ||
             TLobby__data_805D53AC == lbl_805D53A0)) {
            if (self->f2c != -1) {
                Entry_8010567C e = TLobby__data_805D6140[self->f2c];
                if (e.b != 0xFFFF) {
                    Pkt_8010567C pkt;
                    build_6x06_guild_card_packet__6TLobbyFPv(&pkt);
                    pkt.f4 = TObjPlayer__sub_800196EC();
                    pkt.f5 = 0x30;
                    pkt.x = self->x;
                    pkt.z = self->z;
                    pkt.f10 = self->f28;
                    pkt.f12 = arg2;
                    pkt.f6 = self->f2c;
                    pkt.f14 = get_global_state__14TOKeyMachine01Fv();
                    pkt.f18 = self->f70;
                    pkt.f1c = self->f84;
                    pkt.f20 = self->f88;
                    pkt.f24 = self->f8c;
                    process_and_dispatch_packet__6TLobbyFPv(&pkt);
                }
            }
        }
    }
}

}
