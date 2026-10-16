#include "types.h"

#include <stddef.h>
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TOKeyMachine01.h"
struct Stack_801A7310 {
    s8 sp8;
    s8 sp9;
    s16 spA;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_801A7310_TCameraCtrl__data_804FF628 {
    s32 value;
    u8 remaining[0x8];
};

struct Ent_801A70C8 { s32 a; f32 b; s32 c; };

struct Ent_801A710C { u32 a; f32 b; s32 c; };

extern "C" {
s32 select_active_controller__11TCameraCtrlFc(int);
s32 set_scripted_camera_pose(int, int, void *);
extern RecoveredGlobal_801A7310_TCameraCtrl__data_804FF628 TCameraCtrl__view_state;
extern const f32 lbl_805DC0D0;
extern const f32 lbl_805DC0D4;
void begin_photon_summon_camera(u8 *arg0, s8 arg1);
extern struct Ent_801A70C8 deferred_photon_blast_hit_queue[32];
extern s32 deferred_photon_blast_hit_count;
extern const f32 lbl_805DC0D0;
void clear_deferred_photon_blast_hits(void);
extern struct Ent_801A710C photon_blast_hit_queue[32];
extern s32 photon_blast_hit_count;
extern const f32 lbl_805DC0D0;
void clear_photon_blast_hits(void);
}

extern "C" {

void queue_deferred_photon_blast_support(void);
void queue_photon_blast_support(void);
void queue_deferred_photon_blast_hit(u32 arg0, s32 arg1, s32 arg2);
extern u32 lbl_805D5D20;
void queue_photon_blast_hit(u32 identity, s32 kind, s32 allow_duplicate);
extern u32 lbl_805D5D18;

    extern const float lbl_805DC0C0;
void TObjPlayer::reset_state_block() { *(int*)((char*)this + 0x0) = 0; *(int*)((char*)this + 0x4) = -1; *(int*)((char*)this + 0x8) = 0; *(int*)((char*)this + 0xc) = 0; *(short*)((char*)this + 0x10) = 0; *(short*)((char*)this + 0x12) = 0; *(short*)((char*)this + 0x14) = 0; *(short*)((char*)this + 0x16) = 0; *(short*)((char*)this + 0x18) = 0; *(short*)((char*)this + 0x1a) = 0; *(int*)((char*)this + 0x1c) = 0; *(int *)&this->m_20 = 0; *(float*)((char*)this + 0x24) = lbl_805DC0C0; *(float *)&this->m_28 = lbl_805DC0C0; }

extern const f32 lbl_805DC0D4;

extern const f32 lbl_805DC0D4;

typedef char RecoveredGlobal_801A7310_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_801A7310_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];

}
