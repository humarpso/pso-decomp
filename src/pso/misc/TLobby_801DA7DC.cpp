#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801DA7DC { char pad[0x18]; };
struct VObj_801DA7DC : Base_801DA7DC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m_call(void *a1, M2C_UNK a2);
};

extern "C" {

void send_c6_packet__6TLobbyFPvPv(void *arg0, void *arg1);
M2C_UNK fn_801DF084(void *);

void send_c6_packet__6TLobbyFPvPv(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1910) != 0) {
        M2C_FIELD(arg1, u8 *, 0) = 0xC6;
        M2C_FIELD(arg1, s16 *, 2) = 0x7C;
        fn_801DF084(arg1);
        ((VObj_801DA7DC *)arg0)->m_call(arg1, 0x7C);
    }
}

}
