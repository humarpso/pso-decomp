#include "types.h"

extern "C" {

void update_and_reset__6TLobbyFi(int a0);
int populate_quest_floor_sets(void);
int init_id_tables__6TLobbyFv(void);

    extern int TLobby__data_805D5EE0;
    extern short TLobby__data_805D6134;
void update_and_reset__6TLobbyFi(int a0) { TLobby__data_805D5EE0 = a0; populate_quest_floor_sets(); init_id_tables__6TLobbyFv(); TLobby__data_805D6134 = 1; TLobby__data_805D5EE0 = 0; }

}
