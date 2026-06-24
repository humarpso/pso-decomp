#include "types.h"

extern "C" {

void fn_801D2618(void* p, f32 v);
void fn_801D2620(void* p);
void fn_801D2630(void* p);
int fn_801D2680(void* p);
void fn_801D268C(void* p);

int fn_801D1B48(void) { return 0; }
int fn_801D1B7C(void) { return 0; }
int fn_801D1BB0(void) { return 0; }
int fn_801D1BCC(void) { return 0; }
int fn_801D1C00(void) { return 0; }
int fn_801D1C34(void) { return 0; }
int fn_801D1C70(void) { return 0; }
int fn_801D1C8C(void) { return 0; }
int fn_801D1CC0(void) { return 0; }
int fn_801D1CD4(void) { return 0; }
int fn_801D1D08(void) { return 0; }
int fn_801D1D44(void) { return 0; }
int fn_801D1D88(void) { return 0; }
int fn_801D1DA8(void) { return 0; }
int fn_801D1DDC(void) { return 0; }
int fn_801D1E3C(void) { return 0; }
int fn_801D1E7C(void) { return 0; }
int fn_801D1EE4(void) { return 0; }
int fn_801D1F44(void) { return 0; }
int fn_801D1F60(void) { return 0; }
int fn_801D1FA4(void) { return 0; }
int fn_801D2004(void) { return 0; }
int fn_801D201C(void) { return 0; }
int fn_801D2058(void) { return 0; }
int fn_801D209C(void) { return 0; }
int fn_801D20C4(void) { return 0; }
int fn_801D20F8(void) { return 0; }
int fn_801D2134(void) { return 0; }
int fn_801D2178(void) { return 0; }
int fn_801D2198(void) { return 0; }
int fn_801D21CC(void) { return 0; }
int fn_801D222C(void) { return 0; }
int fn_801D2260(void) { return 0; }
int fn_801D22AC(void) { return 0; }
int fn_801D22D0(void) { return 0; }
int fn_801D2304(void) { return 0; }
int fn_801D2348(void) { return 0; }
int fn_801D238C(void) { return 0; }
int fn_801D23C0(void) { return 0; }
int fn_801D2404(void) { return 0; }
int fn_801D2448(void) { return 0; }
int fn_801D247C(void) { return 0; }
int fn_801D24B0(void) { return 0; }
int fn_801D24F4(void) { return 0; }
int fn_801D2540(void) { return 0; }
int fn_801D25AC(void) { return 0; }
void fn_801D2618(void* p, f32 v) { *(f32*)((char*)p + 0xc0) = v; }
void fn_801D2620(void* p) { *(u32*)((char*)p + 0xb0) |= 0x40; }
void fn_801D2630(void* p) { *(u32*)((char*)p + 0xb0) &= 0xffffffbf; }
int fn_801D2640(void) { return 0; }
int fn_801D2658(void) { return 0; }
int fn_801D2680(void* p) { return (*(u32*)((char*)p + 0xb0) >> 6) & 0x1; }
void fn_801D268C(void* p) { *(u32*)((char*)p + 0xb0) |= 0x80; }

}
