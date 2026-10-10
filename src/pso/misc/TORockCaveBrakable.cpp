#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
extern Offs_80174CFC lbl_804428DC;
extern Init_80174CFC lbl_80442924;
extern u8 identity_matrix[];
extern void *lbl_805D5A84;
extern s32 tl_05;
void spawn_debris__18TORockCaveBrakableFPv(u8 *arg0);
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
void spawn_break_effect__18TORockCaveBrakableFPv(u8 *arg0);
void update_break_state__18TORockCaveBrakableFPv(void *arg0);
int play_sound_effect(void*, void*, void*, void*);
u8 is_current_floor_switch_set(u16);
void TORockCave__ct(void *);
M2C_UNK spawn_particle_effect(void *, M2C_UNK);
void __dl__7TObjectFPv(void *);
void __dt__10TORockCaveFv(void *, int);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_flag8__6TLobbyFPv(void *);

void TORockCaveBrakable__sub_80174CC0(void) {  }
void TORockCaveBrakable__sub_80174CC4(void* p) { play_sound_effect((void*)277521, (char*)p + 0x38, (void*)0, (void*)0); }

void spawn_debris__18TORockCaveBrakableFPv(u8 *arg0) {
    Vec_80174CFC v;
    Offs_80174CFC offs;
    Init_80174CFC init;
    s32 i;
    void *p;
    offs = lbl_804428DC;
    init = lbl_80442924;
    M2C_FIELD(&init, f32 *, 0xC) = *(f32 *)(arg0 + 0x38);
    M2C_FIELD(&init, f32 *, 0x10) = *(f32 *)(arg0 + 0x3C);
    M2C_FIELD(&init, f32 *, 0x14) = *(f32 *)(arg0 + 0x40);
    M2C_FIELD(&init, f32 *, 0x38) = M2C_FIELD(&init, f32 *, 0x10);
    for (i = 0; i < 6; i++) {
        VecCopy__FP3VecPC3Vec(&v, &offs.v[i]);
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
        rotate_vector_by_matrix(0, &v, &v);
        pop_matrix();
        VecCopy__FP3VecPC3Vec(&init.b[0xC], arg0 + 0x38);
        vec3_add_to(&init.b[0xC], &v);
        M2C_FIELD(&init, s32 *, 0x40) = get_bml_model(lbl_805D5A84, i);
        M2C_FIELD(&init, s32 *, 0x44) = TObjFish__sub_8001EDB0(lbl_805D5A84, i);
        p = __nw__7TObjectFUl(0x234);
        if (p != NULL) {
            construct_debris__8TObjChipFPvPvPv(p, tl_05, &init);
        }
    }
}

void spawn_break_effect__18TORockCaveBrakableFPv(u8 *arg0) {
    ((E4E50Obj_80174e50_80174CC0*)arg0)->m16();
    spawn_particle_effect(arg0 + 0x38, 0x45);
    spawn_particle_effect(arg0 + 0x38, 0x46);
}

void update_break_state__18TORockCaveBrakableFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((VObj_80174EA0_80174CC0 *)arg0)->m17();
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    case 0:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xB8);
        if ((temp_r0_2 >= 0) && (temp_r0_2 < 0x100) && (is_current_floor_switch_set((u16) temp_r0_2) == 1)) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 1;
            ((VObj_80174EA0_80174CC0 *)arg0)->m15();
            ((VObj_80174EA0_80174CC0 *)arg0)->m14();
        }
        break;
    case 1:
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

extern M2C_UNK __vt__18TORockCaveBrakable[];

void *__dt__18TORockCaveBrakableFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TORockCaveBrakable;
        __dt__10TORockCaveFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__18TORockCaveBrakable[];
extern void *lbl_805D3100;

void *TORockCaveBrakable__ct(void *arg0) {
    TORockCave__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TORockCaveBrakable;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3100;
    M2C_FIELD(arg0, u32 *, 0xB4) = 0;
    M2C_FIELD(arg0, u32 *, 0xB8) = -1;
    return arg0;
}

}
