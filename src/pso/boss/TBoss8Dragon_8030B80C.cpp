#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TBoss4Type2__sub_80141FA8(int);
extern const f32 lbl_805DF17C;
u8 *get_enemy_entity(u16);
u8 *get_player_by_client_id(s32);
u32 TBoss8Dragon__sub_802F3348(int);
s32 TBoss8Dragon__sub_802FCCBC(int);
void TBoss8Dragon__sub_8030B818(u8 *arg0, int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 lbl_805DF1A8;
extern const f32 lbl_805DF1B4;
extern const f32 lbl_805DF1B8;
extern const f32 lbl_805DF1BC;
extern const f32 lbl_805DF1C0;
extern const f32 lbl_805DF1C4;
extern const f32 lbl_805DF1C8;
extern const f32 lbl_805DF1CC;
extern const f32 lbl_805DF1D0;
extern const f32 lbl_805DF1D4;
void TBoss8Dragon__sub_8030BB24(u8 *arg0);
f32 calc_random_ratio__10TObjPlayerFv(void *);
u8 *get_enemy_entity(u16);
u8 *get_player_by_client_id(s32);
u16 call_null__12TBoss8DragonFv(void *);
int TBoss8Dragon__sub_8030B80C(void);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 lbl_805DF174;
extern const f32 lbl_805DF180;
extern const f32 lbl_805DF184;
extern const f32 lbl_805DF188;
extern const f32 lbl_805DF18C;
extern const f32 lbl_805DF190;
extern const f32 lbl_805DF194;
extern const f32 lbl_805DF198;
extern const f32 lbl_805DF19C;
extern const f32 lbl_805DF1A0;
extern const f32 lbl_805DF1A4;
extern const f32 lbl_805DF1A8;
extern const f32 lbl_805DF1AC;
extern const f32 lbl_805DF1B0;
extern const f32 lbl_805DF1B4;
void TBoss8Dragon__sub_8030B8A8(u8 *arg0);
}

