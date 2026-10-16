#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"
#include "pso/object/TObjMotion.h"

extern "C" {

void init_6x5E_buy_item_header(void* p);
s32 TLobby__send_and_handle_60(void *);
s32 bswap_16__FPUs(s32);
int bswap__9TItemDataFv(void*);
s32 read_be16_field2__10TObjPlayerFv();

extern s32 local_client_id;
extern s32 lbl_805D5E50;

u8 TLobby::is_matching_id(s32 arg0, u16 arg1) {
    int var_r5;

    var_r5 = 0;
    if (((s32) lbl_805D5E50 == 0) && ((s32) arg1 == (s32) local_client_id)) {
        var_r5 = 1;
    }
    return (u8) var_r5;
}

void TLobby::bswap_shop_item() { ((int (*)(void*))read_be16_field2__10TObjPlayerFv)(this); bswap__9TItemDataFv((char*)this + 0x4); }
void TLobby::send_item_and_handle_60() { bswap_shop_item(); TLobby__send_and_handle_60(this); }
void TLobby::copy_item_data(void* q) { *(u8 *)&this->m_name = *(u8*)((char*)q + 0x0); *(u8*)((char*)this + 0x1) = *(u8*)((char*)q + 0x1); *(u8*)((char*)this + 0x2) = *(u8*)((char*)q + 0x2); *(u8*)((char*)this + 0x3) = *(u8*)((char*)q + 0x3); *(u8 *)&this->m_flags = *(u8*)((char*)q + 0x4); *(u8*)((char*)this + 0x5) = *(u8*)((char*)q + 0x5); *(u32 *)&this->m_id = *(u32*)((char*)q + 0x6); *(u16*)((char*)this + 0xa) = *(u16*)((char*)q + 0xa); *(u32 *)&this->m_next = *(u32*)((char*)q + 0xc); *(u32 *)&this->m_up = *(u32*)((char*)q + 0x10); }
void init_6x5E_buy_item_header(void* p) { *(u8*)((char*)p + 0x0) = 94; *(u8*)((char*)p + 0x1) = 6; }
void TLobby::bswap_6x5D() { ((int (*)(void*))read_be16_field2__10TObjPlayerFv)(this); bswap_16__FPUs((s32)((char*)this + 0x4)); bswap_16__FPUs((s32)((char*)this + 0x6)); ((TObjPlayer *)((char*)this + 0x8))->bswap_pkt_u32x2(); bswap__9TItemDataFv((char*)this + 0x10); }
void TLobby::send_6x5D() { bswap_6x5D(); TLobby__send_and_handle_60(this); }
void*TLobby::init_fields() { init_default_fields(); *(unsigned char*)((char*)this + 0x24) = 2; *(unsigned char*)((char*)this + 0x25) = 0; *(unsigned char*)((char*)this + 0x26) = 0; *(unsigned char*)((char*)this + 0x27) = 0; *(unsigned char*)((char*)this + 0x1) = 10; return this; }

    extern const float lbl_805DAA88;
void TLobby::init_default_fields() { *(short *)&this->m_flags = 0; *(short *)&this->m_id = 0; *(float *)&this->m_next = lbl_805DAA88; *(float *)&this->m_prev = lbl_805DAA88; *(unsigned char *)&this->m_name = 93; *(unsigned char*)((char*)this + 0x1) = 9; }

}

#include "types.h"

extern "C" {

s32 read_be16_field2__10TObjPlayerFv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);

void bswap_pick_up_item_packet__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFv();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_32__FPUl(arg0 + 8);
}

}

#include "types.h"

struct O_80103044 { u8 f0; u8 f1; u8 pad[2]; u16 f4; u16 f6; s32 f8; };

