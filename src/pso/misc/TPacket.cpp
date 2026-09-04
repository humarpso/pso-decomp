#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_80078064_801a5598_801A558C { char pad[0x18]; };
struct VObj_80078064_801a5598_801A558C : Base_80078064_801a5598_801A558C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5();
};

void *TPacket__ct(void *arg0);
void *__dt__7TPacketFv(void *arg0, s16 arg1);
void clear_send_buffer__7TPacketFPv(void* p);
void TUdpSocket__ct(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__10TUdpSocketFv(void *, M2C_UNK);

void clear_send_buffer__7TPacketFPv(void* p) { *(s32*)((char*)p + 0x8b8) = 0; }

extern M2C_UNK __vt__7TPacket[];

void *__dt__7TPacketFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_80078064_801a5598_801A558C *o = (struct VObj_80078064_801a5598_801A558C *)arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__7TPacket;
        o->m5();
        __dt__10TUdpSocketFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__7TPacket[];
extern void *lbl_805D34C0;

void *TPacket__ct(void *arg0) {
    TUdpSocket__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__7TPacket;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D34C0;
    clear_send_buffer__7TPacketFPv((void*)(arg0));
    return arg0;
}

}
