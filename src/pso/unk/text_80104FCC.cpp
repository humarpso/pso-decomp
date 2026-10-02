#include "types.h"

struct Blk_8010542C { u32 w[4]; };
struct Item_8010542C { u32 a; Blk_8010542C b; };
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

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Rec_80105538 { s32 a; u16 b; u16 b2; s32 c; };

struct Pkt_80105538 {
    u8 hdr[4];
    s8 f4;
    s8 f5;
    s16 f6;
    f32 x;
    f32 z;
    s16 f10;
    u8 f12[2];
    s8 f14;
};

struct Vec_80105538 { f32 x, y, z; };

struct Obj_80105538 {
    u8 pad[0x28];
    s16 f28;
    u8 pad2a[2];
    s16 f2c;
    u8 pad2e[0x38 - 0x2E];
    f32 x;
    f32 y;
    f32 z;
    u8 pad44[0x370 - 0x44];
    s32 f370;
};

extern "C" {
void TItemData__sub_8010CCB0(void *);
s32 isValidGroundDrop__9TItemDataFv(void *);
void TLobby__sub_8011A7F8(s32);
typedef s32 (*Fn_8010542C)(void *);
extern Fn_8010542C lbl_8049EEE8[];
void *get_player_by_client_id(s32);
s8 get_current_floor();
s32 TObjPlayer__sub_80104840(s32);
void build_6x06_guild_card_packet__6TLobbyFPv(void *);
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 get_global_state__14TOKeyMachine01Fv();
void process_and_dispatch_packet__6TLobbyFPv(void *);
extern s32 TLobby__data_805D53AC;
extern Entry_8010567C *TLobby__data_805D6140;
extern s32 lbl_805D53A0;
void request_box_item_drop(Obj_8010567C *self, void *unused, s16 arg2);
int check_class_equip_permission(Player_80105348 *player, s32 perm);
void *get_player_by_client_id(s32);
s8 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 get_global_state__14TOKeyMachine01Fv();
u32 csnVecterUnder(Vec_80105538 *, s32);
s32 TLobby__sub_80104820();
void dispatch_packet_wrapper__6TLobbyFPv(void *);
void build_6x06_send_guild_card(void *);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
extern Rec_80105538 *TLobby__data_805D6144;
extern const f32 lbl_805DAAB4;
void send_6x60_standard_drop_item_request(Obj_80105538 *self);
}

extern "C" {

int TLobby__sub_8010540C(void* p);
int roll_weapon_special_for_stars(void*);

int check_class_equip_permission(Player_80105348 *player, s32 perm) {
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

int TLobby__sub_8010540C(void* p) { return roll_weapon_special_for_stars(p); }
s32 TLobby__sub_8010542C(Item_8010542C *src) {
    Fn_8010542C fn;
    if (src != 0) {
        Item_8010542C item = *src;
        TItemData__sub_8010CCB0(&item);
        if (isValidGroundDrop__9TItemDataFv(&item) != 0) {
            if (*(u8 *)src < 5) {
                fn = lbl_8049EEE8[*(u8 *)src];
                if (fn != 0) {
                    TLobby__sub_8011A7F8(item.b.w[2]);
                    return fn(&item);
                }
            }
        }
    }
    return 0;
}

void send_6x60_standard_drop_item_request(Obj_80105538 *self) {
    void *p1;
    void *p2;
    if (self != 0) {
        p1 = get_player_by_client_id(TLobby__data_805D53AC);
        p2 = get_player_by_client_id(lbl_805D53A0);
        if (p1 != 0 && p2 != 0) {
            get_current_floor();
            if (TLobby__sub_80104820() != 0 &&
                (get_field_3e4__10TObjPlayerFPv(p1) != get_field_3e4__10TObjPlayerFPv(p2) ||
                 TLobby__data_805D53AC == lbl_805D53A0)) {
                if (self->f2c != -1) {
                    Rec_80105538 e = TLobby__data_805D6144[self->f2c];
                    if (e.b != 0xFFFF) {
                        Pkt_80105538 pkt;
                        build_6x06_send_guild_card(&pkt);
                        pkt.f4 = get_current_floor();
                        pkt.f5 = self->f370;
                        pkt.f6 = self->f2c;
                        pkt.x = self->x;
                        pkt.z = self->z;
                        pkt.f10 = self->f28;
                        pkt.f14 = get_global_state__14TOKeyMachine01Fv();
                        Vec_80105538 v;
                        v.x = pkt.x;
                        v.y = lbl_805DAAB4;
                        v.z = pkt.z;
                        if (csnVecterUnder(&v, 1) != 0) {
                            dispatch_packet_wrapper__6TLobbyFPv(&pkt);
                        }
                    }
                }
            }
        }
    }
}

void request_box_item_drop(Obj_8010567C *self, void *unused, s16 arg2) {
    void *p1;
    void *p2;
    if (self != 0) {
        p1 = get_player_by_client_id(TLobby__data_805D53AC);
        p2 = get_player_by_client_id(lbl_805D53A0);
        if (p1 != 0 && p2 != 0 && TObjPlayer__sub_80104840(get_global_state__14TOKeyMachine01Fv()) != 0 &&
            (get_field_3e4__10TObjPlayerFPv(p1) != get_field_3e4__10TObjPlayerFPv(p2) ||
             TLobby__data_805D53AC == lbl_805D53A0)) {
            if (self->f2c != -1) {
                Entry_8010567C e = TLobby__data_805D6140[self->f2c];
                if (e.b != 0xFFFF) {
                    Pkt_8010567C pkt;
                    build_6x06_guild_card_packet__6TLobbyFPv(&pkt);
                    pkt.f4 = get_current_floor();
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
