#include "types.h"
#include "pso/misc/TOKeyCol.h"
#include "pso/misc/TOKey.h"

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
    virtual s32 m12();
    virtual s32 m13();
    virtual s32 m14();
    virtual s32 m15();
    virtual s32 m16();
    virtual s32 m17();
};
extern "C" {

void *TOKeyCol__ct(void *arg0, s32 arg1, s32 arg2);
void TOKeyCol__vt16(void);
void *__dt__8TOKeyColFv(void *arg0, s16 arg1);
s32 TOKey__ct();
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);

void TOKeyCol::vfunc_19() {  }
void TOKeyCol__vt16(void) {  }
void TOKeyCol::vfunc_17() {  }
void TOKeyCol::vfunc_16() {  }

void TOKeyCol::run_task() {
    u8 *arg0 = (u8 *)this;
    ((VObj_18 *)(arg0))->m12();
    if ((s32) *(s32 *)&this->m_d4 != 1) {
        ((VObj_18 *)(arg0))->m15();
        if (((VObj_18 *)(arg0))->m13() == 1) {
            ((TOKeyCol *)arg0)->send_switch_changed((int) (1));
            ((VObj_18 *)(arg0))->m16();
            *(s32 *)&this->m_d4 = 1;
        }
    } else {
        ((VObj_18 *)(arg0))->m14();
        if (((VObj_18 *)(arg0))->m13() != 1) {
            ((TOKeyCol *)arg0)->send_switch_changed((int) (0));
            ((VObj_18 *)(arg0))->m17();
            *(s32 *)&this->m_d4 = 0;
        }
    }
}

void TOKeyCol::render() {  }

extern void *tl_05;

void *TOKeyCol::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOKeyCol__ct((void *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__8TOKeyCol[];

void *__dt__8TOKeyColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__8TOKeyCol;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__8TOKeyCol[];
extern s32 TOKeyCol__name;
extern const f32 lbl_805DB758;
extern const f32 lbl_805DB75C;
extern const f32 lbl_805DB760;

void *TOKeyCol__ct(void *arg0, s32 arg1, s32 arg2) {
    TOKey__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__8TOKeyCol;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOKeyCol__name;
    ((TOKeyCol8016_8016C7FC *)arg0)->ct(arg2);
    ((TOKey *)arg0)->init_switch_id();
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB758;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DB75C;
    *(f32 *)((s8 *)arg0 + 0xCC) = (f32) (lbl_805DB760 + *(f32 *)((s8 *)arg0 + 0x68));
    if (((s32) *(s32 *)((s8 *)arg0 + 0xD0) != 2) && ((s32) *(s32 *)((s8 *)arg0 + 0x88) < 0)) {
        *(s32 *)((s8 *)arg0 + 0xD0) = 1;
    } else {
        *(s32 *)((s8 *)arg0 + 0xD0) = 0;
    }
    return arg0;
}

}
