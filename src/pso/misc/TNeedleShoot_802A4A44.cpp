#include "types.h"
#include "pso/misc/TObjEneMe1Gee_NEEDLE.h"

struct VBase_18_174c10 { char pad[0x18]; };

struct VObj_18_174c10 : VBase_18_174c10 {
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
    virtual s32 m21(s32, void *, s32, s32, s32);
};

struct Pair_802A4AEC { s32 a; f32 b; };

extern "C" {
int queue_destruction__7TObjectFv(void*);
void vfunc_9__20TObjEneMe1Gee_NEEDLEFPv(u8 *arg0, VObj_18_174c10 *arg1);
}

extern "C" {

void *__dt__20TObjEneMe1Gee_NEEDLEFv(void *arg0, s16 arg1);
void* get_shoot_data__12TNeedleShootFPv(void* p);
s32 play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void __dt__12TNeedleShootFv(void *, int);
int queue_destruction__7TObjectFv(void*);

void* get_shoot_data__12TNeedleShootFPv(void* p) { return (char*)p + 0x28; }

#include "types.h"
extern "C" {

}

#include "types.h"
#include "pso/misc/TNeedleShoot.h"
#include "pso/misc/TOKeyMachine01.h"
extern "C" {
int queue_destruction__7TObjectFv(void*);
}

extern "C" {

int TObjEneMe1Gee_NEEDLE::queue_destruction() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xC0) - 1;
    *(s32 *)((s8 *)arg0 + 0xC0) = temp_r0;
    if (temp_r0 <= 0) {
        queue_destruction__7TObjectFv((void*)arg0);
    }
}

int TObjEneMe1Gee_NEEDLE::vfunc_6() {
    u8 *arg0 = (u8 *)this;
    if (TOKeyMachine01::get_global_state() == 0x22) {
        play_sound_effect((int) (0x4003B20E), (void *) (arg0 + 0x6C), (int) (0), (int) (0));
    } else {
        play_sound_effect((int) (0x3A847), (void *) (arg0 + 0x6C), (int) (0), (int) (0));
    }
    *(s32 *)((s8 *)arg0 + 0xB8) = 0;
}

}

extern s32 __vt__20TObjEneMe1Gee_NEEDLE[];

void TObjEneMe1Gee_NEEDLE::vfunc_9(void *arg1_arg) {
    u8 *arg0 = (u8 *)this;
    VObj_18_174c10 *arg1 = (VObj_18_174c10 *)arg1_arg;
    Pair_802A4AEC t;
    t.a = 0;
    t.b = *(f32 *)(arg0 + 0xBC);
    Pair_802A4AEC u = t;
    arg1->m21(*(s32 *)(arg0 + 0x1C), &u, *(s32 *)(arg0 + 0x38), -1, -1);
    queue_destruction__7TObjectFv((void*)(arg0));
}

void *__dt__20TObjEneMe1Gee_NEEDLEFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TObjEneMe1Gee_NEEDLE;
        __dt__12TNeedleShootFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
