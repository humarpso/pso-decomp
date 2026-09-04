#include "pso/TItemAttacker.h"

TItemAttacker::~TItemAttacker() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemAttacker__sub_8010349C(u32 arg0);
int TItemAttacker__sub_80103548(int a0);
void copy_from__13TItemAttackerFPvPv(void *arg0, void *arg1);
s32 create_item_buff(s32 arg0);
void run_task__13TItemAttackerFv(void* p);
void spawn_item_timer__13TItemAttackerFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TItemBuff__ct();
M2C_UNK TItemTimer__ct(void *, s32, s32, s32);
s32 TLobby__sub_8001EEF4();
s32 TLobby__sub_8001EEFC(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801031CC();
u32 __nw__7TObjectFUl(M2C_UNK);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
int queue_destruction__7TObjectFv(void*);

void copy_from__13TItemAttackerFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) M2C_FIELD(arg1, u16 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg1, u16 *, 0xE);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) M2C_FIELD(arg1, s16 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
}

void spawn_item_timer__13TItemAttackerFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;
    if (arg0 != 0) {
        temp_r3 = (void *)__nw__7TObjectFUl(0x28);
        if (temp_r3 != (void *)0U) {
            TItemTimer__ct(temp_r3, arg0, arg1, arg2);
        }
    }
}

void TItemAttacker__sub_8010349C(u32 arg0) {
    if (arg0 != 0U) {
        TObjPlayer__sub_801031CC();
    }
}

void run_task__13TItemAttackerFv(void* p) { if (*(int*)((char*)p + 0x34) != 0) { queue_destruction__7TObjectFv(p); } }

    extern int lbl_80506200[];
int TItemAttacker__sub_80103548(int a0) {  return lbl_80506200[a0]; }

extern M2C_UNK lbl_8043E038[];
extern s32 lbl_805D5410;
extern s32 lbl_805D5414;

s32 create_item_buff(s32 arg0) {
    s32 temp_r3;

    if (arg0 != 0) {
        TItemBuff__ct();
        temp_r3 = TLobby__sub_8001EEF4();
        lbl_805D5410 = temp_r3;
        if ((temp_r3 != 0) && (arg0 < 0x40000)) {
            lbl_805D5414 = TLobby__sub_8001EEFC(lbl_8043E038);
        } else {
            lbl_805D5414 = alloc_buffer__11TOBoss4RockFPv(arg0);
        }
    }
    return lbl_805D5414;
}

}
