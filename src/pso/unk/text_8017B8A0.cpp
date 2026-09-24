#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8017B8A0 {
    u8 pad[0x18];
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

struct B_8017B8D4 { u8 pad[0x18]; };

struct V_8017B8D4 : B_8017B8D4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

extern "C" {
void fn_8017B908(u8 *arg0);
void fn_8017B950(u8 *arg0);
void fn_8017B984(u8 *arg0);
extern const f32 lbl_805DBA78;
void TOTrapAncient02R__vt21(Obj_8017B8A0 *self);
extern const f32 lbl_805DBA78;
void TOTrapAncient02R__vt22(V_8017B8D4 *self);
}

extern "C" {

void TOVS2Wall01__sub_8017B9AC(void);

void TOTrapAncient02R__vt21(Obj_8017B8A0 *self) {
    self->m20(0, lbl_805DBA78);
}

void TOTrapAncient02R__vt22(V_8017B8D4 *self) {
    self->m20(0, lbl_805DBA78);
}

void fn_8017B908(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x368) = (s32) M2C_FIELD(arg0, f32 *, 0x6C);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x368);
    if (temp_r0 < 1) {
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
        return;
    }
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0x368) = 0x100;
    }
}

void fn_8017B950(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x35C) = (s32) M2C_FIELD(arg0, s32 *, 0x8C);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x35C);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x35C) = 0;
        return;
    }
    if (temp_r0 >= 5) {
        M2C_FIELD(arg0, s32 *, 0x35C) = 4;
    }
}

void fn_8017B984(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x364) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x364);
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        M2C_FIELD(arg0, s32 *, 0x364) = -1;
    }
}

void TOVS2Wall01__sub_8017B9AC(void) {  }

}
