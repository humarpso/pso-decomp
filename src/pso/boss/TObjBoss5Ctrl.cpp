#include "pso/TObjBoss5Ctrl.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" void queue_destruction__7TObjectFv(void*);
extern s32 boss5_ctrl_instance;

extern "C" {
M2C_UNK play_sound_effect(int, int, int, int);
void *TObjBoss5Ctrl__ct(void *arg0);
s32 rand();
M2C_UNK __ct__7TObjectFP7TObject(void *);
s32 get_current_floor(f32, f32, f32);
s32 is_room_enemy_set_cleared(M2C_UNK, s32);
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
    if (M2C_FIELD(this, s16 *, 0x2C)-- <= 0) {
        play_sound_effect(0x40033215, 0, 0, 0);
        M2C_FIELD(this, s16 *, 0x2C) = (s16) (lbl_805D8F14 * (lbl_805D8F18 * (f32) rand()) + lbl_805D8F10);
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
    M2C_FIELD(arg0, void **, 0x18) = __vt__13TObjBoss5Ctrl;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2828;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0U;
    M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    M2C_FIELD(arg0, u32 *, 0x24) = 0U;
    M2C_FIELD(arg0, u32 *, 0x28) = 0U;
    temp_f3 = (f32) rand();
    temp_f2 = lbl_805D8F18 * temp_f3;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (lbl_805D8F14 * temp_f2 + lbl_805D8F10);
    temp_r3 = get_current_floor(lbl_805D8F14, temp_f2, temp_f3);
    if (is_room_enemy_set_cleared(temp_r3, 1) == 0) {
        if (is_split_screen() == 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
                M2C_FIELD(arg0, u32 *, 0x1C) = create__19TObjBoss5FloorGrassFv();
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x20) == 0U) {
                M2C_FIELD(arg0, u32 *, 0x20) = create__19TObjBoss5FloorStoneFv();
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) {
                M2C_FIELD(arg0, u32 *, 0x24) = create__19TObjBoss5PillarCtrlFPv(arg0);
            }
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x28) = create__19TObjBoss5PillarDemoFv();
        }
    }
    return arg0;
}

}
