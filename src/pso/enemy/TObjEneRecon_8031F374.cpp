#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
M2C_UNK TObjEneRecobox__sub_8031F1A8(void *);
M2C_UNK TObjPlayer__sub_800F6B14();
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv();

void handle_death_state__12TObjEneReconFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        TObjPlayer__sub_800F6B14();
        M2C_FIELD(arg0, s32 *, 0x40C) = (s32) (M2C_FIELD(arg0, s32 *, 0x40C) | 1);
        TObjEneRecobox__sub_8031F1A8(arg0);
        ((VObj_8031F374 *)arg0)->m93();
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x410) == 0) {
            send_entity_set_flags__6TLobbyFPv();
            queue_destruction__7TObjectFv(arg0);
        }
    case 5:
    case 0:
        return;
    }
}

}
