#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
void fn_801F4560(int, int);
extern s32 TOKeyJungleMain__data_804653C8[];
void TOKeyJungleMain__sub_8029B2C4(void* _w0);
}

extern "C" {

void TLobby__sub_8029B2A4(void* p);
void *TODoorJungleMain__create(void *arg0);
void *TODoorJungleMain__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void TLobby__sub_8029B2A4(void* p) { TOKeyJungleMain__sub_8029B2C4((void*)(p)); }

extern void *tl_05;

void TOKeyJungleMain__sub_8029B2C4(void* _w0) {
    s32 i;
    s32 j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            fn_801F4560(i, TOKeyJungleMain__data_804653C8[j]);
        }
    }
}

void *TODoorJungleMain__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TODoorJungleMain__ct(o, tl_05, arg0);
    }
    return o;
}

}
