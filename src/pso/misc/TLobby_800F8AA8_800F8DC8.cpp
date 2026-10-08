#include "types.h"

extern "C" {
extern u8 lbl_805D533C;
extern u8 lbl_8049C61C[];
void TLobby__sub_803DA16C(void *p);
void TLobby__sub_800F8E78(void);
extern u8 lbl_805D533C;
extern u8 lbl_8049C61C[];
extern u8 lbl_80499AA0[];
extern const char lbl_8043D9F4[];
void *tmp_buf_use_req__6TLobbyFPv(const char *);
s32 prs_decompress_buffer(void *, void *);
s32 load_gvm_texture_archive(void *, void *);
void tmp_buf_release__6TLobbyFi(const char *s);
void TLobby__sub_800F8EB4(void);
void set_global_param__8TObjFishFi(void *);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv();
void draw_textured_quad_at_depth(void *, f32);
void set_draw_texture_and_color(void *, int);
extern u8 lbl_8049C61C[];
extern const f32 lbl_805DA930;
void TLobby__sub_800F8DE4(void *arg0);
}

extern "C" {

void TLobby__sub_800F8DD8(void);
void TLobby__sub_800F8F34(void);
void set_read_params__6TLobbyFiii(int a0, int a1, int a2);

    extern int lbl_805D5340;
    extern int lbl_805D5344;
    extern int lbl_805D5348;
void set_read_params__6TLobbyFiii(int a0, int a1, int a2) { lbl_805D5340 = a0; lbl_805D5344 = a1; lbl_805D5348 = a2; }

    extern int lbl_805D534C;
void TLobby__sub_800F8DD8(void) { lbl_805D534C = 1; }

    extern unsigned char lbl_805D5358;

void TLobby__sub_800F8DE4(void *arg0) {
    f32 v[8];
    v[0] = 128.0f;
    v[1] = 48.0f;
    v[2] = 512.0f;
    v[3] = 432.0f;
    v[5] = v[4] = 0.0f;
    v[7] = v[6] = 1.0f;
    set_global_param__8TObjFishFi(lbl_8049C61C);
    begin_screen_draw(0);
    set_draw_texture_and_color(arg0, -1);
    draw_textured_quad_at_depth(v, lbl_805DA930);
    get_player__20TWindowSubStatusDispFv();
}

void TLobby__sub_800F8E78(void) {
    if (lbl_805D533C) {
        TLobby__sub_803DA16C(lbl_8049C61C);
    }
    lbl_805D533C = 0;
}

void TLobby__sub_800F8EB4(void) {
    void *file = tmp_buf_use_req__6TLobbyFPv(lbl_8043D9F4);
    if (file != 0) {
        s32 r;
        prs_decompress_buffer(lbl_80499AA0, file);
        r = load_gvm_texture_archive(file, lbl_8049C61C);
        tmp_buf_release__6TLobbyFi(lbl_8043D9F4);
        lbl_805D533C = 1;
        if (r == -1) {
            lbl_805D533C = 0;
        }
    }
}

void TLobby__sub_800F8F34(void) { lbl_805D5358 = 1; }

}
