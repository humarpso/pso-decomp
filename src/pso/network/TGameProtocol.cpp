#include "pso/TGameProtocol.h"

extern s32 lbl_805D5E48;

struct VBase_18_801E4260 { char pad[0x18]; };
struct Node_801E4260 : VBase_18_801E4260 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Head_801E4260 {
    u8 pad[0x14];
    Node_801E4260 *first;
};

extern "C" {
void TLobby__sub_8007EB20(const char *, ...);
void TLobby__sub_801A54E8(void *);
void clear_send_buffer__7TPacketFPv(void *);
void fn_801E416C(void *);
extern char lbl_80449784[];
}

void TGameProtocol::run_task() {
    Node_801E4260 *n;
    for (n = ((Head_801E4260 *)lbl_805D5E48)->first; n != 0; n = *(Node_801E4260 **)((u8 *)n + 0xC)) {
        TLobby__sub_8007EB20(lbl_80449784, *(s32 *)n, n);
        if (*(s8 *)((u8 *)n + 0x2B) == 0) {
            fn_801E416C(n);
            n->m6();
        }
        if (*(u16 *)((u8 *)n + 6) == *(u32 *)((u8 *)this + 0x1C)) {
            TLobby__sub_801A54E8(n);
            clear_send_buffer__7TPacketFPv(n);
        }
    }
    *(u32 *)((u8 *)this + 0x1C) = (*(u32 *)((u8 *)this + 0x1C) + 1) & 3;
}

TGameProtocol::~TGameProtocol() {
    lbl_805D5E48 = 0;
}
