#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
    virtual M2C_UNK m15();
    virtual M2C_UNK m16();
    virtual void m17();
    virtual M2C_UNK m18();
};

extern "C" {
M2C_UNK play_door_sound(void *);
u8 is_current_floor_switch_set(int);
void update_door_switch_state(u8 *arg0);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
M2C_UNK minimap_render_gate(void *, u32, u16, s32, s32);
extern s32 switch_doors_force_closed;
void run_switch_door_task(u8 *arg0);
}

extern "C" {

void update_door_switch_state(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xCC);
    switch (temp_r0) {
    case 1:
        play_door_sound((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
        return;
    case 2:
        if (is_current_floor_switch_set((int) ((u16) M2C_FIELD(arg0, s32 *, 0xC8))) == 1) {
            play_door_sound((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFFFFFE);
        return;
    case 3:
        if (is_current_floor_switch_set((int) ((u16) M2C_FIELD(arg0, s32 *, 0xC8))) == 1) {
            play_door_sound((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
        }
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFFFFFE);
        break;
    }
}
void run_switch_door_task(u8 *arg0) {
    s32 temp_r0;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((VObj_18 *)(arg0))->m18();
        return;
    }
    if ((s32) switch_doors_force_closed != 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFFFFFE);
        clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (8));
    } else {
        ((VObj_18 *)(arg0))->m12();
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        ((VObj_18 *)(arg0))->m13();
        break;
    case 1:
        ((VObj_18 *)(arg0))->m14();
        break;
    case 2:
        ((VObj_18 *)(arg0))->m15();
        break;
    case 3:
        ((VObj_18 *)(arg0))->m16();
        break;
    }
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        minimap_render_gate(arg0 + 0x38, 0xFF00FF00, M2C_FIELD(arg0, s32 *, 0x60), 0, 0);
    } else {
        minimap_render_gate(arg0 + 0x38, 0xFFFF0000, M2C_FIELD(arg0, s32 *, 0x60), 0, 0);
    }
}

}
