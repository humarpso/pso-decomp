#include "types.h"
#include "pso/ui/TAdPsoPassSaveGC.h"

struct Base_8034A63C { char pad[0x18]; };
struct VObj_8034A63C : Base_8034A63C {
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
};

struct Base_8034A6E8_8034A63C { char pad[0x18]; };
struct VObj_8034A6E8_8034A63C : Base_8034A6E8_8034A63C {
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
};

extern "C" {

void *TAdPsoPassSaveGC__ct(void *arg0);
void TAdPsoPassSaveGC__vt4(void);
void TAdPsoPassSaveGC__vt5(void);
void TAdPsoPassSaveGC__vt8(void);
void *__dt__16TAdPsoPassSaveGCFv(void *arg0, s16 arg1);
s32 get_localized_text_entry(s32, s32);
void TAdYesNoBaseGC__ct(void *);
void TAdYesNoBaseGC__vt0(void *, int);
s32 TKeyBoardControl__sub_8000F9CC(s32);
void *__ct__10TAdTitleGCFv(void *, void *, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

void TAdPsoPassSaveGC::render() {
    struct VObj_8034A63C *o = (struct VObj_8034A63C *)this;
    o->m10();
}

void TAdPsoPassSaveGC__vt8(void) {
    get_localized_text_entry(0x2A, 0);
}

extern s32 TAdPsoPassSaveGC__data_805D6E80;

void TAdPsoPassSaveGC__vt5(void) {
    TAdPsoPassSaveGC__data_805D6E80 = 0;
    TKeyBoardControl__sub_8000F9CC(0xF);
}

extern s32 TAdPsoPassSaveGC__data_805D6E80;

void TAdPsoPassSaveGC__vt4(void) {
    TAdPsoPassSaveGC__data_805D6E80 = 1;
    TKeyBoardControl__sub_8000F9CC(0xF);
}

void TAdPsoPassSaveGC::run_task() {
    struct VObj_8034A6E8_8034A63C *o = (struct VObj_8034A6E8_8034A63C *)this;
    o->m9();
}

extern s32 __vt__16TAdPsoPassSaveGC[];

void *__dt__16TAdPsoPassSaveGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TAdPsoPassSaveGC;
        TAdYesNoBaseGC__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__16TAdPsoPassSaveGC[];
extern void *lbl_805D4310;

void *TAdPsoPassSaveGC__ct(void *parent) {
    void *o;
    TAdYesNoBaseGC__ct(parent);
    *(s32 **)((s8 *)parent + 0x18) = __vt__16TAdPsoPassSaveGC;
    *(void **)((s8 *)parent + 0x0) = lbl_805D4310;
    o = __nw__7TObjectFUl(0x138);
    if (o != NULL) {
        __ct__10TAdTitleGCFv(o, parent, 18);
    }
    return parent;
}

}
