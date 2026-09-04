#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct GibBase_802da394_802D87D8 { char pad[0x14]; };
struct GibVObj_802da394_802D87D8 : GibBase_802da394_802D87D8 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
};
struct VBase802DAAC8_802daac8_802D87D8 { char pad[0x14]; };
struct VObj802DAAC8_802daac8_802D87D8 : VBase802DAAC8_802daac8_802D87D8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8();
};

extern "C" {

void TObjEneGibbles__sub_802DAAC8(u8 *arg0);
void* TObjEneGibbles__sub_802DBC8C(void* p);
void clamp_angle__14TObjEneGibblesFPvi(void *arg0, s32 arg1);
void * create__14TObjEneGibblesFPv(void *arg0);
void free_static__14TObjEneGibblesFv(void);
void init_params__14TObjEneGibblesFPv(void *arg0);
void init_state__14TObjEneGibblesFPv(u8 *arg0);
void set_state_dead__14TObjEneGibblesFPv(void *arg0);
void update_death_sequence__14TObjEneGibblesFPv(u8 *arg0);
void update_spawn_state__14TObjEneGibblesFPv(u8 *arg0);
void update_spawn_timer__14TObjEneGibblesFv(void);
M2C_UNK TBoss1Dragon__sub_80143504(int);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
M2C_UNK TBoss4DarkFalz__sub_8004C220(void *, void *);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
void *TObjControl__ct(void *, void *);
void *TObjEneGibbles__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_800D8988(void *);
M2C_UNK TObjEneGibbles__sub_802D7A54(void *);
M2C_UNK TObjEneGibbles__sub_802D7F94(void *, int);
s32 TObjEneGibbles__sub_802D9A04(void *);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, int, f32);
f32 TObjPlayer__sub_80141CF8(int, void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);
s32 lerp_angle_half__10TObjPlayerFUsUs(s32, s32);
M2C_UNK minimap_render_dot(void *, int, int, int);
s32 objInBand__FP7GameObjf(void *, f32, f32);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK obj_setFlags30(void *, int);

void set_state_dead__14TObjEneGibblesFPv(void *arg0) {
    s16 temp_r0;
    void *temp_r5;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 7) && (temp_r0 != 6)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
    }
    temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF99BFFFF);
}

extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 TObjEneGibbles__data_805DE7EC;
extern const f32 TObjEneGibbles__data_805DE830;
extern const f32 lbl_805DE868;
extern const f32 lbl_805DE86C;

void update_death_sequence__14TObjEneGibblesFPv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_r0;
    s32 temp_r3;
    u8 *temp_r4;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    TBoss1Dragon__sub_80143504((int) (arg0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        TObjEneMe3SinowZoa__sub_800D758C((void *) (arg0 + 0x3C0));
        M2C_FIELD(arg0, f32 *, 0x38C) = (f32) lbl_805DE868;
        M2C_FIELD(arg0, f32 *, 0x390) = (f32) TObjEneGibbles__data_805DE830;
        TObjPlayer__sub_80011734((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        break;
    case 1:
        if (((struct GibVObj_802da394_802D87D8 *) (arg0 + 0x3C0))->m5() != 0) {
            M2C_FIELD(arg0, f32 *, 0x38C) = (f32) (M2C_FIELD(arg0, f32 *, 0x38C) - M2C_FIELD(arg0, f32 *, 0x390));
            M2C_FIELD(arg0, f32 *, 0x390) = (f32) (M2C_FIELD(arg0, f32 *, 0x390) + TObjEneGibbles__data_805DE830);
        } else {
            M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DE86C;
        }
        temp_f2 = M2C_FIELD(arg0, f32 *, 0xC4);
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) ((temp_f2 - TObjEneGibbles__data_805DE7EC) - M2C_FIELD(arg0, f32 *, 0xC8)), (f32) (temp_f2)) != 0) {
            M2C_FIELD(arg0, f32 *, 0x38C) = (f32) TObjEneGibbles__data_805DE7E4;
            M2C_FIELD(arg0, f32 *, 0x390) = (f32) TObjEneGibbles__data_805DE7E4;
            temp_r3 = TObjEneGibbles__sub_802D9A04((void *) (arg0));
            switch (temp_r3) {
            case 0:
                TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
                break;
            default:
            case 1:
                TBoss3Volopt__sub_8022675C((void *) TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3AD32)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
                break;
            }
            TObjEneGibbles__sub_802D7A54((void *) (arg0));
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
        }
        break;
    case 3:
        temp_f2_2 = M2C_FIELD(arg0, f32 *, 0xC4);
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) ((temp_f2_2 - TObjEneGibbles__data_805DE7EC) - M2C_FIELD(arg0, f32 *, 0xC8)), (f32) (temp_f2_2)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 4);
        }
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 lbl_805DE870;

void update_spawn_state__14TObjEneGibblesFPv(u8 *arg0) {
    s16 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0xFFFFFFFE);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        TObjPlayer__sub_80011734((void *) arg0, (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        return;
    case 1:
        if (TObjPlayer__sub_80141CF8((int) (M2C_FIELD(arg0, s32 *, 0x2A8) + 0x2FC), (void *) (arg0 + 0x2FC)) < lbl_805DE870) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
        }
    case 2:
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 2);
        break;
    }
}

