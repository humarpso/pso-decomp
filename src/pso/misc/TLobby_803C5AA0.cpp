#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Strm_803C8678;
struct StrmVt_803C8678 {
    void *pad[6];
    void (*read)(Strm_803C8678 *, s32, s32, void *);
    void (*release)(Strm_803C8678 *, s32, void *);
    void (*submit)(Strm_803C8678 *, s32, void *);
    s32 (*avail)(Strm_803C8678 *, s32);
};
struct Strm_803C8678 { StrmVt_803C8678 *vt; };
struct Pair_803C8678 { u32 a, b; };
struct S_803C8678 {
    u8 f0;
    s8 state;
    s8 busy;
    s8 retry;
    Strm_803C8678 *strm;
    u32 h;
    s32 fC;
    s32 base;
    s32 size;
    s32 f18;
    s32 f1C;
    s32 nread;
    s32 buf;
    s32 f28;
    s32 f2C;
    s32 end;
    s32 total;
    void (*cb)(s32);
    s32 cbarg;
};

struct Strm_803C9104;
struct Buf_803C9104 {
    void *ptr;
    s32 size;
};

struct Vt_803C9104 {
    u8 pad[0x18];
    void (*lock)(Strm_803C9104 *, s32, s32, Buf_803C9104 *);
    void (*unlock)(Strm_803C9104 *, s32, Buf_803C9104 *);
    void (*write)(Strm_803C9104 *, s32, Buf_803C9104 *);
};

struct Strm_803C9104 {
    Vt_803C9104 *vt;
};

struct Obj_803C9104 {
    u8 pad[0x14];
    Strm_803C9104 *strm;
};

struct S_803C8A14 {
    u8 f0;
    s8 state;
    u8 f2;
    s8 f3;
    u8 pad4[4];
    void *fp;
    s32 pos;
    s32 base;
    s32 f14;
    u8 pad18[0x34 - 0x18];
    s32 f34;
};

extern "C" {
s32 cv_fs_get_stat__6TLobbyFPv(u32);
s32 cv_fs_req_rd__6TLobbyFPvii(u32, s32, s32);
M2C_UNK TLobby__sub_803D3130(void *, s32, Pair_803C8678 *, Pair_803C8678 *);
extern s32 tlobby_stream_read_retry_limit;
extern s32 lbl_805D7558;
M2C_UNK TLobby__sub_803D3130(void *, s32, Pair_803C8678 *, Pair_803C8678 *);
M2C_UNK memset(void *, int, int);
s32 TLobby__sub_803C9104(Obj_803C9104 *arg0, s32 arg1, s32 arg2);
s32 cv_fs_tell__6TLobbyFPv(int);
s32 init_stream_position__6TLobbyFPv(S_803C8A14 *arg0);
}

struct RecoveredGlobal_803C90B0_lbl_80575140 {
    M2C_UNK value;
    u8 remaining[0x9FC];
};

struct RecoveredGlobal_803C6830_lbl_80573AC0 {
    M2C_UNK value;
    u8 remaining[0x167C];
};

struct RecoveredGlobal_803C6800_lbl_80573AC0 {
    M2C_UNK value;
    u8 remaining[0x167C];
};

typedef s32 M2C_UNK;
typedef struct S_803C6138 {
    u8 pad0[0x80];
    u8 *f80;
    u8 *f84;
} S_803C6138;

struct Ent_803C8BAC {
    s8 used;
    s8 b1;
    s8 b2;
    u8 pad3;
    s32 arg;
    u32 handle;
    s32 fC;
    s32 f10;
    s32 size;
    u8 pad18[0x14];
    s32 f2C;
    s32 sectors;
    u8 pad34[0xC];
};

struct Strm_803C5B50;
struct S_803C6138;
struct Buf_803C5B50 { void *data; s32 size; };

struct VT_803C5B50 {
    void *pad[3];
    void (*dtor)(Strm_803C5B50 *);
    void *pad10[2];
    void (*lock)(Strm_803C5B50 *, s32, s32, Buf_803C5B50 *);
    void (*unlock)(Strm_803C5B50 *, s32, Buf_803C5B50 *);
    void (*commit)(Strm_803C5B50 *, s32, Buf_803C5B50 *);
};

struct Strm_803C5B50 { VT_803C5B50 *vt; };

struct Obj_803C5B50 { u8 pad_0[0x14]; Strm_803C5B50 *f14; };

struct Strm_803C7C10;
struct Buf_803C7C10 { void *data; s32 size; };

struct VT_803C7C10 {
    void *pad[6];
    void (*lock)(Strm_803C7C10 *, s32, s32, Buf_803C7C10 *);
    void (*unlock)(Strm_803C7C10 *, s32, Buf_803C7C10 *);
    void (*commit)(Strm_803C7C10 *, s32, Buf_803C7C10 *);
};

struct Strm_803C7C10 { VT_803C7C10 *vt; };

struct Obj_803C7C10 {
    u8 pad_0[0xC]; Strm_803C7C10 *fc; u8 pad_10[0x58 - 0x10]; s32 f58; u8 pad_5c[0x290 - 0x5C];
    s16 f290[12]; u8 f2a8[1][16];
};

struct Strm_803C6860;
struct Buf_803C6860 { void *data; s32 size; };

struct VT_803C6860 {
    void *pad[6];
    void (*lock)(Strm_803C6860 *, s32, s32, Buf_803C6860 *);
    void (*unlock)(Strm_803C6860 *, s32, Buf_803C6860 *);
    void (*commit)(Strm_803C6860 *, s32, Buf_803C6860 *);
};

struct Strm_803C6860 { VT_803C6860 *vt; };

struct Obj_803C6860 {
    u8 pad_0[0x48];
    s32 f48;
    s32 f4c;
    s32 f50;
    s32 f54;
    s32 f58;
    s32 f5c;
    s32 f60;
    s32 f64;
    s32 f68;
    s32 f6c;
    s32 f70;
    s32 f74;
    s32 f78;
    s32 f7c;
    u8 pad_80[0x2C8 - 0x80];
    s16 f2c8;
    s16 f2ca;
    s16 f2cc;
    s16 f2ce;
};

struct Buf_803C7748 { void *data; s32 size; };
struct Strm_803C7748;
struct VT_803C7748 {
    void *pad[6];
    void (*lock)(Strm_803C7748 *, s32, s32, Buf_803C7748 *);
    void (*unlock)(Strm_803C7748 *, s32, Buf_803C7748 *);
    void (*commit)(Strm_803C7748 *, s32, Buf_803C7748 *);
    s32 (*avail)(Strm_803C7748 *, s32);
};
struct Strm_803C7748 { VT_803C7748 *vt; };
struct Obj_803C7748 {
    u8 pad_0[0xC]; Strm_803C7748 *fc; u8 pad_10[0x2C - 0x10]; s32 f2c; u8 pad_30[0x50 - 0x30];
    s32 f50; u8 pad_54[0x6C - 0x54]; s32 f6c;
};

