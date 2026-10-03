#include "pso/TChCrLoadAfs.h"
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Te_8028BFA4 { s32 id; u8 pad[0xC]; };

struct Ld_8028BFA4 { u8 pad0[0x20]; s32 f20; s32 f24; u8 pad28[4]; s32 f2c; u8 pad30[8]; void *bufs[8]; u32 f5c_; };

struct Cl_8028BFA4 { u8 pad0[0x20]; s32 f20; s32 f24; u8 pad28[4]; s32 f2c; u8 pad30[8]; void *bufs[8]; s32 f58; s32 f5c; s32 f60; u8 pad64[8]; s32 f6c; s32 f70; };

typedef s32 M2C_UNK;

struct Ent_8028BE00 { u8 pad[0xC]; };

struct List_8028BE00 { Ent_8028BE00 *ents; };

struct Rect_8028BE00 { u8 pad[0x24]; };

struct Ld_8028BE00 {
    u8 pad0[0x1C];
    s32 f1c;
    s32 f20;
    s32 f24;
    u8 pad28[4];
    s32 f2c;
    List_8028BE00 *f30;
    u8 pad34[4];
    s32 bufs[8];
    s32 f58;
    s32 f5c;
    s32 f60;
    u8 pad64[0x10];
    Rect_8028BE00 rects[8];
};

extern "C" {
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 TLobby__sub_803CC53C(u32);
s32 TLobby__sub_803CCB5C(u32, s32, u32);
u32 TLobby__sub_803CD16C(s32, s32);
extern Te_8028BFA4 lbl_804D88B8[];
void TLobby__sub_8028BFA4(Cl_8028BFA4 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
f32 get_status_value_f32__23TObjEneMe1CanadinLeaderFv(f32);
f32 TLobby__sub_8028C50C(f32);
s32 strcmp(const char *, const char *);
extern Te_8028BFA4 lbl_804D88B8[];
extern const f32 lbl_805DD920;
s32 TLobby__sub_8028BCB0(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
int TLobby__sub_803CC4C0(int);
int TLobby__sub_803CCE9C(int);
int safe_free__23TAdSinglePlyChrSelectGCFUi(int);
void set_render_rect__10TObjPlayerFPviiii(void *, s32, s32, s32, s32);
void set_texture_name(void *, void *, s32, s32);
s32 TObjPlayer__sub_803DDC50(void *);
void TLobby__sub_8028BE00(Ld_8028BE00 *arg0);
}

extern "C" {
int TLobby__sub_803CC4C0(int);
int TLobby__sub_803CC980(int);
int TLobby__sub_803CCE9C(int);
int safe_free__23TAdSinglePlyChrSelectGCFUi(int);
int release_load_slot__12TChCrLoadAfsFPv(void *);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TChCrLoadAfs__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void * create__12TChCrLoadAfsFPvPvPv(void *arg0, void *arg1, void *arg2);
void start_download__12TChCrLoadAfsFPv(void *arg0);
void TChCrLoadAfs__sub_8028B940(void);
void TChCrLoadAfs__sub_8028B944(void);
s32 TLobby__sub_803CC53C(u32);
s32 TLobby__sub_803CCB5C(u32, s32, u32);
u32 TLobby__sub_803CD16C(s32, s32);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 try_begin_load__12TChCrLoadAfsFPv();

void start_download__12TChCrLoadAfsFPv(void *arg0) {
    s32 temp_r3_2;
    u32 temp_r3;
    u32 temp_r3_3;

    if (try_begin_load__12TChCrLoadAfsFPv() != 0) {
        temp_r3 = TLobby__sub_803CD16C(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, u32 *, 0x1C) = temp_r3;
        if (temp_r3 == 0U) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 3;
            return;
        }
        temp_r3_2 = TLobby__sub_803CC53C(M2C_FIELD(arg0, u32 *, 0x1C));
        temp_r3_3 = alloc__22TQuestVmDownLoadServerFPv(temp_r3_2 << 0xB);
        M2C_FIELD(arg0, u32 *, 0x28) = temp_r3_3;
        if (temp_r3_3 == 0U) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 3;
            return;
        }
        TLobby__sub_803CCB5C(M2C_FIELD(arg0, u32 *, 0x1C), temp_r3_2, M2C_FIELD(arg0, u32 *, 0x28));
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    }
}
}

#include "types.h"

class Afs_8028BA64 {
public:
    u8 pad[0x2C];
    s32 state;
    u8 pad2[0x34 - 0x30];
    s32 wait;
    void m0();
    void m1();
    void m2();
    void m3();
};

typedef void (Afs_8028BA64::*Handler_8028BA64)();

extern "C" {

void TChCrLoadAfs::run_task() {
    Afs_8028BA64 *arg0 = (Afs_8028BA64 *)this;
    if (--arg0->wait < 0) {
        arg0->state = 3;
        return;
    }
    static Handler_8028BA64 tbl[] = {
        &Afs_8028BA64::m0,
        &Afs_8028BA64::m1,
        &Afs_8028BA64::m2,
        &Afs_8028BA64::m3,
    };
    (arg0->*tbl[arg0->state])();
}

}

