#include "types.h"

extern "C" {

void fn_8013FFBC(void);
int fn_8007BA20(void);
int fn_800F7B84(void);
int fn_80207FFC(void);
int fn_8022743C(void);
int fn_80227F7C(void);

int fn_8013FF20(void) { return 0; }
int fn_8013FF64(void) { return 0; }
int fn_8013FF78(void) { return 0; }
int fn_8013FF94(void) { return 0; }
void fn_8013FFA8(void* a0, int a1, int a2, int a3) { *(int*)((char*)a0 + 0x7220) = a1; *(int*)((char*)a0 + 0x7224) = a3; *(int*)((char*)a0 + 0x7228) = (a1 + a2); }
void fn_8013FFBC(void) { fn_80227F7C(); fn_8022743C(); fn_800F7B84(); fn_80207FFC(); fn_8007BA20(); }

}
