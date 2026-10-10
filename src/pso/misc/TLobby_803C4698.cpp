#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803C5850_lbl_80572020 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803C588C_lbl_80572020 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct Hdr_803C46A4 { u16 type; s16 len; };

typedef void (*RecoveredCallback_e2efd47cbcab)(s32, char *);

typedef s32 M2C_UNK;

struct Fmt_803C46DC { s16 a; s16 b; s16 c; s16 d; s32 e; s32 f; s32 g; s32 h; };

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C5850_lbl_80572020 adx_error_message_buffer;
extern s32 lobby_error_callback;
extern s32 tlobby_error_callback_arg;
void clear_error_callback__6TLobbyFv(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C5850_lbl_80572020 adx_error_message_buffer;
extern s32 lobby_error_callback;
extern s32 tlobby_error_callback_arg;
void clear_error_callback_state__6TLobbyFv(void);
extern RecoveredGlobal_803C5850_lbl_80572020 adx_error_message_buffer;
extern s32 lobby_error_callback;
extern s32 tlobby_error_callback_arg;
char *strncpy(char *dst, const char *src, u32 n);
void strncat(char *buf, s32 arg, s32 n);
void TLobby__sub_803D38B4(const char *fmt, ...);
void report_adx_error__6TLobbyFPvi(const char *msg, s32 arg);
s32 parse_packet_header_len__6TLobbyFPviPv(Hdr_803C46A4 *p, s32 size, s16 *out);
s32 find_terminator_index__6TLobbyFPviPv(s16 *arg0, s32 arg1, s16 *arg2);
char *strncpy(char *dst, const char *src, u32 n);
void TLobby__sub_803D38B4(const char *fmt, ...);
extern RecoveredGlobal_803C5850_lbl_80572020 adx_error_message_buffer;
extern s32 lobby_error_callback;
extern s32 tlobby_error_callback_arg;
void notify_error__6TLobbyFPv(const char *arg0);
s32 parse_header_loop_points__6TLobbyFPviPvPv(u8 *arg0, s32 arg1, u16 *arg2, u16 *arg3);
s32 ARStartDMA(u8 *arg0, s32 arg1, s16 *arg2, u8 *arg3, s8 *arg4, s8 *arg5, u8 *arg6, s32 *arg7, s32 *arg8, s32 *arg9);
void reset_sound_buffers__6TLobbyFv(void);
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
void TLobby__sub_803C4698(void);
void clear_error_callback_state__6TLobbyFv(void);
void clear_buffer_a00__6TLobbyFv(void);
void flush_update__6TLobbyFv(void *, int);
void TLobby__sub_803CC114(void);
void init_afs_adxf_state__6TLobbyFv(void);
void TLobby__sub_803D1CC0(void);
void TLobby__sub_803D25DC(void);
void add_ref_and_clear_buffer_3000__6TLobbyFv(void);
void TLobby__sub_803D2ED4(void);
void SVM_SetCbSvrId__6TLobbyFiiii(int, int, void *, int);
s32 svm_set_cb_svr__6TLobbyFiii(int, void *, int);
M2C_UNK memset(void *, int, int);
void ar_alloc__6TLobbyFv(void);
void get_state_zero__6TLobbyFv(void);
void process_connection_state__6TLobbyFv(void);
void forward_notify_error__6TLobbyFii(void);
extern u8 lbl_80572120[];
extern s32 lbl_805D4658;
extern s32 TLobby_init_ref_count;
extern s32 TLobby__svm_cb_svr_handle;
extern s32 lbl_805D7540;
extern const s32 lbl_805E0D30;
void init_and_add_ref__6TLobbyFv(void);
s32 __DVDPrepareResetAsync(u8 *hdr, s32 size, s32 *o1, s16 *o2, s16 *o3, s32 *o4, s32 *o5, s32 *o6, s32 *o7);
void strncat(char *buf, s32 arg, s32 n);
s32 strlen(const char *);
extern char number_format_digit_buffer[];
extern const char lbl_805E0D28[2];
void format_number_pair__6TLobbyFiiPvi(s32 arg0, s32 arg1, char *arg2, s32 arg3);
s32 TLobby__sub_803C48C8(u8 *arg0, s32 arg1, u16 *arg2);
}

