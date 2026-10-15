#include "types.h"

struct Base_8031DE2C { char pad[0x18]; };
struct VObj_8031DE2C : Base_8031DE2C {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)VV(34)VV(35)VV(36)VV(37)VV(38)VV(39)VV(40)
VV(41)VV(42)VV(43)VV(44)VV(45)VV(46)VV(47)VV(48)VV(49)VV(50)
VV(51)VV(52)VV(53)VV(54)VV(55)VV(56)VV(57)VV(58)VV(59)VV(60)
VV(61)VV(62)VV(63)VV(64)VV(65)VV(66)VV(67)VV(68)VV(69)VV(70)
VV(71)VV(72)VV(73)VV(74)VV(75)VV(76)VV(77)VV(78)VV(79)VV(80)
VV(81)VV(82)VV(83)VV(84)VV(85)VV(86)VV(87)VV(88)VV(89)VV(90)
VV(91)VV(92)VV(93)VV(94)VV(95)VV(96)VV(97)VV(98)VV(99)
#undef VV
    virtual u32 v102();
};

extern "C" {

void update_collide_flag__12TObjEneReconFPv(void *arg0);
void set_flag2__12TObjEneReconFPv(void *arg0);
void update_flag_0x444__12TObjEneReconFPv(void *arg0);
u32 move_with_wall_slide_commit__9TObjEneDDFfff();
u32 TObjEneEpsilon__sub_800B92F8(void *, s32, void *, f32);

extern f32 *TObjEneRecon__data_805D6AFC;

void update_collide_flag__12TObjEneReconFPv(void *arg0) {
    void *temp_r5;

    temp_r5 = *(void **)((s8 *)arg0 + 0x350);
    if (TObjEneEpsilon__sub_800B92F8(arg0, *(s32 *)((s8 *)temp_r5 + 8), temp_r5, *TObjEneRecon__data_805D6AFC) != 0U) {
        *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) | 2);
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) & 0xFFFFFFFD);
}

void set_flag2__12TObjEneReconFPv(void *arg0) {
    if (move_with_wall_slide_commit__9TObjEneDDFfff() != 0U) {
        *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) | 2);
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) & 0xFFFFFFFD);
}

void update_flag_0x444__12TObjEneReconFPv(void *arg0) {
    if (((VObj_8031DE2C *)arg0)->v102() != 0U) {
        *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) | 2);
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x444) = (s32) (*(s32 *)((s8 *)arg0 + 0x444) & 0xFFFFFFFD);
}

}

#include "types.h"

extern "C" {
void enemy_copy_target_destination(void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void set_orbit_destination__12TObjEneReconFPvi(u8 *arg0, s32 arg1);
}

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneRecon__vt60(void* p);
void TObjEneRecon__vt59(void);
void TObjEneRecon__vt26(void);

#pragma push
#pragma fp_contract on
void set_orbit_destination__12TObjEneReconFPvi(u8 *arg0, s32 arg1) {
    enemy_copy_target_destination(arg0);
    *(f32 *)((s8 *)arg0 + 0x394) = (f32) ((*(f32 *)((s8 *)arg0 + 0x468) * sin_table_lookup(arg1)) + *(f32 *)((s8 *)arg0 + 0x394));
    *(f32 *)((s8 *)arg0 + 0x398) = (f32) *(f32 *)((s8 *)arg0 + 0x460);
    *(f32 *)((s8 *)arg0 + 0x39C) = (f32) ((*(f32 *)((s8 *)arg0 + 0x468) * cos_table_lookup(arg1)) + *(f32 *)((s8 *)arg0 + 0x39C));
}
#pragma pop

}

#include "types.h"

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneRecon__vt60(void* p);
void TObjEneRecon__vt59(void);
void TObjEneRecon__vt26(void);

void advance_field398__12TObjEneReconFPv(void *arg0) {
    ((s32 (*)())enemy_copy_target_destination)();
    *(f32 *)((s8 *)arg0 + 0x398) = (f32) (*(f32 *)((s8 *)arg0 + 0x398) + *(f32 *)((s8 *)arg0 + 0x464));
}
void sync_height__12TObjEneReconFPv(void *arg0) {
    ((s32 (*)())enemy_copy_target_destination)();
    *(f32 *)((s8 *)arg0 + 0x398) = (f32) *(f32 *)((s8 *)arg0 + 0x460);
}
void TObjEneRecon__vt59(void) {  }
void TObjEneRecon__vt60(void* p) { if (*(short*)((char*)p + 0x326) != 6) { transition_enemy_state(p, (void*)6); } }

}

#include "types.h"

extern "C" {
int transition_enemy_state(void*, void*);
void TObjEneRecon__vt61(u8 *arg0);
}

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneRecon__vt60(void* p);
void TObjEneRecon__vt59(void);
void TObjEneRecon__vt26(void);

void TObjEneRecon__vt61(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    if ((temp_r0 != 7) && (temp_r0 != 8)) {
        transition_enemy_state((void*)((void *)(arg0)), (void*)((int) (7)));
    }
}

}

#include "types.h"

extern "C" {

int transition_enemy_state(void*, void*);
void TObjEneRecon__vt60(void* p);
void TObjEneRecon__vt59(void);
void TObjEneRecon__vt26(void);

void TObjEneRecon__vt26(void) {  }

}
