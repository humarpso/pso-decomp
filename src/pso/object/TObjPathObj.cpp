#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_802C3188 { char pad[0x18]; };
struct VObj_802C3188 : Base_802C3188 {
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
};

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
    virtual s32 m8(f32, f32);
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual M2C_UNK m12();
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_802C320C___vt__11TObjPathObj {
    M2C_UNK value;
    u8 remaining[0x38];
};

extern "C" {
s32 get_state_flag__9TMainTaskFv();
void render__11TObjPathObjFv(u8 *arg0);
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK __vt__11TObjPathObj[];
extern s32 lbl_805D3EC0;
extern const f32 lbl_805DE500;
extern const f32 lbl_805DE524;
u8 *TObjPathObj__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TObjPathObj__vt11(void);
void TObjPathObj__vt12(void);
void *__dt__11TObjPathObjFv(void *arg0, s16 arg1);
void run_task__11TObjPathObjFv(void *arg0);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void render__16TAdStorySelectGCFv(void);

void render__11TObjPathObjFv(u8 *arg0) {
    if ((get_state_flag__9TMainTaskFv() != 1) && (((VObj_18 *)(arg0))->m8(M2C_FIELD(arg0, f32 *, 0x90), M2C_FIELD(arg0, f32 *, 0x94)) != 0)) {
        ((VObj_18 *)(arg0))->m12();
    }
}

void run_task__11TObjPathObjFv(void *arg0) {
    struct VObj_802C3188 *o = (struct VObj_802C3188 *)arg0;
    o->m11();
}

extern M2C_UNK __vt__11TObjPathObj[];

void *__dt__11TObjPathObjFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjPathObj;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_802C320C___vt__11TObjPathObj_size[sizeof(RecoveredGlobal_802C320C___vt__11TObjPathObj) == 0x3C ? 1 : -1];
u8 *TObjPathObj__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802C320C___vt__11TObjPathObj *)&__vt__11TObjPathObj).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3EC0;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) lbl_805DE524;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805DE500;
    return arg0;
}

void TObjPathObj__vt12(void) {  }
void TObjPathObj__vt11(void) {  }

}
