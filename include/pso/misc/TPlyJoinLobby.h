#ifndef PSO_MISC_TPLYJOINLOBBY_H
#define PSO_MISC_TPLYJOINLOBBY_H

#include "pso/packet_classes.h"

#include <stddef.h>
typedef char TPlyJoinLobbyEntrySize[(sizeof(TPlyJoinLobbyEntry) == 0x43C) ? 1 : -1];
typedef char TPlyJoinLobbyEntriesOffset[(offsetof(TPlyJoinLobby, entries) == 0x10) ? 1 : -1];
typedef char TPlyJoinLobbySize[(sizeof(TPlyJoinLobby) == 0x32E0) ? 1 : -1];

#endif
