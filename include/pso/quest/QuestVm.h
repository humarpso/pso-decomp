#ifndef PSO_QUEST_QUEST_VM_H
#define PSO_QUEST_QUEST_VM_H

#include "types.h"

enum quest_suspend_reason {
    QST_RUNNING                = 0,
    QST_SUSPEND_SYNC           = 1,  // yield until next frame
    QST_SUSPEND_RETURN         = 2,  // ret at call depth 0; the thread ends
    QST_SUSPEND_EXIT           = 3,  // the owning quest thread is destroyed
    QST_WAIT_MESSAGE           = 4,  // message window, A to advance
    QST_WAIT_MESSAGE_QB        = 5,  // secondary message window
    QST_SUSPEND_6              = 6,  // never set
    QST_WAIT_LIST              = 7,  // choice window, selection to a register
    QST_WAIT_FADE              = 8,
    QST_WAIT_ITEM_NAME_ENTRY   = 9,
    QST_WAIT_ITEM_NAME_SELECT  = 10,
    QST_WAIT_ITEM_OK           = 11,
    QST_WAIT_ITEM_CHOICE       = 12, // item id to a register, -1 on cancel
};

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
extern s32 qst_suspend_reason;
}

#endif
