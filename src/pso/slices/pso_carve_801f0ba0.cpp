#include "types.h"

extern "C" {

int qst_op_npc_talk(void* p);
int qst_op_npc_nont(void* p);
int fn_8034E420(void*);
int fn_8034E430(void*);

int qst_op_npc_talk(void* p) { return fn_8034E420(p); }
int qst_op_npc_nont(void* p) { return fn_8034E430(p); }

}
