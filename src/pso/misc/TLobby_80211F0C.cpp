#include "types.h"

extern "C" {

s32 get_main_phase();
s32 THunterGuildWarning__sub_80211700();
s32 clear_instance_table__22THunterGuildSeqOfflineFv();
s32 clear_slots__22THunterGuildSeqOfflineFv();
s32 clear_slot_flags__22THunterGuildSeqOfflineFv();
s32 release_resources__16TQuestListOnlineFv();

void update_hunter_guild_phase(void) {
    if (get_main_phase() == 0xE) {
        THunterGuildWarning__sub_80211700();
        clear_instance_table__22THunterGuildSeqOfflineFv();
    }
    if (get_main_phase() == 0xF) {
        clear_slots__22THunterGuildSeqOfflineFv();
        clear_slot_flags__22THunterGuildSeqOfflineFv();
        release_resources__16TQuestListOnlineFv();
    }
}

}

#include "types.h"

extern "C" {

void update_guild_or_quest_phase__6TLobbyFv(void);
s32 THunterGuildSeqOffline__sub_8021339C();
s32 THunterGuildWarning__sub_8021170C();
s32 init_download_buffers__16TQuestListOnlineFv();
s32 THunterGuildSeqOffline__sub_80213CA4();
s32 zero_four_slots__22THunterGuildSeqOfflineFv();
s32 get_main_phase();

void update_guild_or_quest_phase__6TLobbyFv(void) {
    if (get_main_phase() == 0xE) {
        THunterGuildSeqOffline__sub_8021339C();
        THunterGuildWarning__sub_8021170C();
    }
    if (get_main_phase() == 0xF) {
        init_download_buffers__16TQuestListOnlineFv();
        zero_four_slots__22THunterGuildSeqOfflineFv();
        THunterGuildSeqOffline__sub_80213CA4();
    }
}

}

#include "types.h"

extern "C" {

void *__nw__7TObjectFUl(int);
void *THunterGuildSeqOnline_Client__ct(void *, void *, void *);
extern void *tl_05;

void *create_lobby_object_05(void *arg0) {
    void *o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        o = THunterGuildSeqOnline_Client__ct(o, tl_05, arg0);
    }
    return o;
}

}

#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void *__nw__7TObjectFUl(int);
void *THunterGuildSeqOffline__sub_80214B3C(void *, void *, void *);

extern void *tl_05;

void *TLobby::create_tl05_object(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = THunterGuildSeqOffline__sub_80214B3C(o, tl_05, arg0);
    }
    return o;
}

}
