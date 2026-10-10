#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TOKeyBase8016_8016C7FC { char pad[0x18]; };
struct TOKeyCol8016_8016C7FC : TOKeyBase8016_8016C7FC {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

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
    virtual M2C_UNK m12();
    virtual s32 m13();
    virtual M2C_UNK m14();
    virtual M2C_UNK m15();
    virtual M2C_UNK m16();
    virtual M2C_UNK m17();
};
extern "C" {
M2C_UNK send_switch_changed__8TOKeyColFPvi(void *, int);
void run_task__8TOKeyColFv(u8 *arg0);
}

extern "C" {

void *TOKeyCol__ct(void *arg0, s32 arg1, s32 arg2);
void TOKeyCol__vt14(void);
void TOKeyCol__vt15(void);
void TOKeyCol__vt16(void);
void TOKeyCol__vt17(void);
void *__dt__8TOKeyColFv(void *arg0, s16 arg1);
void *create__8TOKeyColFPv(void *arg0);
void render__8TOKeyColFv(void);
M2C_UNK TOKey__ct();
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK init_switch_id__5TOKeyFPv(void *);

void TOKeyCol__vt17(void) {  }
void TOKeyCol__vt16(void) {  }
void TOKeyCol__vt15(void) {  }
void TOKeyCol__vt14(void) {  }

void run_task__8TOKeyColFv(u8 *arg0) {
    ((VObj_18 *)(arg0))->m12();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1) {
        ((VObj_18 *)(arg0))->m15();
        if (((VObj_18 *)(arg0))->m13() == 1) {
            send_switch_changed__8TOKeyColFPvi((void *) (arg0), (int) (1));
            ((VObj_18 *)(arg0))->m16();
            M2C_FIELD(arg0, s32 *, 0xD4) = 1;
        }
    } else {
        ((VObj_18 *)(arg0))->m14();
        if (((VObj_18 *)(arg0))->m13() != 1) {
            send_switch_changed__8TOKeyColFPvi((void *) (arg0), (int) (0));
            ((VObj_18 *)(arg0))->m17();
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        }
    }
}

void render__8TOKeyColFv(void) {  }

extern void *tl_05;

void *create__8TOKeyColFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOKeyCol__ct((void *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__8TOKeyCol[];

void *__dt__8TOKeyColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TOKeyCol;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__8TOKeyCol[];
extern s32 TOKeyCol__name;
extern const f32 lbl_805DB758;
extern const f32 lbl_805DB75C;
extern const f32 lbl_805DB760;

void *TOKeyCol__ct(void *arg0, s32 arg1, s32 arg2) {
    TOKey__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TOKeyCol;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TOKeyCol__name;
    ((TOKeyCol8016_8016C7FC *)arg0)->ct(arg2);
    init_switch_id__5TOKeyFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB758;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB75C;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) (lbl_805DB760 + M2C_FIELD(arg0, f32 *, 0x68));
    if (((s32) M2C_FIELD(arg0, s32 *, 0xD0) != 2) && ((s32) M2C_FIELD(arg0, s32 *, 0x88) < 0)) {
        M2C_FIELD(arg0, s32 *, 0xD0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    }
    return arg0;
}

}
