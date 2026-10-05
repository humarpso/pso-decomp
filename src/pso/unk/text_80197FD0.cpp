#include "types.h"
extern "C" {
u32 alloc__22TQuestVmDownLoadServerFPv(void *);
void fn_8023E734(void *);
void set_render_rect__10TObjPlayerFPviiii(void *, u32, int, int, int);
void set_texture_name(void *, void *, int, int);
void move_data__6TLobbyFv(u32, void *, void *);
extern u32 lbl_805D5C58;
void fn_80197FD0(void *arg0, void *arg1);
}

extern "C" {

u8 lbl_8050DD18[0xC];
__declspec(section ".data") void *lbl_8050DD24[2];
u8 lbl_8050DD2C[0x24];
void fn_80197FD0(void *arg0, void *arg1) {
    u32 t = alloc__22TQuestVmDownLoadServerFPv(arg1);
    lbl_805D5C58 = t;
    if (t != 0) {
        move_data__6TLobbyFv(t, arg0, arg1);
        lbl_8050DD24[0] = lbl_8050DD18;
        lbl_8050DD24[1] = (void *)1;
        set_render_rect__10TObjPlayerFPviiii(lbl_8050DD2C, lbl_805D5C58, 0, 0, 0);
        set_texture_name(lbl_8050DD18, lbl_8050DD2C, 0, 0x40000000);
        fn_8023E734(lbl_8050DD24);
    }
}

}
