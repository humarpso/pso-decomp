#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

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

s32 TObjEneRecobox__sub_8031F1A8(void *);
s32 refresh_lobby_state__10TObjPlayerFv();
s32 queue_destruction__7TObjectFv(void *);
s32 send_entity_set_flags__6TLobbyFPv();

void TObjEneRecon::handle_death_state(s32 arg1) {
    switch (arg1) {
    case 4:
        refresh_lobby_state__10TObjPlayerFv();
        *(s32 *)&this->m_428 = (s32) (*(s32 *)&this->m_428 | 1);
        TObjEneRecobox__sub_8031F1A8(this);
        ((VObj_8031F374 *)this)->m93();
        return;
    case 3:
        if ((s32) *(s32 *)((s8 *)this + 0x410) == 0) {
            send_entity_set_flags__6TLobbyFPv();
            queue_destruction__7TObjectFv(this);
        }
    case 5:
    case 0:
        return;
    }
}

}
