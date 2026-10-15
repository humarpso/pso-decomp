#include "types.h"
#include "pso/misc/TWindowKeyBoardHard.h"

extern "C" {

int TWindowKeyBoardHard__sub_8025EB68(void* p);
int test_card_flag__19TWindowKeyBoardHardFll(void*, int);

int TWindowKeyBoardHard__sub_8025EB68(void* p) { return (*(u16*)((char*)p + 0x60) >> 3) & 0x1; }

int TWindowKeyBoardHard::test_card_flag_0x80() { return test_card_flag__19TWindowKeyBoardHardFll(this, 128); }
int TWindowKeyBoardHard::test_card_flag_64() { return test_card_flag__19TWindowKeyBoardHardFll(this, 64); }
int TWindowKeyBoardHard::call_1A529C_with_32() { return test_card_flag__19TWindowKeyBoardHardFll(this, 32); }
int TWindowKeyBoardHard::test_card_flag_16() { return test_card_flag__19TWindowKeyBoardHardFll(this, 16); }

}
