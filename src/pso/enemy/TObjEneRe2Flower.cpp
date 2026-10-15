#include "types.h"

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805D9FF8;
void TObjEneRe2Flower__sub_800C3DC4(u8 *arg0);
s32 set_part_local_pos__9TObjEneDDFPvPvi(void *, void *, int);
void update_part_position__16TObjEneRe2FlowerFPv(u8 *arg0);
}

extern "C" {

void begin_state_242__16TObjEneRe2FlowerFPv(void* p);
s32 check_hit_flag__16TObjEneRe2FlowerFPv(void *arg0);
void clear_child_flags__16TObjEneRe2FlowerFPv(void *arg0);
void set_child_flags__16TObjEneRe2FlowerFPv(void *arg0);
s32 transition_enemy_state(void *, s32);
s32 get_flag_11__16TObjEneRe2FlowerFPv();
int TBoss8Dragon__sub_800BB7D4(void*, void*);

void begin_state_242__16TObjEneRe2FlowerFPv(void* p) { if (*(int*)((char*)p + 0x3d4) == 0) { TBoss8Dragon__sub_800BB7D4(p, (void*)242); *(int*)((char*)p + 0x3d4) = 20; } }

s32 check_hit_flag__16TObjEneRe2FlowerFPv(void *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0x3C4) & 2) {
        transition_enemy_state(arg0, 7);
        return 1;
    }
    return 0;
}

void clear_child_flags__16TObjEneRe2FlowerFPv(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    if (get_flag_11__16TObjEneRe2FlowerFPv() != 0) {
        temp_r3 = *(void **)((s8 *)arg0 + 0xA4);
        *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) & 0xFFFFFFFE);
        return;
    }
    temp_r3_2 = *(void **)((s8 *)arg0 + 0xA4);
    *(s32 *)((s8 *)temp_r3_2 + 0x44) = (s32) (*(s32 *)((s8 *)temp_r3_2 + 0x44) & 0xFFFFFFFE);
}

void set_child_flags__16TObjEneRe2FlowerFPv(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    if (get_flag_11__16TObjEneRe2FlowerFPv() != 0) {
        temp_r3 = *(void **)((s8 *)arg0 + 0xA4);
        *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) | 1);
        return;
    }
    temp_r3_2 = *(void **)((s8 *)arg0 + 0xA4);
    *(s32 *)((s8 *)temp_r3_2 + 0x44) = (s32) (*(s32 *)((s8 *)temp_r3_2 + 0x44) | 1);
}

void update_part_position__16TObjEneRe2FlowerFPv(u8 *arg0) {
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0x30) = (f32) (*(f32 *)((s8 *)arg0 + 0x300) - *(f32 *)((s8 *)arg0 + 0x3C));
    set_part_local_pos__9TObjEneDDFPvPvi((void *) (arg0), (void *) (arg0 + 0x3DC), (int) (0));
}

void TObjEneRe2Flower__sub_800C3DC4(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x300) = (f32) (*(f32 *)((s8 *)arg0 + 0x300) + lbl_805D9FF8);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
