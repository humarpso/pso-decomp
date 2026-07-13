#include "types.h"

extern "C" {

void* init__10TObjMapCsnFPv(void* a0);
int init_and_return__10TObjMapCsnFi(void);

    extern const float lbl_805D9204;
void* init__10TObjMapCsnFPv(void* a0) { init_and_return__10TObjMapCsnFi(); *(int*)((char*)a0 + 0x8) = -1; *(float*)((char*)a0 + 0xc) = lbl_805D9204; return a0; }

}
