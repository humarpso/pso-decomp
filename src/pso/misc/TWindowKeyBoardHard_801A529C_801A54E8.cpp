#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_801a54e8_801A529C { char pad[0x18]; };
struct VObj_801a54e8_801A529C : VBase_801a54e8_801A529C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8(void *, s32);
};

struct S_801A5544 { u8 pad[0x8B8]; s32 cnt; u8 buf[0x5B4]; };

extern "C" {
void fn_801A5544(S_801A5544 *arg0, u8 *arg1);
}

extern "C" {

void TLobby__sub_801A54E8(u8 *arg0);
void clear_send_buffer__7TPacketFPv(void* p);

void TLobby__sub_801A54E8(u8 *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x8B8);
    if (temp_r4 > 0) {
        if (temp_r4 & 3) {
            M2C_FIELD(arg0, s32 *, 0x8B8) = (s32) (temp_r4 + 3);
            M2C_FIELD(arg0, s32 *, 0x8B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x8B8) & 0xFFFFFFFC);
        }
        ((VObj_801a54e8_801A529C *) arg0)->m8(arg0 + 0x8BC, M2C_FIELD(arg0, s32 *, 0x8B8));
    }
}
void fn_801A5544(S_801A5544 *arg0, u8 *arg1) {
    s32 n;
    s32 i;
    if (arg0->cnt + arg1[1] * 4 > 0x5B4) {
        return;
    }
    n = arg1[1] * 4;
    for (i = 0; i < n; i++) {
        arg0->buf[arg0->cnt++] = *arg1++;
    }
}

}