extern "C" {
void release_ref__6TLobbyFv(void);
void init_once__6TLobbyFv(void);
void cvfs_stop_tr__6TLobbyFPv(void *);
void TLobby__sub_803C89C4(u8 *arg0);
s32 cv_fs_tell__6TLobbyFPv(int);
s32 get_file_offset_relative__6TLobbyFPv(u8 *arg0);
void release_ref__6TLobbyFv(void);
void init_once__6TLobbyFv(void);
void cvfs_stop_tr__6TLobbyFPv(void *);
void cv_fs_close__6TLobbyFPv(void *);
M2C_UNK memset(void *, int, int);
void TLobby__sub_803C8B38(u8 *arg0);
short TLobby__sub_803C8B2C(u8 *arg0);
M2C_UNK notify_error__6TLobbyFPv(void *);
void forward_notify_error__6TLobbyFii(M2C_UNK arg0, s32 arg1);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C90B0_lbl_80575140 lbl_80575140;
s32 clear_buffer_a00__6TLobbyFv(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C6830_lbl_80573AC0 lbl_80573AC0;
void clear_buffer_1680__6TLobbyFv(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C6830_lbl_80573AC0 lbl_80573AC0;
void clear_net_buffer_1680__6TLobbyFv(void);
void release_ref__6TLobbyFv(void);
void init_once__6TLobbyFv(void);
void TLobby__sub_803C9DB4(u8 *arg0);
void start_stream_playback__6TLobbyFPvi(struct Stream_803CA0C8 *self, s32 arg1);
void set_lsc_min__6TLobbyFPvi(void *, s32);
void reset_lsc_state__6TLobbyFPv(void *);
void TLobby__sub_803C5D24(u8 *arg0);
s32 write_zero_padded_block__6TLobbyFPv(void *);
s32 DVDLowRead(void *);
void TLobby__sub_803C6064(u8 *arg0);
s32 cv_fs_tell__6TLobbyFPv(int);
s32 TLobby__sub_803C85AC(u8 *arg0, s32 *arg1);
s32 check_packet_header_8001__6TLobbyFPviPv(u16 *p, s32 size, s32 *out);
void release_ref__6TLobbyFv(void);
void init_once__6TLobbyFv(void);
M2C_UNK memset(void *, int, int);
void TLobby__sub_803C6138(S_803C6138 *arg0);
s32 ARStartDMA(u8 *arg0, s32 arg1, s16 *arg2, u8 *arg3, s8 *arg4, s8 *arg5, u8 *arg6, s32 *arg7, s32 *arg8, s32 *arg9);
s32 DVDLowSeek(u16 *arg0, s32 arg1, s32 *arg2);
void report_adx_error__6TLobbyFPvi(const char *, const char *);
s32 TLobby__sub_803CEA14(void);
M2C_UNK cv_fs_seek__6TLobbyFPvii(int, int, int);
s32 cv_fs_tell__6TLobbyFPv(int);
u32 TLobby__sub_803CF2F4(const char *, int, int);
extern char lbl_8047C634[];
extern RecoveredGlobal_803C90B0_lbl_80575140 lbl_80575140;
extern s32 lbl_805D4668;
extern s32 lbl_805D7550;
Ent_803C8BAC *TLobby__sub_803C8BAC(const char *name, s32 arg);
void report_adx_error__6TLobbyFPvi(const char *, const char *);
s32 TLobby__sub_803CEA14(void);
M2C_UNK cv_fs_seek__6TLobbyFPvii(int, int, int);
s32 cv_fs_tell__6TLobbyFPv(int);
u32 TLobby__sub_803CF2F4(const char *, int, int);
s32 TLobby__sub_803CE568(void);
extern char lbl_8047C634[];
extern RecoveredGlobal_803C90B0_lbl_80575140 lbl_80575140;
extern s32 lbl_805D4670;
extern s32 lbl_805D466C;
Ent_803C8BAC *TLobby__sub_803C8CDC(const char *name, s32 mode, s32 arg);
void report_adx_error__6TLobbyFPvi(const char *, const char *);
M2C_UNK cv_fs_seek__6TLobbyFPvii(int, int, int);
s32 cv_fs_tell__6TLobbyFPv(int);
u32 TLobby__sub_803CF2F4(const char *, int, int);
extern char lbl_8047C600[];
extern RecoveredGlobal_803C90B0_lbl_80575140 lbl_80575140;
extern s32 lbl_805D4668;
extern s32 lbl_805D7550;
Ent_803C8BAC *adxstm_open_fname_range_ex_rt__6TLobbyFPviiii(const char *name, s32 mode, s32 off, s32 nsect, s32 arg);
void report_adx_error__6TLobbyFPvi(const char *, const char *);
M2C_UNK cv_fs_seek__6TLobbyFPvii(int, int, int);
s32 cv_fs_tell__6TLobbyFPv(int);
u32 TLobby__sub_803CF2F4(const char *, int, int);
extern char lbl_8047C660[];
extern RecoveredGlobal_803C90B0_lbl_80575140 lbl_80575140;
extern s32 lbl_805D4670;
extern s32 lbl_805D466C;
Ent_803C8BAC *adxstm_open_fname_range__6TLobbyFPviiii(const char *name, s32 mode, s32 off, s32 nsect, s32 arg);
void clear_buffer_1680__6TLobbyFv(void);
void clear_net_buffer_1680__6TLobbyFv(void);
void TLobby__sub_803C6138(S_803C6138 *arg0);
void TLobby__sub_803C60F0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK TLobby__sub_803C5E78();
void TLobby__sub_803C610C(u8 *arg0);
void TLobby__sub_803C6118(u8 *arg0);
u8 *TLobby__sub_803C61C4(s32, Strm_803C5B50 **, Strm_803C5B50 *);
Strm_803C5B50 *TLobby__sub_803D2C84(void *, s32, s32);
void *memcpy(void *, const void *, u32);
extern u8 lbl_80572BA0[];
extern u8 lbl_80572BE0[];
void TLobby__sub_803C5B50(Obj_803C5B50 *arg0, s32 arg1, s32 arg2, s32 arg3);
void *memcpy(void *, const void *, u32);
s32 TRKRequestSend(Obj_803C7C10 *arg0);
void format_number_pair__6TLobbyFiiPvi(s32, s32, char *, s32);
void report_adx_error__6TLobbyFPvi(const char *, const char *);
s32 get_afs_file_info__6TLobbyFiiPvPvPvPv(s32 arg0, s32 arg1, char *arg2, s32 *arg3, s32 *arg4, s32 *arg5);
void TLobby__sub_803D16BC(s32, char *, s32, s32, s32);
extern char lbl_8047C5D8[];
extern char lbl_80572FE0[];
void append_music_stream_segment(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TLobby__sub_803C5D00(u8 *arg0);
void TLobby__sub_803C5E58(void);
void TLobby__sub_803C5E68(void);
void TLobby__sub_803C60F0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void TLobby__sub_803C610C(u8 *arg0);
void TLobby__sub_803C6118(u8 *arg0);
void TLobby__sub_803C8514(u8 *arg0, s32 arg1);
s32 TLobby__sub_803C8578(u8 *arg0, s32 arg1);
s32 TLobby__sub_803C8594(u8 *arg0, s32 *arg1, s32 *arg2);
s32 ar_alloc__6TLobbyFv(void);
s32 get_field_14__6TLobbyFPv(u8 *arg0);
s32 get_state_zero__6TLobbyFv(void);
void on_set_mode__6TLobbyFv(void);
s32 process_connection_state__6TLobbyFv(void);
void set_buffer__6TLobbyFPvPv(u8 *arg0, void **arg1);
void set_coords__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);
void set_field_10_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_range__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 set_scroll_offset__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_scroll_position__6TLobbyFPvi(u8 *arg0, s32 arg1);
void si_get_type_async__6TLobbyFv(void);
M2C_UNK ARAlloc();
M2C_UNK SIGetTypeAsync();
void TLobby__sub_803C9608(void);
s32 TLobby__sub_803CB844();
void TLobby__sub_803CBA38(void);
M2C_UNK TLobby__sub_803CE240();
M2C_UNK cv_fs_seek__6TLobbyFPvii(int, int, int);
s32 cv_fs_tell__6TLobbyFPv(int);
M2C_UNK TLobby__sub_803D13C0(int);
M2C_UNK poll_active_connections__6TLobbyFv();
M2C_UNK set_global_805D7520__6TLobbyFi();

s32 ar_alloc__6TLobbyFv(void) {
    ARAlloc();
    return 0;
}

s32 get_state_zero__6TLobbyFv(void) {
    TLobby__sub_803C9608();
    return 0;
}

s32 process_connection_state__6TLobbyFv(void) {
    if (TLobby__sub_803CB844() == 1) {
        poll_active_connections__6TLobbyFv();
        TLobby__sub_803CE240();
    } else {
        TLobby__sub_803CBA38();
        poll_active_connections__6TLobbyFv();
        TLobby__sub_803CE240();
    }
    return 0;
}

void forward_notify_error__6TLobbyFii(M2C_UNK arg0, s32 arg1) {
    notify_error__6TLobbyFPv((void *) (arg1));
}

void TLobby__sub_803C5B50(Obj_803C5B50 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    Strm_803C5B50 *arr[2];
    Buf_803C5B50 b1;
    Buf_803C5B50 b2;
    Strm_803C5B50 *src;
    Strm_803C5B50 *dst;
    u8 *ctx;
    clear_buffer_1680__6TLobbyFv();
    src = TLobby__sub_803D2C84(lbl_80572BE0, 0x400, 0);
    arr[0] = TLobby__sub_803D2C84(lbl_80572BA0, 0x400, 0);
    arr[1] = TLobby__sub_803D2C84(lbl_80572BA0 + 0x20, 0x400, 0);
    dst = arg0->f14;
    ctx = TLobby__sub_803C61C4(2, arr, src);
    TLobby__sub_803C60F0(ctx, arg1, arg2, arg3);
    TLobby__sub_803C6118(ctx);
    TLobby__sub_803C5E78();
    src->vt->lock(src, 1, 0x400, &b1);
    if (b1.size == 0) {
        for (;;) {
        }
    }
    dst->vt->lock(dst, 0, b1.size, &b2);
    if (b2.size < b1.size) {
        for (;;) {
        }
    }
    memcpy(b2.data, b1.data, b1.size);
    src->vt->commit(src, 0, &b1);
    dst->vt->commit(dst, 1, &b2);
    TLobby__sub_803C610C(ctx);
    TLobby__sub_803C6138((S_803C6138 *)ctx);
    src->vt->dtor(src);
    arr[1]->vt->dtor(arr[1]);
    arr[0]->vt->dtor(arr[0]);
    clear_net_buffer_1680__6TLobbyFv();
}

void TLobby__sub_803C5D00(u8 *arg0) {
    TLobby__sub_803D13C0((int) (M2C_FIELD(arg0, s32 *, 0x94)));
}

extern s32 lbl_805D7548;

void TLobby__sub_803C5D24(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[2]; s8 field_2; u8 pad_3[13]; s32 field_10; void ** field_14; u8 pad_18[38]; s16 field_3E; u8 pad_40[84]; u8 * field_94; s8 field_98; };
    void **temp_r3;
    u8 *temp_r31;
    u8 *temp_r4;
    temp_r31 = (u8 *)(((Fields_arg0*)arg0)->field_94);
    TLobby__sub_803C9DB4(arg0);
    init_once__6TLobbyFv();
    start_stream_playback__6TLobbyFPvi((struct Stream_803CA0C8 *)arg0, ((Fields_arg0*)arg0)->field_10);
    temp_r3 = (void **)(((Fields_arg0*)arg0)->field_14);
    temp_r4 = (u8 *)(*temp_r3);
    M2C_FIELD(temp_r4, M2C_UNK (**)(void **, void *), 0x14)(temp_r3, temp_r4);
    ((Fields_arg0*)arg0)->field_2 = 4;
    set_lsc_min__6TLobbyFPvi(temp_r31, ((Fields_arg0*)arg0)->field_3E << 0xB);
    reset_lsc_state__6TLobbyFPv(temp_r31);
    ((Fields_arg0*)arg0)->field_98 = 1;
    release_ref__6TLobbyFv();
}

void append_music_stream_segment(u8 *arg0, s32 arg1, s32 arg2) {
    char buf[16];
    s32 a;
    s32 b;
    s32 c;
    s32 h;
    h = *(s32 *)(arg0 + 0x94);
    if (get_afs_file_info__6TLobbyFiiPvPvPvPv(arg1, arg2, lbl_80572FE0, &a, &b, &c) == 0) {
        TLobby__sub_803D16BC(h, lbl_80572FE0, a, b, c);
        return;
    }
    format_number_pair__6TLobbyFiiPvi(arg1, arg2, buf, 0x10);
    report_adx_error__6TLobbyFPvi(lbl_8047C5D8, buf);
}

void TLobby__sub_803C5E58(void) {
    lbl_805D7548 -= 1;
}

extern s32 lbl_805D7548;

void TLobby__sub_803C5E68(void) {
    lbl_805D7548 += 1;
}

void TLobby__sub_803C6064(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[1]; s8 field_1; u8 pad_2[1]; u8 field_3; u8 pad_4[40]; s32 field_2C; s32 field_30; u8 pad_34[8]; s32 field_3C; };
    s32 temp_r3;
loop_1:
    if ((s8) ((Fields_arg0*)arg0)->field_3 == 0) {
loop_2:
        temp_r3 = DVDLowRead(arg0);
        if (temp_r3 != 0) {
            ((Fields_arg0*)arg0)->field_2C = (s32) (((Fields_arg0*)arg0)->field_2C + temp_r3);
            if ((s32) ((Fields_arg0*)arg0)->field_30 >= (s32) ((Fields_arg0*)arg0)->field_3C) {
                ((Fields_arg0*)arg0)->field_3 = 1U;
                goto loop_1;
            }
            goto loop_2;
        }
    } else if (write_zero_padded_block__6TLobbyFPv(arg0) > 0) {
        ((Fields_arg0*)arg0)->field_1 = 3;
    }
}

void TLobby__sub_803C60F0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x60) = arg3;
    M2C_FIELD(arg0, s32 *, 0x48) = 0x11C;
}

void TLobby__sub_803C610C(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 3) = 1;
}

void TLobby__sub_803C6118(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 1;
}

typedef char RecoveredGlobal_803C6830_lbl_80573AC0_size[sizeof(RecoveredGlobal_803C6830_lbl_80573AC0) == 0x1680 ? 1 : -1];

typedef char RecoveredGlobal_803C6800_lbl_80573AC0_size[sizeof(RecoveredGlobal_803C6800_lbl_80573AC0) == 0x1680 ? 1 : -1];

void TLobby__sub_803C6138(S_803C6138 *arg0) {
    u8 *p;
    if (arg0 != NULL) {
        init_once__6TLobbyFv();
        p = arg0->f80;
        if (p != NULL && p != NULL) {
            *p = 0;
            memset(p, 0, 0x90);
        }
        p = arg0->f84;
        if (p != NULL && p != NULL) {
            *p = 0;
            memset(p, 0, 0x90);
        }
        memset(arg0, 0, 4);
        release_ref__6TLobbyFv();
    }
}

void clear_net_buffer_1680__6TLobbyFv(void) {
    memset((void *) (&(*(RecoveredGlobal_803C6800_lbl_80573AC0 *)&lbl_80573AC0).value), (int) (0), (int) (0x1680));
}

void clear_buffer_1680__6TLobbyFv(void) {
    memset((void *) (&lbl_80573AC0.value), (int) (0), (int) (0x1680));
}

u32 strlen(const char *);
extern char *lbl_805D4664;

#pragma push
#pragma opt_propagation off
#pragma dont_inline off
#pragma inline_depth(4)

inline s32 put8_803C6860(Strm_803C6860 *s, const void *v) {
    Buf_803C6860 b;
    s->vt->lock(s, 0, 1, &b);
    if (b.size < 1) {
        s->vt->unlock(s, 0, &b);
        return 0;
    }
    memcpy(b.data, v, 1);
    s->vt->commit(s, 1, &b);
    return 1;
}

inline s32 put16_803C6860(Strm_803C6860 *s, const void *v) {
    Buf_803C6860 b;
    s->vt->lock(s, 0, 2, &b);
    if (b.size < 2) {
        s->vt->unlock(s, 0, &b);
        return 0;
    }
    s16 *d = (s16 *)b.data;
    *d = *(const s16 *)v;
    s->vt->commit(s, 1, &b);
    return 1;
}

inline s32 put32_803C6860(Strm_803C6860 *s, const void *v) {
    Buf_803C6860 b;
    s->vt->lock(s, 0, 4, &b);
    if (b.size < 4) {
        s->vt->unlock(s, 0, &b);
        return 0;
    }
    s32 *d = (s32 *)b.data;
    *d = *(const s32 *)v;
    s->vt->commit(s, 1, &b);
    return 1;
}

inline s32 putn_803C6860(Strm_803C6860 *s, void *src, s32 n) {
    Buf_803C6860 b;
    s->vt->lock(s, 0, n, &b);
    if (b.size < n) {
        s->vt->unlock(s, 0, &b);
        return 0;
    }
    memcpy(b.data, src, (u16)n);
    s->vt->commit(s, 1, &b);
    return n;
}

s32 write_adx_header__6TLobbyFPvPv(Obj_803C6860 *o, Strm_803C6860 *s) {
    u8 c;
    u16 h;
    u16 h2;
    s32 w;
    s32 len;
    s32 total;
    s32 i;
    s32 lim;

    len = strlen(lbl_805D4664);
    h = 0x8000;
    if (put16_803C6860(s, &h) != 1) {
        goto fail;
    }
    h2 = o->f48;
    if (put16_803C6860(s, &h2) != 1) {
        goto fail;
    }
    c = o->f4c;
    if (put8_803C6860(s, &c) != 1) {
        goto fail;
    }
    c = o->f50;
    if (put8_803C6860(s, &c) != 1) {
        goto fail;
    }
    c = o->f54;
    if (put8_803C6860(s, &c) != 1) {
        goto fail;
    }
    c = o->f58;
    if (put8_803C6860(s, &c) != 1) {
        goto fail;
    }
    w = o->f5c;
    if (put32_803C6860(s, &w) != 1) {
        goto fail;
    }
    w = o->f60;
    if (put32_803C6860(s, &w) != 1) {
        goto fail;
    }
    h = o->f64;
    if (put16_803C6860(s, &h) != 1) {
        goto fail;
    }
    c = 4;
    if (put8_803C6860(s, &c) != 1) {
        goto fail;
    }
    c = 0;
    if (put8_803C6860(s, &c) != 1) {
        goto fail;
    }
    w = 0;
    if (put32_803C6860(s, &w) != 1) {
        goto fail;
    }
    h = o->f2c8;
    if (put16_803C6860(s, &h) != 1) {
        goto fail;
    }
    h = o->f2cc;
    if (put16_803C6860(s, &h) != 1) {
        goto fail;
    }
    h = o->f2ca;
    if (put16_803C6860(s, &h) != 1) {
        goto fail;
    }
    h = o->f2ce;
    if (put16_803C6860(s, &h) != 1) {
        goto fail;
    }
    total = 0x1C;
    if (o->f6c > 0) {
        h = o->f68;
        if (put16_803C6860(s, &h) != 1) {
            goto fail;
        }
        h = o->f6c;
        if (put16_803C6860(s, &h) != 1) {
            goto fail;
        }
        total += 4;
        for (i = 0; i < o->f6c; i++) {
            h = i;
            if (put16_803C6860(s, &h) != 1) {
                goto fail;
            }
            h = 1;
            if (put16_803C6860(s, &h) != 1) {
                goto fail;
            }
            w = o->f70;
            if (put32_803C6860(s, &w) != 1) {
                goto fail;
            }
            w = o->f74;
            if (put32_803C6860(s, &w) != 1) {
                goto fail;
            }
            w = o->f78;
            if (put32_803C6860(s, &w) != 1) {
                goto fail;
            }
            w = o->f7c;
            if (put32_803C6860(s, &w) != 1) {
                goto fail;
            }
            total += 0x14;
        }
    }
    c = 0;
    lim = o->f48 - len;
    for (; total < lim; total++) {
        if (put8_803C6860(s, &c) != 1) {
            goto fail;
        }
    }
    if (putn_803C6860(s, lbl_805D4664, len) != len) {
        goto fail;
    }
    total += len;
    return total + 4;
fail:
    return 0;
}