extern "C" {

void ARAlloc(void);
void TLobby__sub_803C4698(void);
void dec_ref_and_shutdown__6TLobbyFv(void);
void dispatch_receive_update__6TLobbyFv(void);
void set_global_805D7520__6TLobbyFi(s32 arg0);
void set_params__6TLobbyFii(s32 arg0, s32 arg1);
M2C_UNK clear_session_buffer__6TLobbyFv();
M2C_UNK decode_adx_stereo_downmix();
M2C_UNK decode_adx_stereo();
M2C_UNK update_active_stream_reads();
M2C_UNK dec_ref_and_reset_tables__6TLobbyFv();
M2C_UNK TLobby__sub_803CC884();
M2C_UNK TLobby__sub_803CEF60();
M2C_UNK release_and_close_all_slots__6TLobbyFv();
M2C_UNK release_ref_and_clear_buffer__6TLobbyFv();
M2C_UNK release_ref_and_clear_buffer_3000__6TLobbyFv();
M2C_UNK dec_ref_and_clear_buffer__6TLobbyFv();
M2C_UNK TLobby__sub_803D3194();
M2C_UNK set_callback_params__6TLobbyFii();
M2C_UNK SVM_DelCbSvr__6TLobbyFii(int, void *);
M2C_UNK init_once__6TLobbyFv();
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK shutdown_cleanup__6TLobbyFv();
M2C_UNK si_get_type_async__6TLobbyFv();

extern s32 TLobby__init_ref_count;

void TLobby__sub_803C4698(void) {
    TLobby__init_ref_count = 0;
}

extern s32 lbl_805D7520;

s32 parse_packet_header_len__6TLobbyFPviPv(Hdr_803C46A4 *p, s32 size, s16 *out) {
    if (size < 0x10) {
        return -1;
    }
    if (p->type != 0x8001) {
        return -2;
    }
    *out = p->len + 4;
    return 0;
}

s32 __DVDPrepareResetAsync(u8 *hdr, s32 size, s32 *o1, s16 *o2, s16 *o3, s32 *o4, s32 *o5, s32 *o6, s32 *o7) {
    s32 err;
    u8 ver;
    s32 hsz;
    s32 off;
    Fmt_803C46DC *f;
    *o2 = err = 0;
    if (size < 0x14) {
        err = -1;
    } else if (*(u16 *)hdr != 0x8000) {
        err = -2;
    } else if (*(s16 *)(hdr + 2) < 0x10) {
        err = -1;
    } else {
        ver = hdr[0x12];
    }
    if (err != 0) {
        return err;
    }
    hsz = 0x30;
    if (ver == 4) {
        hsz = 0x3C;
    }
    if (size < hsz) {
        return -1;
    }
    if (*(u16 *)hdr != 0x8000) {
        return -2;
    }
    if (*(s16 *)(hdr + 2) < hsz - 4) {
        return -1;
    }
    off = 0x14;
    if (ver == 4) {
        off = 0x20;
    }
    *o1 = *(s16 *)(hdr + off);
    f = (Fmt_803C46DC *)(off + (s32)hdr);
    *o2 = f->b;
    if (*o2 != 1) {
        return -2;
    }
    *o3 = f->d;
    *o4 = f->e;
    *o5 = f->f;
    *o6 = f->g;
    *o7 = f->h;
    return 0;
}

s32 parse_header_loop_points__6TLobbyFPviPvPv(u8 *arg0, s32 arg1, u16 *arg2, u16 *arg3) {
    s32 var_r0;
    u8 var_r7;
    if (arg1 < 0x14) {
        var_r0 = -1;
    } else if ((u16) M2C_FIELD(arg0, u16 *, 0) != 0x8000) {
        var_r0 = -2;
    } else if ((s16) M2C_FIELD(arg0, s16 *, 2) < 0x10) {
        var_r0 = -1;
    } else {
        var_r7 = M2C_FIELD(arg0, u8 *, 0x12);
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        return -1;
    }
    if (var_r7 >= 4U) {
        if (arg1 < 0x20) {
            return -1;
        }
        if ((u16) M2C_FIELD(arg0, u16 *, 0) != 0x8000) {
            return -2;
        }
        if ((s16) M2C_FIELD(arg0, s16 *, 2) < 0x1C) {
            return -1;
        }
        arg2[0] = (u16) M2C_FIELD(arg0, u16 *, 0x18);
        arg3[0] = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
        arg2[1] = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
        arg3[1] = (u16) M2C_FIELD(arg0, u16 *, 0x1E);
    } else {
        arg2[0] = arg3[0] = arg2[1] = arg3[1] = 0;
    }
    return 0;
}

s32 TLobby__sub_803C48C8(u8 *arg0, s32 arg1, u16 *arg2) {
    if (arg1 < 0x12) {
        return -1;
    }
    if (M2C_FIELD(arg0, u16 *, 0) != 0x8000) {
        return -2;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 2) < 0xE) {
        return -1;
    }
    *arg2 = M2C_FIELD(arg0, u16 *, 0x10);
    return 0;
}

