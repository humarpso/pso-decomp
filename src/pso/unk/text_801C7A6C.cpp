#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8_1cc697 { char pad[0x8]; };

struct VObj_8_1cc697 : VBase_8_1cc697 {
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
    virtual s32 m18();
    virtual s32 m19();
    virtual void m20();
    virtual void m21();
    virtual s32 m22();
    virtual void m23();
    virtual s32 m24();
    virtual s32 m25();
    virtual s32 m26();
    virtual void m27();
    virtual void m28();
    virtual s32 m29();
    virtual s32 m30();
    virtual s32 m31();
    virtual s32 m32();
    virtual s32 m33();
    virtual s32 m34();
    virtual s32 m35();
    virtual s32 m36();
    virtual s32 m37();
    virtual s32 m38();
    virtual s32 m39();
    virtual s32 m40();
    virtual s32 m41();
    virtual s32 m42();
    virtual s32 m43();
    virtual s32 m44();
    virtual s32 m45();
    virtual s32 m46();
    virtual s32 m47();
    virtual s32 m48();
    virtual s32 m49();
    virtual s32 m50();
    virtual s32 m51();
    virtual s32 m52();
    virtual s32 m53();
    virtual s32 m54();
    virtual s32 m55();
    virtual s32 m56();
    virtual s32 m57();
    virtual s32 m58();
    virtual s32 m59();
    virtual s32 m60();
    virtual s32 m61();
    virtual s32 m62();
    virtual s32 m63();
    virtual s32 m64();
    virtual s32 m65();
    virtual s32 m66();
    virtual s32 m67();
    virtual s32 m68();
    virtual s32 m69();
    virtual s32 m70();
};

