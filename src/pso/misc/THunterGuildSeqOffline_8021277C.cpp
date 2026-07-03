#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void THunterGuildSeqOffline__sub_8021277C(void);
void THunterGuildSeqOffline__sub_802127D4(void);
void THunterGuildSeqOffline__sub_80212800(void);
void THunterGuildSeqOffline__sub_8021282C(void);
void THunterGuildSeqOffline__sub_80212858(void);
int fn_8000F950(void);
int fn_80073DAC(void);
M2C_UNK fn_80073DC4(void *, M2C_UNK);
int fn_801A3B84(void);

struct Base_8021277C { char pad[0x18]; };
struct VObj_8021277C : Base_8021277C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_8021277C *lbl_805D6188;

void THunterGuildSeqOffline__sub_8021277C(void) {
    if (lbl_805D6188 != NULL) {
        lbl_805D6188->m7(0xC, 1);
        M2C_FIELD(lbl_805D6188, s32 *, 0x38) = 0;
        fn_80073DC4(lbl_805D6188, 5);
    }
}

    extern int lbl_805D5EDC;
void THunterGuildSeqOffline__sub_802127D4(void) { fn_80073DAC(); lbl_805D5EDC = 5; fn_8000F950(); }

    extern int lbl_805D5EDC;
void THunterGuildSeqOffline__sub_80212800(void) { fn_80073DAC(); lbl_805D5EDC = 1; fn_8000F950(); }

    extern int lbl_805D5EDC;
void THunterGuildSeqOffline__sub_8021282C(void) { fn_801A3B84(); lbl_805D5EDC = 0; fn_8000F950(); }

struct Base_80212858 { char pad[0x18]; };
struct VObj_80212858 : Base_80212858 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_80212858 *lbl_805D6188;

void THunterGuildSeqOffline__sub_80212858(void) {
    if (lbl_805D6188 != NULL) {
        lbl_805D6188->m7(6, 1);
        M2C_FIELD(lbl_805D6188, s32 *, 0x38) = 2;
        fn_80073DC4(lbl_805D6188, 5);
    }
}

}
