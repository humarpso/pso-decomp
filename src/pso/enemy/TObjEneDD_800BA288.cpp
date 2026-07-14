#include "types.h"

extern "C" {

int set_state_8__9TObjEneDDFPv(void* p);
int check_state_flag_4__9TObjEneDDFPv(void* p);
int check_state_flag_2__9TObjEneDDFPv(void* p);
int check_state_flag_1__9TObjEneDDFPv(void* p);
int TObjPlayer__sub_80019528(void*, int);

int set_state_8__9TObjEneDDFPv(void* p) { return TObjPlayer__sub_80019528(p, 8); }
int check_state_flag_4__9TObjEneDDFPv(void* p) { return TObjPlayer__sub_80019528(p, 4); }
int check_state_flag_2__9TObjEneDDFPv(void* p) { return TObjPlayer__sub_80019528(p, 2); }
int check_state_flag_1__9TObjEneDDFPv(void* p) { return TObjPlayer__sub_80019528(p, 1); }

}
