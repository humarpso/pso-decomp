#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_802D576C { u8 pad[0x24a]; s16 v; };

typedef struct E_802D56F0 { u8 p[0xC]; } E_802D56F0;

typedef struct S_802D56F0 {
    u8 pad0[0xF4];
    s32 fF4;
    u8 padF8[0x20C - 0xF8];
    E_802D56F0 e[1];
} S_802D56F0;

struct Sub_802D564C { u8 pad0[0x60]; s32 f60; };

struct Ent_802D564C { s32 a; s32 b; s32 c; };

struct VBase_802D564C { char pad[0x18]; };

struct Pl_802D564C : VBase_802D564C {
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
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60(void *);
    u8 pad1c[0xF0 - 0x1C];
    Sub_802D564C *f0F0;
    s32 f0F4;
    u8 padF8[0x20C - 0xF8];
    Ent_802D564C arr[5];
    s16 f248;
    s16 f24A;
    u8 pad24C[4];
    s32 f250;
};

extern "C" {
M2C_UNK TObjPlayer__sub_801012DC(void *, s16);
M2C_UNK TObjPlayer__sub_802D577C(void *);
void TObjPlayer__sub_802D5894(void *arg0);
M2C_UNK spawn_item__10TObjPlayerFi(void *);
void TObjPlayer__sub_802D5628(M2C_UNK arg0, s32 arg1);
void TObjPlayer__sub_802D576C(O_802D576C *self, s32 x);
s32 get_flag_40__8TItemMagFPv(void *);
void TObjPlayer__sub_80120908(void);
void rotate_matrix_x(s32, s32);
void TObjPlayer__sub_803D9B2C(void);
void pop_matrix(void);
void TOHangerMachine01__sub_803D9C00(void *);
void draw_ginja_object(s32);
void TObjPlayer__sub_802D56F0(u8 *arg0);
void TObjPlayer__sub_8011EB84(void *, void *, s32, s32);
void TObjPlayer__sub_802D564C(Pl_802D564C *arg0);
}

extern "C" {

void *enter_state_341__10TObjPlayerFPv(void *arg0);
void set_radar_marker_pos__10TObjPlayerFiPv(int a0, void* a1);
int set_radar_marker_params__10TObjPlayerFPvPv(void);
void init_state_445__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804E2000[];
extern M2C_UNK TObjPlayer__sub_802D5558[];
extern M2C_UNK TObjPlayer__sub_802D551C[];

void *enter_state_341__10TObjPlayerFPv(void *arg0) {
    init_state_445__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E2000;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 341;
    M2C_FIELD(arg0, M2C_UNK **, 0x208) = TObjPlayer__sub_802D5558;
    M2C_FIELD(arg0, M2C_UNK **, 0x204) = TObjPlayer__sub_802D551C;
    return arg0;
}

    extern const float lbl_805DE790;
void set_radar_marker_pos__10TObjPlayerFiPv(int a0, void* a1) { set_radar_marker_params__10TObjPlayerFPvPv(); *(float*)((char*)a1 + 0x38) = lbl_805DE790; }

void TObjPlayer__sub_802D5628(M2C_UNK arg0, s32 arg1) {
    spawn_item__10TObjPlayerFi((void *) (arg1));
}

void TObjPlayer__sub_802D564C(Pl_802D564C *arg0) {
    Ent_802D564C *p;
    s32 v;
    s32 step;
    s32 n;
    s32 cnt;
    p = arg0->arr;
    cnt = arg0->f24A;
    n = cnt;
    v = arg0->f250 - arg0->f0F0->f60;
    step = 0x10000 / cnt;
    while (n != 0) {
        TObjPlayer__sub_8011EB84(arg0, p++, arg0->f0F4, v);
        v += step;
        n--;
    }
    arg0->m60((u8 *)arg0->f0F0 + 0x2FC);
    arg0->f24A = 0;
    arg0->f248 = 0x87;
}

void TObjPlayer__sub_802D56F0(u8 *arg0) {
    E_802D56F0 *p;
    s32 n;
    TObjPlayer__sub_80120908();
    if (get_flag_40__8TItemMagFPv(arg0) == 0) {
        n = *(s16 *)(arg0 + 0x24A);
        p = ((S_802D56F0 *)arg0)->e;
        while (n != 0) {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(p++);
            rotate_matrix_x(0, -0x4000);
            draw_ginja_object(((S_802D56F0 *)arg0)->fF4);
            pop_matrix();
            n--;
        }
    }
}

void TObjPlayer__sub_802D576C(O_802D576C *self, s32 x) {
    if (x < 5) self->v = x;
}

void TObjPlayer__sub_802D5894(void *arg0) {
    s16 temp_r4;
    s16 temp_r4_2;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x248);
    temp_r4 += 1;
    M2C_FIELD(arg0, s16 *, 0x248) = temp_r4;
    if ((s16) temp_r4 == 0x96) {
        temp_r4_2 = M2C_FIELD(arg0, s16 *, 0x24A);
        if (temp_r4_2 < 5) {
            M2C_FIELD(arg0, s16 *, 0x24A) = (s16) (temp_r4_2 + 1);
            TObjPlayer__sub_801012DC((void *)(arg0), M2C_FIELD(arg0, s16 *, 0x24A));
        }
        M2C_FIELD(arg0, s16 *, 0x248) = 0;
    }
    TObjPlayer__sub_802D577C(arg0);
}

}