void update_state__14TObjEneGibblesFPv(void *arg0)
{
  s16 temp_r0;
  s32 temp_r4;
  void *temp_r3;
  void *temp_r3_2;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  switch (temp_r0)
  {
    default:
      temp_r4 = *((s32 *) (((s8 *) arg0) + 0x374));
      if (temp_r4 & 4)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 3;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 1;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xF9FBFFFF);
    }
    else
      if (temp_r4 & 1)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 1;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x06040000);
    }
      temp_r3 = *((void **) (((s8 *) arg0) + 0xA4));
      *((s32 *) (((s8 *) temp_r3) + 0x18)) = (s32) ((*((s32 *) (((s8 *) temp_r3) + 0x18))) | 1);
      return;

    case 1:
      if ((*((s32 *) (((s8 *) arg0) + 0x374))) & 2)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 2;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x06040000);
    }
      return;

    case 2:
      if ((*((s32 *) (((s8 *) arg0) + 0x374))) & 4)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 3;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s16 *) (((s8 *) arg0) + 0xB8)) = 1;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xF9FBFFFF);
      return;
    }
      break;

    case 3:
      if ((*((s32 *) (((s8 *) arg0) + 0x374))) & 3)
    {
      *((s16 *) (((s8 *) arg0) + 0x326)) = 1;
      *((s16 *) (((s8 *) arg0) + 0x328)) = 0;
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x06040000);
      *((s32 *) (((s8 *) arg0) + 0x374)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x374))) & 0xFFFF0000);
      *((s32 *) (((s8 *) arg0) + 0x374)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x374))) | 1);
      temp_r3_2 = *((void **) (((s8 *) arg0) + 0xA4));
      *((s32 *) (((s8 *) temp_r3_2) + 0x18)) = (s32) ((*((s32 *) (((s8 *) temp_r3_2) + 0x18))) | 1);
      return;
    }
      break;

  }

  return;
}

void init_state__14TObjEneGibblesFPv(u8 *arg0) {
    u8 *temp_r3;

    TBoss4DarkFalz__sub_8004C220((void *) arg0, (void *) (arg0 + 0x50));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
}

void TObjEneGibbles__sub_802DAAC8(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if (((VObj802DAAC8_802daac8_802D87D8 *)(arg0 + 0x3C0))->m8() != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0xA;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            obj_clearFlags30((void *) (arg0), (int) (0x200000));
            obj_setFlags30((void *) (arg0), (int) (0x06040000));
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
            temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
        }
    case 6:
    case 11:
        return;
    case 10:
        if (!(M2C_FIELD(arg0, s32 *, 0x374) & 0x40)) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            return;
        }
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0x326) = 0xB;
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF99BFFFF);
        break;
    }
}

void clamp_angle__14TObjEneGibblesFPvi(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < -0x238E) {
        var_r4 = -0x238E;
    } else if (var_r4 > 0x238E) {
        var_r4 = 0x238E;
    }
    M2C_FIELD(arg0, s32 *, 0x3BC) = lerp_angle_half__10TObjPlayerFUsUs(M2C_FIELD(arg0, s32 *, 0x3BC), var_r4);
}

extern s32 TObjEneGibbles__data_805D68BC;
extern s32 TObjEneGibbles__data_805D68C0;

void update_spawn_timer__14TObjEneGibblesFv(void) {
    if ((s32) TObjEneGibbles__data_805D68BC == 0x18) {
        TObjContainerIdo__sub_803D96A8(0, TObjEneGibbles__data_805D68C0);
    }
    TObjEneGibbles__data_805D68BC += 1;
}

extern f32 lbl_805DE878;

void init_params__14TObjEneGibblesFPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;

    temp_r0 = (s16) (lbl_805DE878 + M2C_FIELD(arg0, f32 *, 0x354));
    M2C_FIELD(arg0, s16 *, 0x388) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x38A) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x39C) = (s32) M2C_FIELD(arg0, f32 *, 0x358);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x39C);
    if (temp_r0_2 < 0) {
        M2C_FIELD(arg0, s32 *, 0x39C) = 0;
    } else if (temp_r0_2 > 8) {
        M2C_FIELD(arg0, s32 *, 0x39C) = 8;
    }
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    M2C_FIELD(arg0, s32 *, 0x378) = (s32) (M2C_FIELD(arg0, s32 *, 0x378) | (1 << M2C_FIELD(arg0, s32 *, 0x39C)));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg0, f32 *, 0x35C);
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) M2C_FIELD(arg0, f32 *, 0x360);
}

extern void *tl_04;

void * create__14TObjEneGibblesFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x44C);
    if (o2 != NULL) {
        o2 = TObjEneGibbles__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjEneGibbles__data_805D68AC;
extern u32 TObjEneGibbles__data_805D68B8;

void free_static__14TObjEneGibblesFv(void) {
    if ((u32) TObjEneGibbles__data_805D68AC != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneGibbles__data_805D68AC);
        TObjEneGibbles__data_805D68AC = 0U;
    }
    if ((u32) TObjEneGibbles__data_805D68B8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneGibbles__data_805D68B8, 1);
        TObjEneGibbles__data_805D68B8 = 0U;
    }
}

void* TObjEneGibbles__sub_802DBC8C(void* p) { return (char*)p + 0x2fc; }

}
