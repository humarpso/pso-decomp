#include "types.h"

extern "C" {

int set_state_8__9TObjEneDDFPv(void* p);
int check_state_flag_4__9TObjEneDDFPv(void* p);
int check_state_flag_2__9TObjEneDDFPv(void* p);
int check_state_flag_1__9TObjEneDDFPv(void* p);
int add_flags_2e4__10TObjPlayerFPvUi(void*, int);

int set_state_8__9TObjEneDDFPv(void* p) { return add_flags_2e4__10TObjPlayerFPvUi(p, 8); }
int check_state_flag_4__9TObjEneDDFPv(void* p) { return add_flags_2e4__10TObjPlayerFPvUi(p, 4); }
int check_state_flag_2__9TObjEneDDFPv(void* p) { return add_flags_2e4__10TObjPlayerFPvUi(p, 2); }
int check_state_flag_1__9TObjEneDDFPv(void* p) { return add_flags_2e4__10TObjPlayerFPvUi(p, 1); }

}