s32 ARStartDMA(u8 *arg0, s32 arg1, s16 *arg2, u8 *arg3, s8 *arg4, s8 *arg5, u8 *arg6, s32 *arg7, s32 *arg8, s32 *arg9) {
    if (arg1 < 0x10) {
        return -1;
    }
    if ((u16)((arg0[0] << 8) | arg0[1]) != 0x8000) {
        return -2;
    }
    *arg2 = ((arg0[2] << 8) | arg0[3]) + 4;
    *arg3 = arg0[4];
    *arg5 = arg0[5];
    *arg4 = arg0[6];
    *arg6 = arg0[7];
    *arg7 = (arg0[8] << 24) | (arg0[9] << 16) | (arg0[10] << 8) | arg0[11];
    *arg8 = (arg0[12] << 24) | (arg0[13] << 16) | (arg0[14] << 8) | arg0[15];
    if (*arg4 == 0) {
        *arg9 = 0;
    } else {
        *arg9 = ((*arg5 - 2) * 8) / *arg4;
    }
    return 0;
}

s32 find_terminator_index__6TLobbyFPviPv(s16 *arg0, s32 arg1, s16 *arg2) {
    s16 *p = arg0;
    s32 i;
    s32 best = 0x7FFFFFFF;
    for (i = 0; i < arg1 - 1; i += 2, p++) {
        if (*p == -0x8000) {
            best = (i < 0x7FFFFFFF) ? i : 0x7FFFFFFF;
            break;
        }
    }
    if (best != 0x7FFFFFFF) {
        *arg2 = best;
        return 0;
    }
    *arg2 = 0;
    return -1;
}

void set_global_805D7520__6TLobbyFi(s32 arg0) {
    lbl_805D7520 = arg0;
}

extern s32 lbl_805D7520;

void dispatch_receive_update__6TLobbyFv(void) {
    if ((s32) lbl_805D7520 == 0) {
        decode_adx_stereo();
        return;
    }
    decode_adx_stereo_downmix();
}

extern s32 lobby_error_callback;
extern s32 tlobby_error_callback_arg;

typedef void (*Callback_803C5744)(s32 ctx, char *msg);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline void num_to_str_803C526C(s32 v, char *out, s32 n) {
    s32 i;
    s32 len;
    for (i = 0; i < 32; i++) {
        out[i] = v % 10;
        v /= 10;
        if (v == 0) {
            out[i] = 0;
            break;
        }
    }
    s32 sl = strlen(number_format_digit_buffer);
    len = n - 1;
    if (sl < len) {
        len = sl;
    }
    for (i = 0; i < len; i++) {
        out[i] = number_format_digit_buffer[len - 1 - i];
    }
    out[i] = 0;
}
void format_number_pair__6TLobbyFiiPvi(s32 arg0, s32 arg1, char *arg2, s32 arg3) {
    num_to_str_803C526C(arg0, arg2, arg3);
    strncat(arg2, (s32)lbl_805E0D28, arg3 - strlen(arg2) - 1);
    num_to_str_803C526C(arg1, arg2 + strlen(arg2), 4 - strlen(arg2));
}
#pragma pop

void report_adx_error__6TLobbyFPvi(const char *msg, s32 arg) {
    strncpy(((char *)&adx_error_message_buffer), msg, 0xFF);
    strncat(((char *)&adx_error_message_buffer), arg, 0xFF);
    if ((*(Callback_803C5744 *)&lobby_error_callback) != 0) {
        (*(Callback_803C5744 *)&lobby_error_callback)(tlobby_error_callback_arg, ((char *)&adx_error_message_buffer));
    }
    TLobby__sub_803D38B4(((char *)&adx_error_message_buffer));
}

void notify_error__6TLobbyFPv(const char *arg0) {
    strncpy(((char *)&adx_error_message_buffer), arg0, 0xFF);
    if ((*(RecoveredCallback_e2efd47cbcab *)&lobby_error_callback) != NULL) {
        (*(RecoveredCallback_e2efd47cbcab *)&lobby_error_callback)(tlobby_error_callback_arg, ((char *)&adx_error_message_buffer));
    }
    TLobby__sub_803D38B4(((char *)&adx_error_message_buffer));
}