#pragma pop

#pragma push
#pragma opt_propagation off
#pragma inline_depth(4)
#pragma dont_inline off
inline void put16_803C7748(Strm_803C7748 *s, const void *src) {
    Buf_803C7748 b;
    s->vt->lock(s, 0, 2, &b);
    if (b.size < 2) {
        s->vt->unlock(s, 0, &b);
    } else {
        s16 *d = (s16 *)b.data;
        *d = *(const s16 *)src;
        s->vt->commit(s, 1, &b);
    }
}

inline void put_803C7748(Strm_803C7748 *s, void *src, s32 n) {
    Buf_803C7748 b;
    s->vt->lock(s, 0, n, &b);
    if (b.size < n) {
        s->vt->unlock(s, 0, &b);
    } else {
        memcpy(b.data, src, n);
        s->vt->commit(s, 1, &b);
    }
}

#define arg0 ((Obj_803C7748 *)arg0p)
s32 write_zero_padded_block__6TLobbyFPv(void *arg0p) {
    s32 len;
    s32 n;
    s32 i;
    u16 w;
    u8 zero;
    Strm_803C7748 *s = arg0->fc;
    s32 off = arg0->f2c;

    if (arg0->f6c <= 0) {
        n = arg0->f50;
    } else {
        n = (((off + arg0->f50 + 0x7FF) / 2048) << 11) - off;
    }
    len = n - 4;
    if (s->vt->avail(s, 0) < n) {
        return 0;
    }
    w = 0x8001;
    put16_803C7748(s, &w);
    w = len;
    put16_803C7748(s, &w);
    zero = 0;
    for (i = 0; i < len; i++) {
        put_803C7748(s, &zero, 1);
    }
    return n;
}
#undef arg0
#pragma pop

#pragma push
#pragma inline_depth(4)
#pragma dont_inline off
inline void put_803C7C10(Strm_803C7C10 *s, void *src, s32 n) {
    Buf_803C7C10 b;
    s->vt->lock(s, 0, n, &b);
    if (b.size < n) {
        s->vt->unlock(s, 0, &b);
    } else {
        memcpy(b.data, src, n);
        s->vt->commit(s, 1, &b);
    }
}
s32 TRKRequestSend(Obj_803C7C10 *arg0) {
    s32 i;
    s32 total;
    u8 c;
    Strm_803C7C10 *s = arg0->fc;
    i = 0;
    total = 0;
    for (; i < arg0->f58; i++) {
        s16 v = arg0->f290[i] - 1;
        c = v >> 8;
        put_803C7C10(s, &c, 1);
        c = v;
        put_803C7C10(s, &c, 1);
        put_803C7C10(s, arg0->f2a8[i], 16);
        total += 0x12;
    }
    return total;
}
#pragma pop

void set_field_10_and_notify__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    cv_fs_seek__6TLobbyFPvii((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10)), (int) (0));
    cv_fs_tell__6TLobbyFPv((int)((int) (M2C_FIELD(arg0, s32 *, 8))));
}

void TLobby__sub_803C8514(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg1 << 0xB);
}

void set_buffer__6TLobbyFPvPv(u8 *arg0, void **arg1) {
    s32 temp_r3;
    u8 *temp_r5;

    M2C_FIELD(arg0, void ***, 4) = arg1;
    temp_r5 = (unsigned char *) (*arg1);
    temp_r3 = M2C_FIELD(temp_r5, s32 (**)(void **, M2C_UNK, void *), 0x24)(arg1, 0, temp_r5);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r3;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3;
}

s32 get_field_14__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 TLobby__sub_803C8578(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    return 1;
}

s32 set_range__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    return 1;
}

s32 TLobby__sub_803C8594(u8 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x1C);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x18);
    return 1;
}

s32 TLobby__sub_803C85AC(u8 *arg0, s32 *arg1) {
    struct Fields_arg0 { u8 pad_0[8]; u8 * field_8; s32 field_C; s32 field_10; };
    s32 var_r4;
    u8 *temp_r3;
    temp_r3 = (u8 *)(((Fields_arg0*)arg0)->field_8);
    if (temp_r3 != NULL) {
        var_r4 = cv_fs_tell__6TLobbyFPv((int)(temp_r3)) - ((Fields_arg0*)arg0)->field_10;
    } else {
        var_r4 = 0;
    }
    *arg1 = var_r4 - ((Fields_arg0*)arg0)->field_C;
    return 1;
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline s32 pos_803C8678(S_803C8678 *s) {
    if (s->h != 0) {
        return cv_fs_tell__6TLobbyFPv(s->h) - s->base;
    }
    return 0;
}

void update_stream_read__6TLobbyFPv(S_803C8678 *s) {
    Pair_803C8678 a;
    Pair_803C8678 b;
    Strm_803C8678 *st = s->strm;
    s32 n;
    s32 m;
    s32 r;

    if (s->busy == 1) {
        r = cv_fs_get_stat__6TLobbyFPv(s->h);
        if (r == 1) {
            n = s->nread << 11;
            TLobby__sub_803D3130(&s->buf, n, &a, &b);
            st->vt->submit(st, 1, &a);
            st->vt->release(st, 0, &b);
            if (s->end == pos_803C8678(s) && s->cb != NULL) {
                s->cb(s->cbarg);
            }
            s->total += n;
            s->busy = 0;
            if (pos_803C8678(s) >= (s->size + 0x7FF) / 2048) {
                s->state = 3;
            }
            s->retry = 0;
        } else if (r == 3) {
            st->vt->release(st, 0, &s->buf);
            if (tlobby_stream_read_retry_limit >= 0) {
                if (s->retry >= tlobby_stream_read_retry_limit) {
                    s->state = 4;
                } else {
                    s->retry++;
                }
            }
            s->busy = 0;
        }
    }
    if (s->busy == 0) {
        if (st == NULL || st->vt == NULL) {
            lbl_805D7558++;
            return;
        }
        if (st->vt->avail(st, 1) < s->f1C) {
            s32 e;
            s32 c;
            st->vt->read(st, 0, s->f18, &s->buf);
            e = s->end;
            n = s->f28 / 2048;
            m = e - pos_803C8678(s);
            if (n < m) {
                m = n;
            }
            c = s->f2C;
            if (m < c) {
                c = m;
            }
            if (c == 0) {
                st->vt->release(st, 0, &s->buf);
                return;
            }
            s->nread = cv_fs_req_rd__6TLobbyFPvii(s->h, c, s->buf);
            if (s->nread <= 0) {
                st->vt->release(st, 0, &s->buf);
                if (cv_fs_get_stat__6TLobbyFPv(s->h) == 3 && tlobby_stream_read_retry_limit >= 0) {
                    if (s->retry >= tlobby_stream_read_retry_limit) {
                        s->state = 4;
                    } else {
                        s->retry++;
                    }
                }
            } else {
                s->busy = 1;
            }
        }
    }
}
#pragma pop

void set_scroll_position__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x14) + 0x7FF) / 2048);
}

void set_coords__6TLobbyFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
}

void TLobby__sub_803C89C4(u8 *arg0) {
    u8 *temp_r3;
    M2C_FIELD(arg0, s8 *, 1) = 1;
    init_once__6TLobbyFv();
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
    if (temp_r3 != NULL) {
        cvfs_stop_tr__6TLobbyFPv(temp_r3);
        M2C_FIELD(arg0, s8 *, 2) = 0;
    }
    release_ref__6TLobbyFv();
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline s32 get_pos_803C8A14(S_803C8A14 *s) {
    if (s->fp != NULL) {
        return cv_fs_tell__6TLobbyFPv((int)s->fp) - s->base;
    }
    return 0;
}
s32 init_stream_position__6TLobbyFPv(S_803C8A14 *arg0) {
    if (arg0->f14 == 0) {
        arg0->f34 = 0;
        arg0->pos = 0;
        arg0->state = 3;
    } else {
        arg0->state = 2;
        arg0->f34 = 0;
        arg0->pos = get_pos_803C8A14(arg0);
        arg0->f3 = 0;
    }
    return 1;
}
#pragma pop

s32 get_file_offset_relative__6TLobbyFPv(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
    if (temp_r3 != NULL) {
        return cv_fs_tell__6TLobbyFPv((int)(temp_r3)) - M2C_FIELD(arg0, s32 *, 0x10);
    }
    return 0;
}

s32 set_scroll_offset__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    cv_fs_seek__6TLobbyFPvii((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10) + arg1), (int) (0));
    return cv_fs_tell__6TLobbyFPv((int)((int) (M2C_FIELD(arg0, s32 *, 8)))) - M2C_FIELD(arg0, s32 *, 0x10);
}

short TLobby__sub_803C8B2C(u8 *arg0) {
  u8 *new_var;
  s8 *new_var2;
  new_var = arg0;
  new_var2 = ((s8 *) new_var) + 1;
  return *new_var2;
}

void TLobby__sub_803C8B38(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 1) = 1;
        init_once__6TLobbyFv();
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
        if (temp_r3 != NULL) {
            cvfs_stop_tr__6TLobbyFPv(temp_r3);
            M2C_FIELD(arg0, s8 *, 2) = 0;
        }
        release_ref__6TLobbyFv();
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
        if (temp_r3_2 != NULL) {
            cv_fs_close__6TLobbyFPv(temp_r3_2);
        }
        memset((void *) (arg0), (int) (0), (int) (0x40));
    }
}

#pragma dont_inline off
#pragma inline_depth(4)
inline Ent_803C8BAC *alloc_803C8BAC(s32 arg, u32 h, s32 size) {
    Ent_803C8BAC *p = NULL;
    s32 i;
    for (i = 0; i < lbl_805D4668; i++) {
        p = &((Ent_803C8BAC *)&lbl_80575140)[lbl_805D7550 + i];
        if (p->used == 0) {
            break;
        }
    }
    if (i == lbl_805D4668) {
        return NULL;
    }
    p->b1 = 1;
    p->b2 = 0;
    p->arg = arg;
    p->handle = h;
    p->fC = 0;
    p->f10 = 0;
    p->size = size;
    p->f2C = 0x200;
    p->sectors = (p->size + 0x7FF) / 2048;
    p->used = 1;
    return p;
}
Ent_803C8BAC *TLobby__sub_803C8BAC(const char *name, s32 arg) {
    s32 size;
    u32 h;
    Ent_803C8BAC *p;
    size = TLobby__sub_803CEA14();
    h = TLobby__sub_803CF2F4(name, 0, 0);
    if (h == 0) {
        report_adx_error__6TLobbyFPvi(lbl_8047C634, name);
        return NULL;
    }
    p = alloc_803C8BAC(arg, h, size);
    if (p != NULL) {
        cv_fs_seek__6TLobbyFPvii(p->handle, p->f10, 0);
        cv_fs_tell__6TLobbyFPv(p->handle);
    }
    return p;
}

