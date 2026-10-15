#include "types.h"

struct VBase_18_44382c { char pad[0x18]; };

struct VObj_18_44382c : VBase_18_44382c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(s8 *, s32);
};

struct Stack_801DB554 {
    s8 sp8;
    s8 sp9;
    s16 spA;
};

extern "C" {
void bswap__13packet_headerFv(s32);
void send_6F_burst_done__6TLobbyFPv(u8 *arg0);
}

extern "C" {

void send_6F_burst_done__6TLobbyFPv(u8 *arg0) {
    Stack_801DB554 stack;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1910) != 0) {
        stack.sp8 = 0x6F;
        stack.sp9 = 0;
        stack.spA = 4;
        bswap__13packet_headerFv((s32) &stack.sp8);
        ((VObj_18_44382c *)(arg0))->m8(&stack.sp8, 4);
    }
}

}
