#include "types.h"
struct Ctx_8042EBA4 { u8 pad[0x100]; s32 f100; s32 f104; s32 f108; };

extern "C" {
char *strcpy(char *, const char *);
void fn_8042E8C4(Ctx_8042EBA4 *);
extern char lbl_80480404[];
extern Ctx_8042EBA4 *lbl_805D7CB0;
void fn_8042EBA4(s32 arg0, s32 arg1);
}

extern "C" {

#pragma push
#pragma optimize_for_size off
void fn_8042EBA4(s32 arg0, s32 arg1) {
    strcpy((char *)lbl_805D7CB0, lbl_80480404);
    lbl_805D7CB0->f100 = arg1;
    lbl_805D7CB0->f104 = arg0;
    lbl_805D7CB0->f108 = 0x8000;
    fn_8042E8C4(lbl_805D7CB0);
}
#pragma pop

}
