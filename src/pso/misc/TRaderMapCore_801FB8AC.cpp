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
extern u32 lbl_805D5F48;
extern u32 TRaderMapCore__data_805D5F4C;
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * load_gvm_texture_file(s32);
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_8044A7B8;
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 lbl_804C8864;
void TRaderMapCore__sub_801FB904(void);
}

extern "C" {

void free_statics__13TRaderMapCoreFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 lbl_805D5F48;
extern u32 TRaderMapCore__data_805D5F4C;

void free_statics__13TRaderMapCoreFv(void) {
    if ((u32) TRaderMapCore__data_805D5F4C != 0U) {
        TLobby__sub_803DA16C((void*)TRaderMapCore__data_805D5F4C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TRaderMapCore__data_805D5F4C);
        TRaderMapCore__data_805D5F4C = 0U;
    }
    if ((u32) lbl_805D5F48 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5F48, 1);
        lbl_805D5F48 = 0U;
    }
}
typedef char RecoveredGlobal_8019A880_lbl_804B8F70_size[sizeof(RecoveredGlobal_8019A880_lbl_804B8F70) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019A880___vt__8TObjTank_size[sizeof(RecoveredGlobal_8019A880___vt__8TObjTank) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_80446184_size[sizeof(RecoveredGlobal_8019A9B8_lbl_80446184) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_804B8F60_size[sizeof(RecoveredGlobal_8019A9B8_lbl_804B8F60) == 0x10 ? 1 : -1];
void TRaderMapCore__sub_801FB904(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804C8864.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D5F48) = var_r0;
    (*(u8 * *)&TRaderMapCore__data_805D5F4C) = load_gvm_texture_file((s32) &lbl_8044A7B8.value);
}

}