void set_params__6TLobbyFii(s32 arg0, s32 arg1) {
    lobby_error_callback = arg0;
    tlobby_error_callback_arg = arg1;
    set_callback_params__6TLobbyFii();
}

extern s32 lbl_805D7530;

typedef char RecoveredGlobal_803C5850_lbl_80572020_size[sizeof(RecoveredGlobal_803C5850_lbl_80572020) == 0x100 ? 1 : -1];
void clear_error_callback__6TLobbyFv(void) {
    memset((void *) (&adx_error_message_buffer.value), (int) (0), (int) (0x100));
    lobby_error_callback = 0;
    tlobby_error_callback_arg = 0;
}

typedef char RecoveredGlobal_803C588C_lbl_80572020_size[sizeof(RecoveredGlobal_803C588C_lbl_80572020) == 0x100 ? 1 : -1];
void clear_error_callback_state__6TLobbyFv(void) {
    memset((void *) (&(*(RecoveredGlobal_803C588C_lbl_80572020 *)&adx_error_message_buffer).value), (int) (0), (int) (0x100));
    lobby_error_callback = 0;
    tlobby_error_callback_arg = 0;
}

void ARAlloc(void) {
    if ((s32) lbl_805D7530 == 0) {
        init_once__6TLobbyFv();
        lbl_805D7530 = 1;
        update_active_stream_reads();
        lbl_805D7530 = 2;
        TLobby__sub_803CEF60();
        lbl_805D7530 = 5;
        update_active_stream_reads();
        lbl_805D7530 = 6;
        TLobby__sub_803CC884();
        lbl_805D7530 = 0;
        release_ref__6TLobbyFv();
    }
}

extern s32 TLobby_init_ref_count;
extern s32 TLobby__svm_cb_svr_handle;

void dec_ref_and_shutdown__6TLobbyFv(void) {
    s32 temp_r0;

    temp_r0 = TLobby_init_ref_count - 1;
    TLobby_init_ref_count = temp_r0;
    if (temp_r0 == 0) {
        shutdown_cleanup__6TLobbyFv();
        dec_ref_and_reset_tables__6TLobbyFv();
        si_get_type_async__6TLobbyFv();
        release_and_close_all_slots__6TLobbyFv();
        init_once__6TLobbyFv();
        SVM_DelCbSvr__6TLobbyFii((int) (2), (void *) (1));
        SVM_DelCbSvr__6TLobbyFii((int) (2), (void *) (3));
        SVM_DelCbSvr__6TLobbyFii((int) (4), (void *) (TLobby__svm_cb_svr_handle));
        TLobby__sub_803D3194();
        release_ref__6TLobbyFv();
        init_once__6TLobbyFv();
        clear_session_buffer__6TLobbyFv();
        clear_error_callback__6TLobbyFv();
        release_ref_and_clear_buffer__6TLobbyFv();
        release_ref_and_clear_buffer_3000__6TLobbyFv();
        dec_ref_and_clear_buffer__6TLobbyFv();
        release_ref__6TLobbyFv();
    }
}
void init_and_add_ref__6TLobbyFv(void) {
    s32 v = lbl_805E0D30;
    if (TLobby_init_ref_count == 0) {
        ((void (*)(s32))TLobby__sub_803C4698)(v);
        init_once__6TLobbyFv();
        TLobby__sub_803D2ED4();
        add_ref_and_clear_buffer_3000__6TLobbyFv();
        TLobby__sub_803D25DC();
        clear_error_callback_state__6TLobbyFv();
        clear_buffer_a00__6TLobbyFv();
        reset_sound_buffers__6TLobbyFv();
        init_afs_adxf_state__6TLobbyFv();
        TLobby__sub_803CC114();
        flush_update__6TLobbyFv((void *)forward_notify_error__6TLobbyFii, 0);
        memset(lbl_80572120, 0, 0xA80);
        TLobby__sub_803D1CC0();
        if (lbl_805D4658 == 1) {
            SVM_SetCbSvrId__6TLobbyFiiii(2, 1, (void *)get_state_zero__6TLobbyFv, 0);
            SVM_SetCbSvrId__6TLobbyFiiii(2, 3, (void *)ar_alloc__6TLobbyFv, 0);
            TLobby__svm_cb_svr_handle = svm_set_cb_svr__6TLobbyFiii(4, (void *)process_connection_state__6TLobbyFv, 0);
        }
        lbl_805D7540 = 0;
        release_ref__6TLobbyFv();
    }
    TLobby_init_ref_count += 1;
}

}
