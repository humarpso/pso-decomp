#include "types.h"

extern "C" {

int set_action_flag16__10TObjPlayerFPv(void* p);
int test_flag_8__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801C7098(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);

int set_action_flag16__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BEF8(p, 16); }
int test_flag_8__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BEF8(p, 8); }
int TObjPlayer__sub_801C7098(void* p) { return TObjPlayer__sub_8001BEF8(p, 2); }

}
