#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
    virtual M2C_UNK m21(s32, void *, s32, s32, s32);
};

struct Pair_802A4AEC { s32 a; f32 b; };

extern "C" {
int queue_destruction__7TObjectFv(void*);
void emit_effect_and_destroy__12TNeedleShootFPvPv(u8 *arg0, VObj_18_174c10 *arg1);
}

extern "C" {

void *__dt__20TObjEneMe1Gee_NEEDLEFv(void *arg0, s16 arg1);
void* get_shoot_data__12TNeedleShootFPv(void* p);
void init_velocity__12TNeedleShootFPv(u8 *arg0);
M2C_UNK play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void __dt__12TNeedleShootFv(void *, int);
s32 get_global_state__14TOKeyMachine01Fv();
int queue_destruction__7TObjectFv(void*);

void* get_shoot_data__12TNeedleShootFPv(void* p) { return (char*)p + 0x28; }

#include "types.h"
extern "C" {

}

#include "types.h"
extern "C" {
int queue_destruction__7TObjectFv(void*);
void tick_lifetime__12TNeedleShootFPv(u8 *arg0);
}

extern "C" {

void tick_lifetime__12TNeedleShootFPv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC0) - 1;
    M2C_FIELD(arg0, s32 *, 0xC0) = temp_r0;
    if (temp_r0 <= 0) {
        queue_destruction__7TObjectFv((void*)arg0);
    }
}

void init_velocity__12TNeedleShootFPv(u8 *arg0) {
    if (get_global_state__14TOKeyMachine01Fv() == 0x22) {
        play_sound_effect((int) (0x4003B20E), (void *) (arg0 + 0x6C), (int) (0), (int) (0));
    } else {
        play_sound_effect((int) (0x3A847), (void *) (arg0 + 0x6C), (int) (0), (int) (0));
    }
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
}

}

extern M2C_UNK __vt__20TObjEneMe1Gee_NEEDLE[];

void emit_effect_and_destroy__12TNeedleShootFPvPv(u8 *arg0, VObj_18_174c10 *arg1) {
    Pair_802A4AEC t;
    t.a = 0;
    t.b = *(f32 *)(arg0 + 0xBC);
    Pair_802A4AEC u = t;
    arg1->m21(*(s32 *)(arg0 + 0x1C), &u, *(s32 *)(arg0 + 0x38), -1, -1);
    queue_destruction__7TObjectFv((void*)(arg0));
}

void *__dt__20TObjEneMe1Gee_NEEDLEFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjEneMe1Gee_NEEDLE;
        __dt__12TNeedleShootFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
