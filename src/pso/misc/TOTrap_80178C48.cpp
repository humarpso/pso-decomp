#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20(u32, f32);
};

extern "C" {

void TOTrap__vt80(void *arg0);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
M2C_UNK calc_attach_pos__10TObjPlayerFPv();
s32 TObjPlayer__sub_80019248();
s32 TLobby__sub_800495BC(s32);

s32 obj_getField1c(u32);
extern const f32 TOTrap__data_805DBA38;

void TOTrap__vt80(void *arg0) {
    s32 temp_r31;

    calc_attach_pos__10TObjPlayerFPv();
    TObjPlayer__sub_80154E3C(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) < 0) {
        u32 p;
        ((V_A *)arg0)->m20(M2C_FIELD(arg0, u32 *, 0x2A8), TOTrap__data_805DBA38);
        p = M2C_FIELD(arg0, u32 *, 0x2A8);
        if (p != 0U) {
            u32 v = (u16) obj_getField1c(p);
            if (v < 0x1000U) {
                temp_r31 = TPlayerBattleCtrl4P__sub_801BA74C(v);
                if ((TObjPlayer__sub_80019248() != 0) && (TLobby__sub_800495BC(temp_r31) != 0)) {
                    send_code_45_1__10TObjPlayerFi(temp_r31);
                }
            }
        }
    }
    TObjPlayer__sub_801B4A18(arg0, -1);
}

}
