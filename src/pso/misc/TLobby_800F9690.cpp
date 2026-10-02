#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
s32 TLobby__sub_800F979C(char *arg0, s32 *arg1);
s32 alloc_named_object(s32, s32, s32, s32);
int sprintf(char *, const char *, ...);
extern char lbl_8043D9FC[];
extern char lbl_8043DA04[];
s32 TWindowKeyBoardSoft__sub_800F98F0(s32 arg0);
}

extern "C" {

u32 write_packet_header__6TLobbyFPviiUi(u8 *arg0, s32 arg1, s32 arg2, u32 arg3);
s32 alloc_download_quest__6TLobbyFPviPv(u8 *arg0, s32 arg1, s32 *arg2);
M2C_UNK subtractive_rng_xor_buffer(M2C_UNK *, void *, s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C48C(M2C_UNK *, s32);
M2C_UNK init_single_player_chr_select__6TLobbyFPv(M2C_UNK *);
M2C_UNK TLobby__sub_800F7DAC(void *, s32);
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
    TAdSinglePlyChrSelectGC__sub_8007C48C((M2C_UNK *)&sp8, v4);
    subtractive_rng_xor_buffer((M2C_UNK *)&sp8, arg0 + 8, arg1 - 8);
    TLobby__sub_800F7DAC(arg0 + 8, arg2);
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
    TAdSinglePlyChrSelectGC__sub_8007C48C((M2C_UNK *)&sp8, v4);
    subtractive_rng_xor_buffer((M2C_UNK *)&sp8, arg0 + 8, arg1 - 8);
    TLobby__sub_800F7DAC(arg0 + 8, ret);
    if (arg2 != NULL) {
        *arg2 = v0;
    }
    return ret;
}
s32 TWindowKeyBoardSoft__sub_800F98F0(s32 arg0) {
    s32 sp8;
    char buf[0x40];
    s32 a;
    s32 b;
    s32 r;
    sprintf(buf, lbl_8043D9FC, arg0);
    a = TLobby__sub_800F979C(buf, &sp8);
    sprintf(buf, lbl_8043DA04, arg0);
    b = TLobby__sub_800F979C(buf, &sp8);
    r = alloc_named_object(arg0, a, sp8, b);
    safe_free__23TAdSinglePlyChrSelectGCFUi((void *)b);
    return r;
}

}
