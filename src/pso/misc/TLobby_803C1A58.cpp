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
void TLobby__sub_803C5B2C(M2C_UNK arg0, s32 arg1);
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
void TLobby__sub_803C9DB4(void *);
void start_stream_playback__6TLobbyFPvi(void *, s32);
void set_lsc_min__6TLobbyFPvi(void *, s32);
void reset_lsc_state__6TLobbyFPv(void *);
void TLobby__sub_803C5D24(u8 *arg0);
s32 TLobby__sub_803C7748(void *);
s32 DVDLowRead(void *);
void TLobby__sub_803C6064(u8 *arg0);
s32 cv_fs_tell__6TLobbyFPv(int);
s32 TLobby__sub_803C85AC(u8 *arg0, s32 *arg1);
s32 TLobby__sub_803C9284(u16 *p, s32 size, s32 *out);
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
M2C_UNK TLobby__sub_803C9608();
s32 TLobby__sub_803CB844();
M2C_UNK TLobby__sub_803CBA38();
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

void TLobby__sub_803C5B2C(M2C_UNK arg0, s32 arg1) {
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
    start_stream_playback__6TLobbyFPvi(arg0, ((Fields_arg0*)arg0)->field_10);
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
    } else if (TLobby__sub_803C7748(arg0) > 0) {
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

s32 TLobby__sub_803C9284(u16 *p, s32 size, s32 *out) {
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