#pragma dont_inline off
#pragma inline_depth(4)
inline Ent_803C8BAC *alloc_803C8CDC(s32 arg, u32 h, s32 f10, s32 size) {
    Ent_803C8BAC *p = NULL;
    s32 i;
    for (i = 0; i < lbl_805D4670; i++) {
        p = &((Ent_803C8BAC *)&lbl_80575140)[lbl_805D466C + i];
        if (p->used == 0) {
            break;
        }
    }
    if (i == lbl_805D4670) {
        return NULL;
    }
    p->b1 = 1;
    p->b2 = 0;
    p->arg = arg;
    p->handle = h;
    p->fC = 0;
    p->f10 = f10;
    p->size = size;
    p->f2C = 0x200;
    p->sectors = (p->size + 0x7FF) / 2048;
    p->used = 1;
    return p;
}
Ent_803C8BAC *TLobby__sub_803C8CDC(const char *name, s32 mode, s32 arg) {
    s32 size;
    u32 h;
    Ent_803C8BAC *p;
    if (mode == 0) {
        size = TLobby__sub_803CEA14();
    } else {
        size = TLobby__sub_803CE568();
    }
    h = TLobby__sub_803CF2F4((const char *)(name), (int)(mode), (int)(0));
    if (h == 0) {
        report_adx_error__6TLobbyFPvi(lbl_8047C634, name);
        return NULL;
    }
    p = alloc_803C8CDC(arg, h, 0, size);
    if (p != NULL) {
        cv_fs_seek__6TLobbyFPvii(p->handle, p->f10, 0);
        cv_fs_tell__6TLobbyFPv(p->handle);
    }
    return p;
}

#pragma dont_inline off
#pragma inline_depth(4)
inline Ent_803C8BAC *alloc_803C8E28(s32 arg, u32 h, s32 f10, s32 size) {
    Ent_803C8BAC *p = NULL;
    s32 i;
    for (i = 0; i < lbl_805D4668; i++) {
        p = &((Ent_803C8BAC *)&lbl_80575140)[lbl_805D7550 + i];
        if (p->used == 0) {
            break;
        }
    }
    if (i == lbl_805D4668) {
        return NULL;
    }
    p->b1 = 1;
    p->b2 = 0;
    p->arg = arg;
    p->handle = h;
    p->fC = 0;
    p->f10 = f10;
    p->size = size;
    p->f2C = 0x200;
    p->sectors = (p->size + 0x7FF) / 2048;
    p->used = 1;
    return p;
}
Ent_803C8BAC *adxstm_open_fname_range_ex_rt__6TLobbyFPviiii(const char *name, s32 mode, s32 off, s32 nsect, s32 arg) {
    u32 h;
    Ent_803C8BAC *p;
    h = TLobby__sub_803CF2F4((const char *)(name), (int)(mode), (int)(0));
    if (h == 0) {
        report_adx_error__6TLobbyFPvi(lbl_8047C600, name);
        return NULL;
    }
    p = alloc_803C8E28(arg, h, off, nsect << 11);
    if (p != NULL) {
        cv_fs_seek__6TLobbyFPvii(p->handle, p->f10, 0);
        cv_fs_tell__6TLobbyFPv(p->handle);
    }
    return p;
}

#pragma dont_inline off
#pragma inline_depth(4)
inline Ent_803C8BAC *alloc_803C8F5C(s32 arg, u32 h, s32 f10, s32 size) {
    Ent_803C8BAC *p = NULL;
    s32 i;
    for (i = 0; i < lbl_805D4670; i++) {
        p = &((Ent_803C8BAC *)&lbl_80575140)[lbl_805D466C + i];
        if (p->used == 0) {
            break;
        }
    }
    if (i == lbl_805D4670) {
        return NULL;
    }
    p->b1 = 1;
    p->b2 = 0;
    p->arg = arg;
    p->handle = h;
    p->fC = 0;
    p->f10 = f10;
    p->size = size;
    p->f2C = 0x200;
    p->sectors = (p->size + 0x7FF) / 2048;
    p->used = 1;
    return p;
}
Ent_803C8BAC *adxstm_open_fname_range__6TLobbyFPviiii(const char *name, s32 mode, s32 off, s32 nsect, s32 arg) {
    u32 h;
    Ent_803C8BAC *p;
    h = TLobby__sub_803CF2F4((const char *)(name), (int)(mode), (int)(0));
    if (h == 0) {
        report_adx_error__6TLobbyFPvi(lbl_8047C660, name);
        return NULL;
    }
    p = alloc_803C8F5C(arg, h, off, nsect << 11);
    if (p != NULL) {
        cv_fs_seek__6TLobbyFPvii(p->handle, p->f10, 0);
        cv_fs_tell__6TLobbyFPv(p->handle);
    }
    return p;
}

void si_get_type_async__6TLobbyFv(void) {
    SIGetTypeAsync();
}

typedef char RecoveredGlobal_803C90B0_lbl_80575140_size[sizeof(RecoveredGlobal_803C90B0_lbl_80575140) == 0xA00 ? 1 : -1];
s32 clear_buffer_a00__6TLobbyFv(void) {
    memset((void *) (&lbl_80575140.value), (int) (0), (int) (0xA00));
    return 1;
}

void on_set_mode__6TLobbyFv(void) {
    set_global_805D7520__6TLobbyFi();
}

s32 TLobby__sub_803C9104(Obj_803C9104 *arg0, s32 arg1, s32 arg2) {
    s32 blk;
    s32 total;
    Strm_803C9104 *s;
    s32 n1;
    s32 n2;
    Buf_803C9104 a;
    Buf_803C9104 b;
    void *p = arg0->strm;
    s = (Strm_803C9104 *)p;
    if (p == NULL) {
        return 0;
    }
    blk = arg1 * 0x12;
    total = (arg2 / 32) * blk;
    s->vt->lock(s, 0, total, &a);
    n1 = blk * (a.size / blk);
    memset(a.ptr, 0, n1);
    TLobby__sub_803D3130(&a, n1, (Pair_803C8678 *)&a, (Pair_803C8678 *)&b);
    s->vt->write(s, 1, &a);
    s->vt->unlock(s, 0, &b);
    total = total - n1;
    s->vt->lock(s, 0, total, &a);
    n2 = blk * (a.size / blk);
    memset(a.ptr, 0, n2);
    TLobby__sub_803D3130(&a, n2, (Pair_803C8678 *)&a, (Pair_803C8678 *)&b);
    s->vt->write(s, 1, &a);
    s->vt->unlock(s, 0, &b);
    return ((n1 + n2) / blk) * 32;
}

s32 check_packet_header_8001__6TLobbyFPviPv(u16 *p, s32 size, s32 *out) {
    if (size < 2) {
        return 0;
    }
    if (*p != 0x8001) {
        return 0;
    }
    *out = size;
    return 1;
}
s32 DVDLowSeek(u16 *arg0, s32 arg1, s32 *arg2) {
    s32 a7;
    s32 a8;
    s32 a9;
    s16 len;
    u8 b3;
    s8 b4;
    s8 b5;
    u8 b6;
    if (arg1 < 2) {
        return 0;
    }
    if (*arg0 != 0x8000) {
        return 0;
    }
    if (ARStartDMA((u8 *)arg0, arg1, &len, &b3, &b4, &b5, &b6, &a7, &a8, &a9) < 0) {
        return 0;
    }
    *arg2 = len;
    return 1;
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VObj0 { virtual void m0(); virtual void m1(); };

struct VBase { char pad[0]; };

struct VObj { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); };

struct Ch_803CB5C4 {
    s32 used;
    s32 id;
    s32 f8;
    s32 fC;
    u8 pad10[0x18];
    u8 f28[8];
    s16 c0;
    s16 c1;
};
struct RecoveredGlobal_800F8A78_lbl_80501178 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct VT_803C9FCC { u8 pad[0x14]; void (*update)(void *self); };

struct Part_803C9FCC { VT_803C9FCC *vt; };

struct Stream_803C9FCC {
    u8 f0;
    u8 active;
    u8 f2;
    s8 count;
    void *f4;
    void *f8;
    u8 padc[0x10 - 0xC];
    s32 f10;
    s32 f14;
    Part_803C9FCC *parts[9];
    s16 f3c;
    s16 f3e;
    u8 pad40[0x4C - 0x40];
    s32 f4c;
    u8 pad50[0x71 - 0x50];
    u8 f71;
    u8 pad72[0x8C - 0x72];
    s32 f8c;
    s32 f90;
    u8 pad94[0x9C - 0x94];
    s32 f9c;
    s32 fa0;
    s32 fa4;
};

struct Stream_803CA824 {
    u8 f0;
    u8 state;
    u8 pad2[0x8 - 0x2];
    void *handle;
    u8 padc[0x10 - 0xC];
    s32 f10;
    u8 pad14[0x60 - 0x14];
    s16 f60;
    u8 pad62[0x98 - 0x62];
    u8 f98;
};

struct Obj_803C96E0 { u8 pad[0x42]; s16 vals[1]; };

typedef s32 M2C_UNK;
struct S_803C96F0 { u8 pad0[3]; s8 count; u8 pad4[8]; void *p; u8 pad10[0x32]; s16 vals[1]; };

typedef struct Ent_803C9608 {
    char state;
    u8 pad[0xA7];
} Ent_803C9608;

typedef struct Ent_803CA774 {
    s32 off;
    s32 len;
} Ent_803CA774;

typedef struct Cb_803CBA58 {
    void (*fn)(s32);
    s32 arg;
} Cb_803CBA58;

typedef struct Cfg_803CBA58 {
    u8 pad0[0x10];
    s32 prio;
} Cfg_803CBA58;

struct VT_803CA0C8 { u8 pad[0x14]; void (*update)(void *self); };

struct Part_803CA0C8 { VT_803CA0C8 *vt; };

struct Stream_803CA0C8 {
    u8 f0;
    u8 active;
    u8 f2;
    s8 count;
    void *f4;
    void *f8;
    u8 padc[0x10 - 0xC];
    s32 f10;
    s32 f14;
    Part_803CA0C8 *parts[9];
    s16 f3c;
    s16 f3e;
    u8 pad40[0x4C - 0x40];
    s32 f4c;
    u8 pad50[0x71 - 0x50];
    u8 f71;
    u8 pad72[0x8C - 0x72];
    s32 f8c;
    s32 f90;
    u8 pad94[0x9C - 0x94];
    s32 f9c;
    s32 fa0;
    s32 fa4;
};

typedef struct Cfg_803CBBD8 {
    s32 prio0;
    u8 pad4[0xC];
    s32 prio;
} Cfg_803CBBD8;

struct VObj_803C9E38;
struct VT_803C9E38 {
    void *pad[3];
    void (*fc)(VObj_803C9E38 *);
    void *pad10;
    void (*f14)(VObj_803C9E38 *);
};

struct VObj_803C9E38 { VT_803C9E38 *vt; };

struct Obj_803C9E38 {
    u8 f0; s8 f1; u8 f2; s8 f3; void *f4; void *f8; s32 fc; u8 pad_10[4];
    VObj_803C9E38 *f14; VObj_803C9E38 *objs[13]; s32 f4c; u8 pad_50[0x94 - 0x50];
    s32 f94; s8 f98; u8 pad_99[3]; s32 f9c; s32 fa0;
};

struct VObj_803CA194;
typedef void (*RecoveredCallback_2be3cacebb2e)(void);
struct VT_803CA194 {
    void *pad[3];
    void (*fc)(VObj_803CA194 *);
    void *pad10;
    void (*f14)(VObj_803CA194 *);
};

struct VObj_803CA194 { VT_803CA194 *vt; };

struct Obj_803CA194 {
    u8 f0; s8 f1; u8 f2; s8 f3; void *f4; void *f8; void *fc; VObj_803CA194 *f10;
    VObj_803CA194 *f14; VObj_803CA194 *objs[23]; void *f74; VObj_803CA194 *objs2[2]; VObj_803CA194 *objs3[4]; u8 pad_90[4];
    void *f94; s8 f98; u8 pad_99[3]; s32 f9c; s32 fa0;
};

struct Obj_803CA194;
struct Ch_803CA3C4 {
    s8 state;
    u8 f1, f2;
    s8 n;
    void *f4;
    void *f8;
    void *fc;
    void *f10;
    s32 f14;
    void *f18[2];
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f2c;
    s32 f30;
    s32 f34;
    s32 f38;
    s16 f3c;
    s16 f3e;
    s16 f40;
    s16 f42[8];
    u8 pad52[2];
    s32 f54;
    s32 f58;
    s32 f5c;
    s16 f60;
    u8 pad62[2];
    s32 f64;
    s16 f68;
    s16 f6a;
    s8 f6c;
    s8 f6d;
    u8 pad6e[4];
    s8 f72;
    u8 pad73[0x88 - 0x73];
    s32 f88;
    u8 pad8c[0x94 - 0x8C];
    void *f94;
    s8 f98;
    u8 pad99[0xA8 - 0x99];
};

struct Strm_803CB20C;
struct Buf_803CB20C { void *data; s32 size; };

struct VT_803CB20C {
    void *pad[5];
    void (*m14)(Strm_803CB20C *);
    void (*lock)(Strm_803CB20C *, s32, s32, Buf_803CB20C *);
    void *pad1C;
    void (*commit)(Strm_803CB20C *, s32, Buf_803CB20C *);
};

struct Strm_803CB20C { VT_803CB20C *vt; };

struct Obj_803CB20C {
    u8 pad0[2]; u8 f2; u8 pad3; s32 f4; u32 f8; u8 padC[8]; Strm_803CB20C *f14;
    u8 pad18[0x4C - 0x18]; s32 f4C; s32 f50; u8 pad54[0x6C - 0x54]; s8 f6C;
    u8 pad6D[0x90 - 0x6D]; s32 f90;
};

