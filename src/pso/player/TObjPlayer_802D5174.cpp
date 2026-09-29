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

extern "C" {
M2C_UNK TObjPlayer__sub_801012DC(void *, s16);
M2C_UNK TObjPlayer__sub_802D577C(void *);
void TObjPlayer__sub_802D5894(void *arg0);
M2C_UNK spawn_item__10TObjPlayerFi(void *);
void TObjPlayer__sub_802D5628(M2C_UNK arg0, s32 arg1);
void TObjPlayer__sub_802D576C(O_802D576C *self, s32 x);
s32 get_flag_40__8TItemMagFPv(void *);
void TObjPlayer__sub_80120908(void);
void TObjContainerIdo__sub_803D96A8(s32, s32);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjBoss2Tunnel__sub_803DB470(s32);
void TObjPlayer__sub_802D56F0(u8 *arg0);
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
            TObjContainerIdo__sub_803D96A8(0, -0x4000);
            TObjBoss2Tunnel__sub_803DB470(((S_802D56F0 *)arg0)->fF4);
            TObjPlayer__sub_803D9B78();
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
