#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800F8428_lbl_80499988 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 TLobby__sub_800F8250(void *, f32);
void set_value__15TWindowCtrlMainFii(s32, s32);
extern s32 lbl_805D53A0;
void TLobby__sub_800F838C(u8 *arg0);
u8 * __dt__7TObjectFv(void *, s16);
s32 TLobby__sub_800F8250(void *, f32);
void __dl__7TObjectFPv(s32);
void set_value__15TWindowCtrlMainFii(s32, s32);
extern RecoveredGlobal_800F8428_lbl_80499988 lbl_80499988;
extern s32 lbl_805D53A0;
extern const f32 lbl_805DA8F8;
u8 *TLobby__sub_800F8428(u8 *arg0, s16 arg1);
void __ct__7TObjectFP7TObject(void *);
u32 TWindowCtrlMain__sub_8024CD5C(s32);
extern RecoveredGlobal_800F8428_lbl_80499988 lbl_80499988;
extern s32 lbl_805D53A0;
void *TLobby__sub_800F8498(void *arg0, void *arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7);
void set_flag_4__9TObjLukerFPv(void *);
void set_value__15TWindowCtrlMainFii(s32, s32);
void TLobby__sub_800F8534(u8 *arg0);
}

extern "C" {

void TLobby__sub_800F8530(void);
void *ct_register__6TLobbyFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_80499970[];
extern void * lbl_805D5330;

void *ct_register__6TLobbyFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80499970;
    lbl_805D5330 = arg0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

void TLobby__sub_800F838C(u8 *arg0) {
    s32 temp_r3;
    set_value__15TWindowCtrlMainFii(lbl_805D53A0, TLobby__sub_800F8250(arg0, (f32) M2C_FIELD(arg0, s32 *, 0x20) / (f32) M2C_FIELD(arg0, s32 *, 0x24)));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x20) + 1;
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r3;
    if (temp_r3 > (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

typedef char RecoveredGlobal_800F8428_lbl_80499988_size[sizeof(RecoveredGlobal_800F8428_lbl_80499988) == 0x18 ? 1 : -1];
u8 *TLobby__sub_800F8428(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_80499988.value;
        set_value__15TWindowCtrlMainFii(lbl_805D53A0, TLobby__sub_800F8250(arg0, lbl_805DA8F8));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

void *TLobby__sub_800F8498(void *arg0, void *arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7) {
    u32 c;
    ((void (*)(void *, void *))__ct__7TObjectFP7TObject)(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_80499988.value;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    c = TWindowCtrlMain__sub_8024CD5C(lbl_805D53A0);
    M2C_FIELD(arg0, u8 *, 0x2B) = c;
    M2C_FIELD(arg0, u8 *, 0x2A) = c >> 8;
    M2C_FIELD(arg0, u8 *, 0x29) = c >> 16;
    M2C_FIELD(arg0, u8 *, 0x28) = c >> 24;
    M2C_FIELD(arg0, u8 *, 0x2F) = arg4;
    M2C_FIELD(arg0, u8 *, 0x2C) = arg5;
    M2C_FIELD(arg0, u8 *, 0x2D) = arg6;
    M2C_FIELD(arg0, u8 *, 0x2E) = arg7;
    return arg0;
}

void TLobby__sub_800F8530(void) {  }
void TLobby__sub_800F8534(u8 *arg0) {
    M2C_UNK (*temp_r12)();
    M2C_FIELD(arg0, f32 *, 0x1C) += 2.0f;
    if (M2C_FIELD(arg0, f32 *, 0x1C) >= 128.0f) {
        M2C_FIELD(arg0, f32 *, 0x1C) = 128.0f;
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x28);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        set_flag_4__9TObjLukerFPv((void *) (arg0));
    }
    M2C_FIELD(arg0, s8 *, 0x23) = (s8) M2C_FIELD(arg0, f32 *, 0x1C);
    set_value__15TWindowCtrlMainFii(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x20));
}

}