extern "C" {
extern const u32 lbl_805E0D58[1];
s32 dispatch_field4_event__6TLobbyFPv(int);
s32 send_with_offset4_alt__6TLobbyFPv(int);
s32 notify_client__6TLobbyFPv(int);
M2C_UNK set_field_44__6TLobbyFPvi(int, int);
M2C_UNK set_field_40__6TLobbyFPvi(int, int);
M2C_UNK set_field_3c__6TLobbyFPvi(int, int);
M2C_UNK set_count__6TLobbyFPvi(int, int);
M2C_UNK notify_error__6TLobbyFPv(void *);
extern char lbl_8047C758[];
void adxt_trap_entry_update__6TLobbyFPv(Obj_803CB20C *arg0);
M2C_UNK OSResumeThread(void *);
M2C_UNK VIWaitForRetrace();
M2C_UNK run_callbacks_group2__6TLobbyFv();
extern u8 lbl_80575E80[];
extern Cb_803CBA58 lbl_805D4680;
extern s32 lbl_805D7540;
extern s32 lbl_805D75A0;
extern s32 lbl_805D75B4;
extern s32 lbl_805D75B8;
extern s32 lbl_805D75BC;
void TLobby__sub_803CBB14(void);
}
extern "C" {
extern const u32 lbl_805E0D5C[1];
}
extern "C" {
extern const u32 lbl_805E0D60[1];
}
extern "C" {
extern const u32 lbl_805E0D64[1];
}
#define lbl_805E0D58 (*(const f32 *)lbl_805E0D58)
#define lbl_805E0D5C (*(const f32 *)lbl_805E0D5C)
#define lbl_805E0D60 (*(const f32 *)lbl_805E0D60)
#define lbl_805E0D64 (*(const f32 *)lbl_805E0D64)

extern "C" {
M2C_UNK reset_flag__6TLobbyFPv(int);
M2C_UNK TLobby__sub_803CC030(int, int);
M2C_UNK dispatch_packet__6TLobbyFv(int, int);
void TLobby__sub_803C9DB4(u8 *arg0);
M2C_UNK reset_flag__6TLobbyFPv(int);
M2C_UNK TLobby__sub_803CC030(int, int);
M2C_UNK dispatch_packet__6TLobbyFv(int, int);
M2C_UNK DVDReadAbsAsyncPrio(int);
void stop_audio_stream(u8 *arg0);
M2C_UNK calc_adx_predictor_coeffs(void *, void *, void *, void *);
void calc_adx_coeffs_at_offset__6TLobbyFiPvi(s32 arg0, void *arg1, s32 arg2);
s8 TLobby__sub_803C9CB0(u8 *arg0);
M2C_UNK notify_error__6TLobbyFPv(void *);
void TLobby__sub_803CB7F8(M2C_UNK arg0, s32 arg1);
M2C_UNK memset(void *, int, int);
extern Ch_803CB5C4 lbl_80575B40[16];
void clear_buffer_340__6TLobbyFv(void);
s32 send_with_offset4_alt__6TLobbyFPv(int);
M2C_UNK set_field_3c__6TLobbyFPvi(int, int);
void TLobby__sub_803CB194(u8 *arg0);
extern s32 lbl_805D7590;
s32 TLobby__sub_803CB844(void);
extern s32 lbl_805D7540;
void set_param_and_notify__6TLobbyFPvi(void *, int);
void TLobby__sub_803C0758(void *);
void configure_audio_stream_output(Stream_803C9FCC *self);
extern char lbl_8047C6F0[];
void stop_audio_stream(u8 *arg0);
void report_adx_error__6TLobbyFPvi(const char *msg, const char *arg);
void configure_audio_stream_output(Stream_803C9FCC *self);
void start_audio_stream_file(Stream_803CA824 *self, const char *name);
s16 TLobby__sub_803C96E0(Obj_803C96E0 *self, s32 i);
extern volatile s32 lbl_805D759C;
extern volatile s32 lbl_805D75C8;
extern s32 lbl_805D75C4;
void wait_for_lock_release__6TLobbyFv(void);
extern const char *const volatile lbl_805E0D78;
void TLobby__sub_803CB81C(void);
M2C_UNK TLobby__sub_803CBF50(void *);
M2C_UNK notify_error__6TLobbyFPv(void *);
extern u8 lbl_8047C690[];
void adxt_set_out_pan__6TLobbyFPvis(S_803C96F0 *arg0, s32 arg1, s16 arg2);
M2C_UNK GXFlush();
M2C_UNK TLobby__sub_803CA8B4(Ent_803C9608 *);
M2C_UNK run_sequence__6TLobbyFv();
extern Ent_803C9608 lbl_80572120[16];
extern s32 lbl_805D7564;
void TLobby__sub_803C9608(void);
M2C_UNK notify_error__6TLobbyFPv(void *);
void stop_audio_stream(u8 *arg0);
s32 alloc_adx_stream_slot__6TLobbyFii(void *, int);
extern char lbl_8047C6C0[];
void adxt_start_mem_idx__6TLobbyFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
void TLobby__sub_803CE544(void *, int);
void cvFsSetDefDev__6TLobbyFPv(const char *);
void TLobby__sub_803CFAA8(const char *, void *, int);
void TLobby__sub_803D0DE4(int, int, int, int);
void TLobby__sub_803CB7F8(M2C_UNK arg0, s32 arg1);
void TLobby__sub_803D0D84(void);
void TLobby__sub_803D43B8(void);
extern const char lbl_805E0D70[4];
extern const char lbl_805E0D74[4];
void TLobby__sub_803CB74C(s32 *arg0);
M2C_UNK OSSuspendThread(void *);
M2C_UNK OSSetThreadPriority(void *, int);
s32 run_worker_callbacks_slot5__6TLobbyFv(int);
extern Cfg_803CBA58 lbl_804F9D80;
extern u8 lbl_80575E80[];
extern Cb_803CBA58 lbl_805D4680;
extern s32 lbl_805D7598;
extern s32 lbl_805D75A4;
extern s32 lbl_805D75BC;
extern s32 lobby_worker_thread_run_flag;
void worker_thread_loop__6TLobbyFv(void);
extern s32 lbl_805D7540;
void set_param_and_notify__6TLobbyFPvi(void *, int);
void TLobby__sub_803C0758(void *);
void start_stream_playback__6TLobbyFPvi(Stream_803CA0C8 *self, s32 arg1);
M2C_UNK OSResumeThread(void *);
M2C_UNK OSSetThreadPriority(void *, int);
M2C_UNK set_message_and_notify__6TLobbyFPv(char *);
extern char lbl_8047C7B4[];
extern Cfg_803CBA58 lbl_804F9D80;
extern u8 lbl_80575E80[];
extern s32 lbl_805D7598;
extern s32 lbl_805D75BC;
void adxm_goto_mwidle_border__6TLobbyFv(void);
M2C_UNK GXFlush();
M2C_UNK TLobby__sub_803C97F4(void *, void *, void *);
M2C_UNK TLobby__sub_803CA8B4(Ent_803C9608 *);
s32 TLobby__sub_803CBF10(int);
M2C_UNK run_sequence__6TLobbyFv();
extern Ent_803C9608 lbl_80572120[16];
extern s32 lbl_805D7540;
extern s32 lbl_805D7560;
extern s32 lbl_805D7564;
extern s32 lbl_805D7570;
s32 TLobby__sub_803C9358(u8 *arg0);
M2C_UNK TLobby__sub_803C97F4(void *, void *, void *);
M2C_UNK TLobby__sub_803CC030(int, int);
extern s32 lbl_805D7540;
extern s32 lbl_805D7560;
extern s32 lbl_805D7570;
void TLobby__sub_803C94DC(u8 *arg0, s32 arg1);
M2C_UNK reset_flag__6TLobbyFPv(int);
M2C_UNK TLobby__sub_803CC030(int, int);
M2C_UNK dispatch_packet__6TLobbyFv(int, int);
M2C_UNK DVDReadAbsAsyncPrio(int);
extern s32 lbl_805D7540;
void set_param_and_notify__6TLobbyFPvi(void *, int);
void TLobby__sub_803C0758(void *);
void TLobby__sub_803C9E38(Obj_803C9E38 *arg0, VObj_803C9E38 *arg1);
M2C_UNK reset_flag__6TLobbyFPv(int);
M2C_UNK TLobby__sub_803CC030(int, int);
M2C_UNK dispatch_packet__6TLobbyFv(int, int);
M2C_UNK DVDReadAbsAsyncPrio(int);
M2C_UNK memset(void *, int, int);
M2C_UNK reset_entry__6TLobbyFPv(void *);
M2C_UNK clear_entry__6TLobbyFi(void *);
M2C_UNK unregister_si_polling__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_803D198C(void *);
extern RecoveredCallback_2be3cacebb2e lbl_805D7574;
void TLobby__sub_803CA194(Obj_803CA194 *arg0);
void *TLobby__sub_803C0848(void *, s32, void *);
void TLobby__sub_803CA194(Obj_803CA194 *arg0);
void *run_step_5210__6TLobbyFv(void *, s32);
void *lsc_create__6TLobbyFPv(void *);
M2C_UNK memset(void *, int, int);
extern Ent_803C9608 lbl_80572120[16];
Ch_803CA3C4 *TLobby__sub_803CA3C4(s32 n, s32 base, s32 size);
}

extern "C" {

void TLobby__sub_803C9350(u8 *arg0, s32 arg1);
void TLobby__sub_803C94B8(void);
void TLobby__sub_803C94D8(void);
void TLobby__sub_803C96A8(u8 *arg0, s32 arg1);
s16 TLobby__sub_803C96B0(u8 *arg0);
s32 TLobby__sub_803C9740(u8 *arg0);
s32 TLobby__sub_803C97B8(u8 *arg0);
void TLobby__sub_803CB4A4(u8 *arg0);
void TLobby__sub_803CB570(u8 *arg0, u8 *arg1, s16 *arg2);
void TLobby__sub_803CBA18(void);
void TLobby__sub_803CBA38(void);
s32 apply_if_v2__6TLobbyFPv(u8 *arg0);
void clear_record_data__6TLobbyFPv(s32 *arg0);
s32 get_client_count__6TLobbyFPv(u8 *arg0);
s16 get_field_60__6TLobbyFPv(u8 *arg0);
s32 get_size__6TLobbyFPv(u8 *arg0);
s32 post_request__6TLobbyFPviiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void reset_client_state__6TLobbyFPv(u8 *arg0);
void reset_field_0C__6TLobbyFPv(u8 *arg0);
void set_field98__6TLobbyFPvc(u8 *arg0, s8 arg1);
void set_field_40_and_notify__6TLobbyFPvs(u8 *arg0, s16 arg1);
void set_field_6d__6TLobbyFPvc(u8 *arg0, s8 arg1);
void set_rate_mode__6TLobbyFi(s32 arg0);
s32 try_post_command__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void update_receive_check__6TLobbyFPv(u8 *arg0);
u32 PADReceiveCheckCallback(int, int, int, void *, int, int);
M2C_UNK run_callbacks_group2__6TLobbyFv();
M2C_UNK set_callback_params__6TLobbyFii();
u32 dispatch_receive_update__6TLobbyFv(int, int, int, void *, int, void *, int, int);
M2C_UNK memset(void *, int, int);
s32 notify_field_4__6TLobbyFPv(int);
s32 send_packet_by_id__6TLobbyFPv(int);
s32 send_with_offset4__6TLobbyFPv(int);
M2C_UNK set_params__6TLobbyFii();
M2C_UNK trigger_sub_task__6TLobbyFv(int);

void set_field98__6TLobbyFPvc(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x98) = arg1;
}

void TLobby__sub_803C9350(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
}

#pragma dont_inline off
#pragma inline_depth(4)
inline void inl_803C9608(void) {
    s32 i;
    if (lbl_805D7564 == 0) {
        init_once__6TLobbyFv();
        lbl_805D7564 = 1;
        GXFlush();
        lbl_805D7564 = 2;
        for (i = 0; i < 16; i++) {
            if (lbl_80572120[i].state == 1) {
                TLobby__sub_803CA8B4(&lbl_80572120[i]);
            }
        }
        lbl_805D7564 = 3;
        run_sequence__6TLobbyFv();
        lbl_805D7564 = 0;
        release_ref__6TLobbyFv();
    }
}
s32 TLobby__sub_803C9358(u8 *arg0) {
    s32 ret;
    s32 save;
    s32 spC;
    s32 sp8;
    if (M2C_FIELD(arg0, s8 *, 0x72) == 0) {
        return 0;
    }
    ret = TLobby__sub_803CBF10(M2C_FIELD(arg0, s32 *, 0xC));
    inl_803C9608();
    save = lbl_805D7560;
    lbl_805D7560 = 0;
    TLobby__sub_803C97F4(arg0, &spC, &sp8);
    lbl_805D7560 = save;
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32)((f32)lbl_805D7570 * ((f32)spC / (f32)sp8));
    M2C_FIELD(arg0, s32 *, 0xA0) = lbl_805D7540;
    return ret;
}

