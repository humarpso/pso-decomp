#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"
#include "pso/player/TObjPlayer.h"

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
    virtual s32 m12();
    virtual s32 m13();
    virtual s32 m14();
    virtual s32 m15();
    virtual s32 m16();
    virtual void m17();
    virtual s32 m18();
};

extern "C" {
s32 play_door_sound(void *);
u8 is_current_floor_switch_set(int);
void update_door_switch_state__13TUnk_804B0BB8Fv(u8 *arg0);
s32 minimap_render_gate(void *, u32, u16, s32, s32);
extern s32 switch_doors_force_closed;
void run_task__13TUnk_804B0BB8Fv(u8 *arg0);
}

extern "C" {

void TUnk_804B0BB8::update_door_switch_state() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xCC);
    switch (temp_r0) {
    case 1:
        play_door_sound((void *) (arg0));
        *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(s32 *)((s8 *)arg0 + 0xD0) | 1);
        return;
    case 2:
        if (is_current_floor_switch_set((int) ((u16) *(s32 *)((s8 *)arg0 + 0xC8))) == 1) {
            play_door_sound((void *) (arg0));
            *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(s32 *)((s8 *)arg0 + 0xD0) | 1);
            return;
        }
        *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(s32 *)((s8 *)arg0 + 0xD0) & 0xFFFFFFFE);
        return;
    case 3:
        if (is_current_floor_switch_set((int) ((u16) *(s32 *)((s8 *)arg0 + 0xC8))) == 1) {
            play_door_sound((void *) (arg0));
            *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(s32 *)((s8 *)arg0 + 0xD0) | 1);
        }
        break;
    default:
        *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(s32 *)((s8 *)arg0 + 0xD0) & 0xFFFFFFFE);
        break;
    }
}
void TUnk_804B0BB8::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    if (TObjPlayer::check_demo_mode() == 1) {
        ((VObj_18 *)(arg0))->m18();
        return;
    }
    if ((s32) switch_doors_force_closed != 0) {
        *(s32 *)((s8 *)arg0 + 0xAC) = 0;
        *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(s32 *)((s8 *)arg0 + 0xD0) & 0xFFFFFFFE);
        ((TObjPlayer *)arg0)->clear_player_status_flag((int) (0), (int) (8));
    } else {
        ((VObj_18 *)(arg0))->m12();
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xAC);
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
    if (*(s32 *)((s8 *)arg0 + 0xD0) & 1) {
        minimap_render_gate(arg0 + 0x38, 0xFF00FF00, *(s32 *)((s8 *)arg0 + 0x60), 0, 0);
    } else {
        minimap_render_gate(arg0 + 0x38, 0xFFFF0000, *(s32 *)((s8 *)arg0 + 0x60), 0, 0);
    }
}

}
