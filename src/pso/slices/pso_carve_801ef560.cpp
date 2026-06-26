#include "types.h"

extern "C" {

int fn_801EF560(void* p);
void fn_801EF580(void);
void fn_801EF5A8(void);
int fn_80197E64(void);
int fn_80197F74(void);
int fn_801F3274(void);
int fn_801F32A0(void);
int fn_8034E02C(void*);

int fn_801EF560(void* p) { return fn_8034E02C(p); }
void fn_801EF580(void) { fn_801F32A0(); fn_80197F74(); fn_801F3274(); }
void fn_801EF5A8(void) { fn_801F32A0(); fn_80197E64(); fn_801F3274(); }

}
