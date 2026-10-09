#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int is_unloaded__12TChCrLoadAfsFPv(void* p);
void release_load_slot__12TChCrLoadAfsFPv(void *arg0);
s32 try_begin_load__12TChCrLoadAfsFPv(void *arg0);

int is_unloaded__12TChCrLoadAfsFPv(void* p) { return *(u32*)((char*)p + 0x4a8) == 0; }

extern s32 chcr_load_afs_busy_flag;

void release_load_slot__12TChCrLoadAfsFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        if ((s32) chcr_load_afs_busy_flag == 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 3;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        chcr_load_afs_busy_flag = 0;
    }
}

extern s32 chcr_load_afs_busy_flag;

s32 try_begin_load__12TChCrLoadAfsFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 3;
        return 0;
    }
    if ((s32) chcr_load_afs_busy_flag != 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = 1;
    chcr_load_afs_busy_flag = 1;
    return 1;
}

}

#define try_begin_load__12TChCrLoadAfsFPv (*(s32 (*)())&try_begin_load__12TChCrLoadAfsFPv)
#define release_load_slot__12TChCrLoadAfsFPv (*(void (*)(void *))&release_load_slot__12TChCrLoadAfsFPv)

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct L_8028B948 { u8 pad[0x1c]; s32 f1c; u8 pad2[0xc]; s32 f2c; };

extern "C" {
s32 TLobby__sub_803CC4C0(int);
void TLobby__sub_803CCE9C(int);
void poll_load__12TChCrLoadAfsFv(L_8028B948 *arg0);
}

extern "C" {

void sub_8028B940__12TChCrLoadAfsFv(void);
void sub_8028B944__12TChCrLoadAfsFv(void);
s32 TLobby__sub_803CC53C(u32);
s32 read_checked_align__6TLobbyFiii(u32, s32, u32);
u32 adxf_open_afs__6TLobbyFii(s32, s32);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);

void sub_8028B940__12TChCrLoadAfsFv(void) {  }
void sub_8028B944__12TChCrLoadAfsFv(void) {  }
void poll_load__12TChCrLoadAfsFv(L_8028B948 *arg0) {
    switch (TLobby__sub_803CC4C0(arg0->f1c)) {
    case 2:
        return;
    case 3:
        TLobby__sub_803CCE9C(arg0->f1c);
        arg0->f1c = 0;
        break;
    case 1:
    default:
        arg0->f2c = 3;
        return;
    }
    release_load_slot__12TChCrLoadAfsFPv(arg0);
    arg0->f2c = 2;
}

}

#undef release_load_slot__12TChCrLoadAfsFPv
#undef try_begin_load__12TChCrLoadAfsFPv

#define try_begin_load__12TChCrLoadAfsFPv (*(s32 (*)())&try_begin_load__12TChCrLoadAfsFPv)
#define release_load_slot__12TChCrLoadAfsFPv (*(int (*)(void *))&release_load_slot__12TChCrLoadAfsFPv)
#define TLobby__sub_803CCE9C (*(int (*)(int))&TLobby__sub_803CCE9C)
#define TLobby__sub_803CC4C0 (*(int (*)(int))&TLobby__sub_803CC4C0)

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
extern Te_8028BFA4 player_class_texture_archive_table[];
void start_read__22TChCrLoadAfsTextureReqFPv(Cl_8028BFA4 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
f32 get_status_value_f32__23TObjEneMe1CanadinLeaderFv(f32);
f32 TLobby__sub_8028C50C(f32);
s32 strcmp(const char *, const char *);
extern Te_8028BFA4 player_class_texture_archive_table[];
extern const f32 lbl_805DD920;
s32 find_player_texture_name_ordinal(u8 *arg0);
int safe_free__23TAdSinglePlyChrSelectGCFUi(int);
void set_render_rect__10TObjPlayerFPviiii(void *, s32, s32, s32, s32);
void set_texture_name(void *, void *, s32, s32);
s32 load_texture_list(void *);
void update_loading__22TChCrLoadAfsTextureReqFPv(Ld_8028BE00 *arg0);
}

