#include "types.h"

extern "C" {

int clear_field1f8_flag8192__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_803579F4(void* p);
int TObjPlayer__sub_80115BC0(void*, int, int);

int clear_field1f8_flag8192__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, 1820, 8192); }
int TObjPlayer__sub_803579F4(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, -3640, 0); }

}
