#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TLobby__sub_80293124(void* p);
void *create_challenge4p__6TLobbyFv(void);
int destroy_tombstone__6TLobbyFPv(void* p);
void *TChallenge4P__ct(void *, void *);
int TObjTombstone__sub_800765B4(void*);
void *__nw__7TObjectFUl(int);
int destroy__13TObjTombstoneFv(void*);

extern void *tl_su;

void *create_challenge4p__6TLobbyFv(void) {
    void *o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TChallenge4P__ct(o, tl_su);
    }
    return o;
}

int destroy_tombstone__6TLobbyFPv(void* p) { return destroy__13TObjTombstoneFv(p); }
int TLobby__sub_80293124(void* p) { return TObjTombstone__sub_800765B4(p); }

}