extern "C" {

s32 TLobby__send_and_handle_60(void *);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void bswap_pick_up_item_packet__6TLobbyFi(s32 arg0);
void bswap_pick_up_item_request__6TLobbyFi(s32 arg0);
s32 dispatch_packet__6TLobbyFPv(void *);
s32 read_be16_field2__10TObjPlayerFv();

#include "types.h"
extern "C" {
#include "types.h"

extern "C" {

void TLobby::send_pick_up_item() {
    s32 arg0 = (s32)this;
    ((s32 (*)())bswap_pick_up_item_packet__6TLobbyFi)();
    TLobby__send_and_handle_60((void *) (arg0));
}
void TLobby::init_6x59_packet() {
    ((O_80103044 *)this)->f4 = 0xFFFF;
    ((O_80103044 *)this)->f6 = 0;
    ((O_80103044 *)this)->f8 = -1;
    ((O_80103044 *)this)->f0 = 0x59;
    ((O_80103044 *)this)->f1 = 3;
}

}

}

#include "types.h"
extern "C" {
#include "types.h"

}

}

#include "types.h"

extern "C" {

#include "types.h"
extern "C" {
void bswap_pick_up_item_request__6TLobbyFi(s32 arg0);
s32 dispatch_packet__6TLobbyFPv(void *);
#include "types.h"

extern "C" {
void bswap_pick_up_item_packet__6TLobbyFi(s32 arg0);
s32 TLobby__send_and_handle_60(void *);
s32 read_be16_field2__10TObjPlayerFv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);

}

void TLobby::send_pick_up_item_request() {
    s32 arg0 = (s32)this;
    ((s32 (*)())bswap_pick_up_item_request__6TLobbyFi)();
    dispatch_packet__6TLobbyFPv((void *) (arg0));
}

}

}

#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/TItemAttacker.h"
#include "pso/player/TObjPlayer.h"

struct AttackWeaponBase { char pad[0x18]; };

struct AttackWeapon : AttackWeaponBase {
virtual void m0();
virtual void m1();
virtual void m2();
virtual void m3();
virtual void m4();
virtual void m5();
virtual void m6();
virtual void m7();
virtual void m8();
virtual void m9();
virtual void m10();
virtual void m11();
virtual void m12();
virtual void m13();
virtual void m14();
virtual void m15();
virtual void m16();
virtual void m17();
virtual void m18();
virtual void m19();
virtual void m20();
virtual void m21();
virtual void m22();
virtual void m23();
virtual void m24();
virtual void m25();
virtual void m26();
virtual void m27();
virtual void m28();
virtual void m29();
virtual void m30();
virtual void m31();
virtual void m32();
virtual void m33();
virtual void m34();
virtual void m35();
virtual void m36();
virtual void m37();
virtual void m38();
virtual void m39();
virtual void m40();
virtual void m41();
virtual void m42();
virtual void m43();
virtual void m44();
virtual void m45();
virtual void m46();
virtual void m47();
virtual void m48();
virtual void m49();
virtual void m50();
virtual void m51();
virtual void m52();
virtual void m53();
virtual void m54();
virtual void m55();
virtual void m56();
virtual void m57();
virtual void m58();
virtual void m59(u32,void*,s32,f32,s16);
};

struct Rec_801031CC { u8 d[0x2c]; };

struct Tbl_801031CC { u8 pad[0x1c]; Rec_801031CC r[1]; };

extern "C" {
void init__9TItemDataFv(void *);
extern const f32 lbl_805DAA88;
s32 __ct__13TItemAttackerFv(void *, void *, void *, s32, void *);
s32 __nw__7TObjectFUl(int);
void TItemAttacker__sub_8010349C(u32);
void spawn_item_attacker(s32 arg0, u32 arg1, s32 arg2, u8 *arg3);
u8 *find_item_by_id(s32);
f32 horizontal_distance_squared(void *, void *);
u8 *resolve_hittable_target(u16, s16);
u32 get_player_by_client_id(int);
extern const f32 lbl_805DAAA8;
void deliver_delayed_weapon_hit(u8 *arg0);
}

extern "C" {

void TItem__sub_801031C0(void* p);
void TLobby__sub_801030EC(u8 *arg0);
void bswap_pick_up_item_request__6TLobbyFi(s32 arg0);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFv();

void bswap_pick_up_item_request__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFv();
    bswap_32__FPUl(arg0 + 4);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
}

