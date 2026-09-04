#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80070550(void);
void TLobby__sub_80070598(void *arg0);
void cleanup_if_inactive__6TLobbyFPv(void* p);
s32 TCameraCtrl__sub_8006B368();
s32 TLobby__sub_80070078(void *);
int TLobby__sub_80070170(void*);
int TLobby__sub_800704CC(void* a0 = 0);
s32 TLobby__sub_800739BC(void *);
s32 TLobby__sub_8026A328();
s32 fn_80076B14(void *);
s32 init__23TAdSinglePlyChrSelectGCFv();
int update_battle_cleanup_flag__6TLobbyFPv(void*);

void TLobby__sub_80070550(void) {  }
void cleanup_if_inactive__6TLobbyFPv(void* p) { if (TLobby__sub_800704CC(p) == 0) { TLobby__sub_80070170(p); update_battle_cleanup_flag__6TLobbyFPv(p); } }

void TLobby__sub_80070598(void *arg0) {
    if (TLobby__sub_800704CC() == 0) {
        TLobby__sub_80070078(arg0);
        if (TCameraCtrl__sub_8006B368() != 0) {
            init__23TAdSinglePlyChrSelectGCFv();
            TLobby__sub_800739BC(arg0);
            TLobby__sub_8026A328();
            fn_80076B14(arg0);
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
    }
}

}
