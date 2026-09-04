#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void* TLobby__sub_80141030(void* p);
int TLobby__sub_80141038(void);
void create_map_csn_ctrl__6TLobbyFv(void);
void *TMapCsnCtrl__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;
extern void *lbl_805D5650;

void create_map_csn_ctrl__6TLobbyFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0x81C);
    if (o != NULL) {
        o = TMapCsnCtrl__ct(o, tl_05);
    }
    lbl_805D5650 = o;
}

void* TLobby__sub_80141030(void* p) { return (char*)p + 0xac; }

int TLobby__sub_80141038(void) { return 0; }

}