extern "C" {
int adxf_stop__6TLobbyFPv(int);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TChCrLoadAfs__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void * create__12TChCrLoadAfsFPvPvPv(void *arg0, void *arg1, void *arg2);
void start_download__12TChCrLoadAfsFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

void start_download__12TChCrLoadAfsFv(void *arg0) {
    s32 temp_r3_2;
    u32 temp_r3;
    u32 temp_r3_3;

    if (try_begin_load__12TChCrLoadAfsFPv() != 0) {
        temp_r3 = adxf_open_afs__6TLobbyFii(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x24));
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
        read_checked_align__6TLobbyFiii(M2C_FIELD(arg0, u32 *, 0x1C), temp_r3_2, M2C_FIELD(arg0, u32 *, 0x28));
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
};

typedef void (TChCrLoadAfs::*Handler_8028BA64)();

s32 chcr_load_afs_busy_flag;

extern "C" {

void TChCrLoadAfs::run_task() {
    Afs_8028BA64 *arg0 = (Afs_8028BA64 *)this;
    if (--arg0->wait < 0) {
        arg0->state = 3;
        return;
    }
    static Handler_8028BA64 tbl[] = {
        &TChCrLoadAfs::start_download,
        &TChCrLoadAfs::poll_load,
        &TChCrLoadAfs::sub_8028B944,
        &TChCrLoadAfs::sub_8028B940,
    };
    (this->*tbl[arg0->state])();
}

}

TChCrLoadAfs::~TChCrLoadAfs() {
    u32 handle = load_handle;
    if (handle != 0) {
        if (TLobby__sub_803CC4C0((int)handle) == 2) adxf_stop__6TLobbyFPv((int)load_handle);
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

s32 find_player_texture_name_ordinal(u8 *arg0) {
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
    count = (&player_class_texture_archive_table[M2C_FIELD(arg0, s32 *, 0x70)].id)[1];
    l2 = TLobby__sub_8028C50C(lbl_805DD920);
    steps = (s32)get_status_value_f32__23TObjEneMe1CanadinLeaderFv(TLobby__sub_8028C50C(count) / l2) + 1;
    mid = (count + 1) >> 1;
    step = (mid + 1) >> 1;
    list = (char **)(&player_class_texture_archive_table[M2C_FIELD(arg0, s32 *, 0x70)].id)[3];
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

void update_loading__22TChCrLoadAfsTextureReqFPv(Ld_8028BE00 *arg0) {
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
    if (load_texture_list(arg0->f30) != -1) {
        arg0->f1c = 1;
        queue_destruction__7TObjectFv(arg0);
    }
}

void start_read__22TChCrLoadAfsTextureReqFPv(Cl_8028BFA4 *arg0) {
    s32 n;
    u32 t;
    void *buf;
    t = adxf_open_afs__6TLobbyFii(player_class_texture_archive_table[arg0->f70].id, find_player_texture_name_ordinal((u8 *)(arg0)));
    arg0->f60 = t;
    if (t != 0) {
        arg0->f20 = 0;
        arg0->f24 = 0;
        n = TLobby__sub_803CC53C((u32)(arg0->f60));
        buf = ((void *)alloc__22TQuestVmDownLoadServerFPv((s32)(n << 11)));
        arg0->bufs[arg0->f5c] = buf;
        if (buf != NULL) {
            read_checked_align__6TLobbyFiii((u32)(arg0->f60), (s32)(n), (u32)(arg0->bufs[arg0->f5c]));
            arg0->f2c = 2;
        }
    }
}

}

#undef TLobby__sub_803CC4C0
#undef TLobby__sub_803CCE9C
#undef release_load_slot__12TChCrLoadAfsFPv
#undef try_begin_load__12TChCrLoadAfsFPv
