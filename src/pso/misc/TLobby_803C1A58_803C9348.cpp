#include "types.h"
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
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
M2C_UNK TLobby__sub_803CC030(int, int);
M2C_UNK dispatch_packet__6TLobbyFv(int, int);
void TLobby__sub_803C9DB4(u8 *arg0);
M2C_UNK reset_flag__6TLobbyFPv(int);
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
M2C_UNK TLobby__sub_803C89C4(void *);
M2C_UNK TLobby__sub_803C8B38(int);
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
s32 set_scroll_offset__6TLobbyFPvi(void *, s32);
s32 send_with_offset4_alt__6TLobbyFPv(int);
M2C_UNK set_field_3c__6TLobbyFPvi(int, int);
M2C_UNK set_scroll_position__6TLobbyFPvi(void *, int);
void TLobby__sub_803CB194(u8 *arg0);
extern s32 lbl_805D7590;
s32 TLobby__sub_803CB844(void);
extern s32 lbl_805D7540;
void set_range__6TLobbyFPvii(void *, int, int);
M2C_UNK set_scroll_position__6TLobbyFPvi(void *, int);
void init_stream_position__6TLobbyFPv(void *);
void set_param_and_notify__6TLobbyFPvi(void *, int);
void TLobby__sub_803C0758(void *);
void configure_audio_stream_output(Stream_803C9FCC *self);
extern char lbl_8047C6F0[];
void stop_audio_stream(u8 *arg0);
M2C_UNK init_once__6TLobbyFv();
M2C_UNK release_ref__6TLobbyFv();
void *TLobby__sub_803C8BAC(const char *name, s32 arg);
void report_adx_error__6TLobbyFPvi(const char *msg, const char *arg);
void configure_audio_stream_output(Stream_803C9FCC *self);
void start_audio_stream_file(Stream_803CA824 *self, const char *name);
s16 TLobby__sub_803C96E0(Obj_803C96E0 *self, s32 i);
extern volatile s32 lbl_805D759C;
extern volatile s32 lbl_805D75C8;
extern s32 lbl_805D75C4;
void TLobby__sub_803CBBB0(void);
extern const char *const volatile lbl_805E0D78;
void ARAlloc(void);
void TLobby__sub_803CB81C(void);
M2C_UNK TLobby__sub_803CBF50(void *);
M2C_UNK notify_error__6TLobbyFPv(void *);
extern u8 lbl_8047C690[];
void adxt_set_out_pan__6TLobbyFPvis(S_803C96F0 *arg0, s32 arg1, s16 arg2);
M2C_UNK GXFlush();
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
M2C_UNK TLobby__sub_803CA8B4(Ent_803C9608 *);
M2C_UNK run_sequence__6TLobbyFv();
extern Ent_803C9608 lbl_80572120[16];
extern s32 lbl_805D7564;
void TLobby__sub_803C9608(void);
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
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
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
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
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
M2C_UNK TLobby__sub_803C97F4(void *, void *, void *);
M2C_UNK TLobby__sub_803CC030(int, int);
extern s32 lbl_805D7540;
extern s32 lbl_805D7560;
extern s32 lbl_805D7570;
void TLobby__sub_803C94DC(u8 *arg0, s32 arg1);
M2C_UNK reset_flag__6TLobbyFPv(int);
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
M2C_UNK TLobby__sub_803CC030(int, int);
M2C_UNK dispatch_packet__6TLobbyFv(int, int);
M2C_UNK TLobby__sub_803C89C4(void *);
M2C_UNK TLobby__sub_803C8B38(int);
M2C_UNK DVDReadAbsAsyncPrio(int);
extern s32 lbl_805D7540;
void set_param_and_notify__6TLobbyFPvi(void *, int);
void TLobby__sub_803C0758(void *);
void TLobby__sub_803C9E38(Obj_803C9E38 *arg0, VObj_803C9E38 *arg1);
M2C_UNK reset_flag__6TLobbyFPv(int);
M2C_UNK release_ref__6TLobbyFv();
M2C_UNK init_once__6TLobbyFv();
M2C_UNK TLobby__sub_803CC030(int, int);
M2C_UNK dispatch_packet__6TLobbyFv(int, int);
M2C_UNK TLobby__sub_803C89C4(void *);
M2C_UNK TLobby__sub_803C8B38(int);
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
void *TLobby__sub_803D2C84(void *, s32, s32);
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
void stop_audio_stream(u8 *arg0) {
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r3_3;
    u8 *temp_r4;
    u8 *temp_r4_2;
    u8 *temp_r4_3;
    if (M2C_FIELD(arg0, void **, 8) != NULL) {
        TLobby__sub_803C89C4(M2C_FIELD(arg0, void **, 8));
        TLobby__sub_803C8B38((int) (M2C_FIELD(arg0, u32 *, 8)));
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

void TLobby__sub_803C9E38(Obj_803C9E38 *arg0, VObj_803C9E38 *arg1) {
    s32 i;
    if (arg0->f8 != NULL) {
        TLobby__sub_803C89C4(arg0->f8);
        TLobby__sub_803C8B38((int)arg0->f8);
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

void configure_audio_stream_output(Stream_803C9FCC *self) {
    s32 i;
    s32 v;
    Stream_803C9FCC *pp;
    set_range__6TLobbyFPvii(self->f8, self->f3e << 11, self->f3c << 11);
    set_scroll_position__6TLobbyFPvi(self->f8, 0x19);
    init_stream_position__6TLobbyFPv(self->f8);
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
            TLobby__sub_803C89C4(arg0->f8);
            TLobby__sub_803C8B38((int)arg0->f8);
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
        TLobby__sub_803C8B38((int)arg0->f8);
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
M2C_UNK set_coords__6TLobbyFPvii(void *, void *, void *);
M2C_UNK run_step_4430__6TLobbyFv(int, int);
M2C_UNK TLobby__sub_803CBF0C(int, int);
M2C_UNK TLobby__sub_803CBF30(int, int);
M2C_UNK TLobby__sub_803CBF90(int, int);
M2C_UNK TLobby__sub_803CBFB0(int, int);
void TLobby__sub_803CAEB4(u8 *arg0);
extern char lbl_8047C718[];

#define SBF50 TLobby__sub_803CBF50

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
                set_scroll_position__6TLobbyFPvi(self->f8, pages);
                set_coords__6TLobbyFPvii(self->f8, (void *)TLobby__sub_803CB194, arg0);
            }
            s32 e = dispatch_field4_event__6TLobbyFPv(t);
            self->f90 = e;
            set_field_3c__6TLobbyFPvi(t, e);
            set_field_44__6TLobbyFPvi(t, 0);
            set_field_40__6TLobbyFPvi(t, 0);
            TLobby__sub_803BFFFC(t, (void *)adxt_trap_entry_update__6TLobbyFPv, arg0);
        } else {
            if (self->f8 != NULL) {
                set_scroll_position__6TLobbyFPvi(self->f8, 0x7FFFFFFF);
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
#undef arg0
#undef SBF50

void TLobby__sub_803CB194(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r31;
    temp_r31 = (u8 *)(M2C_FIELD(arg0, u8 **, 8));
    temp_r3 = send_with_offset4_alt__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    if ((s8) M2C_FIELD(arg0, u8 *, 0x6C) == 0) {
        set_field_3c__6TLobbyFPvi((int) (M2C_FIELD(arg0, s32 *, 4)), (int) (-1));
        set_scroll_position__6TLobbyFPvi((void *) (M2C_FIELD(arg0, u8 **, 8)), (int) (0x7FFFFFFF));
        return;
    }
    set_scroll_offset__6TLobbyFPvi(temp_r31, temp_r3 / 2048);
}

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

void TLobby__sub_803CBBB0(void) {
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
