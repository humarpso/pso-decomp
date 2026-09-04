#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TUdpSocket__ct(void *arg0);
void __ct__7TSocketFP7TObject(void *);

extern M2C_UNK __vt__10TUdpSocket[];
extern void *lbl_805D28B4;

void *TUdpSocket__ct(void *arg0) {
    __ct__7TSocketFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TUdpSocket;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D28B4;
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80078064
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_80078064 { char pad[0x18]; };
struct VObj_80078064 : Base_80078064 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5();
};

void *__dt__10TUdpSocketFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TSocketFv(void *, M2C_UNK);

extern M2C_UNK __vt__10TUdpSocket[];

void *__dt__10TUdpSocketFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_80078064 *o = (struct VObj_80078064 *)arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TUdpSocket;
        o->m5();
        __dt__7TSocketFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