TChCrLoadAfs::~TChCrLoadAfs() {
    u32 handle = load_handle;
    if (handle != 0) {
        if (TLobby__sub_803CC4C0((int)handle) == 2) TLobby__sub_803CC980((int)load_handle);
        TLobby__sub_803CCE9C((int)load_handle);
        load_handle = 0;
    }
    u32 buffer = buffer_address;
    if (buffer != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((int)buffer);
        buffer_address = 0;
    }
    release_load_slot__12TChCrLoadAfsFPv(this);
}

extern "C" {

extern M2C_UNK __vt__12TChCrLoadAfs[];
extern void *lbl_805D3B48;

void *TChCrLoadAfs__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TChCrLoadAfs;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3B48;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 900;
    return arg0;
}

void * create__12TChCrLoadAfsFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = TChCrLoadAfs__ct((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2));
    }
    return o;
}

s32 TLobby__sub_8028BCB0(u8 *arg0) {
    char *name;
    s32 count;
    s32 steps;
    s32 mid;
    s32 step;
    char **list;
    s32 i;
    f32 l2;
    s32 r;
    name = *(char **)(*M2C_FIELD(arg0, u8 ***, 0x30) + M2C_FIELD(arg0, s32 *, 0x5C) * 0xC);
    count = (&lbl_804D88B8[M2C_FIELD(arg0, s32 *, 0x70)].id)[1];
    l2 = TLobby__sub_8028C50C(lbl_805DD920);
    steps = (s32)get_status_value_f32__23TObjEneMe1CanadinLeaderFv(TLobby__sub_8028C50C(count) / l2) + 1;
    mid = (count + 1) >> 1;
    step = (mid + 1) >> 1;
    list = (char **)(&lbl_804D88B8[M2C_FIELD(arg0, s32 *, 0x70)].id)[3];
    for (i = 0; i < steps; i++) {
        r = strcmp(name + 3, list[mid] + 3);
        if (r == 0) {
            return mid;
        }
        if (r < 0) {
            mid -= step;
            if (mid < 0) {
                mid = 0;
            }
        } else {
            mid += step;
            if (mid >= count) {
                mid = count - 1;
            }
        }
        step = (step + 1) >> 1;
        if (step < 1) {
            step = 1;
        }
    }
    queue_destruction__7TObjectFv(arg0);
    return 0;
}

void TLobby__sub_8028BE00(Ld_8028BE00 *arg0) {
    s32 retry;
    s32 i;
    retry = 0;
    switch (TLobby__sub_803CC4C0(arg0->f60)) {
    case 1:
        if (++arg0->f20 >= 3) {
            return;
        }
        retry = 1;
        break;
    case 2:
        if (++arg0->f24 >= 150) {
            retry = 1;
            break;
        }
        return;
    case 3:
        break;
    default:
        return;
    }
    if (retry != 0) {
        TLobby__sub_803CCE9C(arg0->f60);
        arg0->f60 = 0;
        safe_free__23TAdSinglePlyChrSelectGCFUi(arg0->bufs[arg0->f5c]);
        arg0->bufs[arg0->f5c] = 0;
        arg0->f2c = 1;
        return;
    }
    TLobby__sub_803CCE9C(arg0->f60);
    arg0->f60 = 0;
    if (++arg0->f5c != arg0->f58) {
        arg0->f2c = 1;
        return;
    }
    for (i = 0; i < arg0->f58; i++) {
        set_render_rect__10TObjPlayerFPviiii(&arg0->rects[i], arg0->bufs[i], 0, 0, 0);
        set_texture_name(&arg0->f30->ents[i], &arg0->rects[i], 0, 0x40000000);
    }
    if (TObjPlayer__sub_803DDC50(arg0->f30) != -1) {
        arg0->f1c = 1;
        queue_destruction__7TObjectFv(arg0);
    }
}

void TLobby__sub_8028BFA4(Cl_8028BFA4 *arg0) {
    s32 n;
    u32 t;
    void *buf;
    t = TLobby__sub_803CD16C(lbl_804D88B8[arg0->f70].id, TLobby__sub_8028BCB0((u8 *)(arg0)));
    arg0->f60 = t;
    if (t != 0) {
        arg0->f20 = 0;
        arg0->f24 = 0;
        n = TLobby__sub_803CC53C((u32)(arg0->f60));
        buf = ((void *)alloc__22TQuestVmDownLoadServerFPv((s32)(n << 11)));
        arg0->bufs[arg0->f5c] = buf;
        if (buf != NULL) {
            TLobby__sub_803CCB5C((u32)(arg0->f60), (s32)(n), (u32)(arg0->bufs[arg0->f5c]));
            arg0->f2c = 2;
        }
    }
}

}
