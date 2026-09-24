#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
extern void *lbl_804FE9C8[];
extern void *lbl_805D4BEC;
extern void *lbl_805D4BE8;
void TLobby__sub_803DA16C(void *);
void TLobby__sub_8001FE7C(void *, int);
void TLobby__sub_8003A874(void);
}

extern "C" {

void *create__17TObjBoss2CeilJunkFPv(void *arg0);
void TObjBoss2CeilJunk__sub_8003A868(void);
void *TObjBoss2CeilJunk__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__17TObjBoss2CeilJunkFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TObjBoss2CeilJunk__ct(o, tl_05, arg0);
    }
    return o;
}

    extern float lbl_805D4BE0;
    extern const float lbl_805D8258;
void TObjBoss2CeilJunk__sub_8003A868(void) { lbl_805D4BE0 = lbl_805D8258; }
void TLobby__sub_8003A874(void) {
    s32 i;
    for (i = 0; i < 7; i++) {
        lbl_804FE9C8[i] = 0;
    }
    TLobby__sub_803DA16C(lbl_805D4BEC);
    TLobby__sub_8001FE7C(lbl_805D4BE8, 1);
    lbl_805D4BE8 = 0;
}

}
