#include "types.h"

extern "C" {

void s_rank_bazooka_marker(void* p);

void s_rank_bazooka_marker(void* p) { *(s32*)((char*)p + 0x200) = 1; }

}
