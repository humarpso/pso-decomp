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

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void swap_object_row_endian(void *arg0);
void TLobby__sub_801F3AD8(struct QuestObjRow_801F3AD8 *rows, u32 byte_size);
void bswap_enemy_set_row(void*);
void TLobby__sub_801F3A80(u8* arg0, u32 arg1);
M2C_UNK load_quest_encounter_section(s32);
s32 handle_msg_type2__6TLobbyFi(s32);
M2C_UNK init_buffers__6TLobbyFii(s32, s32);
extern s16 TLobby__data_805127D0[];
extern s32 TLobby__data_805D5EE0;
void TLobby__sub_801F3B30(void);
void handle_msg_type1__6TLobbyFi(s32);
extern s16 TLobby__data_805127D0[];
void TLobby__sub_801F3BC4(void);
}

extern "C" {

void refresh_quest_list__6TLobbyFi(s32 arg0);
s32 TLobby__send_and_handle_60(s32);
s32 read_disc_file(s32, s32);
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
            read_disc_file(arg0, temp_r3);
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
        bswap_enemy_set_row(p);
        p->b = 0;
    }
}

void TLobby__sub_801F3AD8(struct QuestObjRow_801F3AD8 *rows, u32 byte_size) {
    struct QuestObjRow_801F3AD8 *p = rows;
    u32 count = byte_size / 68;
    u32 i;
    for (i = 0; i < count; ++i, p++) {
        swap_object_row_endian(p);
        p->flags = 0;
    }
}
void TLobby__sub_801F3B30(void) {
    s32 i;
    s32 ok;
    for (i = 0; i < 0x12; i++) {
        ok = 0;
        switch (TLobby__data_805127D0[i]) {
        case 0:
            if (handle_msg_type2__6TLobbyFi(i) != 0) {
                ok = 1;
            }
            if (ok == 1) {
                load_quest_encounter_section(i);
            }
            break;
        case 1:
        case 2:
        case 3:
            break;
        }
        if (ok == 0) {
            init_buffers__6TLobbyFii(i, TLobby__data_805D5EE0);
        }
    }
}
void TLobby__sub_801F3BC4(void) {
    s32 i;
    for (i = 0; i < 0x12; i++) {
        switch (TLobby__data_805127D0[i]) {
        case 0:
            handle_msg_type1__6TLobbyFi(i);
            break;
        case 1:
        case 2:
        case 3:
            break;
        }
    }
}

}
