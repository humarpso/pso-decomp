#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802EC7F0_lbl_804E3C2C {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Ply_802ECAA4 { u8 pad[0x326]; s16 state; };

extern "C" {
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
M2C_UNK TObjFish__sub_802ED62C(void *, int);
extern RecoveredGlobal_802EC7F0_lbl_804E3C2C lbl_804E3C2C;
extern s32 lbl_805D5550;
extern const f32 lbl_805DEA10;
void TObjFish__sub_802EC7F0(u8 *arg0);
void TObjFish__sub_802EC7F0(u8 *arg0);
M2C_UNK TObjFish__sub_802ED62C(void *, int);
void TObjPlayer__sub_802ECAA4(Ply_802ECAA4 *o);
}

extern "C" {

void TBoss7DeRolLeC__sub_802EC994(void* p);
u8 TObjPlayer__sub_802ECB10(void *arg0);
void fn_802EC9A4(void *arg0, void *arg1);
void fn_802EC9F0(void *arg0, void *arg1);
void handle_6xA9_barba_ray_boss_actions(void *arg0);
void handle_6xAA_barba_ray_boss_actions(void *arg0);
s32 TBoss8Dragon__sub_800B9958(void * a0 = 0, u16 a1 = 0);
s32 transition_enemy_state(void * a0 = 0, s16 a1 = 0);
void byteswap_action_packet__11TBoss7JointFPv(void *);
void *get_enemy_entity(int);
void read_state__11TBoss7JointFPv(void *);

typedef char RecoveredGlobal_802EC7F0_lbl_804E3C2C_size[sizeof(RecoveredGlobal_802EC7F0_lbl_804E3C2C) == 0x30 ? 1 : -1];
void TObjFish__sub_802EC7F0(u8 *arg0) {
    s32 var_r30;
    s32 var_r4;
    do {
        var_r30 = 0;
        M2C_FIELD(arg0, s32 *, 0x6B4) = (s32) (M2C_FIELD(arg0, s32 *, 0x6B4) + 1);
        var_r4 = M2C_FIELD((M2C_FIELD(((u8 *)(&lbl_804E3C2C.value) + (lbl_805D5550 * 4)), s32 *, 0) + (M2C_FIELD(arg0, s32 *, 0x6B4) * 8)), s32 *, 0);
        switch (var_r4) {
        case 0x1E:
            if (calc_elapsed_scaled__9TObjEneDDFv((void *) (arg0)) > lbl_805DEA10) {
                var_r4 = 8;
            } else {
                var_r4 = 6;
            }
            break;
        case 0x1F:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 5;
            } else {
                var_r4 = 9;
            }
            break;
        case 0x20:
            if (calc_elapsed_scaled__9TObjEneDDFv((void *) (arg0)) > lbl_805DEA10) {
                var_r4 = 0xC;
            } else {
                var_r4 = 0xE;
            }
            break;
        case 0x21:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 3;
            } else {
                var_r4 = 0xB;
            }
            break;
        case 0x23:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 4;
            } else {
                var_r4 = 0xA;
            }
            break;
        case 0x24:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 0xF;
            } else {
                var_r4 = 0x10;
            }
            break;
        case 0x25:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 0x11;
            } else {
                var_r4 = 0x12;
            }
            break;
        case 0x26:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 0x13;
            } else {
                var_r4 = 0x14;
            }
            break;
        case 0x27:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 0x15;
            } else {
                var_r4 = 0x16;
            }
            break;
        case 0x45:
            var_r30 = 1;
            M2C_FIELD(arg0, s32 *, 0x6B4) = 1;
            break;
        }
    } while (var_r30 != 0);
    TObjFish__sub_802ED62C((void *) (arg0), (int) (var_r4));
}

void TBoss7DeRolLeC__sub_802EC994(void* p) { *(s32*)((char*)p + 0x6b0) = 0; *(s32*)((char*)p + 0x6b4) = 0; }
void fn_802EC9A4(void *arg0, void *arg1) {
    TBoss8Dragon__sub_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x6B4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    transition_enemy_state(arg0, M2C_FIELD(arg1, s16 *, 4));
}
void fn_802EC9F0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x6B4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    transition_enemy_state(arg0, M2C_FIELD(arg1, s16 *, 4));
}

void handle_6xAA_barba_ray_boss_actions(void *arg0) {
    void *x;
    read_state__11TBoss7JointFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        fn_802EC9A4((void *)(x), (void *)(arg0));
    }
}

void handle_6xA9_barba_ray_boss_actions(void *arg0) {
    void *x;
    byteswap_action_packet__11TBoss7JointFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        fn_802EC9F0((void *)(x), (void *)(arg0));
    }
}

void TObjPlayer__sub_802ECAA4(Ply_802ECAA4 *o) {
    if (o->state == 0x1C || o->state == 0x1D) {
    } else if (o->state == 0x13 || o->state == 0x14) {
        TObjFish__sub_802EC7F0((u8 *)o);
    } else if (o->state == 0x15 || o->state == 0x16) {
        TObjFish__sub_802ED62C(o, 0x1C);
    } else {
        TObjFish__sub_802ED62C(o, 0x1B);
    }
}

u8 TObjPlayer__sub_802ECB10(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x6FC) <= 0) && !(M2C_FIELD(arg0, s32 *, 0x628) & 4)) {
        var_r4 = 1;
    }
    return (u8)var_r4;
}

}
