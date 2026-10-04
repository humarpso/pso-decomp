#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual s32 m17(M2C_UNK);
};

extern "C" {
void update_dragon_boss_state__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8008DD14();
M2C_UNK TObjPlayer__sub_8008DE9C();
M2C_UNK TObjPlayer__sub_8008E254();
M2C_UNK TObjPlayer__sub_8008E310();
M2C_UNK TObjPlayer__sub_8008EC3C();
M2C_UNK TObjPlayer__sub_8008EDE8();
M2C_UNK TObjPlayer__sub_8008F1DC();
M2C_UNK TObjPlayer__sub_8008F730();
M2C_UNK TObjPlayer__sub_8008F910();
M2C_UNK TObjPlayer__sub_8008FAD0();
void TObjPlayer__sub_8008FF50(u8 *arg0);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);
M2C_UNK clear_attack_flag__18TObjEneBalClawClawFPv(void *);
M2C_UNK set_attack_distance_flag__10TObjPlayerFPv(void *);
s32 get_flag_0x388_b24__10TObjPlayerFPv(void *);
M2C_UNK find_target_in_range__10TObjPlayerFPvf(void *, f32);
M2C_UNK TObjEneMe1GiGue__sub_800C73F4(void *);
f32 xz_distance_squared(void *, void *);
extern const f32 lbl_805D9644;
extern const f32 lbl_805D9670;
extern const f32 lbl_805D9674;
extern const f32 lbl_805D9678;
extern const f32 lbl_805D967C;
void TObjEneMe1GiGue__sub_8008FC10(u8 *arg0);
}

extern "C" {

void TObjEneMe1GiGue__sub_8008FC0C(void);

void TObjEneMe1GiGue__sub_8008FC0C(void) {  }

#define F(T, o) (*(T *)(arg0 + (o)))
#define VO ((VObj_18 *)(arg0))
void TObjEneMe1GiGue__sub_8008FC10(u8 *arg0) {
    f32 d;
    s32 old;
    if (F(s16, 0x326) != 0 && F(s16, 0x326) != 8) {
        F(s32, 0x3D4)++;
    }
    if (get_flag_0x388_b24__10TObjPlayerFPv(arg0) != 0) {
        switch (F(s16, 0x326)) {
        case 0:
        case 1:
            if (F(s32, 0x3D4) > 0x708 || F(s16, 0x3DA) >= 2) {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xB);
                return;
            }
            break;
        }
        if (VO->m17(0x1E) != 0) {
            find_target_in_range__10TObjPlayerFPvf(arg0, lbl_805D9644);
        }
        switch (F(s16, 0x326)) {
        case 0:
        case 8:
            if (F(u32, 0x2A8) != 0) {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 1);
                F(s32, 0x38C) = 2;
            } else {
                TObjEneMe1GiGue__sub_800C73F4(arg0);
            }
            break;
        case 1:
            if (F(u32, 0x2A8) != 0) {
                d = xz_distance_squared((void *)(F(u32, 0x2A8) + 0x38), arg0 + 0x38);
                old = F(s32, 0x38C);
                switch (old) {
                case 0:
                    if (d > lbl_805D9670) {
                        F(s32, 0x38C) = 1;
                    }
                    break;
                case 1:
                    if (d < lbl_805D9674) {
                        F(s32, 0x38C) = 0;
                    } else if (d > lbl_805D9678) {
                        F(s32, 0x38C) = 2;
                    }
                    break;
                case 2:
                    if (d < lbl_805D967C) {
                        F(s32, 0x38C) = 1;
                    }
                    break;
                }
                if (old != F(s32, 0x38C)) {
                    switch (F(s32, 0x38C)) {
                    case 0:
                        update_if_active__15TObjEneMe1GiGueFPv(arg0, 9);
                        break;
                    case 1:
                        clear_attack_flag__18TObjEneBalClawClawFPv(arg0);
                        break;
                    case 2:
                        set_attack_distance_flag__10TObjPlayerFPv(arg0);
                        break;
                    }
                }
            } else {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 8);
            }
            break;
        }
    } else {
        if (VO->m17(0x1E) != 0 && F(s16, 0x326) != 2) {
            find_target_in_range__10TObjPlayerFPvf(arg0, lbl_805D9644);
        }
        switch (F(s16, 0x326)) {
        case 0:
            if (VO->m17(0x1E) != 0 && F(u32, 0x2A8) == 0) {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xA);
                return;
            }
            break;
        case 1:
        case 12:
            if (F(s32, 0x3D4) > 0x708) {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xA);
                return;
            }
            break;
        }
        switch (F(s16, 0x326)) {
        case 0:
        case 8:
            if (F(u32, 0x2A8) != 0) {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xC);
            } else {
                TObjEneMe1GiGue__sub_800C73F4(arg0);
            }
            break;
        case 1:
            if (F(u32, 0x2A8) == 0) {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, 8);
            }
            break;
        }
    }
}

void TObjPlayer__sub_8008FF50(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        update_dragon_boss_state__10TObjPlayerFPv(arg0);
        return;
      case 1:
        TObjPlayer__sub_8008FAD0();
        return;
      case 2:
        TObjPlayer__sub_8008F1DC();
        return;
      case 9:
        TObjPlayer__sub_8008EDE8();
        return;
      case 4:
        TObjPlayer__sub_8008F910();
        return;
      case 5:
        TObjPlayer__sub_8008F730();
        return;
      case 7:
        TObjPlayer__sub_8008EC3C();
        return;
      case 10:
        TObjPlayer__sub_8008E310();
        return;
      case 11:
        TObjPlayer__sub_8008E254();
        return;
      case 12:
        TObjPlayer__sub_8008DE9C();
        return;
      case 8:
        TObjPlayer__sub_8008DD14();
        break;
    }
  }
}

}
