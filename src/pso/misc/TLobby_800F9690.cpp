#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {
s32 safe_free__23TAdSinglePlyChrSelectGCFUl(void *);
s32 load_encrypted_text_archive(char *arg0, s32 *arg1);
s32 alloc_named_object(s32, s32, s32, s32);
int sprintf(char *, const char *, ...);
extern char lbl_8043D9FC[];
extern char lbl_8043DA04[];
s32 load_text_resource_pair(s32 arg0);
}

extern "C" {

s32 subtractive_rng_xor_buffer(s32 *, void *, s32);
s32 subtractive_rng_seed(s32 *, s32);
s32 __ct__14SubtractiveRngFv(s32 *);
s32 prs_decompress_buffer(void *, s32);
s32 alloc__22TQuestVmDownLoadServerFv(s32);

struct Sp8_800f9690 { s8 data[240]; };
u32 TLobby::write_packet_header(s32 arg1, s32 arg2, u32 arg3) {
    u8 *arg0 = (u8 *)this;
    struct Sp8_800f9690 sp8;
    u32 v0 = (u32)*(s32 *)((s8 *)arg0 + 0);
    s32 v4 = *(s32 *)((s8 *)arg0 + 4);

    if (v0 > arg3) {
        return 0U;
    }
    __ct__14SubtractiveRngFv((s32 *)&sp8);
    subtractive_rng_seed((s32 *)&sp8, v4);
    subtractive_rng_xor_buffer((s32 *)&sp8, arg0 + 8, arg1 - 8);
    prs_decompress_buffer(arg0 + 8, arg2);
    return v0;
}

struct Sp8_800f970c { s8 data[240]; };
s32 TLobby::alloc_download_quest(s32 arg1, s32 *arg2) {
    u8 *arg0 = (u8 *)this;
    struct Sp8_800f970c sp8;
    s32 v0 = *(s32 *)((s8 *)arg0 + 0);
    s32 v4 = *(s32 *)((s8 *)arg0 + 4);
    s32 ret;

    ret = alloc__22TQuestVmDownLoadServerFv(v0);
    if (ret == 0) {
        return 0;
    }
    __ct__14SubtractiveRngFv((s32 *)&sp8);
    subtractive_rng_seed((s32 *)&sp8, v4);
    subtractive_rng_xor_buffer((s32 *)&sp8, arg0 + 8, arg1 - 8);
    prs_decompress_buffer(arg0 + 8, ret);
    if (arg2 != NULL) {
        *arg2 = v0;
    }
    return ret;
}
s32 tmp_buf_release__6TLobbyFv(s32 *);
s32 TLobby__sub_8001EEF4();
s32 tmp_buf_use_req__6TLobbyFPCc(s32 *);
u8 *set_stream_and_load_file__6TLobbyFi(s32);
s32 update_lobby_scene__6TSceneFv();
s32 read_disc_file(s32, s32);
s32 read_sectors_sync__8TGStreamFll(s32 *, s32, void *);
s32 destroy_gstream(s32 *, s32);
s32 open__8TGStreamFPvPvi(s32 *, s32, s32);
extern s32 lbl_80499A40[];

struct Stream_800F979C { u8 data[0x2c]; };
struct Sel_800F979C { u8 data[240]; };

s32 load_encrypted_text_archive(char *arg0, s32 *arg1) {
    s32 size;
    s32 h;
    u8 *buf;
    s32 ret;
    s32 sp8;
    Stream_800F979C st;
    Sel_800F979C sel;

    size = update_lobby_scene__6TSceneFv();
    if (size <= 0) {
        return 0;
    }
    if ((size <= 0x40000) && (TLobby__sub_8001EEF4() != 0)) {
        buf = (u8 *)tmp_buf_use_req__6TLobbyFPCc(lbl_80499A40);
        read_disc_file((s32)arg0, (s32)buf);
        ret = ((TLobby *)buf)->alloc_download_quest(size, &sp8);
        tmp_buf_release__6TLobbyFv(lbl_80499A40);
    } else {
        open__8TGStreamFPvPvi((s32 *)&st, (s32)arg0, 1);
        buf = (u8 *)alloc__22TQuestVmDownLoadServerFv(0x800);
        read_sectors_sync__8TGStreamFll((s32 *)&st, 1, buf);
        sp8 = *(s32 *)((s8 *)buf + 0);
        h = *(s32 *)((s8 *)buf + 4);
        safe_free__23TAdSinglePlyChrSelectGCFUl(buf);
        ret = alloc__22TQuestVmDownLoadServerFv(sp8);
        buf = set_stream_and_load_file__6TLobbyFi((s32)arg0);
        __ct__14SubtractiveRngFv((s32 *)&sel);
        subtractive_rng_seed((s32 *)&sel, h);
        subtractive_rng_xor_buffer((s32 *)&sel, buf + 8, size - 8);
        prs_decompress_buffer(buf + 8, ret);
        safe_free__23TAdSinglePlyChrSelectGCFUl(buf);
        destroy_gstream((s32 *)&st, -1);
    }
    if (arg1 != NULL) {
        *arg1 = sp8;
    }
    return ret;
}

s32 load_text_resource_pair(s32 arg0) {
    s32 sp8;
    char buf[0x40];
    s32 a;
    s32 b;
    s32 r;
    sprintf(buf, lbl_8043D9FC, arg0);
    a = load_encrypted_text_archive(buf, &sp8);
    sprintf(buf, lbl_8043DA04, arg0);
    b = load_encrypted_text_archive(buf, &sp8);
    r = alloc_named_object(arg0, a, sp8, b);
    safe_free__23TAdSinglePlyChrSelectGCFUl((void *)b);
    return r;
}

}
