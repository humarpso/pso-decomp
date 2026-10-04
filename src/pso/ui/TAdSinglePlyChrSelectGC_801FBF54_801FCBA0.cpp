#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_4a87b2 { char pad[0x18]; };

struct VObj_18_4a87b2 : VBase_18_4a87b2 {
    virtual void m0();
    virtual M2C_UNK m1();
};

struct RecoveredGlobal_801FCD74_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_801FDA4C_lbl_804C88C0 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct RecoveredGlobal_801FDAAC_lbl_804C88C0 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct Ent_801FCD04 { u8 pad[0x41C]; s32 x; s32 v; u8 pad2[0x2798 - 0x424]; };

struct Obj_801FCD04 { s32 hdr; Ent_801FCD04 e[7]; };

struct Ent_801FCD3C { u8 pad[0x41C]; s32 x; s32 v; u8 pad2[0x2798 - 0x424]; };

struct Obj_801FCD3C { s32 hdr; Ent_801FCD3C e[7]; };

struct Ent_801FCCDC { u8 pad[0x41C]; s32 x; s32 v; u8 pad2[0x2798 - 0x424]; };

struct Obj_801FCCDC { s32 hdr; Ent_801FCCDC e[7]; };

struct Obj_801FCBA0 {
    void* a[4];
    void* b[4];
};

struct Ent_801FD668 { u8 pad[0x428]; u32 f428; u8 pad2[0x2798 - 0x42C]; };

struct Ent_801FD728 { u8 pad0[4]; u8 a[0x41C]; u8 b[0x2798 - 0x420]; };

struct A_801FD8B8 { u8 p0[4]; u32 f4; u32 f8; u8 pC[8]; u32 f14; };

struct C_801FD8B8 { u8 p[0x11564]; s32 f11564; };

extern "C" {
void TAdSinglePlyChrSelectGC__sub_801FCCB4(u8 *arg0, s32 arg1);
s32 TAdSinglePlyChrSelectGC__sub_801FCCC0(u8 *arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FC4F4(void *, s32);
extern u8 *lbl_805D5F60;
s32 TAdSinglePlyChrSelectGC__sub_801FCE2C(s32 arg0);
s32 __ct__12TPlyCharDataFv(s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 TAdSinglePlyChrSelectGC__sub_801FC984(s32);
M2C_UNK memset(int, int, int);
void TAdSinglePlyChrSelectGC__sub_801FCC18(s32 arg0);
M2C_UNK get_fog_ctrl__16TKeyBoardControlFPv();
s32 is_split_screen();
M2C_UNK TCameraCtrl__sub_80068A68();
M2C_UNK TCameraCtrl__sub_80068B34(int, int);
M2C_UNK set_mode__11TCameraCtrlFi(int);
M2C_UNK controller_stuff__Fv();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK run_tl_camera_tasks__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
extern RecoveredGlobal_801FCD74_main_task main_task;
extern u8 *lbl_805D4DF0;
void TAdSinglePlyChrSelectGC__sub_801FCD74(void);
u8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);
int set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int);
extern RecoveredGlobal_801FDA4C_lbl_804C88C0 lbl_804C88C0;
extern int lbl_805D49B4;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F84;
extern s32 lbl_805D5F94;
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C(void);
u8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);
int set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int);
extern RecoveredGlobal_801FDA4C_lbl_804C88C0 lbl_804C88C0;
extern int lbl_805D49B4;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;
extern s32 lbl_805D5F84;
extern s32 lbl_805D5F94;
s32 TAdSinglePlyChrSelectGC__sub_801FDAAC(void);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);
extern int lbl_805D49B4;
extern s32 lbl_805D5F8C;
extern s32 lbl_805D5F9C;
extern s32 lbl_805D5F90;
extern M2C_UNK lbl_804C8914[];
int TAdSinglePlyChrSelectGC__sub_801FD990(s32 a0);
s32 get_selection__23TAdSinglePlyChrSelectGCFv(void *self);
Ent_801FCD04 *TAdSinglePlyChrSelectGC__sub_801FCD04(Obj_801FCD04 *self);
s32 get_selection__23TAdSinglePlyChrSelectGCFv(void *self);
s32 *TAdSinglePlyChrSelectGC__sub_801FCD3C(Obj_801FCD3C *self);
bool TAdSinglePlyChrSelectGC__sub_801FCCDC(Obj_801FCCDC *self, s32 i);
s32 __dt__12TPlyCharDataFv(s32, s32);
s32 __dl__FPv(s32);
void TAdSinglePlyChrSelectGC__sub_801FCBA0(Obj_801FCBA0* arg0);
extern Ent_801FD668 *lbl_805D5F58;
s32 TAdSinglePlyChrSelectGC__sub_801FD668(void);
void init_new_character_data(void *);
void TAdSinglePlyChrSelectGC__sub_801FC0C8(void *);
extern Ent_801FD668 *lbl_805D5F58;
void init_fresh_character_slot(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FD8B8(A_801FD8B8 *a, A_801FD8B8 *b, C_801FD8B8 *c, C_801FD8B8 *d);
void reset_load_state__15TAdPlayerLoadGCFPvPv(int, void *);
s32 TAdSinglePlyChrSelectGC__sub_801FCB04(Ent_801FD668 *);
s32 init_and_register__23TAdSinglePlyChrSelectGCFi();
extern u32 lbl_805D5F5C;
extern u8 *lbl_805D5F70;
s32 TAdPlayerLoadGC__sub_801FD814(void);
}

