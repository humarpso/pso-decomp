#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8019A9B8_lbl_80446184 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A9B8_lbl_804B8F60 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A880_lbl_804B8F70 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8019A880___vt__8TObjTank {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct Base { char pad[0x18]; };

struct VObj : Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
extern int lbl_805D5AF0;
extern s32 lbl_805D5AF4;
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TLanguage__sub_801E4874(s32);
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_80443308;
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 lbl_804B52F4;
void TObjGoalWarpAncient__sub_8017D21C(void);
}

extern "C" {

void TObjGoalWarpAncient__sub_8017D2D4(void* a0);
s32 get_instance__19TObjGoalWarpAncientFv(void);
void register_warp__19TObjGoalWarpAncientFPv(void* a0);
void register_warp_object__19TObjGoalWarpAncientFPv(void* a0);
int TObjFish__sub_8001ED9C(void*, void*);
int TObjFish__sub_8001EDB0(void*, void*);
int TObjFish__sub_8001EDC4(void*, void*);

    extern int lbl_805D5AF0;

typedef char RecoveredGlobal_8019A880_lbl_804B8F70_size[sizeof(RecoveredGlobal_8019A880_lbl_804B8F70) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019A880___vt__8TObjTank_size[sizeof(RecoveredGlobal_8019A880___vt__8TObjTank) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_80446184_size[sizeof(RecoveredGlobal_8019A9B8_lbl_80446184) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_804B8F60_size[sizeof(RecoveredGlobal_8019A9B8_lbl_804B8F60) == 0x10 ? 1 : -1];
void TObjGoalWarpAncient__sub_8017D21C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 0x1, &lbl_804B52F4.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D5AF0) = var_r0;
    (*(u8 * *)&lbl_805D5AF4) = TLanguage__sub_801E4874((s32) &lbl_80443308.value);
}

void register_warp_object__19TObjGoalWarpAncientFPv(void* a0) { TObjFish__sub_8001EDB0((void*)(lbl_805D5AF0), a0); }

extern s32 lbl_805D5AF4;

s32 get_instance__19TObjGoalWarpAncientFv(void) {
    return lbl_805D5AF4;
}

    extern int lbl_805D5AF0;
void register_warp__19TObjGoalWarpAncientFPv(void* a0) { TObjFish__sub_8001ED9C((void*)(lbl_805D5AF0), a0); }

    extern int lbl_805D5AF0;
void TObjGoalWarpAncient__sub_8017D2D4(void* a0) { TObjFish__sub_8001EDC4((void*)(lbl_805D5AF0), a0); }

}
