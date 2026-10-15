#include "types.h"
#include "pso/misc/TWindowChat.h"

extern "C" {
void TKeyBoardControl__sub_8025CBC0(void* p);
void TKeyBoardControl__sub_8025CC3C(void* p);
s32 reset_state__19TWindowKeyBoardSoftFv(void *);
void TKeyBoardControl__sub_8025CC3C(void* p);
void TKeyBoardControl__sub_8025CC04(u8 *arg0);
void TKeyBoardControl__sub_8025CC3C(void* p);
void TKeyBoardControl__sub_8025CBCC(u8 *arg0);
s32 test_card_flag_0x80__19TWindowKeyBoardHardFv(s16);
s32 test_card_flag_64__19TWindowKeyBoardHardFv(s16);
s32 call_1A529C_with_32__19TWindowKeyBoardHardFv(s16);
s32 test_card_flag_16__19TWindowKeyBoardHardFv(s16);
extern s32 current_language;
void TWindowKeyBoardHard__sub_8025CC48(void *arg0);
}

extern "C" {

int get_flag__11TWindowChatFv(void* a0 = 0);
void flush_if_flagged__11TWindowChatFv(void* p);
int is_key_state_2__19TWindowKeyBoardSoftFv(void* p);

void TWindowChat::reset_input() {
    u8 *arg0 = (u8 *)this;
    reset_state__19TWindowKeyBoardSoftFv((void *) (arg0 + 0x6C));
    reset_state__19TWindowKeyBoardSoftFv((void *) (arg0 + 0x84));
    *(s32 *)((s8 *)arg0 + 0x68) = (s32) (arg0 + 0x6C);
    *(s16 *)((s8 *)arg0 + 0x60) = 0;
    *(s32 *)((s8 *)arg0 + 0xA0) = 0;
    *(s32 *)((s8 *)arg0 + 0xA4) = 0;
}

void TKeyBoardControl__sub_8025CBC0(void* p) { *(s32*)((char*)p + 0xb4) = 530; }

void TKeyBoardControl__sub_8025CBCC(u8 *arg0) {
    TKeyBoardControl__sub_8025CC3C((void*)arg0);
    *(s32 *)((s8 *)arg0 + 0xB4) = (s32) (*(s32 *)((s8 *)arg0 + 0xB4) | 0x100);
}

void TKeyBoardControl__sub_8025CC04(u8 *arg0) {
    TKeyBoardControl__sub_8025CC3C((void*)arg0);
    *(s32 *)((s8 *)arg0 + 0xB4) = (s32) (*(s32 *)((s8 *)arg0 + 0xB4) | 0x80);
}

void TKeyBoardControl__sub_8025CC3C(void* p) { *(s32*)((char*)p + 0xb4) = 18; }
void TWindowKeyBoardHard__sub_8025CC48(void *arg0) {
    switch (current_language) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0xB4) = 0;
        if (test_card_flag_16__19TWindowKeyBoardHardFv(*(s16 *)((s8 *)arg0 + 0x20)) != 0) {
            *(s32 *)((s8 *)arg0 + 0xB4) = (s32) (*(s32 *)((s8 *)arg0 + 0xB4) | 1);
        }
        if (call_1A529C_with_32__19TWindowKeyBoardHardFv(*(s16 *)((s8 *)arg0 + 0x20)) != 0) {
            *(s32 *)((s8 *)arg0 + 0xB4) = (s32) (*(s32 *)((s8 *)arg0 + 0xB4) | 2);
        }
        if (test_card_flag_64__19TWindowKeyBoardHardFv(*(s16 *)((s8 *)arg0 + 0x20)) != 0) {
            *(s32 *)((s8 *)arg0 + 0xB4) = (s32) (*(s32 *)((s8 *)arg0 + 0xB4) | 4);
        }
        if (test_card_flag_0x80__19TWindowKeyBoardHardFv(*(s16 *)((s8 *)arg0 + 0x20)) != 0) {
            *(s32 *)((s8 *)arg0 + 0xB4) = (s32) (*(s32 *)((s8 *)arg0 + 0xB4) | 8);
        }
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        *(s32 *)((s8 *)arg0 + 0xB4) = 6;
        break;
    }
}

}
