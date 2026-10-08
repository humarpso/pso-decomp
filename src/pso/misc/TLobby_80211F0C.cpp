#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_main_phase();
M2C_UNK THunterGuildWarning__sub_80211700();
M2C_UNK clear_instance_table__22THunterGuildSeqOfflineFv();
M2C_UNK THunterGuildSeqOffline__sub_80213C7C();
M2C_UNK THunterGuildSeqOffline__sub_80214A34();
M2C_UNK release_resources__16TQuestListOnlineFv();

void update_hunter_guild_phase(void) {
    if (get_main_phase() == 0xE) {
        THunterGuildWarning__sub_80211700();
        clear_instance_table__22THunterGuildSeqOfflineFv();
    }
    if (get_main_phase() == 0xF) {
        THunterGuildSeqOffline__sub_80213C7C();
        THunterGuildSeqOffline__sub_80214A34();
        release_resources__16TQuestListOnlineFv();
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_guild_or_quest_phase__6TLobbyFv(void);
M2C_UNK THunterGuildSeqOffline__sub_8021339C();
M2C_UNK THunterGuildWarning__sub_8021170C();
M2C_UNK init_download_buffers__16TQuestListOnlineFv();
M2C_UNK THunterGuildSeqOffline__sub_80213CA4();
M2C_UNK THunterGuildSeqOffline__sub_80214A5C();
s32 get_main_phase();

void update_guild_or_quest_phase__6TLobbyFv(void) {
    if (get_main_phase() == 0xE) {
        THunterGuildSeqOffline__sub_8021339C();
        THunterGuildWarning__sub_8021170C();
    }
    if (get_main_phase() == 0xF) {
        init_download_buffers__16TQuestListOnlineFv();
        THunterGuildSeqOffline__sub_80214A5C();
        THunterGuildSeqOffline__sub_80213CA4();
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *THunterGuildSeqOffline__sub_80213D84(void *, void *, void *);
extern void *tl_05;

void *create_lobby_object_05(void *arg0) {
    void *o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        o = THunterGuildSeqOffline__sub_80213D84(o, tl_05, arg0);
    }
    return o;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_tl05_object__6TLobbyFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void *THunterGuildSeqOffline__sub_80214B3C(void *, void *, void *);

extern void *tl_05;

void *create_tl05_object__6TLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = THunterGuildSeqOffline__sub_80214B3C(o, tl_05, arg0);
    }
    return o;
}

}
