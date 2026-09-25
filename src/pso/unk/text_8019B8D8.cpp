#include "types.h"
struct Obj_8019B8D8 { u8 pad[0x88]; s32 id; };

extern "C" {
int sprintf(char *, const char *, ...);
u32 TLobby__sub_80070AD8(s32 arg0);
void *create_TObjWarpString(void *arg0, void *arg1);
extern char lbl_805DBFF4[4];
void fn_8019B8D8(Obj_8019B8D8 *self, void *arg);
}

extern "C" {

void fn_8019B8D8(Obj_8019B8D8 *self, void *arg) {
    char buf[32];
    char *p;
    sprintf(buf, lbl_805DBFF4, self->id);
    for (p = buf; *p != 0; p++) {
        *p = TLobby__sub_80070AD8(*p);
    }
    create_TObjWarpString(buf, arg);
}

}
