#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Info_800FDBA8 {
    u8 pad[0x28];
    s32 size;
};

struct Stream_800FDBA8 {
    u8 pad[0x28];
    Info_800FDBA8 *info;
    u8 pad2[0xC];
};

extern "C" {
void safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 alloc__22TQuestVmDownLoadServerFPv(s32);
void TLobby__sub_800F7DAC(s32, s32);
M2C_UNK read_sectors_sync__8TGStreamFPvii(M2C_UNK *, s32, s32);
s32 get_instance__8TGStreamFv(M2C_UNK *);
M2C_UNK TGStream__ct(M2C_UNK *, M2C_UNK);
M2C_UNK open__8TGStreamFPvPvi(M2C_UNK *, s32, M2C_UNK);
void debug_print__6TLobbyFii(const char *, ...);
extern char lbl_8043DE90[];
s32 TGStream__sub_800FDBA8(s32 name, s32 dst);
M2C_UNK read_sectors_sync__8TGStreamFPvii(M2C_UNK *, s32, s32);
s32 get_instance__8TGStreamFv(M2C_UNK *);
M2C_UNK TGStream__ct(M2C_UNK *, M2C_UNK);
M2C_UNK open__8TGStreamFPvPvi(M2C_UNK *, s32, M2C_UNK);
M2C_UNK move_data__6TLobbyFv(void *, M2C_UNK *, s32);
extern u8 lbl_80504200[];
s32 TGStream__sub_800FDADC(s32 arg0, u8 *arg1);
}

extern "C" {

s32 load_file__8TGStreamFi(s32 arg0);

s32 alloc__22TQuestVmDownLoadServerFPv(s32);
M2C_UNK read_sectors_sync__8TGStreamFPvii(M2C_UNK *, s32, s32);
s32 get_instance__8TGStreamFv(M2C_UNK *);
M2C_UNK TGStream__ct(M2C_UNK *, M2C_UNK);
M2C_UNK open__8TGStreamFPvPvi(M2C_UNK *, s32, M2C_UNK);

s32 load_file__8TGStreamFi(s32 arg0) {
    M2C_UNK sp8[0xC];
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;

    open__8TGStreamFPvPvi(sp8, arg0, 1);
    temp_r3_2 = get_instance__8TGStreamFv(sp8);
    if (temp_r3_2 <= 0) {
        TGStream__ct(sp8, -1);
        return 0;
    }
    temp_r31 = (s32) (temp_r3_2 + 0x7FF) / 2048;
    temp_r3 = alloc__22TQuestVmDownLoadServerFPv(temp_r31 << 0xB);
    if (temp_r3 == 0) {
        TGStream__ct(sp8, -1);
        return 0;
    }
    read_sectors_sync__8TGStreamFPvii(sp8, temp_r31, temp_r3);
    TGStream__ct(sp8, -1);
    return temp_r3;
}

s32 TGStream__sub_800FDADC(s32 arg0, u8 *arg1) {
    struct { u8 d[0x38]; } s;
    s32 size;
    s32 n;
    s32 rem;
    open__8TGStreamFPvPvi((M2C_UNK *)&s, arg0, 1);
    size = get_instance__8TGStreamFv((M2C_UNK *)&s);
    if (size <= 0) {
        TGStream__ct((M2C_UNK *)&s, -1);
        return -1;
    }
    n = size / 2048;
    if (n > 0) {
        read_sectors_sync__8TGStreamFPvii((M2C_UNK *)&s, n, (s32)arg1);
    }
    rem = size % 2048;
    if (rem > 0) {
        read_sectors_sync__8TGStreamFPvii((M2C_UNK *)&s, 1, (s32)lbl_80504200);
        move_data__6TLobbyFv(arg1 + n * 2048, (M2C_UNK *)lbl_80504200, rem);
    }
    TGStream__ct((M2C_UNK *)&s, -1);
    return size;
}

s32 TGStream__sub_800FDBA8(s32 name, s32 dst) {
    Stream_800FDBA8 st;
    s32 size;
    s32 sectors;
    s32 buf;
    open__8TGStreamFPvPvi((M2C_UNK *)((s32 *)&st), (s32)(name), (M2C_UNK)(1));
    size = get_instance__8TGStreamFv((M2C_UNK *)((s32 *)&st));
    if (size <= 0) {
        TGStream__ct((M2C_UNK *)((s32 *)&st), (M2C_UNK)(-1));
        return -1;
    }
    sectors = (size + 0x7FF) / 2048;
    if (st.info != NULL && st.info->size != 0) {
        buf = alloc__22TQuestVmDownLoadServerFPv(((st.info->size + 0x7FF) / 2048) << 11);
        if (buf == 0) {
            debug_print__6TLobbyFii(lbl_8043DE90);
        }
        read_sectors_sync__8TGStreamFPvii((M2C_UNK *)((s32 *)&st), (s32)(sectors), (s32)(buf));
        TLobby__sub_800F7DAC(buf, dst);
        safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
        size = st.info->size;
        TGStream__ct((M2C_UNK *)((s32 *)&st), (M2C_UNK)(-1));
        return size;
    }
    read_sectors_sync__8TGStreamFPvii((M2C_UNK *)((s32 *)&st), (s32)(sectors), (s32)(dst));
    TGStream__ct((M2C_UNK *)((s32 *)&st), (M2C_UNK)(-1));
    return size;
}

}
