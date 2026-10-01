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
void TLobby__sub_803C9CBC(u8 *arg0);
M2C_UNK TLobby__sub_803C4A7C(void *, void *, void *, void *);
void TLobby__sub_803CB594(s32 arg0, void *arg1, s32 arg2);
s8 TLobby__sub_803C9CB0(u8 *arg0);
M2C_UNK TLobby__sub_803C57C8(void *);
void TLobby__sub_803CB7F8(M2C_UNK arg0, s32 arg1);
M2C_UNK memset(void *, int, int);
extern Ch_803CB5C4 lbl_80575B40[16];
void TLobby__sub_803CB71C(void);
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
void TLobby__sub_803C8A14(void *);
void set_param_and_notify__6TLobbyFPvi(void *, int);
void TLobby__sub_803C0758(void *);
void TLobby__sub_803C9FCC(Stream_803C9FCC *self);
extern char lbl_8047C6F0[];
void TLobby__sub_803C9CBC(u8 *arg0);
M2C_UNK init_once__6TLobbyFv();
M2C_UNK release_ref__6TLobbyFv();
void *TLobby__sub_803C8BAC(const char *name, s32 arg);
void TLobby__sub_803C5744(const char *msg, const char *arg);
void TLobby__sub_803C9FCC(Stream_803C9FCC *self);
void TLobby__sub_803CA824(Stream_803CA824 *self, const char *name);
s16 TLobby__sub_803C96E0(Obj_803C96E0 *self, s32 i);
extern volatile s32 lbl_805D759C;
extern volatile s32 lbl_805D75C8;
extern s32 lbl_805D75C4;
void TLobby__sub_803CBBB0(void);
extern const char *const volatile lbl_805E0D78;
void ARAlloc(void);
void TLobby__sub_803CB81C(void);
M2C_UNK TLobby__sub_803CBF50(void *);
M2C_UNK TLobby__sub_803C57C8(void *);
extern u8 lbl_8047C690[];
void TLobby__sub_803C96F0(S_803C96F0 *arg0, s32 arg1, s16 arg2);
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
M2C_UNK TLobby__sub_803C57C8(void *);
void TLobby__sub_803C9CBC(u8 *arg0);
s32 TLobby__sub_803D2474(void *, int);
extern char lbl_8047C6C0[];
void TLobby__sub_803CA774(u8 *arg0, u8 *arg1, s32 arg2);
void TLobby__sub_803CE544(void *, int);
void TLobby__sub_803CF958(const char *);
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
s32 TLobby__sub_803D3224(int);
extern Cfg_803CBA58 lbl_804F9D80;
extern u8 lbl_80575E80[];
extern Cb_803CBA58 lbl_805D4680;
extern s32 lbl_805D7598;
extern s32 lbl_805D75A4;
extern s32 lbl_805D75BC;
extern s32 lbl_805D75C0;
void TLobby__sub_803CBA58(void);
extern s32 lbl_805D7540;
void set_param_and_notify__6TLobbyFPvi(void *, int);
void TLobby__sub_803C0758(void *);
void TLobby__sub_803CA0C8(Stream_803CA0C8 *self, s32 arg1);
M2C_UNK OSResumeThread(void *);
M2C_UNK OSSetThreadPriority(void *, int);
M2C_UNK TLobby__sub_803D3860(char *);
extern char lbl_8047C7B4[];
extern Cfg_803CBA58 lbl_804F9D80;
extern u8 lbl_80575E80[];
extern s32 lbl_805D7598;
extern s32 lbl_805D75BC;
void TLobby__sub_803CBBD8(void);
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
M2C_UNK TLobby__sub_803D3344();
M2C_UNK TLobby__sub_803D33F4();
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

