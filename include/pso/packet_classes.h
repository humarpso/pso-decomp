#ifndef PSO_PACKET_CLASSES_H
#define PSO_PACKET_CLASSES_H

#include "types.h"
#include <string.h>
#include "pso/macros.h"
#include "pso/forward.h"
#include "pso/protocol.h"
#include "pso/TMenuList.h"
#include "pso/TPlyCharData.h"
#include "pso/TPlyClientConfig.h"
#include "pso/TPlyGuildCardTag.h"
#include "pso/TPlySmth.h"

struct game_command_header {
    char command;
    char size;
    u16 id;

    void bswap() {
        bswap_16(&id);
    };
};

struct extended_game_command_header {
    game_command_header header;
    u32 size;

    void bswap() {
        bswap_16(&header.id);
        bswap_32(&size);
    };
};

struct long_game_command {
    game_command_header header;
    u8 data[1460-sizeof(game_command_header)];

    void bswap() {
        header.bswap();
    };
};

struct extended_long_game_command {
    extended_game_command_header header;
    u8 data[1460-sizeof(extended_game_command_header)];

    void bswap() {
        header.bswap();
    };
};

struct game_command {
    game_command_header header;
    u8 data[1024-sizeof(game_command_header)];

    void bswap() {
        header.bswap();
    };
};

struct extended_game_command {
    extended_game_command_header header;
    u8 data[1024-sizeof(extended_game_command_header)];

    void bswap() {
        header.bswap();
    };
};

TMenuListEntry(GameListEntry,
    u8 difficulty_tag;
    u8 num_players;
    char name[16];
    u8 episode;
    u8 flags;
);

TMenuListEntry(LobbyListEntry,
    u32 smth;
);

TMenuListEntry(QuestListEntry,
    char name[32];
    char short_description[112];
);

union game_command_union {
    struct game_command game_cmd;
    struct extended_game_command ext_game_cmd;
    u8 bytes[1024];
};

union long_game_command_union {
    struct long_game_command game_cmd;
    struct extended_long_game_command ext_game_cmd;
    u8 bytes[1460];
};

template<size_t size>
struct TPlyText {
    packet_header header;
    char text[size];

    void bswap() {
        header.bswap();
    };
};

class TPlyMeetUserExtension {
public:
    TPlyGuildCardTag tags[8];
    u32 mbr_0x40;
    char player_name[16];
    char player_name2[16];
public:
    void bswap() {
        for (int i = 0; i < 8; ++i) {
            tags[i].bswap();
        }
        bswap_32(&mbr_0x40);
    };
};

class TPlyJoinLobbyData {
public:
    TPlyGuildCardTag tag;
    u32 ip_addr;
    u32 client_id;
    char name[16];
public:
    void bswap() {
        tag.bswap();
        bswap_32(&ip_addr);
        bswap_32(&client_id);
    };
};

class TPlyJoinLobbyEntry {
public:
    TPlyJoinLobbyData lobby_data;
    TPlyCharData char_data;
public:
    void bswap() {
        lobby_data.tag.bswap();
        bswap_32(&lobby_data.ip_addr);
        bswap_32(&lobby_data.client_id);
        char_data.bswap();
    };
};

class TRecvGenerateID {
public:
    packet_header header;
    u32 client_id;
    struct {
        u8 tag0;
        u8 tag1;
        u16 tag2;
        u32 guildcard_number;
        void bswap() {
            bswap_32(&guildcard_number);
            bswap_16(&tag2);
        };
    } tag;
public:
    void bswap() {
        header.bswap();
        bswap_32(&client_id);
        tag.bswap();
    };
};

class TChatMessage {
public:
    packet_header header;
    TPlyGuildCardTag tag;
    char name[16];
    u32 to_guildcard_number;
    char text[512];
public:
    void bswap() {
        header.bswap();
        tag.bswap();
        bswap_32(&to_guildcard_number);
    };
};

class TUserAns {
public:
    packet_header header;
    TPlyGuildCardTag tag;
    u32 found_guildcard;
    struct {
        packet_header header;
        u32 ip_addr;
        short port;
        void bswap() {
            header.bswap();
            bswap_32(&ip_addr);
            bswap_16(as(u16 *, &port));
        };
    } recv_port;
    char location[68];
    TPlyMeetUserExtension extension;
public:
    void bswap() {
        header.bswap();
        tag.bswap();
        bswap_32(&found_guildcard);
        recv_port.bswap();
        extension.bswap();
    };
};

class TRecvDownload {
public:
    packet_header header;
    char filename[16];
    u8 data[1024];
    u32 data_size;
public:
    void bswap() {
        header.bswap();
        bswap_32(&data_size);
    };
};

class TRecvDownloadHead {
public:
    packet_header header;
    char path[32];
    u16 unused;
    u16 flags;
    char filename[16];
    u32 file_size;
public:
    void bswap() {
        header.bswap();
        bswap_32(&file_size);
    };
};

class TPlyJoinLobby {
public:
    packet_header header;
    char client_id;
    char leader_id;
    char disable_udp;
    char lobby_number;
    char block_number;
    char unknown1;
    char event;
    char unknown2;
    char unused[4];
    TPlyJoinLobbyEntry entries[12];
public:
    void bswap() {
        header.bswap();
        for (int i = 0; i < 12; ++i) {
            entries[i].bswap();
        }
    };
};

class TPlyJoinGame {
public:
    packet_header header;
    u32 variations[16][2];
    TPlyJoinLobbyData lobby_data[4];
    u8 client_id;
    u8 leader_id;
    u8 disable_udp;
    u8 difficulty;
    u8 battle_mode;
    u8 event;
    u8 section_id;
    u8 challenge_mode;
    u32 rare_seed;
    u8 episode;
    u8 unknown1;
    u8 solo_mode;
    u8 unknown2;
public:
    void bswap() {
        header.bswap();
        for (int i = 0; i < 16; ++i) {
            for (int j = 0; j < 2; ++j) {
                bswap_32(&variations[i][j]);
            }
        }
        bswap_32(&rare_seed);
    };
};

#endif
