#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/object/TObjEvtCollision.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_80190DE4___vt__16TObjEvtCollision {
    s32 value;
    u8 remaining[0x34];
};

struct Pkt_80190CFC { u8 hdr[2]; u16 id; s32 player; s32 x10; s32 x14; };

struct Obj_80190CFC { u8 pad0[0x1C]; u16 id; u8 pad1E[0x84 - 0x1E]; s32 x84; u8 pad88[0xAC - 0x88]; f32 radius; u8 padB0[4]; s32 timer; };

extern "C" {
s32 disallow_rendering__7TObjectFv(void *);
extern s32 __vt__16TObjEvtCollision[];
extern s32 TObjEvtCollision__class_name;
u8 *TObjEvtCollision__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 get_current_floor();
s32 queue_destruction__7TObjectFv(void *);
extern s32 local_client_id;
}

extern "C" {

void *TObjEvtCollision__create(void *arg0);
void *__dt__16TObjEvtCollisionFv(void *arg0, s16 arg1);
u32 get_player_by_client_id(s32);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
f32 xyz_distance_squared(s32, s32);
s32 is_split_screen();

extern s32 local_client_id;

s32 TObjEvtCollision::is_any_player_in_range(f32 farg0) {
    s32 arg0 = (s32)this;
    s32 i;
    u32 player;
    u32 temp_r3_2;

    if (is_split_screen() != 0) {
        for (i = 0; i < 4; i += 1) {
            player = get_player_by_client_id(i);
            if ((player != 0U) && (xyz_distance_squared(player + 0x38, arg0 + 0x38) < farg0)) {
                return 1;
            }
        }
        goto block_10;
    }
    temp_r3_2 = get_player_by_client_id(local_client_id);
    if ((temp_r3_2 != 0U) && (xyz_distance_squared(temp_r3_2 + 0x38, arg0 + 0x38) < farg0)) {
        return 1;
    }
block_10:
    return 0;
}

extern void *tl_05;

void *TObjEvtCollision__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TObjEvtCollision__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

void TObjEvtCollision::render() {  }

extern s32 __vt__16TObjEvtCollision[];

void TObjEvtCollision::run_task() {
    Obj_80190CFC *arg0 = (Obj_80190CFC *)this;
    Pkt_80190CFC pkt;
    if (--arg0->timer <= 0) {
        if (is_any_player_in_range(arg0->radius * arg0->radius) == 1) {
            ((TLobby *)(&pkt))->init_packet_67_04();
            pkt.id = arg0->id;
            pkt.player = get_current_floor();
            pkt.x10 = arg0->x84;
            pkt.x14 = local_client_id;
            ((TLobby *)(&pkt))->byteswap_and_send();
            ((TUnk_804B9870 *)arg0)->set_event_source_flag(8);
            queue_destruction__7TObjectFv(arg0);
        }
    }
}

void *__dt__16TObjEvtCollisionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjEvtCollision;
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80190DE4___vt__16TObjEvtCollision_size[sizeof(RecoveredGlobal_80190DE4___vt__16TObjEvtCollision) == 0x38 ? 1 : -1];
u8 *TObjEvtCollision__ct(u8 *arg0, s32 arg1, s32 arg2) {
    ((TUnk_804AF8A0 *)arg0)->construct_collider_proxy();
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80190DE4___vt__16TObjEvtCollision *)&__vt__16TObjEvtCollision).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjEvtCollision__class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(f32 *)((s8 *)arg0 + 0xAC) = (f32) *(f32 *)((s8 *)arg0 + 0x68);
    *(s32 *)((s8 *)arg0 + 0xB0) = (s32) *(s32 *)((s8 *)arg0 + 0x84);
    *(s32 *)((s8 *)arg0 + 0xB4) = 3;
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

}
