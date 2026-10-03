#include "types.h"

extern "C" {

typedef void (*Cb_802171BC)(void *);
struct QuestList_802171BC {
    u8 pad[0x20];
    u32 state;
    u8 pad24[4];
    Cb_802171BC cancelled;
    Cb_802171BC accepted;
    Cb_802171BC download;
    void *owner;
};

void init_quest_list_window__17TQuestListOfflineFPv(QuestList_802171BC *);
void TLobby__sub_80216CF8(QuestList_802171BC *);
void handle_confirm_dialog(void *arg0);
void queue_destruction__7TObjectFv(void *);

void dispatch_list_state__17TQuestListOfflineFPv(QuestList_802171BC *self) {
    switch (self->state) {
    case 0:
        init_quest_list_window__17TQuestListOfflineFPv(self);
        break;
    case 1:
        TLobby__sub_80216CF8(self);
        break;
    case 2:
        handle_confirm_dialog(self);
        break;
    case 3:
        if (self->accepted) {
            self->accepted(self->owner);
        }
        queue_destruction__7TObjectFv(self);
        break;
    case 5:
        if (self->cancelled) {
            self->cancelled(self->owner);
        }
        queue_destruction__7TObjectFv(self);
        break;
    case 4:
        if (self->download) {
            self->download(self->owner);
        }
        queue_destruction__7TObjectFv(self);
        break;
    case 6:
        break;
    }
}

}
