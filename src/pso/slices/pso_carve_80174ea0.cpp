#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_80174EA0 { char pad[0x18]; };
struct VObj_80174EA0 : Base_80174EA0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
};

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_flag8__6TLobbyFPv(void *);
u8 TODoorAncient08__sub_80229220(u16);

void update_break_state__18TORockCaveBrakableFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((VObj_80174EA0 *)arg0)->m17();
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    case 0:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xB8);
        if ((temp_r0_2 >= 0) && (temp_r0_2 < 0x100) && (TODoorAncient08__sub_80229220((u16) temp_r0_2) == 1)) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 1;
            ((VObj_80174EA0 *)arg0)->m15();
            ((VObj_80174EA0 *)arg0)->m14();
        }
        break;
    case 1:
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

}
