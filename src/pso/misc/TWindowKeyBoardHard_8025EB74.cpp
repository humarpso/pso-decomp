#include "types.h"

extern "C" {

int TWindowKeyBoardHard__sub_8025EB68(void* p);
int test_card_flag_0x80__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag_64__19TWindowKeyBoardHardFPv(void* p);
int call_1A529C_with_32__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag_16__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

int test_card_flag_0x80__19TWindowKeyBoardHardFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 128); }
int test_card_flag_64__19TWindowKeyBoardHardFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 64); }
int call_1A529C_with_32__19TWindowKeyBoardHardFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 32); }
int test_card_flag_16__19TWindowKeyBoardHardFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 16); }

}
