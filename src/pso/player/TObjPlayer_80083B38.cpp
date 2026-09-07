#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80083CEC_lbl_8048E5D0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
extern int lbl_805D4EE0;
void TObjPlayer__sub_80083FB0(void);
int TObjPlayer__sub_80083F9C(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 get_main_phase();
s32 is_inactive__10TObjPlayerFPv();
s32 check_all_players_ready__10TObjPlayerFv(void);
int TObjPlayer__sub_80084694(void);
    extern unsigned char lbl_805D4EE4;
void TObjPlayer__sub_80084614(void);
int TObjPlayer__sub_800846C8(void*);
extern unsigned char lbl_805D4EE4;
void TObjPlayer__sub_8008463C(void);
int TObjPlayer__sub_800846C8(void*);
extern unsigned char lbl_805D4EE4;
void reset_movie_state__10TObjPlayerFv(void);
extern unsigned char lbl_805D4EE4;
void TObjPlayer__sub_80084744(void);
extern unsigned char lbl_805D4EE4;
void TObjPlayer__sub_80084754(void);
extern unsigned char lbl_805D4EE4;
void TObjPlayer__sub_80084764(void);
extern unsigned char lbl_805D4EE4;
s32 get_camera_flag__10TObjPlayerFv(void);
extern unsigned char lbl_805D4EE4;
void TObjPlayer__sub_80084780(void);
extern u8 lbl_805D2910;
extern unsigned char lbl_805D4EE4;
void TObjPlayer__sub_80084790(void);
void **TLobby__sub_803DA16C();
extern M2C_UNK lbl_8048E5C8[];
void **TObjPlayer__sub_80083F04(void);
f32 TObjPlayer__sub_80141CF8(void *, void *);
extern RecoveredGlobal_80083CEC_lbl_8048E5D0 lbl_8048E5D0;
extern u32 lbl_805D4DF0;
extern const f32 lbl_805D9434;
s32 TObjPlayer__sub_80083CEC(u8 *arg0, f32 farg0);
}

extern "C" {

int TObjPlayer__sub_80083F9C(void);
void TObjPlayer__sub_80083FA4(void);
void draw_if_all_ready__10TObjPlayerFv(void);
M2C_UNK TObjPlayer__sub_803E1D90(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_split_screen();
M2C_UNK set_global_param__8TObjFishFi(M2C_UNK *);

extern M2C_UNK lbl_8048E5C8[];

void draw_if_all_ready__10TObjPlayerFv(void) {
    if ((is_split_screen() == 0) && (check_all_players_ready__10TObjPlayerFv() != 0)) {
        set_global_param__8TObjFishFi(lbl_8048E5C8);
        TObjPlayer__sub_803E1D90(0, 0, 0, 1);
    }
}

    extern int lbl_805D4EE0;

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_80083CEC_lbl_8048E5D0_size[sizeof(RecoveredGlobal_80083CEC_lbl_8048E5D0) == 0xC ? 1 : -1];
s32 TObjPlayer__sub_80083CEC(u8 *arg0, f32 farg0) {
    if (((u32) lbl_805D4DF0 != 0U) && (((farg0 * farg0) + TObjPlayer__sub_80141CF8(arg0, &lbl_8048E5D0.value)) <= lbl_805D9434)) {
        return 1;
    }
    return 0;
}
#pragma pop

void **TObjPlayer__sub_80083F04(void) {
    void **var_r3;
    void **var_r3_2;
    u8 *var_r4;
    void **phi_r3;
    var_r3 = (void **)(&lbl_8048E5C8);
    var_r4 = (u8 *)((*(u8 * *)&lbl_8048E5C8));
    var_r3 = (void **)(&lbl_8048E5C8);
    phi_r3 = (void **)(&lbl_8048E5C8);
    if ((u32) M2C_FIELD(var_r4, u32 *, 8) != 0U) {
        var_r3_2 = (void **)(TLobby__sub_803DA16C());
        phi_r3 = (void **)(var_r3_2);
    }
    return phi_r3;
}

int TObjPlayer__sub_80083F9C(void) {  return lbl_805D4EE0; }

    extern int lbl_805D4EE0;
void TObjPlayer__sub_80083FA4(void) { lbl_805D4EE0 = 1; }
void TObjPlayer__sub_80083FB0(void) { lbl_805D4EE0 = 0; }
s32 check_all_players_ready__10TObjPlayerFv(void) {
    s32 flag;
    s32 counter;
    flag = 1;
    if (((s32)TObjPlayer__sub_80083F9C()) == 0) {
        return 0;
    }
    if (get_main_phase() == 0xF) {
        counter = 0;
        do {
            if ((TPlayerBattleCtrl4P__sub_801BA74C(counter) != 0U) && (is_inactive__10TObjPlayerFPv() == 0)) {
                flag = 0;
            }
            counter += 1;
        } while (counter < 4);
    }
    return flag;
}
void TObjPlayer__sub_80084614(void) { lbl_805D4EE4 = 0; TObjPlayer__sub_80084694(); }
void TObjPlayer__sub_8008463C(void) { lbl_805D4EE4 = 0; TObjPlayer__sub_800846C8((void*)0); }
void reset_movie_state__10TObjPlayerFv(void) { lbl_805D4EE4 = 0; TObjPlayer__sub_800846C8((void*)1); }
void TObjPlayer__sub_80084744(void) { (*(u8 *)&lbl_805D4EE4) = ((*(u8 *)&lbl_805D4EE4) & 0xfffffffb); }
void TObjPlayer__sub_80084754(void) { (*(u8 *)&lbl_805D4EE4) = ((*(u8 *)&lbl_805D4EE4) | 0x4); }
void TObjPlayer__sub_80084764(void) { (*(u8 *)&lbl_805D4EE4) = ((*(u8 *)&lbl_805D4EE4) & 0xffffffef); }
s32 get_camera_flag__10TObjPlayerFv(void) {
    return ((u8) (*(u8 *)&lbl_805D4EE4) >> 4U) & 1;
}
void TObjPlayer__sub_80084780(void) { (*(u8 *)&lbl_805D4EE4) = ((*(u8 *)&lbl_805D4EE4) | 0x1); }
void TObjPlayer__sub_80084790(void) {
  int temp = (*(u8 *)&lbl_805D4EE4);
  (*(u8 *)&lbl_805D4EE4) = temp & (~2);
  lbl_805D2910 = 0x8F;
}

}
