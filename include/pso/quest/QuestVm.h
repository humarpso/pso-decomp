#ifndef PSO_QUEST_QUEST_VM_H
#define PSO_QUEST_QUEST_VM_H

#include "types.h"

extern "C" {
// r0-r255 / f0-f255 quest VM register table
extern s32 *qst_registers;
extern s32 qst_args[8];
extern s32 qst_arg_count;
}

#endif
