#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/misc/TScene.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

typedef struct Rec_8023E638 {
    s32 a;
    s32 b;
    s32 c;
} Rec_8023E638;

typedef struct List_8023E638 {
    Rec_8023E638 *recs;
    s32 count;
} List_8023E638;

extern "C" {
void prs_decompress_buffer(s32, s32);
s32 set_stream_and_load_file__6TLobbyFi(void *);
s32 sprintf(char *, const char *, ...);
void load_gvm_texture_archive(s32, s32);
extern char texture_prs_filename_format[];
extern char texture_prs_stream_filename_buffer[];
s32 TLobby__sub_8023E4B4(s32 arg0, s32 arg1);
void prs_decompress_buffer(s32, s32);
s32 read_disc_file(void *, s32);
s32 sprintf(char *, const char *, ...);
s32 TLobby__sub_803CC53C();
s32 adxf_open__6TLobbyFUii(void *, s32);
void load_gvm_texture_archive(s32, s32);
s32 xmalloc__FUl(s32);
void xfree__FPv(s32);
extern char texture_prs_filename_format[];
extern char texture_prs_disc_filename_buffer[];
s32 TLobby__sub_8023E554(s32 arg0, s32 arg1);
void TObjPlayer__sub_803DD5E8(void *, s32, s32, s32);
s32 memset(s32, s32, s32);
extern s32 lbl_805D63C0;
extern s32 lbl_805D63C4;
s32 bind_gvm_texture_list(s32 arg0, List_8023E638 *arg1);
}

extern "C" {

s32 fn_8023E734(u32 arg0);
s32 free_texture_if_valid(u32 arg0);
void init_buffers(void);
int TLobby__sub_803DA16C();
s32 load_texture_list();
s32 memset(s32, s32, s32);
int set_global_param__8TObjFishFl();
s32 xmalloc__FUl(s32);

s32 TObjPlayer::notify_fish_if_valid(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    set_global_param__8TObjFishFl();
    return 1;
}

s32 TLobby__sub_8023E4B4(s32 arg0, s32 arg1) {
    s32 h;
    s32 buf;
    sprintf(texture_prs_stream_filename_buffer, texture_prs_filename_format, arg0);
    h = set_stream_and_load_file__6TLobbyFi(texture_prs_stream_filename_buffer);
    if (h == 0) {
        TAdSinglePlyChrSelectGC::safe_free(h);
        return 0;
    }
    buf = ((TQuestVmDownLoadServer *)0x100000)->alloc();
    prs_decompress_buffer(h, buf);
    load_gvm_texture_archive(buf, arg1);
    TAdSinglePlyChrSelectGC::safe_free(buf);
    TAdSinglePlyChrSelectGC::safe_free(h);
    return 1;
}

s32 TLobby__sub_8023E554(s32 arg0, s32 arg1) {
    s32 a;
    s32 b;
    s32 c;
    sprintf(texture_prs_disc_filename_buffer, texture_prs_filename_format, arg0);
    if (((TScene *)texture_prs_disc_filename_buffer)->update_lobby_scene() != -1) {
        a = adxf_open__6TLobbyFUii(texture_prs_disc_filename_buffer, 0);
        b = TLobby__sub_803CC53C();
        ((TLobby *)a)->close_adxf_handle();
        b = xmalloc__FUl((s32)(b << 11));
        if (read_disc_file(texture_prs_disc_filename_buffer, b) != -1) {
            c = xmalloc__FUl((s32)(0x200000));
            prs_decompress_buffer(b, c);
            load_gvm_texture_archive(c, arg1);
            xfree__FPv(c);
        }
        xfree__FPv(b);
        return 1;
    }
    return 0;
}

s32 bind_gvm_texture_list(s32 name, List_8023E638 *arg1) {
    u8 m_texture_list[8];
    Rec_8023E638 *d;
    s32 i;
    s32 n;
    if (name == 0 || arg1 == NULL) {
        return 0;
    }
    memset((s32)(lbl_805D63C0), (s32)(0), (s32)(0x1800));
    TObjPlayer__sub_803DD5E8(m_texture_list, lbl_805D63C0, lbl_805D63C4, 0x200);
    if (TLobby::load_texture_pvm_file((const char *)name, (s32)m_texture_list) == -1) {
        return 0;
    }
    n = arg1->count;
    d = arg1->recs;
    for (i = 0; i < n; i++) {
        d[i].c = ((Rec_8023E638 *)lbl_805D63C0)[i].c;
        d[i].b = ((Rec_8023E638 *)lbl_805D63C0)[i].b;
    }
    return 1;
}

s32 free_texture_if_valid(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    TLobby__sub_803DA16C();
    return 1;
}

s32 fn_8023E734(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    load_texture_list();
    return 1;
}

extern s32 lbl_805D63C0;
extern s32 lbl_805D63C4;

void init_buffers(void) {
    s32 p = xmalloc__FUl(0x1800);
    lbl_805D63C0 = p;
    memset(p, 0, 0x1800);
    lbl_805D63C4 = xmalloc__FUl(0x3800);
}

}
