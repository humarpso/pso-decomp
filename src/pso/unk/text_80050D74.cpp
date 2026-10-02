#include <dolphin/mtx.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
typedef s32 M2C_UNK;
typedef struct Vec_80050D74 {
    f32 x, y, z;
} Vec_80050D74;

typedef struct Hit_80050D74 {
    s32 type;
    f32 value;
} Hit_80050D74;

struct VBase_80050D74 { u8 pad[0x18]; };

struct VObj_80050D74 : VBase_80050D74 {
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
    virtual void m21(s32, Hit_80050D74 *, s32, s32, s32);
};

struct Player_80050D74 : VObj_80050D74 {
    u8 pad1c[0x38 - 0x1c];
    Vec_80050D74 pos;
    u8 pad44[0x890 - 0x44];
    u32 flags890;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 spawn_particle_effect(void *, int);
s32 set_flags__11TBoss4Type2FPvUi(int, int);
extern const f32 lbl_805D8A90;
void fn_80050E64(M2C_UNK arg0, s32 arg1);
Player_80050D74 *get_player_data__10TObjPlayerFi(s32);
s16 obj_getField1c(void *);
s32 get_game_mode__6TLobbyFv();
s32 is_state_ready__14TBoss4DarkFalzFv();
s32 TBoss4DarkFalz__sub_8004C1B4();
s32 TBoss4Type3__sub_8005254C(s16);
f32 TObjPlayer__sub_803E1A58(Vec_80050D74 *, Vec_80050D74 *);
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A8C;
void fn_80050D74(M2C_UNK arg0, Vec_80050D74 *arg1);
}

extern "C" {

void fn_80050D74(M2C_UNK arg0, Vec_80050D74 *arg1) {
    Vec_80050D74 pos = *arg1;
    Hit_80050D74 hit;
    s32 i;
    Player_80050D74 *p;
    if (is_state_ready__14TBoss4DarkFalzFv() == 0) {
        return;
    }
    hit.type = 0x11;
    hit.value = lbl_805D8A30;
    for (i = 0; i < get_game_mode__6TLobbyFv(); i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && TBoss4Type3__sub_8005254C(obj_getField1c(p)) != 0 &&
            !(p->flags890 & 0x10) &&
            !(TObjPlayer__sub_803E1A58(&pos, &p->pos) > lbl_805D8A8C)) {
            Hit_80050D74 h = hit;
            p->m21(TBoss4DarkFalz__sub_8004C1B4(), &h, 0, -1, -1);
        }
    }
}

void fn_80050E64(M2C_UNK arg0, s32 arg1) {
    Vec position;
    u32 temp_r3;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg1));
    position.y += lbl_805D8A90;
    temp_r3 = spawn_particle_effect((void *) (&position.x), (int) (0xF3));
    if (temp_r3 != 0U) {
        set_flags__11TBoss4Type2FPvUi((int) (temp_r3), (int) (0x40));
    }
}

}
