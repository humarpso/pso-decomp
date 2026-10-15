#include "types.h"

extern "C" {

void *init_subobject__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);

extern s32 lbl_8048E5F4[];

void *init_subobject__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_8048E5F4;
    *(void **)((s8 *)arg0 + 0x1C) = arg2;
    return arg0;
}

}
