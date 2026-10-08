#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
s32 load_encrypted_text_archive(char *arg0, s32 *arg1);
s32 alloc_named_object(s32, s32, s32, s32);
int sprintf(char *, const char *, ...);
extern char lbl_8043D9FC[];
extern char lbl_8043DA04[];
s32 load_text_resource_pair(s32 arg0);
}

extern "C" {

u32 write_packet_header__6TLobbyFPviiUi(u8 *arg0, s32 arg1, s32 arg2, u32 arg3);
s32 alloc_download_quest__6TLobbyFPviPv(u8 *arg0, s32 arg1, s32 *arg2);
M2C_UNK subtractive_rng_xor_buffer(M2C_UNK *, void *, s32);
M2C_UNK subtractive_rng_seed(M2C_UNK *, s32);
M2C_UNK init_single_player_chr_select__6TLobbyFPv(M2C_UNK *);
M2C_UNK prs_decompress_buffer(void *, s32);
s32 alloc__22TQuestVmDownLoadServerFPv(s32);

struct Sp8_800f9690 { M2C_UNK8 data[240]; };
u32 write_packet_header__6TLobbyFPviiUi(u8 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    struct Sp8_800f9690 sp8;
    u32 v0 = (u32)M2C_FIELD(arg0, s32 *, 0);
    s32 v4 = M2C_FIELD(arg0, s32 *, 4);

    if (v0 > arg3) {
        return 0U;
    }
    init_single_player_chr_select__6TLobbyFPv((M2C_UNK *)&sp8);
    subtractive_rng_seed((M2C_UNK *)&sp8, v4);
    subtractive_rng_xor_buffer((M2C_UNK *)&sp8, arg0 + 8, arg1 - 8);
    prs_decompress_buffer(arg0 + 8, arg2);
    return v0;
}

struct Sp8_800f970c { M2C_UNK8 data[240]; };
s32 alloc_download_quest__6TLobbyFPviPv(u8 *arg0, s32 arg1, s32 *arg2) {
    struct Sp8_800f970c sp8;
    s32 v0 = M2C_FIELD(arg0, s32 *, 0);
    s32 v4 = M2C_FIELD(arg0, s32 *, 4);
    s32 ret;

    ret = alloc__22TQuestVmDownLoadServerFPv(v0);
    if (ret == 0) {
        return 0;
    }
    init_single_player_chr_select__6TLobbyFPv((M2C_UNK *)&sp8);
    subtractive_rng_seed((M2C_UNK *)&sp8, v4);
    subtractive_rng_xor_buffer((M2C_UNK *)&sp8, arg0 + 8, arg1 - 8);
    prs_decompress_buffer(arg0 + 8, ret);
    if (arg2 != NULL) {
        *arg2 = v0;
    }
    return ret;
}
M2C_UNK tmp_buf_release__6TLobbyFi(M2C_UNK *);
s32 TLobby__sub_8001EEF4();
s32 tmp_buf_use_req__6TLobbyFPv(M2C_UNK *);
u8 *set_stream_and_load_file__6TLobbyFi(s32);
s32 update_lobby_scene__6TSceneFPv();
M2C_UNK read_disc_file(s32, s32);
M2C_UNK read_sectors_sync__8TGStreamFPvii(M2C_UNK *, M2C_UNK, void *);
M2C_UNK TGStream__ct(M2C_UNK *, M2C_UNK);
M2C_UNK open__8TGStreamFPvPvi(M2C_UNK *, s32, M2C_UNK);
extern M2C_UNK lbl_80499A40[];

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

    size = update_lobby_scene__6TSceneFPv();
    if (size <= 0) {
        return 0;
    }
    if ((size <= 0x40000) && (TLobby__sub_8001EEF4() != 0)) {
        buf = (u8 *)tmp_buf_use_req__6TLobbyFPv(lbl_80499A40);
        read_disc_file((s32)arg0, (s32)buf);
        ret = alloc_download_quest__6TLobbyFPviPv(buf, size, &sp8);
        tmp_buf_release__6TLobbyFi(lbl_80499A40);
    } else {
        open__8TGStreamFPvPvi((M2C_UNK *)&st, (s32)arg0, 1);
        buf = (u8 *)alloc__22TQuestVmDownLoadServerFPv(0x800);
        read_sectors_sync__8TGStreamFPvii((M2C_UNK *)&st, 1, buf);
        sp8 = M2C_FIELD(buf, s32 *, 0);
        h = M2C_FIELD(buf, s32 *, 4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
        ret = alloc__22TQuestVmDownLoadServerFPv(sp8);
        buf = set_stream_and_load_file__6TLobbyFi((s32)arg0);
        init_single_player_chr_select__6TLobbyFPv((M2C_UNK *)&sel);
        subtractive_rng_seed((M2C_UNK *)&sel, h);
        subtractive_rng_xor_buffer((M2C_UNK *)&sel, buf + 8, size - 8);
        prs_decompress_buffer(buf + 8, ret);
        safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
        TGStream__ct((M2C_UNK *)&st, -1);
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
    safe_free__23TAdSinglePlyChrSelectGCFUi((void *)b);
    return r;
}

}
