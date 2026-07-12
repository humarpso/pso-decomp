#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802A63F8 { char pad[0x18]; };
struct VObj_802A63F8 : Base_802A63F8 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12();
};

extern "C" {

void TObjSeabedSuisoBrakable__vt12(void *arg0);
void render__23TObjSeabedSuisoBrakableFv(void *arg0);
M2C_UNK TOComputerMachine01__sub_8023DDC8(u32, M2C_UNK, M2C_UNK, u16, M2C_UNK);
s32 TObjSeabedSuisoBrakable__sub_802A71F8(M2C_UNK);
void *TObjSeabedSuisoBrakable__sub_80131648(s32, M2C_UNK);
M2C_UNK TORockCave__sub_80175134(void *);

extern s32 lbl_805D53A4;
extern s32 lbl_805D667C;

void TObjSeabedSuisoBrakable__vt12(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    void *temp_r31;
    void *temp_r31_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 2) {
        temp_r31 = TObjSeabedSuisoBrakable__sub_80131648(M2C_FIELD(arg0, s32 *, 0x34), 2);
        if ((s32) lbl_805D667C != (s32) lbl_805D53A4) {
            if ((temp_r31 != NULL) && ((u32) M2C_FIELD(temp_r31, u32 *, 4) != 0U)) {
                temp_r3 = TObjSeabedSuisoBrakable__sub_802A71F8(1);
                if (temp_r3 != -1) {
                    TOComputerMachine01__sub_8023DDC8(M2C_FIELD(temp_r31, u32 *, 4), 0, 1, (u16) temp_r3, 1);
                }
            }
            lbl_805D667C = lbl_805D53A4;
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 0) {
        temp_r31_2 = TObjSeabedSuisoBrakable__sub_80131648(M2C_FIELD(arg0, s32 *, 0x34), 8);
        if ((s32) lbl_805D667C != (s32) lbl_805D53A4) {
            if ((temp_r31_2 != NULL) && ((u32) M2C_FIELD(temp_r31_2, u32 *, 4) != 0U)) {
                temp_r3_2 = TObjSeabedSuisoBrakable__sub_802A71F8(2);
                if (temp_r3_2 != -1) {
                    TOComputerMachine01__sub_8023DDC8(M2C_FIELD(temp_r31_2, u32 *, 4), 0, 1, (u16) temp_r3_2, 1);
                }
            }
            lbl_805D667C = lbl_805D53A4;
        }
    }
}

void render__23TObjSeabedSuisoBrakableFv(void *arg0) {
    struct VObj_802A63F8 *o = (struct VObj_802A63F8 *)arg0;
    o->m12();
    TORockCave__sub_80175134(arg0);
}

}