extern "C" {

s32 get_type__23TAdSinglePlyChrSelectGCFPv(void* p);
s32 pso_system_load_gc(void);
void set_id__23TAdSinglePlyChrSelectGCFPvi(void* p, s32 v);
void setup__23TAdSinglePlyChrSelectGCFi(int a0);
s32 TAdPlayerLoadGC__sub_801E2048(s32, M2C_UNK *);
int draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(void*, void*, void*, void*);
s32 get_instance__15TAdPlayerLoadGCFv();
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv();

void TAdSinglePlyChrSelectGC__sub_801FCBA0(Obj_801FCBA0* arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (arg0->a[i] != NULL) {
            __dt__12TPlyCharDataFv((s32)arg0->a[i], 1);
        }
        if (arg0->b[i] != NULL) {
            __dl__FPv((s32)arg0->b[i]);
        }
        arg0->a[i] = NULL;
        arg0->b[i] = NULL;
    }
}

void TAdSinglePlyChrSelectGC__sub_801FCC18(s32 arg0) {
  s32 temp_r3_2;
  s32 var_r0;
  s32 temp_r3;
  s32 var_r0_2;
  s32 var_r31;
  u8 *temp_r30;
  s32 var_r29;
  var_r29 = 0;
  var_r31 = 0;
  do
  {
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *) 0x41C);
    var_r0 = temp_r3;
    temp_r30 += 0;
    if (var_r0 != 0)
    {
      var_r0 = __ct__12TPlyCharDataFv(temp_r3);
    }
    temp_r30 = (u8 *) (arg0 + var_r31);
    *((s32 *) (((s8 *) temp_r30) + 0)) = var_r0;
    temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((void *) 0x2370);
    var_r0_2 = temp_r3_2;
    if (var_r0_2 != 0)
    {
      var_r0_2 = TAdSinglePlyChrSelectGC__sub_801FC984(temp_r3_2);
    }
    *((s32 *) (((s8 *) temp_r30) + 0x10)) = var_r0_2;
    memset((int) (*((s32 *) (((s8 *) temp_r30) + 0))), (int) 0, (int) 0x41C);
    memset((int) (*((s32 *) (((s8 *) temp_r30) + 0x10))), (int) 0, (int) 0x2370);
    var_r29 += 1;
    var_r31 += 4;
  }
  while (var_r29 < 4);
}

void TAdSinglePlyChrSelectGC__sub_801FCCB4(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x11568) = arg1;
}

