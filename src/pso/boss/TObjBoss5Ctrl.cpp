#include "pso/TObjBoss5Ctrl.h"
#pragma fp_contract on

extern "C" void queue_destruction__7TObjectFv(void*);
extern s32 boss5_ctrl_instance;

extern "C" {
s32 play_sound_effect(int, int, int, int);
void *TObjBoss5Ctrl__ct(void *arg0);
s32 rand();
s32 __ct__7TObjectFP7TObject(void *);
s32 get_current_floor(f32, f32, f32);
s32 is_room_enemy_set_cleared(s32, s32);
u32 create__19TObjBoss5FloorStoneFv();
u32 create__19TObjBoss5FloorGrassFv();
u32 create__19TObjBoss5PillarDemoFv();
u32 create__19TObjBoss5PillarCtrlFPv(void *);
s32 is_split_screen();
extern void *__vt__13TObjBoss5Ctrl[];
extern s32 lbl_805D2828;
extern const f32 lbl_805D8F10;
extern const f32 lbl_805D8F14;
extern const f32 lbl_805D8F18;
}

void TObjBoss5Ctrl::run_task() {
    if ((*(s16 *)((s8 *)this + 0x2C))-- <= 0) {
        play_sound_effect(0x40033215, 0, 0, 0);
        *(s16 *)((s8 *)this + 0x2C) = (s16) (lbl_805D8F14 * (lbl_805D8F18 * (f32) rand()) + lbl_805D8F10);
    }
}

TObjBoss5Ctrl::~TObjBoss5Ctrl() {
    if (m_28 != nullptr) { queue_destruction__7TObjectFv(m_28); m_28 = nullptr; }
    if (m_24 != nullptr) { queue_destruction__7TObjectFv(m_24); m_24 = nullptr; }
    if (m_20 != nullptr) { queue_destruction__7TObjectFv(m_20); m_20 = nullptr; }
    if (m_1c != nullptr) { queue_destruction__7TObjectFv(m_1c); m_1c = nullptr; }
    boss5_ctrl_instance = 0;
}

extern "C" {

void *TObjBoss5Ctrl__ct(void *arg0) {
    s32 temp_r3;
    f32 temp_f2;
    f32 temp_f3;

    __ct__7TObjectFP7TObject(arg0);
    *(void **)((s8 *)arg0 + 0x18) = __vt__13TObjBoss5Ctrl;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2828;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0U;
    *(u32 *)((s8 *)arg0 + 0x20) = 0U;
    *(u32 *)((s8 *)arg0 + 0x24) = 0U;
    *(u32 *)((s8 *)arg0 + 0x28) = 0U;
    temp_f3 = (f32) rand();
    temp_f2 = lbl_805D8F18 * temp_f3;
    *(s16 *)((s8 *)arg0 + 0x2C) = (s16) (lbl_805D8F14 * temp_f2 + lbl_805D8F10);
    temp_r3 = get_current_floor(lbl_805D8F14, temp_f2, temp_f3);
    if (is_room_enemy_set_cleared(temp_r3, 1) == 0) {
        if (is_split_screen() == 0) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x1C) == 0U) {
                *(u32 *)((s8 *)arg0 + 0x1C) = create__19TObjBoss5FloorGrassFv();
            }
            if ((u32) *(u32 *)((s8 *)arg0 + 0x20) == 0U) {
                *(u32 *)((s8 *)arg0 + 0x20) = create__19TObjBoss5FloorStoneFv();
            }
            if ((u32) *(u32 *)((s8 *)arg0 + 0x24) == 0U) {
                *(u32 *)((s8 *)arg0 + 0x24) = create__19TObjBoss5PillarCtrlFPv(arg0);
            }
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x28) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x28) = create__19TObjBoss5PillarDemoFv();
        }
    }
    return arg0;
}

}
