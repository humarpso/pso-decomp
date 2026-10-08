#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TKeyBoardControl__sub_8025CBC0(void* p);
void TKeyBoardControl__sub_8025CC3C(void* p);
M2C_UNK reset_state__19TWindowKeyBoardSoftFPv(void *);
void reset_input__11TWindowChatFPv(u8 *arg0);
void TKeyBoardControl__sub_8025CC3C(void* p);
void TKeyBoardControl__sub_8025CC04(u8 *arg0);
void TKeyBoardControl__sub_8025CC3C(void* p);
void TKeyBoardControl__sub_8025CBCC(u8 *arg0);
s32 test_card_flag_0x80__19TWindowKeyBoardHardFPv(s16);
s32 test_card_flag_64__19TWindowKeyBoardHardFPv(s16);
s32 call_1A529C_with_32__19TWindowKeyBoardHardFPv(s16);
s32 test_card_flag_16__19TWindowKeyBoardHardFPv(s16);
extern s32 lbl_805D5544;
void TWindowKeyBoardHard__sub_8025CC48(void *arg0);
}

extern "C" {

int get_flag__11TWindowChatFPv(void* a0 = 0);
void flush_if_flagged__11TWindowChatFPv(void* p);
int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p);

void reset_input__11TWindowChatFPv(u8 *arg0) {
    reset_state__19TWindowKeyBoardSoftFPv((void *) (arg0 + 0x6C));
    reset_state__19TWindowKeyBoardSoftFPv((void *) (arg0 + 0x84));
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (arg0 + 0x6C);
    M2C_FIELD(arg0, s16 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
}

void TKeyBoardControl__sub_8025CBC0(void* p) { *(s32*)((char*)p + 0xb4) = 530; }

void TKeyBoardControl__sub_8025CBCC(u8 *arg0) {
    TKeyBoardControl__sub_8025CC3C((void*)arg0);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) | 0x100);
}

void TKeyBoardControl__sub_8025CC04(u8 *arg0) {
    TKeyBoardControl__sub_8025CC3C((void*)arg0);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) | 0x80);
}

void TKeyBoardControl__sub_8025CC3C(void* p) { *(s32*)((char*)p + 0xb4) = 18; }
void TWindowKeyBoardHard__sub_8025CC48(void *arg0) {
    switch (lbl_805D5544) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
        if (test_card_flag_16__19TWindowKeyBoardHardFPv(M2C_FIELD(arg0, s16 *, 0x20)) != 0) {
            M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) | 1);
        }
        if (call_1A529C_with_32__19TWindowKeyBoardHardFPv(M2C_FIELD(arg0, s16 *, 0x20)) != 0) {
            M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) | 2);
        }
        if (test_card_flag_64__19TWindowKeyBoardHardFPv(M2C_FIELD(arg0, s16 *, 0x20)) != 0) {
            M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) | 4);
        }
        if (test_card_flag_0x80__19TWindowKeyBoardHardFPv(M2C_FIELD(arg0, s16 *, 0x20)) != 0) {
            M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) | 8);
        }
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        M2C_FIELD(arg0, s32 *, 0xB4) = 6;
        break;
    }
}

}
