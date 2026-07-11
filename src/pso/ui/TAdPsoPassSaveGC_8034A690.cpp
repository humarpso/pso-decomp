#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8034A6E8 { char pad[0x18]; };
struct VObj_8034A6E8 : Base_8034A6E8 {
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

void TAdPsoPassSaveGC__vt4(void);
void TAdPsoPassSaveGC__vt5(void);
void *__dt__16TAdPsoPassSaveGCFv(void *arg0, s16 arg1);
void run_task__16TAdPsoPassSaveGCFv(void *arg0);
void TAdYesNoBaseGC__vt0(void *, int);
void __dl__7TObjectFPv(void *);
M2C_UNK TKeyBoardControl__sub_8000F9CC(M2C_UNK);

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

void run_task__16TAdPsoPassSaveGCFv(void *arg0) {
    struct VObj_8034A6E8 *o = (struct VObj_8034A6E8 *)arg0;
    o->m9();
}

extern M2C_UNK __vt__16TAdPsoPassSaveGC[];

void *__dt__16TAdPsoPassSaveGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdPsoPassSaveGC;
        TAdYesNoBaseGC__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