void TLobby__sub_803C94B8(void) {
    set_params__6TLobbyFii();
}

void TLobby__sub_803C94D8(void) {

}

void TLobby__sub_803C94DC(u8 *arg0, s32 arg1) {
    s32 spC;
    s32 sp8;
    s32 st;
    s32 save;
    st = M2C_FIELD(arg0, s8 *, 1);
    if (arg1 != M2C_FIELD(arg0, s8 *, 0x72)) {
        init_once__6TLobbyFv();
        M2C_FIELD(arg0, s8 *, 0x72) = arg1;
        if (st == 3 || st == 4) {
            if (arg1 == 1) {
                TLobby__sub_803CC030(M2C_FIELD(arg0, s32 *, 0xC), 0);
            } else {
                TLobby__sub_803CC030(M2C_FIELD(arg0, s32 *, 0xC), 1);
                M2C_FIELD(arg0, s32 *, 0xA0) = lbl_805D7540;
            }
            save = lbl_805D7560;
            lbl_805D7560 = 0;
            TLobby__sub_803C97F4(arg0, &spC, &sp8);
            lbl_805D7560 = save;
            M2C_FIELD(arg0, s32 *, 0x9C) = (s32)((f32)lbl_805D7570 * ((f32)spC / (f32)sp8));
        }
        release_ref__6TLobbyFv();
    }
}

s16 get_field_60__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x60);
}

void TLobby__sub_803C9608(void) {
    s32 i;
    if (lbl_805D7564 == 0) {
        init_once__6TLobbyFv();
        lbl_805D7564 = 1;
        GXFlush();
        lbl_805D7564 = 2;
        for (i = 0; i < 16; i++) {
            if (lbl_80572120[i].state == 1) {
                TLobby__sub_803CA8B4(&lbl_80572120[i]);
            }
        }
        lbl_805D7564 = 3;
        run_sequence__6TLobbyFv();
        lbl_805D7564 = 0;
        release_ref__6TLobbyFv();
    }
}

void set_field_6d__6TLobbyFPvc(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x6D) = arg1;
}

void TLobby__sub_803C96A8(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

s16 TLobby__sub_803C96B0(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x40);
}

void set_field_40_and_notify__6TLobbyFPvs(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x40) = arg1;
    trigger_sub_task__6TLobbyFv((int) (M2C_FIELD(arg0, s32 *, 0xC)));
}

s16 TLobby__sub_803C96E0(Obj_803C96E0 *self, s32 i) {
    return self->vals[i];
}

void adxt_set_out_pan__6TLobbyFPvis(S_803C96F0 *arg0, s32 arg1, s16 arg2) {
    arg0->vals[arg1] = arg2;
    if (arg1 < arg0->count) {
        TLobby__sub_803CBF50(arg0->p);
        return;
    }
    notify_error__6TLobbyFPv(lbl_8047C690);
}

s32 TLobby__sub_803C9740(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 1) >= 2) {
        return send_with_offset4__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    }
    return 0;
}

s32 apply_if_v2__6TLobbyFPv(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 1) >= 2) {
        return notify_field_4__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    }
    return 0;
}

s32 TLobby__sub_803C97B8(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 1) >= 2) {
        return send_packet_by_id__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    }
    return 0;
}

extern s32 lbl_805D7560;
extern s32 lbl_805D7570;

void set_rate_mode__6TLobbyFi(s32 arg0) {
    if (arg0 == 1) {
        lbl_805D7570 = 0x176A;
    } else if (arg0 == 2) {
        lbl_805D7570 = 0x1388;
    }
    lbl_805D7560 = arg0;
}

extern s32 lbl_805D7588;

