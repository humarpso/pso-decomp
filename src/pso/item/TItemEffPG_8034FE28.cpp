#include "types.h"

extern "C" {

void create__10TItemEffPGFPvPvPv(void *arg0, void *arg1, void *arg2);
void *initialize__10TItemEffPGFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void TItemEffPG__ct(void *);
void *__nw__7TObjectFUl(int);

extern s32 lbl_804F0C08[];

void *initialize__10TItemEffPGFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    TItemEffPG__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0C08;
    *(void **)((s8 *)arg0 + 0xD4) = arg3;
    return arg0;
}

void create__10TItemEffPGFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        initialize__10TItemEffPGFPvPvPvPv((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2));
    }
}

}
