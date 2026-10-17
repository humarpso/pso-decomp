#include "types.h"
#include "pso/misc/THunterGuildSeqOffline_80213788.h"
#include "pso/misc/THunterGuildWarning_80211700.h"
#include "pso/misc/THunterGuildWarning_8021170C.h"
#include "pso/misc/TKeyBoardControl_8000F764.h"
#include "pso/misc/TLobby_80211F0C.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/THunterGuildSeqOffline.h"
#include "pso/misc/TQuestListOnline.h"

extern "C" {

void update_hunter_guild_phase(void) {
    if (get_main_phase() == 0xE) {
        THunterGuildWarning__sub_80211700();
        THunterGuildSeqOffline::clear_instance_table();
    }
    if (get_main_phase() == 0xF) {
        clear_slots__22THunterGuildSeqOfflineFv();
        clear_slot_flags__22THunterGuildSeqOfflineFv();
        TQuestListOnline::release_resources();
    }
}

void THunterGuildSeqOffline__sub_8021339C(void);

void TLobby::update_guild_or_quest_phase() {
    if (get_main_phase() == 0xE) {
        THunterGuildSeqOffline__sub_8021339C();
        THunterGuildWarning__sub_8021170C();
    }
    if (get_main_phase() == 0xF) {
        TQuestListOnline::init_download_buffers();
        zero_four_slots__22THunterGuildSeqOfflineFv();
        THunterGuildSeqOffline__sub_80213CA4();
    }
}

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

void *THunterGuildSeqOffline__sub_80214B3C(void *, void *, void *);

void *TLobby::create_tl05_object(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = THunterGuildSeqOffline__sub_80214B3C(o, tl_05, arg0);
    }
    return o;
}

}
