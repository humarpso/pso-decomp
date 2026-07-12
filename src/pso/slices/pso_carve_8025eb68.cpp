#include "types.h"

extern "C" {

int fn_8025EB68(void* p);
int fn_8025EB74(void* p);
int fn_8025EB98(void* p);
int call_1A529C_with_32__19TWindowKeyBoardHardFPv(void* p);
int fn_8025EBE0(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

int fn_8025EB68(void* p) { return (*(u16*)((char*)p + 0x60) >> 3) & 0x1; }
int fn_8025EB74(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 128); }
int fn_8025EB98(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 64); }
int call_1A529C_with_32__19TWindowKeyBoardHardFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 32); }
int fn_8025EBE0(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 16); }
int TKeyBoardControl__sub_8025EC04(void) { return 0; }
int TKeyBoardControl__sub_8025EC1C(void) { return 0; }

}
