#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802C9564 { char pad[0x18]; };
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct VObj_802C9564 : Base_802C9564 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m24();
    virtual void m25();
};

extern "C" {

void update_sweep__14TOTrapChainSawFPv(void *arg0);

void update_sweep__14TOTrapChainSawFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 0) {
            ((VObj_802C9564 *)arg0)->m24();
        }
        ((VObj_802C9564 *)arg0)->m25();
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) + M2C_FIELD(arg0, s32 *, 0xD0));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) - M2C_FIELD(arg0, s32 *, 0xD0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) < 0) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    }
}

}