s8 TLobby__sub_803C9CB0(u8 *arg0) {
  u8 new_var2;
  u8 new_var;
  new_var = (((((((*((u8 *) (((s8 *) arg0) + 1))) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu;
  new_var2 = new_var;
  return (s8) new_var2;
}

#pragma push
#pragma fp_contract on
#pragma push
#pragma dont_inline on
void stop_audio_stream(u8 *arg0) {
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r3_3;
    u8 *temp_r4;
    u8 *temp_r4_2;
    u8 *temp_r4_3;
    if (M2C_FIELD(arg0, void **, 8) != NULL) {
        TLobby__sub_803C89C4((u8 *)(M2C_FIELD(arg0, void **, 8)));
        TLobby__sub_803C8B38((u8 *)((int) (M2C_FIELD(arg0, u32 *, 8))));
        temp_r3 = M2C_FIELD(arg0, void ***, 0x14);
        if (temp_r3 != NULL) {
            temp_r4 = (u8 *)(*temp_r3);
            M2C_FIELD(temp_r4, M2C_UNK (**)(void *, void *), 0x14)(temp_r3, temp_r4);
        }
        M2C_FIELD(arg0, u32 *, 8) = 0U;
    }
    init_once__6TLobbyFv();
    if ((s32) M2C_FIELD(arg0, u8 *, 2) == 4) {
        DVDReadAbsAsyncPrio((int) (M2C_FIELD(arg0, s32 *, 0x94)));
        temp_r3_2 = M2C_FIELD(arg0, void ***, 0x14);
        if (temp_r3_2 != NULL) {
            temp_r4_2 = (u8 *)(*temp_r3_2);
            M2C_FIELD(temp_r4_2, M2C_UNK (**)(void *, void *), 0x14)(temp_r3_2, temp_r4_2);
        }
    }
    init_once__6TLobbyFv();
    dispatch_packet__6TLobbyFv((int) (M2C_FIELD(arg0, s32 *, 0xC)), (int) (0));
    TLobby__sub_803CC030((int) (M2C_FIELD(arg0, s32 *, 0xC)), (int) (0));
    reset_flag__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    if ((s32) M2C_FIELD(arg0, u8 *, 2) == 2) {
        temp_r3_3 = M2C_FIELD(arg0, void ***, 0x14);
        if (temp_r3_3 != NULL) {
            temp_r4_3 = (u8 *)(*temp_r3_3);
            M2C_FIELD(temp_r4_3, M2C_UNK (**)(void *, void *), 0xC)(temp_r3_3, temp_r4_3);
        }
    }
    M2C_FIELD(arg0, void ***, 0x14) = NULL;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    release_ref__6TLobbyFv();
    release_ref__6TLobbyFv();
}
#pragma pop
#pragma pop

void TLobby__sub_803C9DB4(u8 *arg0) {
    void **temp_r3;
    u8 *temp_r4;
    init_once__6TLobbyFv();
    dispatch_packet__6TLobbyFv((int) (M2C_FIELD(arg0, s32 *, 0xC)), (int) (0));
    TLobby__sub_803CC030((int) (M2C_FIELD(arg0, s32 *, 0xC)), (int) (0));
    reset_flag__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    if ((s32) M2C_FIELD(arg0, u8 *, 2) == 2) {
        temp_r3 = M2C_FIELD(arg0, void ***, 0x14);
        if (temp_r3 != NULL) {
            temp_r4 = (unsigned char *) (*temp_r3);
            M2C_FIELD(temp_r4, M2C_UNK (**)(void *), 0xC)(temp_r3);
        }
    }
    M2C_FIELD(arg0, void ***, 0x14) = NULL;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    release_ref__6TLobbyFv();
}

#pragma push
#pragma dont_inline on
void TLobby__sub_803C9E38(Obj_803C9E38 *arg0, VObj_803C9E38 *arg1) {
    s32 i;
    if (arg0->f8 != NULL) {
        TLobby__sub_803C89C4((u8 *)(arg0->f8));
        TLobby__sub_803C8B38((u8 *)((int)arg0->f8));
        if (arg0->f14 != NULL) {
            arg0->f14->vt->f14(arg0->f14);
        }
        arg0->f8 = NULL;
    }
    init_once__6TLobbyFv();
    if ((s32)arg0->f2 == 4) {
        DVDReadAbsAsyncPrio(arg0->f94);
        if (arg0->f14 != NULL) {
            arg0->f14->vt->f14(arg0->f14);
        }
    }
    init_once__6TLobbyFv();
    dispatch_packet__6TLobbyFv(arg0->fc, 0);
    TLobby__sub_803CC030(arg0->fc, 0);
    reset_flag__6TLobbyFPv((int)arg0->f4);
    if ((s32)arg0->f2 == 2) {
        if (arg0->f14 != NULL) {
            arg0->f14->vt->fc(arg0->f14);
        }
    }
    arg0->f14 = NULL;
    arg0->f1 = 0;
    release_ref__6TLobbyFv();
    release_ref__6TLobbyFv();
    init_once__6TLobbyFv();
    for (i = 0; i < arg0->f3; i++) {
        arg0->objs[i]->vt->f14(arg0->objs[i]);
    }
    set_param_and_notify__6TLobbyFPvi(arg0->f4, (int)arg1);
    arg0->f14 = arg1;
    TLobby__sub_803C0758(arg0->f4);
    arg0->f1 = 1;
    arg0->f2 = 3;
    arg0->f4c = 0;
    arg0->f98 = 1;
    arg0->f9c = 0;
    arg0->fa0 = lbl_805D7540;
    release_ref__6TLobbyFv();
}
#pragma pop

#pragma push
#pragma dont_inline on
void configure_audio_stream_output(Stream_803C9FCC *self) {
    s32 i;
    s32 v;
    Stream_803C9FCC *pp;
    set_range__6TLobbyFPvii((u8 *)(self->f8), self->f3e << 11, self->f3c << 11);
    set_scroll_position__6TLobbyFPvi((u8 *)(self->f8), 0x19);
    init_stream_position__6TLobbyFPv((S_803C8A14 *)(self->f8));
    v = self->f10;
    pp = self;
    for (i = 0; i < self->count; i++) {
        pp->parts[0]->vt->update(pp->parts[0]);
        pp = (Stream_803C9FCC *)((u8 *)pp + 4);
    }
    set_param_and_notify__6TLobbyFPvi(self->f4, v);
    self->f14 = v;
    TLobby__sub_803C0758(self->f4);
    self->active = 1;
    self->f4c = 0;
    self->f71 = 0;
    self->f8c = 0x7FFFFFFF;
    self->f90 = -1;
    self->f9c = 0;
    self->fa4 = 0;
    self->fa0 = lbl_805D7540;
    self->f2 = 0;
}
#pragma pop

struct Stream_803C9FCC;

void start_stream_playback__6TLobbyFPvi(Stream_803CA0C8 *self, s32 arg1) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        self->parts[i]->vt->update(self->parts[i]);
    }
    set_param_and_notify__6TLobbyFPvi(self->f4, arg1);
    self->f14 = arg1;
    TLobby__sub_803C0758(self->f4);
    self->active = 1;
    self->f4c = 0;
    self->f71 = 0;
    self->f8c = 0x7FFFFFFF;
    self->f90 = -1;
    self->f9c = 0;
    self->fa4 = 0;
    self->fa0 = lbl_805D7540;
}

#pragma push
#pragma dont_inline on
void TLobby__sub_803CA194(Obj_803CA194 *arg0) {
    s32 i;
    if (arg0 == NULL) {
        return;
    }
    if (lbl_805D7574 != NULL) {
        lbl_805D7574();
    }
    if ((s32)arg0->f0 == 1) {
        if (arg0->f8 != NULL) {
            TLobby__sub_803C89C4((u8 *)(arg0->f8));
            TLobby__sub_803C8B38((u8 *)((int)arg0->f8));
            if (arg0->f14 != NULL) {
                arg0->f14->vt->f14(arg0->f14);
            }
            arg0->f8 = NULL;
        }
        init_once__6TLobbyFv();
        if ((s32)arg0->f2 == 4) {
            DVDReadAbsAsyncPrio((int)arg0->f94);
            if (arg0->f14 != NULL) {
                arg0->f14->vt->f14(arg0->f14);
            }
        }
        init_once__6TLobbyFv();
        dispatch_packet__6TLobbyFv((int)arg0->fc, 0);
        TLobby__sub_803CC030((int)arg0->fc, 0);
        reset_flag__6TLobbyFPv((int)arg0->f4);
        if ((s32)arg0->f2 == 2) {
            if (arg0->f14 != NULL) {
                arg0->f14->vt->fc(arg0->f14);
            }
        }
        arg0->f14 = NULL;
        arg0->f1 = 0;
        release_ref__6TLobbyFv();
        release_ref__6TLobbyFv();
    }
    if (arg0->fc != NULL) {
        unregister_si_polling__6TLobbyFPv(arg0->fc);
    }
    if (arg0->f4 != NULL) {
        reset_entry__6TLobbyFPv(arg0->f4);
    }
    if (arg0->f8 != NULL) {
        TLobby__sub_803C8B38((u8 *)((int)arg0->f8));
    }
    if (arg0->f94 != NULL) {
        TLobby__sub_803D198C(arg0->f94);
    }
    init_once__6TLobbyFv();
    if (arg0->f10 != NULL) {
        arg0->f10->vt->fc(arg0->f10);
    }
    for (i = 0; i < arg0->f3; i++) {
        if (arg0->objs[i] != NULL) {
            arg0->objs[i]->vt->fc(arg0->objs[i]);
        }
        if (arg0->objs2[i] != NULL) {
            arg0->objs2[i]->vt->fc(arg0->objs2[i]);
        }
        if (arg0->objs3[i] != NULL) {
            arg0->objs3[i]->vt->fc(arg0->objs3[i]);
        }
    }
    if (arg0->f74 != NULL) {
        clear_entry__6TLobbyFi(arg0->f74);
    }
    memset(arg0, 0, 0xA8);
    arg0->f0 = 0;
    release_ref__6TLobbyFv();
}
#pragma pop

#undef lbl_805E0D58
#undef lbl_805E0D5C
#undef lbl_805E0D60
#undef lbl_805E0D64
__declspec(section ".sdata2") extern const u32 lbl_805E0D58[1] = { 0x00000000 };
__declspec(section ".sdata2") extern const u32 lbl_805E0D5C[1] = { 0x447a0000 };
__declspec(section ".sdata2") extern const u32 lbl_805E0D60[1] = { 0x42700000 };
__declspec(section ".sdata2") extern const u32 lbl_805E0D64[1] = { 0xc2700000 };
#define lbl_805E0D58 (*(const f32 *)lbl_805E0D58)
#define lbl_805E0D5C (*(const f32 *)lbl_805E0D5C)
#define lbl_805E0D60 (*(const f32 *)lbl_805E0D60)
#define lbl_805E0D64 (*(const f32 *)lbl_805E0D64)

Ch_803CA3C4 *TLobby__sub_803CA3C4(s32 n, s32 base, s32 size) {
    Ch_803CA3C4 *c;
    s32 aligned = (base + 0x3F) & ~0x3F;
    s32 rem = size - (aligned - base);
    s32 i;
    s32 t;
    for (i = 0; i < 16; i++) {
        if (lbl_80572120[i].state == 0) {
            break;
        }
    }
    if (i == 16) {
        return NULL;
    }
    c = (Ch_803CA3C4 *)&lbl_80572120[i];
    memset(c, 0, 0xA8);
    c->n = n;
    t = (n * 0x2060) << 1;
    c->f20 = aligned + t;
    c->f24 = (rem - t - 0x24) / 2048 * 2048;
    c->f28 = 0x24;
    c->f2c = aligned;
    c->f30 = 0x2000;
    c->f34 = 0x2060;
    c->f14 = 0;
    c->f10 = TLobby__sub_803D2C84((void *)c->f20, c->f24, c->f28);
    if (c->f10 == NULL) {
        TLobby__sub_803CA194((Obj_803CA194 *)c);
        return NULL;
    }
    for (i = 0; i < n; i++) {
        c->f18[i] = TLobby__sub_803D2C84((void *)(c->f2c + c->f34 * i * 2), c->f30 * 2, (c->f34 - c->f30) * 2);
        if (c->f18[i] == NULL) {
            TLobby__sub_803CA194((Obj_803CA194 *)c);
            return NULL;
        }
    }
    if ((c->f4 = TLobby__sub_803C0848(c->f10, n, c->f18)) == NULL) {
        TLobby__sub_803CA194((Obj_803CA194 *)c);
        return NULL;
    }
    if ((c->fc = run_step_5210__6TLobbyFv(c->f18, n)) == NULL) {
        TLobby__sub_803CA194((Obj_803CA194 *)c);
        return NULL;
    }
    if ((c->f94 = lsc_create__6TLobbyFPv(c->f10)) == NULL) {
        TLobby__sub_803CA194((Obj_803CA194 *)c);
        return NULL;
    }
    c->f38 = 0x3C;
    c->f3c = c->f24 / 2048;
    c->f3e = 0.85 * c->f3c;
    c->f40 = 0;
    for (i = 0; i < n; i++) {
        c->f42[i] = -0x80;
    }
    c->f6c = 1;
    c->f54 = 0;
    c->f58 = 0;
    c->f5c = 0;
    c->f60 = 0;
    c->f64 = 0;
    c->f68 = 0;
    c->f6a = 0;
    c->f6d = 1;
    c->f72 = 0;
    c->f88 = 0;
    c->f98 = 1;
    c->state = 1;
    return c;
}

void adxt_start_mem_idx__6TLobbyFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 r;
    stop_audio_stream(arg0);
    if (arg2 >= ((Ent_803CA774 *)arg1)[0].len || arg2 < 0) {
        return;
    }
    init_once__6TLobbyFv();
    r = alloc_adx_stream_slot__6TLobbyFii(arg1 + *(s32 *)(arg1 + (arg2 + 1) * 8), 0x40000000);
    if (r == 0) {
        release_ref__6TLobbyFv();
        notify_error__6TLobbyFPv(lbl_8047C6C0);
        return;
    }
    start_stream_playback__6TLobbyFPvi((Stream_803CA0C8 *)(arg0), (s32)(r));
    arg0[2] = 2;
    arg0[0x98] = 0;
    release_ref__6TLobbyFv();
}

#pragma push
#pragma dont_inline on
void start_audio_stream_file(Stream_803CA824 *self, const char *name) {
    stop_audio_stream((u8 *)self);
    init_once__6TLobbyFv();
    if ((self->handle = TLobby__sub_803C8BAC(name, self->f10)) == 0) {
        release_ref__6TLobbyFv();
        report_adx_error__6TLobbyFPvi(lbl_8047C6F0, name);
        self->f60 = -1;
        self->state = 6;
    } else {
        configure_audio_stream_output((Stream_803C9FCC *)self);
        self->f98 = 0;
        release_ref__6TLobbyFv();
    }
}
#pragma pop

struct Strm_803CAB38 {
    u8 f0;
    s8 f1;
    u8 f2;
    s8 f3;
    s32 f4;
    void *f8;
    s32 fc;
    u8 pad10[0x28];
    s32 f38;
    s16 f3c_pad;
    s16 f3e_pad;
    s16 f40;
    s16 f42;
    s16 f44;
    s16 pad46;
    s32 f48;
    s32 pad4c;
    s32 f50;
    u8 pad54[0x20];
    void *f74;
    u8 pad78[0x14];
    s32 f8c;
    s32 f90;
};

s32 get_offset_58__6TLobbyFi(int);
s32 TLobby__sub_803BFE58(int);
s32 TLobby__sub_803BFEE8(int);
s32 notify_field_4_alt__6TLobbyFPv(int);
s32 send_packet_by_id_2__6TLobbyFPv(int);
s32 TLobby__sub_803BFFC0(int);
M2C_UNK TLobby__sub_803BFFFC(int, void *, void *);
M2C_UNK set_network_result__6TLobbyFPvi(int, int);
s32 TLobby__sub_803C07E8(int);
M2C_UNK set_packet_flags__6TLobbyFPvi(void *, int);
void format_number_pair__6TLobbyFiiPvi(s32, s32, char *, s32);
M2C_UNK run_step_4430__6TLobbyFv(int, int);
M2C_UNK TLobby__sub_803CBF0C(int, int);
M2C_UNK TLobby__sub_803CBF30(int, int);
M2C_UNK TLobby__sub_803CBF90(int, int);
M2C_UNK TLobby__sub_803CBFB0(int, int);
struct Conn_803CAEB4;
void TLobby__sub_803CAEB4(Conn_803CAEB4 *arg0);
extern char lbl_8047C718[];

#define SBF50 TLobby__sub_803CBF50

#pragma push
#pragma dont_inline on
void TLobby__sub_803CAB38(Strm_803CAB38 *self) {
#define arg0 ((u8 *)self)
    M2C_UNK TLobby__sub_803CBF50(s32, s32, s32);
    M2C_UNK trigger_sub_task__6TLobbyFv(int, int);
    s32 t = self->f4;
    s32 k;
    s32 n1;
    char buf[32];

    if (TLobby__sub_803C07E8(t) == 2) {
        s32 v = send_with_offset4__6TLobbyFPv(t);
        if (v > self->f3) {
            format_number_pair__6TLobbyFiiPvi(v, self->f3, buf, 0x10);
            report_adx_error__6TLobbyFPvi(lbl_8047C718, buf);
            stop_audio_stream(arg0);
            return;
        }
        n1 = notify_field_4__6TLobbyFPv(t);
        k = TLobby__sub_803BFEE8(t);
        if (k > 0) {
            self->f48 = (n1 / self->f38) * 3;
        } else {
            self->f48 = ((n1 / self->f38) * 3) / 2;
        }
        {
            s32 a = notify_field_4_alt__6TLobbyFPv(t) * 2;
            self->f48 = a * ((self->f48 + a) / a);
        }
        set_network_result__6TLobbyFPvi(t, self->f48);
        if (k > 0) {
            if ((s32) self->f2 == 2) {
                self->f50 = 0;
            } else {
                s32 x = TLobby__sub_803BFE58(t);
                s32 pages;
                self->f50 = 0x800 - x % 0x800;
                pages = (x + 0x7FF) / 0x800;
                self->f50 = self->f50 % 0x800;
                self->f8c = pages;
                set_scroll_position__6TLobbyFPvi((u8 *)(self->f8), pages);
                set_coords__6TLobbyFPvii((u8 *)(self->f8),(s32)((void *)TLobby__sub_803CB194),(s32)arg0);
            }
            s32 e = dispatch_field4_event__6TLobbyFPv(t);
            self->f90 = e;
            set_field_3c__6TLobbyFPvi(t, e);
            set_field_44__6TLobbyFPvi(t, 0);
            set_field_40__6TLobbyFPvi(t, 0);
            TLobby__sub_803BFFFC(t, (void *)adxt_trap_entry_update__6TLobbyFPv, arg0);
        } else {
            if (self->f8 != NULL) {
                set_scroll_position__6TLobbyFPvi((u8 *)(self->f8), 0x7FFFFFFF);
            }
            set_field_3c__6TLobbyFPvi(t, send_packet_by_id__6TLobbyFPv(t));
            set_field_44__6TLobbyFPvi(t, 0);
            set_field_40__6TLobbyFPvi(t, 0);
            TLobby__sub_803BFFFC(t, (void *)TLobby__sub_803CAEB4, arg0);
        }
        k = notify_field_4__6TLobbyFPv(t);
        n1 = send_with_offset4__6TLobbyFPv(t);
        s32 pid = send_packet_by_id__6TLobbyFPv(t);
        s32 p2 = send_packet_by_id_2__6TLobbyFPv(t);
        TLobby__sub_803CBF30(self->fc, p2);
        TLobby__sub_803CBF90(self->fc, k);
        TLobby__sub_803CBFB0(self->fc, n1);
        TLobby__sub_803CBF0C(self->fc, pid);
        trigger_sub_task__6TLobbyFv(self->fc, self->f40);
        if (send_with_offset4__6TLobbyFPv(self->f4) == 1) {
            if (self->f42 == -0x80) {
                SBF50(self->fc, 0, 0);
            } else {
                SBF50(self->fc, 0, self->f42);
            }
        } else {
            if (self->f42 == -0x80) {
                SBF50(self->fc, 0, -0xF);
            } else {
                SBF50(self->fc, 0, self->f42);
            }
            if (self->f44 == -0x80) {
                SBF50(self->fc, 1, 0xF);
            } else {
                SBF50(self->fc, 1, self->f44);
            }
        }
        if (self->f74 != NULL) {
            set_packet_flags__6TLobbyFPvi(self->f74, k);
        }
        if (TLobby__sub_803BFFC0(t) == 2) {
            s32 o = get_offset_58__6TLobbyFi(t);
            run_step_4430__6TLobbyFv(self->fc, o);
        }
        dispatch_packet__6TLobbyFv(self->fc, 1);
        self->f1 = 2;
    }
}
#pragma pop
#undef arg0
#undef SBF50

#pragma push
#pragma dont_inline on
#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;

extern "C" {

typedef struct Buf_803CAEB4 Buf_803CAEB4;
typedef struct Conn_803CAEB4 Conn_803CAEB4;
typedef struct RingVt_803CAEB4 RingVt_803CAEB4;
typedef struct Ring_803CAEB4 Ring_803CAEB4;
struct Buf_803CAEB4
{
  u8 *p;
  s32 len;
};
struct Ring_803CAEB4;
struct RingVt_803CAEB4
{
  u8 pad0[0x18];
  void (*m4)(Ring_803CAEB4 *, s32, s32, Buf_803CAEB4 *);
  void (*m5)(Ring_803CAEB4 *, s32, Buf_803CAEB4 *);
  void (*m6)(Ring_803CAEB4 *, s32, Buf_803CAEB4 *);
};
struct Ring_803CAEB4
{
  RingVt_803CAEB4 *vt;
};
struct Conn_803CAEB4
{
  u8 pad0[4];
  s32 lobby;
  u8 pad8[0x14 - 0x8];
  Ring_803CAEB4 *ring;
  u8 pad18[0x48 - 0x18];
  s32 f48;
  u8 pad4C[0x98 - 0x4C];
  s8 active;
  u8 pad99[0xA4 - 0x99];
  s32 fA4;
};
s32 send_packet_by_id__6TLobbyFPv(int);
M2C_UNK set_field_44__6TLobbyFPvi(int, int);
M2C_UNK set_field_40__6TLobbyFPvi(int, int);
M2C_UNK set_field_3c__6TLobbyFPvi(int, int);
s32 TLobby__sub_803C0010(int);
M2C_UNK TLobby__sub_803C0074(int);
M2C_UNK reset_flag__6TLobbyFPv(int);
void TLobby__sub_803C0758(void *);
M2C_UNK set_network_result__6TLobbyFPvi(int, int);
s32 TLobby__sub_803C07E8(int);
s32 parse_packet_header_len__6TLobbyFPviPv(u8 *, s32, s16 *);
s32 find_terminator_index__6TLobbyFPviPv(u8 *, s32, s16 *);

void TLobby__sub_803CAEB4(Conn_803CAEB4 *o) {
  s32 lobby = o->lobby;
  Ring_803CAEB4 *ring = o->ring;
  Buf_803CAEB4 a;
  Buf_803CAEB4 c;
  Buf_803CAEB4 b;
  Buf_803CAEB4 d;
  s16 hlen;
  s16 tlen;
  s32 r1;
  s32 r2;
  s32 n;
  s32 m;
  if (o->active != 0)
  {
    tlen = 0;
    ring->vt->m4(ring, 1, 0x7FFFFFFF, &a);
    ring->vt->m4(ring, 1, 0x7FFFFFFF, &b);
    if (parse_packet_header_len__6TLobbyFPviPv(a.p, a.len, &hlen) != 0)
    {
      o->active = 0;
      ring->vt->m5(ring, 1, &b);
      ring->vt->m5(ring, 1, &a);
      return;
    }
    n = hlen;
    r1 = find_terminator_index__6TLobbyFPviPv(a.p + n, a.len - n, &hlen);
    if (r1 == 0)
    {
      r2 = -1;
    }
    else
    {
      r2 = find_terminator_index__6TLobbyFPviPv(b.p, b.len, &tlen);
    }
    n += hlen;
    m = tlen & 0xFFFFFFFFFFFFFFFFu;
    if ((r1 != 0) && (r2 != 0))
    {
      ring->vt->m5(ring, 1, &b);
      ring->vt->m5(ring, 1, &a);
      o->active = 0;
      return;
    }
    if (r1 == 0)
    {
      ring->vt->m5(ring, 1, &b);
      TLobby__sub_803D3130(&a, n, (Pair_803C8678 *)&a, (Pair_803C8678 *)&c);
      ring->vt->m6(ring, 0, &a);
      ring->vt->m5(ring, 1, &c);
    }
    else
    {
      ring->vt->m6(ring, 0, &a);
      TLobby__sub_803D3130(&b, m, (Pair_803C8678 *)&b, (Pair_803C8678 *)&d);
      ring->vt->m6(ring, 0, &b);
      ring->vt->m5(ring, 1, &d);
    }
    o->fA4 += TLobby__sub_803C0010(lobby);
    reset_flag__6TLobbyFPv(lobby);
    TLobby__sub_803C0758((void *) lobby);
    TLobby__sub_803C0074(lobby);
    if (TLobby__sub_803C07E8(lobby) != 2)
    {
      o->active = 0;
      return;
    }
    set_network_result__6TLobbyFPvi(lobby, o->f48);
    set_field_3c__6TLobbyFPvi(lobby, send_packet_by_id__6TLobbyFPv(lobby));
    set_field_44__6TLobbyFPvi(lobby, 0);
    set_field_40__6TLobbyFPvi(lobby, 0);
  }
}

}

#pragma pop

void TLobby__sub_803CB194(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r31;
    temp_r31 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
    temp_r3 = send_with_offset4_alt__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    if ((s8) M2C_FIELD(arg0, u8 *, 0x6C) == 0) {
        set_field_3c__6TLobbyFPvi((int) (M2C_FIELD(arg0, s32 *, 4)), (int) (-1));
        set_scroll_position__6TLobbyFPvi((u8 *)((void *) (M2C_FIELD(arg0, u8 **, 8))), (int) (0x7FFFFFFF));
        return;
    }
    set_scroll_offset__6TLobbyFPvi(temp_r31, temp_r3 / 2048);
}
#pragma pop

void adxt_trap_entry_update__6TLobbyFPv(Obj_803CB20C *arg0) {
    Buf_803CB20C b;
    Strm_803CB20C *s;
    s32 off;
    s32 total;
    s32 id;
    s32 c;
    id = arg0->f4;
    s = arg0->f14;
    c = notify_client__6TLobbyFPv(id);
    off = send_with_offset4_alt__6TLobbyFPv(id);
    total = dispatch_field4_event__6TLobbyFPv(id);
    if (arg0->f8 == 0U && arg0->f6C == 0) {
        set_field_3c__6TLobbyFPvi(arg0->f4, -1);
        return;
    }
    s->vt->lock(s, 1, arg0->f50, &b);
    if (b.size < arg0->f50) {
        notify_error__6TLobbyFPv(lbl_8047C758);
    }
    s->vt->commit(s, 0, &b);
    set_field_40__6TLobbyFPvi(id, 0);
    set_field_3c__6TLobbyFPvi(id, arg0->f90 = total - c);
    set_field_44__6TLobbyFPvi(id, off);
    set_count__6TLobbyFPvi(id, c);
    if ((s32)arg0->f2 == 2) {
        s->vt->m14(s);
        s->vt->lock(s, 1, off, &b);
        s->vt->commit(s, 0, &b);
    }
    arg0->f4C += 1;
}

void update_receive_check__6TLobbyFPv(u8 *arg0) {
    u32 temp_r0;
    u32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 1) {
        M2C_FIELD(arg0, s32 *, 0xC) = 2;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 2) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 1) {
            M2C_FIELD(arg0, u32 *, 0x10) = PADReceiveCheckCallback((int) (M2C_FIELD(arg0, s32 *, 0x18)), (int) (M2C_FIELD(arg0, s32 *, 0x1C)), (int) (M2C_FIELD(arg0, s32 *, 0x20)), (void *) (arg0 + 0x28), (int) (M2C_FIELD(arg0, s16 *, 0x30)), (int) (M2C_FIELD(arg0, s16 *, 0x32)));
        } else {
            M2C_FIELD(arg0, u32 *, 0x10) = dispatch_receive_update__6TLobbyFv((int) (M2C_FIELD(arg0, s32 *, 0x18)), (int) (M2C_FIELD(arg0, s32 *, 0x1C)), (int) (M2C_FIELD(arg0, s32 *, 0x20)), (void *) (arg0 + 0x28), (int) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (arg0 + 0x2C), (int) (M2C_FIELD(arg0, s16 *, 0x30)), (int) (M2C_FIELD(arg0, s16 *, 0x32)));
            temp_r0 = M2C_FIELD(arg0, u32 *, 0x10);
            temp_r3 = temp_r0 >> 0x1FU;
            if ((s32) (((temp_r0 & 1) ^ temp_r3) - temp_r3) == 1) {
                lbl_805D7588 = 1;
            }
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 3;
    }
}

s32 get_size__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void reset_field_0C__6TLobbyFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 3) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}

