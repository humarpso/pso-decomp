#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
u8 fn_8010319C(u8 *arg0);
void init__9TItemDataFv(void *);
extern const f32 lbl_805DAA88;
void TLobby__sub_8010314C(u8 *arg0);
s32 __ct__13TItemAttackerFv(void *, void *, void *, s32, void *);
M2C_UNK spawn_item_timer__13TItemAttackerFiii(int, void *, void *);
s32 __nw__7TObjectFUl(int);
void TItemAttacker__sub_8010349C(u32);
void spawn_item_attacker(s32 arg0, u32 arg1, s32 arg2, u8 *arg3);
M2C_UNK show_miss_for_collider__10TObjPlayerFi(int, int);
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
s32 drop_stacked_item_passthrough__6TLobbyFi(s32 arg0);
void set_item_count__6TLobbyFPvs(void* p, s16 v);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();

void bswap_pick_up_item_request__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
}

void TLobby__sub_801030EC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, s16 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x5A;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void set_item_count__6TLobbyFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x1c) = v; }
s32 drop_stacked_item_passthrough__6TLobbyFi(s32 arg0) {
    TLobby__sub_8010314C((u8 *)(arg0));
    return arg0;
}

void TLobby__sub_8010314C(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 0) = -1;
    M2C_FIELD(arg0, s16 *, 2) = -1;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805DAA88;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DAA88;
    M2C_FIELD(arg0, s16 *, 0xC) = -1;
    M2C_FIELD(arg0, s16 *, 0xE) = 0;
    init__9TItemDataFv(arg0 + 0x10);
}

u8 fn_8010319C(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, u16 *, 0x94) != 0xFFFF);
}

void TItem__sub_801031C0(void* p) { *(s32*)((char*)p + 0x0) = 4; }

void deliver_delayed_weapon_hit(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r30;
    f32 temp_f31;
    u8* temp_r5;
    u32 temp_r30_2;
    u8 *temp_r3_2;
    temp_r3 = (u8 *)(resolve_hittable_target(M2C_FIELD(arg0, u16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x2C)));
    if (temp_r3 != NULL) {
        temp_r5 = M2C_FIELD(temp_r3, u8 **, 0xA4);
        temp_r30 = (u8 *)&((Tbl_801031CC *)temp_r5)->r[M2C_FIELD(arg0, s16 *, 0x2C)];
        if (horizontal_distance_squared((void *) (arg0 + 0x38), (void *) (temp_r30)) < lbl_805DAAA8) {
            temp_r30_2 = get_player_by_client_id((int) (M2C_FIELD(arg0, u16 *, 0x28)));
            temp_r3_2 = (u8 *)(find_item_by_id(M2C_FIELD(arg0, s32 *, 0x24)));
            if ((temp_r30_2 != 0U) && (temp_r3_2 != NULL)) {
                ((AttackWeapon*)temp_r3_2)->m59(temp_r30_2,temp_r3,M2C_FIELD(arg0,s32*,0x20),M2C_FIELD(arg0,f32*,0x30),M2C_FIELD(arg0,s16*,0x2C));
            }
        } else {
            temp_f31 = horizontal_distance_squared((void *) (arg0 + 0x38), (void *) (arg0 + 0x44));
            if (horizontal_distance_squared((void *) (temp_r30), (void *) (arg0 + 0x44)) < temp_f31) {
                show_miss_for_collider__10TObjPlayerFi((int) (temp_r3), (int) (M2C_FIELD(arg0, s16 *, 0x2C)));
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
}

void spawn_item_attacker(s32 arg0, u32 arg1, s32 arg2, u8 *arg3) {
    s32 var_r0;
    if ((arg0 != 0) && (arg3 != NULL) && (arg1 != 0U) && ((u16) M2C_FIELD(arg3, u16 *, 0xC) != 65535U) && ((u16) M2C_FIELD(arg3, u16 *, 0xE) != 65535U)) {
        var_r0 = __nw__7TObjectFUl((int) (0x50));
        if (var_r0 != 0) {
            var_r0 = __ct__13TItemAttackerFv((void*)var_r0, (void *) (arg0), (void *) (arg1), arg2, (void *) (arg3));
        }
        spawn_item_timer__13TItemAttackerFiii((int) (var_r0), (void *) (&TItemAttacker__sub_8010349C), (void *) (arg2));
    }
}

}
