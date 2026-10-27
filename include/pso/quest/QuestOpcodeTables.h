#ifndef PSO_QUEST_QUEST_OPCODE_TABLES_H
#define PSO_QUEST_QUEST_OPCODE_TABLES_H

#include "types.h"

typedef void (*QuestArgumentDecoder)(s32 opcode);
typedef void (*QuestOpcodeHandler)();
struct QuestOpcodeEntry {
    QuestArgumentDecoder decode_arguments;
    QuestOpcodeHandler handler;
};

extern "C" {
extern QuestOpcodeEntry qst_opcode_table[0x300];
extern const char* qst_bgm_filename_table[];
}

#endif
