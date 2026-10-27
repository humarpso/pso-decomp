#ifndef PSO_QUEST_QUEST_VM_H
#define PSO_QUEST_QUEST_VM_H

#include "types.h"

extern "C" {
// The running thread's bytecode, and the bytecode offset of each label.
extern u8 *qst_code;
extern s32 *qst_function_table;
// Byte offset of the next instruction in qst_code.
extern s32 qst_pc;
extern s32 qst_call_stack[64];
extern s32 qst_call_stack_depth;
// r0-r255 / f0-f255 quest VM register table
extern s32 *qst_registers;
extern s32 qst_args[8];
extern s32 qst_arg_count;
}

#endif