s32 TAdSinglePlyChrSelectGC__sub_801FCCC0(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x11568);
}

void set_id__23TAdSinglePlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
s32 get_type__23TAdSinglePlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x0); }

bool TAdSinglePlyChrSelectGC__sub_801FCCDC(Obj_801FCCDC *self, s32 i) {
    if (i >= 7) return 0;
    return self->e[i].v != 0;
}

Ent_801FCD04 *TAdSinglePlyChrSelectGC__sub_801FCD04(Obj_801FCD04 *self) {
    return &self->e[get_selection__23TAdSinglePlyChrSelectGCFv(self)];
}

    extern unsigned char lbl_804C89BC[];
    extern int lbl_805D49B4;
    extern int lbl_805D5F80;
    extern int lbl_805D5F88;
    extern int lbl_805D5F98;

typedef char RecoveredGlobal_801FCD74_main_task_size[sizeof(RecoveredGlobal_801FCD74_main_task) == 0x34 ? 1 : -1];

s32 *TAdSinglePlyChrSelectGC__sub_801FCD3C(Obj_801FCD3C *self) {
    return &self->e[get_selection__23TAdSinglePlyChrSelectGCFv(self)].x;
}

void TAdSinglePlyChrSelectGC__sub_801FCD74(void) {
    if ((void *) lbl_805D4DF0 != NULL) {
        some_empty_func__9TMainTaskFv((void *) (&main_task.value));
        if (is_split_screen() != 0) {
            set_mode__11TCameraCtrlFi((int) (0));
            get_fog_ctrl__16TKeyBoardControlFPv();
            if ((void *) lbl_805D4DF0 != NULL) {
                ((VObj_18_4a87b2 *)(lbl_805D4DF0))->m1();
            }
            TCameraCtrl__sub_80068B34((int) (1), (int) (0));
            render__9TMainTaskFv((void *) (&main_task.value));
            set_mode__11TCameraCtrlFi((int) (0x64));
            TCameraCtrl__sub_80068A68();
        } else {
            controller_stuff__Fv();
            run_tl_camera_tasks__9TMainTaskFv((void *) (&main_task.value));
            render__9TMainTaskFv((void *) (&main_task.value));
        }
        render_screen_overlay__9TMainTaskFv((void *) (&main_task.value));
    }
}

s32 TAdSinglePlyChrSelectGC__sub_801FCE2C(s32 arg0) {
    if ((void *) lbl_805D5F60 != NULL) {
        TAdSinglePlyChrSelectGC__sub_801FC4F4(lbl_805D5F60, arg0);
        return 1;
    }
    return 0;
}

s32 TAdSinglePlyChrSelectGC__sub_801FD668(void) {
    s32 i;
    u32 v;
    if (lbl_805D5F58 != 0) {
        for (i = 0; i < 7; i++) {
            v = lbl_805D5F58[i].f428;
            if (v != 0 && v + 0x5DFB0000 != 0xB064) return 0;
        }
    }
    return 1;
}

void init_fresh_character_slot(s32 arg0) {
    init_new_character_data((*(Ent_801FD728 * *)&lbl_805D5F58)[arg0].a);
    TAdSinglePlyChrSelectGC__sub_801FC0C8((*(Ent_801FD728 * *)&lbl_805D5F58)[arg0].b);
}

s32 TAdPlayerLoadGC__sub_801FD814(void) {
    u8 buf[8];
    s32 i;
    u32 p = lbl_805D5F5C;
    if (p == 0) return 0;
    if (((s32 (*)(u32))init_and_register__23TAdSinglePlyChrSelectGCFi)(p) == 0) return 1;
    reset_load_state__15TAdPlayerLoadGCFPvPv(1, buf);
    for (i = 0; i < 8; i++) {
        u8 b = buf[i];
        u8 a = lbl_805D5F70[i + 0x110];
        if (a != b) return 1;
    }
    if (TAdSinglePlyChrSelectGC__sub_801FCB04((Ent_801FD668 *)lbl_805D5F5C) != 0) return 5;
    return 7;
}

