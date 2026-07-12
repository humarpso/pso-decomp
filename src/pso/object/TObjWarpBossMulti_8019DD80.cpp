#include "types.h"

extern "C" {

void init_warp_params__17TObjWarpBossMultiFPv(void* a0);
int fn_8019F9AC(void);
int fn_8019F9B4(void);
int fn_8019F9BC(void);
int fn_8019F9C4(void);
int fn_8019F9CC(void);
int fn_8019F9D4(void);
int fn_8019F9DC(void);

    extern const float lbl_805DC000;
    extern const float lbl_805DC004;
void init_warp_params__17TObjWarpBossMultiFPv(void* a0) { *(int*)((char*)a0 + 0xd4) = fn_8019F9DC(); *(int*)((char*)a0 + 0xd8) = fn_8019F9D4(); *(int*)((char*)a0 + 0xdc) = fn_8019F9CC(); *(int*)((char*)a0 + 0xe0) = fn_8019F9C4(); *(int*)((char*)a0 + 0xe4) = fn_8019F9BC(); *(int*)((char*)a0 + 0xe8) = fn_8019F9B4(); *(int*)((char*)a0 + 0xec) = fn_8019F9AC(); *(float*)((char*)a0 + 0xf8) = lbl_805DC000; *(float*)((char*)a0 + 0xfc) = lbl_805DC004; }

}
