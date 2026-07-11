#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80275484(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 fn_802499E4(s32 a0 = 0, s32 a1 = 0);
s32 fn_80249980(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 fn_8007BC04(s32 a0 = 0);
s32 fn_8007A860(s32);
s32 fn_80269C6C(s32, s32, s32);
int TWindowSubStatusDisp__sub_80077760(void*);
int fn_8007A8F8(void);
int fn_8007B6D8(void);
int TLobby__sub_802421C4(void);
int TWindowSubComCard__sub_80265BF8(void*);
void TWindowSubComCard__sub_80272180(void);
s32 fn_8026CBB8(s32 a0 = 0);
int fn_802754EC(void);

void TWindowSubComCard__sub_8027208C(void* p, void* a1) { TWindowSubStatusDisp__sub_80077760((char*)a1 + 0xa6); }
void TWindowSubComCard__sub_802720B0(s32 arg0) {
    s32 temp_r31;

    temp_r31 = fn_8007BC04(0);
    fn_80249980(fn_8026CBB8(0x92), arg0, temp_r31);
}
void send_command__17TWindowSubComCardFi(s32 arg0) {
    fn_802499E4(fn_8026CBB8(0x86), arg0);
}
void init_layout__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = fn_8007BC04(0);
    fn_80275484(fn_8026CBB8(0x91), temp_r31, 0x1C, 1);
}
void TWindowSubComCard__sub_80272180(void) { fn_8026CBB8(133); fn_802754EC(); }
void cleanup__17TWindowSubComCardFPv(void* p) { TWindowSubComCard__sub_80265BF8(*(void**)((char*)p + 0x84)); fn_8007A8F8(); fn_8007B6D8(); TLobby__sub_802421C4(); }

}
