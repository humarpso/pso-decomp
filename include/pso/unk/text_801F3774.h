#ifndef PSO_UNK_TEXT_801F3774_H
#define PSO_UNK_TEXT_801F3774_H

#include "types.h"

struct TLobby;
extern "C" {
void TLobby__sub_801F3774(void);
void build_6x75_update_quest_flag_dc(void *p);
void handle_6x75_update_quest_flag_dc(TLobby *arg0);
void prepare_offline_quest_filenames(const char *identity);
void send_and_handle_6x75(TLobby *arg0);
}

#endif