void TLobby__sub_801030EC(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 4) = -1;
    *(s16 *)((s8 *)arg0 + 8) = 0;
    *(s16 *)((s8 *)arg0 + 0xA) = 0;
    *(s8 *)((s8 *)arg0 + 0) = 0x5A;
    *(s8 *)((s8 *)arg0 + 1) = 3;
}

void TUnk_804B9870::set_item_count(s16 v) { *(s16 *)&this->m_1c = v; }
s32 TLobby::drop_stacked_item_passthrough() {
    s32 arg0 = (s32)this;
    init_floor_item_entry();
    return arg0;
}

void TLobby::init_floor_item_entry() {
    u8 *arg0 = (u8 *)this;
    *(s8 *)((s8 *)arg0 + 1) = 0;
    *(s8 *)&this->m_name = -1;
    *(s16 *)((s8 *)arg0 + 2) = -1;
    *(f32 *)&this->m_flags = (f32) lbl_805DAA88;
    *(f32 *)&this->m_prev = (f32) lbl_805DAA88;
    *(s16 *)&this->m_next = -1;
    *(s16 *)((s8 *)arg0 + 0xE) = 0;
    init__9TItemDataFv(arg0 + 0x10);
}

u8 TUnk_804AF8A0::sub_8010319C() {
    u8 *arg0 = (u8 *)this;
    return (u8) (this->m_94 != 0xFFFF);
}

void TItem__sub_801031C0(void* p) { *(s32*)((char*)p + 0x0) = 4; }

void deliver_delayed_weapon_hit(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r30;
    f32 temp_f31;
    u8* temp_r5;
    u32 player;
    u8 *item;
    temp_r3 = (u8 *)(resolve_hittable_target(*(u16 *)((s8 *)arg0 + 0x2A), *(s16 *)((s8 *)arg0 + 0x2C)));
    if (temp_r3 != NULL) {
        temp_r5 = *(u8 **)((s8 *)temp_r3 + 0xA4);
        temp_r30 = (u8 *)&((Tbl_801031CC *)temp_r5)->r[*(s16 *)((s8 *)arg0 + 0x2C)];
        if (horizontal_distance_squared((void *) (arg0 + 0x38), (void *) (temp_r30)) < lbl_805DAAA8) {
            player = get_player_by_client_id((int) (*(u16 *)((s8 *)arg0 + 0x28)));
            item = (u8 *)(find_item_by_id(*(s32 *)((s8 *)arg0 + 0x24)));
            if ((player != 0U) && (item != NULL)) {
                ((AttackWeapon*)item)->m59(player,temp_r3,*(s32*)((s8 *)arg0 + 0x20),*(f32*)((s8 *)arg0 + 0x30),*(s16*)((s8 *)arg0 + 0x2C));
            }
        } else {
            temp_f31 = horizontal_distance_squared((void *) (arg0 + 0x38), (void *) (arg0 + 0x44));
            if (horizontal_distance_squared((void *) (temp_r30), (void *) (arg0 + 0x44)) < temp_f31) {
                ((TObjPlayer *)temp_r3)->show_miss_for_collider((int) (*(s16 *)((s8 *)arg0 + 0x2C)));
            }
        }
    }
    *(s32 *)((s8 *)arg0 + 0x34) = 1;
}

void spawn_item_attacker(s32 arg0, u32 arg1, s32 arg2, u8 *arg3) {
    s32 var_r0;
    if ((arg0 != 0) && (arg3 != NULL) && (arg1 != 0U) && ((u16) *(u16 *)((s8 *)arg3 + 0xC) != 65535U) && ((u16) *(u16 *)((s8 *)arg3 + 0xE) != 65535U)) {
        var_r0 = __nw__7TObjectFUl((int) (0x50));
        if (var_r0 != 0) {
            var_r0 = __ct__13TItemAttackerFv((void*)var_r0, (void *) (arg0), (void *) (arg1), arg2, (void *) (arg3));
        }
        TItemAttacker::spawn_item_timer((s32)((int) (var_r0)), (s32)((void *) (&TItemAttacker__sub_8010349C)), (s32)((void *) (arg2)));
    }
}

}
