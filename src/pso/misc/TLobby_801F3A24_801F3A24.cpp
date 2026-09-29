#include "types.h"

struct QuestObjRow_801F3AD8 {
    u8 pad0[2];
    s16 flags;
    u8 pad1[0x40];
};

struct Ent_801F3A80 {
    u16 a;
    s16 b;
    u8 rest[0x44];
};

extern "C" {
void TLobby__sub_802081AC(void *arg0);
void TLobby__sub_801F3AD8(struct QuestObjRow_801F3AD8 *rows, u32 byte_size);
void TLobby__sub_802080C0(void*);
void TLobby__sub_801F3A80(u8* arg0, u32 arg1);
}

extern "C" {

void refresh_quest_list__6TLobbyFi(s32 arg0);
s32 TLobby__send_and_handle_60(s32);
s32 TLobby__sub_800F9DF4(s32, s32);
s32 alloc__22TQuestVmDownLoadServerFPv();
s32 bswap_16__FPUs(s32);
void build_6x75_update_quest_flag_dc(void* p);
s32 read_be16_field2__10TObjPlayerFPv();
s32 rebuild_all__6TLobbyFi(s32);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 update_lobby_scene__6TSceneFPv();

void refresh_quest_list__6TLobbyFi(s32 arg0) {
    s32 temp_r3;

    if (update_lobby_scene__6TSceneFPv() >= 0) {
        temp_r3 = alloc__22TQuestVmDownLoadServerFPv();
        if (temp_r3 != 0) {
            TLobby__sub_800F9DF4(arg0, temp_r3);
            rebuild_all__6TLobbyFi(temp_r3);
            safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        }
    }
}

void TLobby__sub_801F3A80(u8* arg0, u32 arg1) {
    Ent_801F3A80* p = (Ent_801F3A80*)arg0;
    u32 n = arg1 / sizeof(Ent_801F3A80);
    u32 i;
    for (i = 0; i < n; i++, p++) {
        TLobby__sub_802080C0(p);
        p->b = 0;
    }
}

void TLobby__sub_801F3AD8(struct QuestObjRow_801F3AD8 *rows, u32 byte_size) {
    struct QuestObjRow_801F3AD8 *p = rows;
    u32 count = byte_size / 68;
    u32 i;
    for (i = 0; i < count; ++i, p++) {
        TLobby__sub_802081AC(p);
        p->flags = 0;
    }
}

}
