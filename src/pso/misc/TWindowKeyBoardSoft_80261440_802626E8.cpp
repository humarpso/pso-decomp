#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80262740___vt__19TWindowKeyBoardSoft {
    M2C_UNK value;
    u8 remaining[0x220];
};

struct RecoveredGlobal_80262740_lbl_804D0004 {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
s32 construct_base__9TWindowDDFPvPvsPv(void *, void *, void *, int);
s32 close__19TWindowKeyBoardSoftFPv(void *);
s32 get_window_layout_position(int);
extern RecoveredGlobal_80262740___vt__19TWindowKeyBoardSoft __vt__19TWindowKeyBoardSoft;
extern M2C_UNK lbl_804D0004[];
extern s32 lbl_805D3938;
extern const f32 TWindowKeyBoardSoft__data_805DD090;
u8 *TWindowKeyBoardSoft__ct(u8 *arg0, s32 arg1, s16 arg2);
}

extern "C" {

void *destroy__19TWindowKeyBoardSoftFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK lbl_804D0004[];

void *destroy__19TWindowKeyBoardSoftFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D0004;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80262740___vt__19TWindowKeyBoardSoft_size[sizeof(RecoveredGlobal_80262740___vt__19TWindowKeyBoardSoft) == 0x224 ? 1 : -1];
typedef char RecoveredGlobal_80262740_lbl_804D0004_size[sizeof(RecoveredGlobal_80262740_lbl_804D0004) == 0x1C ? 1 : -1];
u8 *TWindowKeyBoardSoft__ct(u8 *arg0, s32 arg1, s16 arg2) {
    construct_base__9TWindowDDFPvPvsPv((void *) (arg0), (void *) (&__vt__19TWindowKeyBoardSoft.value), (void *) (arg2), (int) (get_window_layout_position((int) (0xBA))));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80262740_lbl_804D0004 *)&lbl_804D0004).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3938;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s8 *, 0x64) = 0;
    M2C_FIELD(arg0, s8 *, 0x65) = 2;
    M2C_FIELD(arg0, s8 *, 0x66) = 1;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) TWindowKeyBoardSoft__data_805DD090;
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    close__19TWindowKeyBoardSoftFPv((void *) (arg0));
    return arg0;
}

}