void reset_client_state__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    memset((void *) (arg0 + 0x28), (int) (0), (int) (8));
}

void TLobby__sub_803CB4A4(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
    }
}

s32 post_request__6TLobbyFPviiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 2;
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
        M2C_FIELD(arg0, s32 *, 0x20) = arg3;
        M2C_FIELD(arg0, s32 *, 0x24) = arg4;
        return 1;
    }
    return 0;
}

s32 try_post_command__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
        M2C_FIELD(arg0, s32 *, 0x20) = arg3;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        return 1;
    }
    return 0;
}

s32 get_client_count__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

void clear_record_data__6TLobbyFPv(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 0;
        memset((void *) (arg0), 0, 0x34);
    }
}

void TLobby__sub_803CB570(u8 *arg0, u8 *arg1, s16 *arg2) {
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) *arg2;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(arg1, s16 *, 2);
}

#pragma push
#pragma fp_contract on
void calc_adx_coeffs_at_offset__6TLobbyFiPvi(s32 arg0, void *arg1, s32 arg2) {
    calc_adx_predictor_coeffs((void *) (arg2), arg1, (void *) (arg0 + 0x30), (void *) (arg0 + 0x32));
}
#pragma pop

Ch_803CB5C4 *alloc_adx_channel__6TLobbyFv(void) {
    s32 i;
    Ch_803CB5C4 *c;

    for (i = 0; i < 16; i++) {
        if (lbl_80575B40[i].used == 0) {
            break;
        }
    }
    if (i == 16) {
        return NULL;
    }
    c = &lbl_80575B40[i];
    memset(c, 0, sizeof(Ch_803CB5C4));
    c->used = 1;
    c->id = i;
    c->f8 = 0;
    c->fC = 0;
    calc_adx_predictor_coeffs((void *)500, (void *)44100, &c->c0, &c->c1);
    memset(c->f28, 0, 8);
    return c;
}

typedef char RecoveredGlobal_800F8A78_lbl_80501178_size[sizeof(RecoveredGlobal_800F8A78_lbl_80501178) == 0x10 ? 1 : -1];
void clear_buffer_340__6TLobbyFv(void) {
    memset((void *) (lbl_80575B40), (int) (0), (int) (0x340));
}

void TLobby__sub_803CB74C(s32 *arg0) {
    TLobby__sub_803CE544((void *)TLobby__sub_803CB7F8, 0);
    TLobby__sub_803CFAA8(lbl_805E0D70, (void *)TLobby__sub_803D43B8, 0);
    TLobby__sub_803CE544((void *)TLobby__sub_803CB7F8, 0);
    TLobby__sub_803CFAA8(lbl_805E0D74, (void *)TLobby__sub_803D0D84, 0);
    cvFsSetDefDev__6TLobbyFPv(lbl_805E0D74);
    if (arg0 != NULL) {
        TLobby__sub_803D0DE4(0, 0, 0, *arg0);
    } else {
        TLobby__sub_803D0DE4(0, 0, 0, 0);
    }
}

void TLobby__sub_803CB7F8(M2C_UNK arg0, s32 arg1) {
    notify_error__6TLobbyFPv((void *) (arg1));
}

void TLobby__sub_803CB81C(void) {
    lbl_805E0D78;
    TLobby__sub_803C9608();
    ARAlloc();
}

s32 TLobby__sub_803CB844(void) {
    return lbl_805D7590 != 0;
}

void TLobby__sub_803CBA18(void) {
    set_callback_params__6TLobbyFii();
}

void TLobby__sub_803CBA38(void) {
    run_callbacks_group2__6TLobbyFv();
}

void worker_thread_loop__6TLobbyFv(void) {
    while (lobby_worker_thread_run_flag == 1) {
        if (run_worker_callbacks_slot5__6TLobbyFv(lbl_805D75A4++) == 0 || lbl_805D7598 == 1) {
            if (lbl_805D7598 == 1) {
                lbl_805D7598 = 0;
                OSSetThreadPriority(lbl_80575E80, lbl_804F9D80.prio);
            }
            if (lbl_805D4680.fn != NULL) {
                lbl_805D4680.fn(lbl_805D4680.arg);
            }
            OSSuspendThread(lbl_80575E80);
        }
    }
    lbl_805D75BC = 1;
}

void TLobby__sub_803CBB14(void) {
    while (lbl_805D75B8 == 1) {
        VIWaitForRetrace();
        lbl_805D75A0++;
        lbl_805D7540++;
        run_callbacks_group2__6TLobbyFv();
        if (lbl_805D75BC == 0) {
            OSResumeThread(lbl_80575E80);
            if (lbl_805D4680.fn != NULL) {
                lbl_805D4680.fn(lbl_805D4680.arg);
            }
        }
    }
    lbl_805D75B4 = 1;
}

void wait_for_lock_release__6TLobbyFv(void) {
    while (lbl_805D75C8 == 1) {
        lbl_805D759C++;
    }
    lbl_805D75C4 = 1;
}
void adxm_goto_mwidle_border__6TLobbyFv(void) {
    s32 i;
    if (lbl_805D75BC == 1) {
        return;
    }
    lbl_805D7598 = 1;
    OSSetThreadPriority(lbl_80575E80, (*(Cfg_803CBBD8 *)&lbl_804F9D80).prio0);
    for (i = 0; i < 200000000; i++) {
        OSResumeThread(lbl_80575E80);
        if (lbl_805D7598 == 0) {
            break;
        }
    }
    if (i == 200000000) {
        set_message_and_notify__6TLobbyFPv(lbl_8047C7B4);
    }
    OSSetThreadPriority(lbl_80575E80, (*(Cfg_803CBBD8 *)&lbl_804F9D80).prio);
}

}
