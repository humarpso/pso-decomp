#include "types.h"

extern "C" {

int fn_8003386C(void* p, int a1, int a2);
int fn_80033894(void* p, int a1);
void fn_800338BC(void);
int fn_80226578(void*, int, int, int, int);
int fn_8022675C(void*, int, int, int);

int fn_8003386C(void* p, int a1, int a2) { return fn_80226578(p, a1, a2, 0, 0); }
int fn_80033894(void* p, int a1) { return fn_8022675C(p, a1, 0, 0); }
void fn_800338BC(void) {  }

}
