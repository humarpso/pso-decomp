#include "types.h"
#include "pso/misc/TORockCaveBrakable.h"
#include "pso/player/TObjPlayer.h"

struct Base_80174EA0_80174CC0 { char pad[0x18]; };
struct VObj_80174EA0_80174CC0 : Base_80174EA0_80174CC0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
};

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
struct Vec_80174CFC { f32 x, y, z; };

struct Init_80174CFC { u8 b[0x4C]; };

struct Offs_80174CFC { Vec_80174CFC v[6]; };

struct Stack_80174CFC {
    Vec_80174CFC v;
    Init_80174CFC init;
    Offs_80174CFC offs;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
void construct_debris__8TObjChipFPvPvPv(void *, s32, void *);
void *__nw__7TObjectFUl(u32);
void vec3_add_to(void *, void *);
void rotate_vector_by_matrix(int, void *, void *);
void rotate_matrix_y(int, s32);
void push_matrix_from(void *);
void pop_matrix();
extern Offs_80174CFC rock_cave_debris_offset_table;
extern Init_80174CFC rock_cave_debris_init_params;
extern u8 identity_matrix[];
extern void *rock_cave_model_resource;
extern s32 tl_05;
}

extern "C" {

struct E4E50Base_80174e50_80174CC0 { char pad[0x18]; };
struct E4E50Obj_80174e50_80174CC0 : E4E50Base_80174e50_80174CC0 {
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
};

void *TORockCaveBrakable__ct(void *arg0);
void TORockCaveBrakable__sub_80174CC0(void);
void TORockCaveBrakable__sub_80174CC4(void* p);
void *__dt__18TORockCaveBrakableFv(void *arg0, s16 arg1);
int play_sound_effect(void*, void*, void*, void*);
u8 is_current_floor_switch_set(u16);
void TORockCave__ct(void *);
s32 spawn_particle_effect(void *, s32);
void __dl__7TObjectFPv(void *);
void __dt__10TORockCaveFv(void *, int);
s32 queue_destruction__7TObjectFv(void *);
s32 set_flag8__6TLobbyFPv(void *);

void TORockCaveBrakable__sub_80174CC0(void) {  }
void TORockCaveBrakable__sub_80174CC4(void* p) { play_sound_effect((void*)277521, (char*)p + 0x38, (void*)0, (void*)0); }

void TORockCaveBrakable::spawn_debris() {
    u8 *arg0 = (u8 *)this;
    Vec_80174CFC v;
    Offs_80174CFC offs;
    Init_80174CFC init;
    s32 i;
    void *p;
    offs = rock_cave_debris_offset_table;
    init = rock_cave_debris_init_params;
    *(f32 *)((s8 *)(&init) + 0xC) = *(f32 *)(arg0 + 0x38);
    *(f32 *)((s8 *)(&init) + 0x10) = *(f32 *)(arg0 + 0x3C);
    *(f32 *)((s8 *)(&init) + 0x14) = *(f32 *)(arg0 + 0x40);
    *(f32 *)((s8 *)(&init) + 0x38) = *(f32 *)((s8 *)(&init) + 0x10);
    for (i = 0; i < 6; i++) {
        VecCopy__FP3VecPC3Vec(&v, &offs.v[i]);
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
        rotate_vector_by_matrix(0, &v, &v);
        pop_matrix();
        VecCopy__FP3VecPC3Vec(&init.b[0xC], arg0 + 0x38);
        vec3_add_to(&init.b[0xC], &v);
        *(s32 *)((s8 *)(&init) + 0x40) = get_bml_model(rock_cave_model_resource, i);
        *(s32 *)((s8 *)(&init) + 0x44) = TObjFish__sub_8001EDB0(rock_cave_model_resource, i);
        p = __nw__7TObjectFUl(0x234);
        if (p != NULL) {
            construct_debris__8TObjChipFPvPvPv(p, tl_05, &init);
        }
    }
}

void TORockCaveBrakable::spawn_break_effect() {
    u8 *arg0 = (u8 *)this;
    ((E4E50Obj_80174e50_80174CC0*)arg0)->m16();
    spawn_particle_effect(arg0 + 0x38, 0x45);
    spawn_particle_effect(arg0 + 0x38, 0x46);
}

void TORockCaveBrakable::update_break_state() {
    s32 temp_r0;
    s32 temp_r0_2;

    if (TObjPlayer::check_demo_mode() == 1) {
        ((VObj_80174EA0_80174CC0 *)this)->m17();
        return;
    }
    temp_r0 = *(s32 *)((s8 *)this + 0xB4);
    switch (temp_r0) {
    default:
        *(s32 *)((s8 *)this + 0xB4) = 0;
    case 0:
        temp_r0_2 = *(s32 *)((s8 *)this + 0xB8);
        if ((temp_r0_2 >= 0) && (temp_r0_2 < 0x100) && (is_current_floor_switch_set((u16) temp_r0_2) == 1)) {
            *(s32 *)((s8 *)this + 0xB4) = 1;
            ((VObj_80174EA0_80174CC0 *)this)->m15();
            ((VObj_80174EA0_80174CC0 *)this)->m14();
        }
        break;
    case 1:
        set_flag8__6TLobbyFPv(this);
        queue_destruction__7TObjectFv(this);
        break;
    }
}

extern s32 __vt__18TORockCaveBrakable[];

void *__dt__18TORockCaveBrakableFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TORockCaveBrakable;
        __dt__10TORockCaveFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__18TORockCaveBrakable[];
extern void *lbl_805D3100;

void *TORockCaveBrakable__ct(void *arg0) {
    TORockCave__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TORockCaveBrakable;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3100;
    *(u32 *)((s8 *)arg0 + 0xB4) = 0;
    *(u32 *)((s8 *)arg0 + 0xB8) = -1;
    return arg0;
}

}