void TLobby__sub_803C96F0(S_803C96F0 *arg0, s32 arg1, s16 arg2) {
    arg0->vals[arg1] = arg2;
    if (arg1 < arg0->count) {
        TLobby__sub_803CBF50(arg0->p);
        return;
    }
    TLobby__sub_803C57C8(lbl_8047C690);
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
void TLobby__sub_803C9CBC(u8 *arg0) {
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

void TLobby__sub_803C9FCC(Stream_803C9FCC *self) {
    s32 i;
    s32 v;
    Stream_803C9FCC *pp;
    set_range__6TLobbyFPvii(self->f8, self->f3e << 11, self->f3c << 11);
    set_scroll_position__6TLobbyFPvi(self->f8, 0x19);
    TLobby__sub_803C8A14(self->f8);
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

void TLobby__sub_803CA0C8(Stream_803CA0C8 *self, s32 arg1) {
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

void TLobby__sub_803CA774(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 r;
    TLobby__sub_803C9CBC(arg0);
    if (arg2 >= ((Ent_803CA774 *)arg1)[0].len || arg2 < 0) {
        return;
    }
    init_once__6TLobbyFv();
    r = TLobby__sub_803D2474(arg1 + *(s32 *)(arg1 + (arg2 + 1) * 8), 0x40000000);
    if (r == 0) {
        release_ref__6TLobbyFv();
        TLobby__sub_803C57C8(lbl_8047C6C0);
        return;
    }
    TLobby__sub_803CA0C8((Stream_803CA0C8 *)(arg0), (s32)(r));
    arg0[2] = 2;
    arg0[0x98] = 0;
    release_ref__6TLobbyFv();
}

void TLobby__sub_803CA824(Stream_803CA824 *self, const char *name) {
    TLobby__sub_803C9CBC((u8 *)self);
    init_once__6TLobbyFv();
    if ((self->handle = TLobby__sub_803C8BAC(name, self->f10)) == 0) {
        release_ref__6TLobbyFv();
        TLobby__sub_803C5744(lbl_8047C6F0, name);
        self->f60 = -1;
        self->state = 6;
    } else {
        TLobby__sub_803C9FCC((Stream_803C9FCC *)self);
        self->f98 = 0;
        release_ref__6TLobbyFv();
    }
}

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
void TLobby__sub_803CB594(s32 arg0, void *arg1, s32 arg2) {
    TLobby__sub_803C4A7C((void *) (arg2), arg1, (void *) (arg0 + 0x30), (void *) (arg0 + 0x32));
}
#pragma pop

Ch_803CB5C4 *TLobby__sub_803CB5C4(void) {
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
    TLobby__sub_803C4A7C((void *)500, (void *)44100, &c->c0, &c->c1);
    memset(c->f28, 0, 8);
    return c;
}

typedef char RecoveredGlobal_800F8A78_lbl_80501178_size[sizeof(RecoveredGlobal_800F8A78_lbl_80501178) == 0x10 ? 1 : -1];
void TLobby__sub_803CB71C(void) {
    memset((void *) (lbl_80575B40), (int) (0), (int) (0x340));
}

void TLobby__sub_803CB74C(s32 *arg0) {
    TLobby__sub_803CE544((void *)TLobby__sub_803CB7F8, 0);
    TLobby__sub_803CFAA8(lbl_805E0D70, (void *)TLobby__sub_803D43B8, 0);
    TLobby__sub_803CE544((void *)TLobby__sub_803CB7F8, 0);
    TLobby__sub_803CFAA8(lbl_805E0D74, (void *)TLobby__sub_803D0D84, 0);
    TLobby__sub_803CF958(lbl_805E0D74);
    if (arg0 != NULL) {
        TLobby__sub_803D0DE4(0, 0, 0, *arg0);
    } else {
        TLobby__sub_803D0DE4(0, 0, 0, 0);
    }
}

void TLobby__sub_803CB7F8(M2C_UNK arg0, s32 arg1) {
    TLobby__sub_803C57C8((void *) (arg1));
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
    TLobby__sub_803D33F4();
}

void TLobby__sub_803CBA38(void) {
    TLobby__sub_803D3344();
}

void TLobby__sub_803CBA58(void) {
    while (lbl_805D75C0 == 1) {
        if (TLobby__sub_803D3224(lbl_805D75A4++) == 0 || lbl_805D7598 == 1) {
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

void TLobby__sub_803CBBB0(void) {
    while (lbl_805D75C8 == 1) {
        lbl_805D759C++;
    }
    lbl_805D75C4 = 1;
}
void TLobby__sub_803CBBD8(void) {
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
        TLobby__sub_803D3860(lbl_8047C7B4);
    }
    OSSetThreadPriority(lbl_80575E80, (*(Cfg_803CBBD8 *)&lbl_804F9D80).prio);
}

}