extern "C" {

int TBoss8Dragon__sub_8030B80C(void);
void update_toggle_state__12TBoss8DragonFPv(void *arg0);
s32 TBoss8Dragon__sub_802F3638();
M2C_UNK TObjPlayer__sub_80082CBC(void *);
M2C_UNK TObjPlayer__sub_80082CCC(void *);

    extern int lbl_805D53A0;
int TBoss8Dragon__sub_8030B80C(void) {  return (lbl_805D53A0 & 0xffff); }

void TBoss8Dragon__sub_8030B818(u8 *arg0, int _w1) {
  s32 temp_r0;
  s32 var_r3;
  s32 new_var;
  new_var = TBoss4Type2__sub_80141FA8((int) (*((s32 *) (((s8 *) arg0) + 0x28))));
  temp_r0 = (s32) (((f32) new_var) * lbl_805DF17C);
  if (temp_r0 < (-0x280))
  {
    var_r3 = -0x280;
  }
  else
  {
    var_r3 = 0x280;
    if (temp_r0 < 0x280)
    {
      var_r3 = temp_r0;
    }
  }
  *((s32 *) (((s8 *) arg0) + 0x28)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x28))) + var_r3);
}

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8030B8A8(u8 *arg0) {
    f32 r;
    u8 *p;
    if (M2C_FIELD(arg0, s16 *, 0x1E) < 0) {
        return;
    }
    if (--M2C_FIELD(arg0, s16 *, 0x1E) > 0) {
        return;
    }
    r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x54);
    if (r < lbl_805DF180) {
        M2C_FIELD(arg0, s16 *, 0x1C) = 1;
    } else if (r < lbl_805DF184) {
        M2C_FIELD(arg0, s16 *, 0x1C) = 2;
    } else if (r < lbl_805DF188) {
        M2C_FIELD(arg0, s16 *, 0x1C) = 3;
    } else {
        M2C_FIELD(arg0, s16 *, 0x1C) = 4;
    }
    switch (M2C_FIELD(arg0, s16 *, 0x1C)) {
    case 0:
        break;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x1E) = lbl_805DF18C * (r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x54), r) + lbl_805DF18C;
        M2C_FIELD(arg0, u16 *, 0x24) = ((int (*)(void *))TBoss8Dragon__sub_8030B80C)(arg0);
        M2C_FIELD(arg0, s32 *, 0x28) = lbl_805DF190 * calc_random_ratio__10TObjPlayerFv(arg0 + 0x54);
        M2C_FIELD(arg0, s32 *, 0x2C) = lbl_805DF194 * (lbl_805DF198 * (calc_random_ratio__10TObjPlayerFv(arg0 + 0x54) - lbl_805DF19C));
        M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DF1A0 * (r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x54), r) + lbl_805DF174;
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x1E) = lbl_805DF18C * (r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x54), r) + lbl_805DF18C;
        M2C_FIELD(arg0, u16 *, 0x24) = ((int (*)(void *))TBoss8Dragon__sub_8030B80C)(arg0);
        p = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x24));
        if (p != NULL) {
            M2C_FIELD(arg0, s32 *, 0x28) = M2C_FIELD(p, s32 *, 0x60) - 0x8000;
        }
        break;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x1E) = lbl_805DF1A4 * (r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x54), r) + lbl_805DF1A4;
        M2C_FIELD(arg0, u16 *, 0x24) = call_null__12TBoss8DragonFv(arg0);
        p = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x24));
        if (p != NULL) {
            M2C_FIELD(arg0, s32 *, 0x28) = M2C_FIELD(p, s32 *, 0x60) - 0x8000;
        }
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0x1E) = lbl_805DF1A8 * (r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x54), r) + lbl_805DF1A8;
        M2C_FIELD(arg0, s32 *, 0x28) = lbl_805DF190 * calc_random_ratio__10TObjPlayerFv(arg0 + 0x54);
        M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DF1AC * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DF1B0;
        M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DF1AC * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, f32 *, 0x40) = lbl_805DF1B4;
        M2C_FIELD(arg0, f32 *, 0x44) = lbl_805DF1B4;
        M2C_FIELD(arg0, f32 *, 0x48) = lbl_805DF1B4;
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8030BB24(u8 *arg0) {
    s16 temp_r0;
    u32 temp_r3_4;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x1C);
    switch (temp_r0) {
    case 1:
        temp_r3 = (u8 *)(get_player_by_client_id((s32) M2C_FIELD(arg0, u16 *, 0x24)));
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((lbl_805DF1B8 * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3, f32 *, 0x38));
            M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x30));
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((lbl_805DF1B8 * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3, f32 *, 0x40));
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_r3, f32 *, 0x38);
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x30));
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(temp_r3, f32 *, 0x40);
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s32 *, 0x2C));
        }
        return;
    case 2:
        temp_r3_2 = (u8 *)(get_player_by_client_id((s32) M2C_FIELD(arg0, u16 *, 0x24)));
        if (temp_r3_2 != NULL) {
            M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((lbl_805DF1BC * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_2, f32 *, 0x38));
            M2C_FIELD(arg0, f32 *, 0x38) = (f32) (lbl_805DF1C0 + M2C_FIELD(temp_r3_2, f32 *, 0x3C));
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((lbl_805DF1BC * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_2, f32 *, 0x40));
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((lbl_805DF1C4 * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_2, f32 *, 0x38));
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) (lbl_805DF1C8 + M2C_FIELD(temp_r3_2, f32 *, 0x3C));
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((lbl_805DF1C4 * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_2, f32 *, 0x40));
            TBoss8Dragon__sub_8030B818((u8 *)((void *) (arg0)), (int)((int) (M2C_FIELD(temp_r3_2, s32 *, 0x60) - 0x8000)));
            return;
        }
        break;
    case 3:
        temp_r3_3 = (u8 *)(get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x24)));
        if ((temp_r3_3 != NULL) && (M2C_FIELD(temp_r3_3, f32 *, 0x3C) >= lbl_805DF1B4)) {
            M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((lbl_805DF1CC * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_3, f32 *, 0x38));
            M2C_FIELD(arg0, f32 *, 0x38) = (f32) (lbl_805DF1A8 + M2C_FIELD(temp_r3_3, f32 *, 0x3C));
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((lbl_805DF1CC * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_3, f32 *, 0x40));
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((lbl_805DF1D0 * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_3, f32 *, 0x38));
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) (lbl_805DF1D4 + M2C_FIELD(temp_r3_3, f32 *, 0x3C));
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((lbl_805DF1D0 * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_3, f32 *, 0x40));
            TBoss8Dragon__sub_8030B818((u8 *)((void *) (arg0)), (int)((int) (M2C_FIELD(temp_r3_3, s32 *, 0x60) - 0x8000)));
            return;
        }
        break;
    case 5:
        temp_r3_4 = TBoss8Dragon__sub_802F3348((int) (0));
        if ((temp_r3_4 != 0U) && (TBoss8Dragon__sub_802FCCBC((int) (temp_r3_4)) != 0)) {
            M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        }
        break;
    }
}
#pragma pop

void update_toggle_state__12TBoss8DragonFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) >= TBoss8Dragon__sub_802F3638()) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
                TObjPlayer__sub_80082CBC(M2C_FIELD(arg0, void **, 0x50));
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            TObjPlayer__sub_80082CCC(M2C_FIELD(arg0, void **, 0x50));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    }
}

}
