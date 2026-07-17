#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_card_list__17TWindowSubComCardFiiii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 create__14TWindowComCardFPvPv(s32 a0 = 0, s32 a1 = 0);
s32 TWindowComCard__sub_80249980(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TWindowSubComCard__sub_8007BC04(s32 a0 = 0);
s32 TWindowSubComCard__sub_8007A860(s32);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
int get_message_10__20TWindowSubStatusDispFPv(void*);
int TWindowSubComCard__sub_8007A8F8(void);
int get_card_id__17TWindowSubComCardFPv(void);
int TLobby__sub_802421C4(void);
int TWindowSubComCard__sub_80265BF8(void*);
void TWindowSubComCard__sub_80272180(void);
s32 TWindowSubComCard__sub_8026CBB8(s32 a0 = 0);
int fn_802754EC(void);

void get_message_10__17TWindowSubComCardFPvPv(void* p, void* a1) { get_message_10__20TWindowSubStatusDispFPv((char*)a1 + 0xa6); }
void apply_selection__17TWindowSubComCardFi(s32 arg0) {
    s32 temp_r31;

    temp_r31 = TWindowSubComCard__sub_8007BC04(0);
    TWindowComCard__sub_80249980(TWindowSubComCard__sub_8026CBB8(0x92), arg0, temp_r31);
}
void send_command__17TWindowSubComCardFi(s32 arg0) {
    create__14TWindowComCardFPvPv(TWindowSubComCard__sub_8026CBB8(0x86), arg0);
}
void init_layout__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = TWindowSubComCard__sub_8007BC04(0);
    create_card_list__17TWindowSubComCardFiiii(TWindowSubComCard__sub_8026CBB8(0x91), temp_r31, 0x1C, 1);
}
void TWindowSubComCard__sub_80272180(void) { TWindowSubComCard__sub_8026CBB8(133); fn_802754EC(); }
void cleanup__17TWindowSubComCardFPv(void* p) { TWindowSubComCard__sub_80265BF8(*(void**)((char*)p + 0x84)); TWindowSubComCard__sub_8007A8F8(); get_card_id__17TWindowSubComCardFPv(); TLobby__sub_802421C4(); }

}
