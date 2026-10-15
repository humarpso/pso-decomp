#include "types.h"

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct Base_8031F374 { char pad[0x18]; };
struct VObj_8031F374 : Base_8031F374 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m93();
};

extern "C" {

void handle_death_state__12TObjEneReconFPvi(void *arg0, s32 arg1);
s32 TObjEneRecobox__sub_8031F1A8(void *);
s32 refresh_lobby_state__10TObjPlayerFPv();
s32 queue_destruction__7TObjectFv(void *);
s32 send_entity_set_flags__6TLobbyFPv();

void handle_death_state__12TObjEneReconFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        refresh_lobby_state__10TObjPlayerFPv();
        *(s32 *)((s8 *)arg0 + 0x40C) = (s32) (*(s32 *)((s8 *)arg0 + 0x40C) | 1);
        TObjEneRecobox__sub_8031F1A8(arg0);
        ((VObj_8031F374 *)arg0)->m93();
        return;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x410) == 0) {
            send_entity_set_flags__6TLobbyFPv();
            queue_destruction__7TObjectFv(arg0);
        }
    case 5:
    case 0:
        return;
    }
}

}
