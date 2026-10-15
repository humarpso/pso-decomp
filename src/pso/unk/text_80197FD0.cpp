#include "types.h"
extern "C" {
u32 alloc__22TQuestVmDownLoadServerFv(void *);
void fn_8023E734(void *);
void set_render_rect__10TObjPlayerFllll(void *, u32, int, int, int);
void set_texture_name(void *, void *, int, int);
void move_data__6TLobbyFPCvUl(u32, void *, void *);
extern u32 TObjSinBoard__texture_buffer;
void fn_80197FD0(void *arg0, void *arg1);
}

extern "C" {

u8 TObjSinBoard__texture_name[0xC];
__declspec(section ".data") void *signboard_texture_list[2];
u8 TObjSinBoard__texture_surface[0x24];
void fn_80197FD0(void *arg0, void *arg1) {
    u32 t = alloc__22TQuestVmDownLoadServerFv(arg1);
    TObjSinBoard__texture_buffer = t;
    if (t != 0) {
        move_data__6TLobbyFPCvUl(t, arg0, arg1);
        signboard_texture_list[0] = TObjSinBoard__texture_name;
        signboard_texture_list[1] = (void *)1;
        set_render_rect__10TObjPlayerFllll(TObjSinBoard__texture_surface, TObjSinBoard__texture_buffer, 0, 0, 0);
        set_texture_name(TObjSinBoard__texture_name, TObjSinBoard__texture_surface, 0, 0x40000000);
        fn_8023E734(signboard_texture_list);
    }
}

}
