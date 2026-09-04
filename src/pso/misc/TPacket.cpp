#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TPacket__ct(void *arg0);
void clear_send_buffer__7TPacketFPv(void *);
void TUdpSocket__ct(void *);

extern M2C_UNK __vt__7TPacket[];
extern void *lbl_805D34C0;

void *TPacket__ct(void *arg0) {
    TUdpSocket__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__7TPacket;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D34C0;
    clear_send_buffer__7TPacketFPv(arg0);
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801A558C
#include "types.h"

extern "C" {

void clear_send_buffer__7TPacketFPv(void* p);

void clear_send_buffer__7TPacketFPv(void* p) { *(s32*)((char*)p + 0x8b8) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A5598
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_80078064_801a5598 { char pad[0x18]; };
struct VObj_80078064_801a5598 : Base_80078064_801a5598 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5();
};

void *__dt__7TPacketFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__10TUdpSocketFv(void *, M2C_UNK);

extern M2C_UNK __vt__7TPacket[];

void *__dt__7TPacketFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_80078064_801a5598 *o = (struct VObj_80078064_801a5598 *)arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__7TPacket;
        o->m5();
        __dt__10TUdpSocketFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