extern "C" {
s32 update_state_group__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C75A4();
s32 start_action_18__10TObjPlayerFPv(void *);
s32 send_state_sync__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C7858();
s32 TObjPlayer__sub_801C785C(void *);
s32 TObjPlayer__sub_801C7874();
s32 try_change_action__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C7A6C(s32 arg0, s16 arg1);
s32 TKeyBoardControl__sub_801A58B0();
s32 TKeyBoardControl__sub_801A5998(int);
s32 TFontSmallLobby__sub_801AFEE0();
s32 check_flag_100__10TObjPlayerFPv(void *);
s32 get_hold_effect_count__10TObjPlayerFv();
s32 ret_801D26AC();
s32 try_ground_action__10TObjPlayerFPvi(void *, int);
s32 check_action_usable__10TObjPlayerFPvi(void *, int);
s16 select_idle_action__10TObjPlayerFv(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801C7A6C(s32 arg0, s16 arg1) {
  unsigned int new_var2;
  unsigned int new_var;
  {
    switch (arg1)
    {
      case 7:
        try_change_action__10TObjPlayerFPv((void *) arg0);
        return;
      new_var2 = (new_var = arg0);
      case 2:
        TObjPlayer__sub_801C7874();
        return;
      case 3:
        TObjPlayer__sub_801C785C((void *) new_var2);
 do { } while (0 != 0);
        return;
      case 8:
        TObjPlayer__sub_801C7858();
        return;
      case 5:
        send_state_sync__10TObjPlayerFPv((void *) arg0);
        return;
      case 0:
        start_action_18__10TObjPlayerFPv((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_801C75A4();
        return;
      case 6:
        update_state_group__10TObjPlayerFPv((void *) arg0);
        break;
    }
  }
}
s16 select_idle_action__10TObjPlayerFv(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_10;
    u8 *temp_r3_11;
    u8 *temp_r3_12;
    u8 *temp_r3_13;
    u8 *temp_r3_14;
    u8 *temp_r3_15;
    u8 *temp_r3_16;
    u8 *temp_r3_17;
    u8 *temp_r3_18;
    u8 *temp_r3_19;
    u8 *temp_r3_20;
    u8 *temp_r3_21;
    u8 *temp_r3_22;
    u8 *temp_r3_23;
    u8 *temp_r3_24;
    u8 *temp_r3_25;
    u8 *temp_r3_26;
    u8 *temp_r3_27;
    u8 *temp_r3_28;
    u8 *temp_r3_29;
    u8 *temp_r3_2;
    u8 *temp_r3_30;
    u8 *temp_r3_31;
    u8 *temp_r3_32;
    u8 *temp_r3_33;
    u8 *temp_r3_34;
    u8 *temp_r3_35;
    u8 *temp_r3_36;
    u8 *temp_r3_37;
    u8 *temp_r3_38;
    u8 *temp_r3_39;
    u8 *temp_r3_3;
    u8 *temp_r3_40;
    u8 *temp_r3_41;
    u8 *temp_r3_42;
    u8 *temp_r3_43;
    u8 *temp_r3_44;
    u8 *temp_r3_45;
    u8 *temp_r3_46;
    u8 *temp_r3_47;
    u8 *temp_r3_48;
    u8 *temp_r3_4;
    u8 *temp_r3_5;
    u8 *temp_r3_6;
    u8 *temp_r3_7;
    u8 *temp_r3_8;
    u8 *temp_r3_9;
    if ((void *) M2C_FIELD(arg0, u8 **, 0x380) == NULL) {
        return -1;
    }
    if ((get_hold_effect_count__10TObjPlayerFv() == 0) && (TFontSmallLobby__sub_801AFEE0() != 0)) {
        if (((TKeyBoardControl__sub_801A58B0() != 0) && (TKeyBoardControl__sub_801A5998((int) (0x24)) != 0)) || ((check_flag_100__10TObjPlayerFPv((void *) (arg0)) == 0) && (try_ground_action__10TObjPlayerFPvi((void *) (arg0 + 0x550), (int) (0x400)) != 0) && (check_action_usable__10TObjPlayerFPvi((void *) (arg0 + 0x550), (int) (4)) != 0))) {
            temp_r3_48 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
            return ((VObj_8_1cc697 *)(temp_r3_48))->m65();
        }
        if (((TKeyBoardControl__sub_801A58B0() != 0) && (TKeyBoardControl__sub_801A5998((int) (0x18)) != 0)) || ((check_flag_100__10TObjPlayerFPv((void *) (arg0)) == 0) && (try_ground_action__10TObjPlayerFPvi((void *) (arg0 + 0x550), (int) (0x400)) != 0) && (check_action_usable__10TObjPlayerFPvi((void *) (arg0 + 0x550), (int) (2)) != 0))) {
            temp_r3_47 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
            return ((VObj_8_1cc697 *)(temp_r3_47))->m66();
        }
        if (TKeyBoardControl__sub_801A58B0() != 0) {
            if (TKeyBoardControl__sub_801A5998((int) (0x40)) != 0) {
                temp_r3_46 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_46))->m22();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x41)) != 0) {
                temp_r3_45 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_45))->m24();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x42)) != 0) {
                temp_r3_44 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_44))->m26();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x43)) != 0) {
                temp_r3_43 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_43))->m19();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x44)) != 0) {
                temp_r3_42 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_42))->m29();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x45)) != 0) {
                temp_r3_41 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_41))->m30();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x46)) != 0) {
                temp_r3_40 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_40))->m31();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x47)) != 0) {
                temp_r3_39 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_39))->m32();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x48)) != 0) {
                temp_r3_38 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_38))->m33();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x49)) != 0) {
                temp_r3_37 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_37))->m34();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x4A)) != 0) {
                temp_r3_36 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_36))->m35();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x4B)) != 0) {
                temp_r3_35 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_35))->m36();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x1C)) != 0) {
                temp_r3_34 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_34))->m25();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x2E)) != 0) {
                temp_r3_33 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_33))->m18();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x2F)) != 0) {
                temp_r3_32 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_32))->m37();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x30)) != 0) {
                temp_r3_31 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_31))->m38();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x31)) != 0) {
                temp_r3_30 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_30))->m39();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x32)) != 0) {
                temp_r3_29 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_29))->m40();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x33)) != 0) {
                temp_r3_28 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_28))->m41();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x17)) != 0) {
                temp_r3_27 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_27))->m42();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x11)) != 0) {
                temp_r3_26 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_26))->m43();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x1E)) != 0) {
                temp_r3_25 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_25))->m44();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x1D)) != 0) {
                temp_r3_24 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_24))->m45();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x20)) != 0) {
                temp_r3_23 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_23))->m46();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x19)) != 0) {
                temp_r3_22 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_22))->m47();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x21)) != 0) {
                temp_r3_21 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_21))->m48();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x1A)) != 0) {
                temp_r3_20 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_20))->m49();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x26)) != 0) {
                temp_r3_19 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_19))->m50();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x22)) != 0) {
                temp_r3_18 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_18))->m51();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x23)) != 0) {
                temp_r3_17 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_17))->m52();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x12)) != 0) {
                temp_r3_16 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_16))->m53();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x13)) != 0) {
                temp_r3_15 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_15))->m54();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x15)) != 0) {
                temp_r3_14 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_14))->m55();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x16)) != 0) {
                temp_r3_13 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_13))->m56();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x28)) != 0) {
                temp_r3_12 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_12))->m57();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x1F)) != 0) {
                temp_r3_11 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_11))->m58();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x10)) != 0) {
                temp_r3_10 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_10))->m59();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x14)) != 0) {
                temp_r3_9 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_9))->m60();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x29)) != 0) {
                temp_r3_8 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_8))->m61();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x27)) != 0) {
                temp_r3_7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_7))->m62();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x25)) != 0) {
                temp_r3_6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_6))->m63();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x1B)) != 0) {
                temp_r3_5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_5))->m64();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x2A)) != 0) {
                temp_r3_4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_4))->m67();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x2B)) != 0) {
                temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_3))->m68();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x2C)) != 0) {
                temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3_2))->m69();
            }
            if (TKeyBoardControl__sub_801A5998((int) (0x2D)) != 0) {
                temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
                return ((VObj_8_1cc697 *)(temp_r3))->m70();
            }
            goto block_109;
        }
        goto block_109;
    }
block_109:
    return ret_801D26AC();
}

}