s32 TAdSinglePlyChrSelectGC__sub_801FD8B8(A_801FD8B8 *a, A_801FD8B8 *b, C_801FD8B8 *c, C_801FD8B8 *d) {
    if (a == NULL || b == NULL) return 0;
    if (a->f14 > b->f14) return 2;
    if (a->f4 != b->f4) return 4;
    if (a->f8 != 0xA205B064 || b->f8 != 0xA205B064) return 5;
    return c->f11564 != d->f11564 ? 6 : 7;
}

void setup__23TAdSinglePlyChrSelectGCFi(int a0) { lbl_805D5F80 = a0; set_quest_download_server__23TAdSinglePlyChrSelectGCFi((int)(a0)); lbl_805D49B4 = 1; draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void*)(lbl_805D5F80), lbl_804C89BC, (void*)(lbl_805D5F98), (void*)(lbl_805D5F88)); }

extern M2C_UNK lbl_804C8914[];
extern u32 lbl_805D5F6C;
extern s32 lbl_805D5F8C;

int TAdSinglePlyChrSelectGC__sub_801FD990(s32 a0) {
    lbl_805D5F8C = a0;
    lbl_805D49B4 = 1;
    return draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void *)a0, ((s32 *)&lbl_804C8914), (void *)lbl_805D5F9C, (void *)lbl_805D5F90);
}

s32 pso_system_load_gc(void) {
    s32 var_r31;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F6C != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        var_r31 = TAdPlayerLoadGC__sub_801E2048(lbl_805D5F8C, lbl_804C8914);
        if (var_r31 == 0) {
            if (try_confirm_selection__23TAdSinglePlyChrSelectGCFv() != 0) {
                var_r31 = TAdSinglePlyChrSelectGC__sub_801FD990((s32)(lbl_805D5F8C));
                if (var_r31 == 0) {
                    set_player_index__23TAdSinglePlyChrSelectGCFi(0xF);
                }
            }
        }
    }
    return var_r31;
}
typedef char RecoveredGlobal_801FDA4C_lbl_804C88C0_size[sizeof(RecoveredGlobal_801FDA4C_lbl_804C88C0) == 0x54 ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C(void) {
    s32 var_r0;
    s8 temp_r3;
    temp_r3 = get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    var_r0 = -1;
    lbl_805D5F7C = (s32) temp_r3;
    if (temp_r3 < 2) {
        set_quest_download_server__23TAdSinglePlyChrSelectGCFi((int)((int) ((s32) temp_r3)));
        (*(s32 *)&lbl_805D49B4) = 1;
        var_r0 = ((s32)draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void*)((void *) (lbl_805D5F7C)), (void*)((void *) (&lbl_804C88C0.value)), (void*)((void *) (lbl_805D5F94)), (void*)((void *) (lbl_805D5F84))));
    }
    return var_r0;
}
typedef char RecoveredGlobal_801FDAAC_lbl_804C88C0_size[sizeof(RecoveredGlobal_801FDAAC_lbl_804C88C0) == 0x54 ? 1 : -1];
s32 TAdSinglePlyChrSelectGC__sub_801FDAAC(void) {
    s32 var_r4;
    s8 temp_r3;
    temp_r3 = get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    var_r4 = -1;
    lbl_805D5F7C = (s32) temp_r3;
    if (temp_r3 < 2) {
        set_quest_download_server__23TAdSinglePlyChrSelectGCFi((int) ((s32) temp_r3));
        (*(s32 *)&lbl_805D49B4) = 1;
        var_r4 = ((s32)draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((void*)((void *) (lbl_805D5F7C)), (void*)((void *) (&(*(RecoveredGlobal_801FDAAC_lbl_804C88C0 *)&lbl_804C88C0).value)), (void*)((void *) (lbl_805D5F94)), (void*)((void *) (lbl_805D5F84))));
    }
    lbl_805D5F78 = 0x13;
    return var_r4;
}

}
