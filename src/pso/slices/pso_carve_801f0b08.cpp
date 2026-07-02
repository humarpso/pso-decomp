#include "types.h"

extern "C" {

int qst_op_p_col(void* p);
int qst_op_p_noncol(void* p);
int fn_801912A4(void*);
int fn_801912B0(void*);

int qst_op_p_col(void* p) { return fn_801912A4(p); }
int qst_op_p_noncol(void* p) { return fn_801912B0(p); }

}
