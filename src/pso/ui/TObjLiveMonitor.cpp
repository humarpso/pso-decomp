#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_8030B370 { u8 pad[0x24]; u32 a; s32 t; };

extern "C" {

s32 is_split_screen();
s32 rand();
__declspec(section ".sdata2") f32 lbl_805DF168 = 1.0f;
__declspec(section ".sdata2") f32 lbl_805DF16C = 3.0f;
__declspec(section ".sdata2") f32 lbl_805DF170 = 3.0517578125e-05f;
__declspec(section ".sdata2") f32 lbl_805DF174 = 5.0f;

#pragma push
#pragma fp_contract on
void fn_8030B370(O_8030B370 *o) {
    f32 r;
    if (o->t >= 0) {
        if (--o->t <= 0) {
            if (is_split_screen() != 0) {
                o->a = (u32)(lbl_805DF16C * (lbl_805DF170 * (f32)rand()) + lbl_805DF168);
            } else {
                o->a = (u32)(lbl_805DF174 * (lbl_805DF170 * (f32)rand()));
            }
            r = lbl_805DF170 * (f32)rand();
            o->t = (s32)(300.0f * r + 300.0f);
        }
    }
}

#pragma pop

}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 is_split_screen();
M2C_UNK TObjPlayer__sub_80084500();
M2C_UNK TObjPlayer__sub_8030B208(void *);
void update_camera__15TObjLiveMonitorFPv(void* p);
s32 get_table_entry__18TObjLiveCameraCtrlFi(int);
s32 TObjLiveMonitor__sub_8030C050();
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK draw_ginja_object(int);
void render__15TObjLiveMonitorFv(u8 *arg0);
}

extern "C" {

int run_task__15TObjLiveMonitorFv(void* p);

void render__15TObjLiveMonitorFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = get_table_entry__18TObjLiveCameraCtrlFi((int) (0));
    if ((temp_r3 != 0) && (TObjLiveMonitor__sub_8030C050() != 0)) {
        update_camera__15TObjLiveMonitorFPv((void *) (temp_r3));
    } else if (is_split_screen() == 0) {
        TObjPlayer__sub_80084500();
    } else {
        TObjPlayer__sub_8030B208((void *) (arg0));
    }
    push_matrix();
    draw_ginja_object((int) (M2C_FIELD(arg0, s32 *, 0x1C)));
    pop_matrix();
}

}

#include "types.h"

extern "C" {

int run_task__15TObjLiveMonitorFv(void* p);

int run_task__15TObjLiveMonitorFv(void* p) { return ((int (*)(void *))fn_8030B370)(p); }

}

#include "pso/TObjLiveMonitor.h"

TObjLiveMonitor::~TObjLiveMonitor() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__ct__15TObjLiveMonitorFv(void *arg0);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 get_bml_model(s32, M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();

extern M2C_UNK __vt__15TObjLiveMonitor[];
extern s32 lbl_805D40EC;
extern int lbl_805D6A80;

void *__ct__15TObjLiveMonitorFv(void *arg0) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__15TObjLiveMonitor;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D40EC;
    M2C_FIELD(arg0, s32 *, 0x1C) = get_bml_model(lbl_805D6A80, 1);
    M2C_FIELD(arg0, s32 *, 0x20) = TObjFish__sub_8001EDB0(lbl_805D6A80, 0);
    M2C_FIELD(arg0, s32 *, 0x24) = 5;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    return arg0;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TObjLiveMonitorFPv(void *arg0);
void *__nw__7TObjectFUl(int);

void *create__15TObjLiveMonitorFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = ((void *(*)(void *, void *))__ct__15TObjLiveMonitorFv)(o, arg0);
    }
    return o;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8030B658_lbl_804E76C0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8030B658_lbl_804E76C0_size[sizeof(RecoveredGlobal_8030B658_lbl_804E76C0) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8030B708___vt__14TObjLiveCamera {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8030B658_lbl_804E76C0 lbl_804E76C0;
extern int lbl_805D6A80;
void TObjLiveCamera__sub_8030B658(void);
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK __vt__14TObjLiveCamera[];
extern s32 lbl_805D40E8;
u8 *TObjLiveCamera__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *TObjLiveCamera__create(void *arg0);
void TObjLiveCamera__sub_8030B630(void);
void *__dt__14TObjLiveCameraFv(void *arg0, s16 arg1);
void render__14TObjLiveCameraFv(void);
void run_task__14TObjLiveCameraFv(void);
int TLobby__sub_8001FE7C(void*, void*);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

    extern int lbl_805D6A80;
void TObjLiveCamera__sub_8030B630(void) { TLobby__sub_8001FE7C((void*)(lbl_805D6A80), (void*)1); }

void TObjLiveCamera__sub_8030B658(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804E76C0.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D6A80) = var_r0;
}

void render__14TObjLiveCameraFv(void) {  }
void run_task__14TObjLiveCameraFv(void) {  }

extern M2C_UNK __vt__14TObjLiveCamera[];

void *__dt__14TObjLiveCameraFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjLiveCamera;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_8030B708___vt__14TObjLiveCamera_size[sizeof(RecoveredGlobal_8030B708___vt__14TObjLiveCamera) == 0x34 ? 1 : -1];
u8 *TObjLiveCamera__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8030B708___vt__14TObjLiveCamera *)&__vt__14TObjLiveCamera).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D40E8;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    return arg0;
}

void *TObjLiveCamera__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TObjLiveCamera__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

}

#include "types.h"

extern "C" {

void update_camera__15TObjLiveMonitorFPv(void* p);
void fn_8030B7B4(void);
void fn_8030B7B8(void);
int call_null__12TBoss8DragonFv(void);
int update_single_screen__11TCameraCtrlFv(void*);
int TBoss8Dragon__sub_802F3388(void*);

void fn_8030B7B4(void) {  }
void fn_8030B7B8(void) {  }
void update_camera__15TObjLiveMonitorFPv(void* p) { void* m = *(void**)((char*)p + 0x50); if (m) update_single_screen__11TCameraCtrlFv(m); }
int call_null__12TBoss8DragonFv(void) { return TBoss8Dragon__sub_802F3388((void*)(0)); }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 angle_diff_s16(int);
extern const f32 lbl_805DF17C;
u8 *get_enemy_entity(u16);
u8 *get_player_by_client_id(s32);
u32 TBoss8Dragon__sub_802F3348(int);
s32 TBoss8Dragon__sub_802FCCBC(int);
void TBoss8Dragon__sub_8030B818(u8 *arg0, int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 lbl_805DF1A8;
extern const f32 lbl_805DF1B4;
extern const f32 lbl_805DF1B8;
extern const f32 lbl_805DF1BC;
extern const f32 lbl_805DF1C0;
extern const f32 lbl_805DF1C4;
extern const f32 lbl_805DF1C8;
extern const f32 lbl_805DF1CC;
extern const f32 lbl_805DF1D0;
extern const f32 lbl_805DF1D4;
void TBoss8Dragon__sub_8030BB24(u8 *arg0);
f32 calc_random_ratio__10TObjPlayerFv(void *);
u8 *get_enemy_entity(u16);
u8 *get_player_by_client_id(s32);
int TBoss8Dragon__sub_8030B80C(void);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 lbl_805DF180;
extern const f32 lbl_805DF184;
extern const f32 lbl_805DF188;
extern const f32 lbl_805DF18C;
extern const f32 lbl_805DF190;
extern const f32 lbl_805DF194;
extern const f32 lbl_805DF198;
extern const f32 lbl_805DF19C;
extern const f32 lbl_805DF1A0;
extern const f32 lbl_805DF1A4;
extern const f32 lbl_805DF1A8;
extern const f32 lbl_805DF1AC;
extern const f32 lbl_805DF1B0;
extern const f32 lbl_805DF1B4;
void TBoss8Dragon__sub_8030B8A8(u8 *arg0);
}

extern "C" {

int TBoss8Dragon__sub_8030B80C(void);
void update_toggle_state__12TBoss8DragonFPv(void *arg0);
s32 TBoss8Dragon__sub_802F3638();
M2C_UNK TObjPlayer__sub_80082CBC(void *);
M2C_UNK TObjPlayer__sub_80082CCC(void *);

    extern int lbl_805D53A0;
int TBoss8Dragon__sub_8030B80C(void) {  return (lbl_805D53A0 & 0xffff); }

void TBoss8Dragon__sub_8030B818(u8 *arg0, int _w1) {
  s32 temp_r0;
  s32 var_r3;
  s32 new_var;
  new_var = angle_diff_s16((int) (*((s32 *) (((s8 *) arg0) + 0x28))));
  temp_r0 = (s32) (((f32) new_var) * lbl_805DF17C);
  if (temp_r0 < (-0x280))
  {
    var_r3 = -0x280;
  }
  else
  {
    var_r3 = 0x280;
    if (temp_r0 < 0x280)
    {
      var_r3 = temp_r0;
    }
  }
  *((s32 *) (((s8 *) arg0) + 0x28)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x28))) + var_r3);
}

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8030B8A8(u8 *arg0) {
    f32 r;
    u8 *p;
    if (M2C_FIELD(arg0, s16 *, 0x1E) < 0) {
        return;
    }
    if (--M2C_FIELD(arg0, s16 *, 0x1E) > 0) {
        return;
    }
    r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x54);
    if (r < lbl_805DF180) {
        M2C_FIELD(arg0, s16 *, 0x1C) = 1;
    } else if (r < lbl_805DF184) {
        M2C_FIELD(arg0, s16 *, 0x1C) = 2;
    } else if (r < lbl_805DF188) {
        M2C_FIELD(arg0, s16 *, 0x1C) = 3;
    } else {
        M2C_FIELD(arg0, s16 *, 0x1C) = 4;
    }
    switch (M2C_FIELD(arg0, s16 *, 0x1C)) {
    case 0:
        break;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x1E) = lbl_805DF18C * (r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x54), r) + lbl_805DF18C;
        M2C_FIELD(arg0, u16 *, 0x24) = ((int (*)(void *))TBoss8Dragon__sub_8030B80C)(arg0);
        M2C_FIELD(arg0, s32 *, 0x28) = lbl_805DF190 * calc_random_ratio__10TObjPlayerFv(arg0 + 0x54);
        M2C_FIELD(arg0, s32 *, 0x2C) = lbl_805DF194 * (lbl_805DF198 * (calc_random_ratio__10TObjPlayerFv(arg0 + 0x54) - lbl_805DF19C));
        M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DF1A0 * (r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x54), r) + lbl_805DF174;
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x1E) = lbl_805DF18C * (r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x54), r) + lbl_805DF18C;
        M2C_FIELD(arg0, u16 *, 0x24) = ((int (*)(void *))TBoss8Dragon__sub_8030B80C)(arg0);
        p = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x24));
        if (p != NULL) {
            M2C_FIELD(arg0, s32 *, 0x28) = M2C_FIELD(p, s32 *, 0x60) - 0x8000;
        }
        break;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x1E) = lbl_805DF1A4 * (r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x54), r) + lbl_805DF1A4;
        M2C_FIELD(arg0, u16 *, 0x24) = ((u16 (*)(void *))call_null__12TBoss8DragonFv)(arg0);
        p = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x24));
        if (p != NULL) {
            M2C_FIELD(arg0, s32 *, 0x28) = M2C_FIELD(p, s32 *, 0x60) - 0x8000;
        }
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0x1E) = lbl_805DF1A8 * (r = calc_random_ratio__10TObjPlayerFv(arg0 + 0x54), r) + lbl_805DF1A8;
        M2C_FIELD(arg0, s32 *, 0x28) = lbl_805DF190 * calc_random_ratio__10TObjPlayerFv(arg0 + 0x54);
        M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DF1AC * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DF1B0;
        M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DF1AC * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, f32 *, 0x40) = lbl_805DF1B4;
        M2C_FIELD(arg0, f32 *, 0x44) = lbl_805DF1B4;
        M2C_FIELD(arg0, f32 *, 0x48) = lbl_805DF1B4;
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8030BB24(u8 *arg0) {
    s16 temp_r0;
    u32 temp_r3_4;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x1C);
    switch (temp_r0) {
    case 1:
        temp_r3 = (u8 *)(get_player_by_client_id((s32) M2C_FIELD(arg0, u16 *, 0x24)));
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((lbl_805DF1B8 * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3, f32 *, 0x38));
            M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x30));
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((lbl_805DF1B8 * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3, f32 *, 0x40));
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_r3, f32 *, 0x38);
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x30));
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(temp_r3, f32 *, 0x40);
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s32 *, 0x2C));
        }
        return;
    case 2:
        temp_r3_2 = (u8 *)(get_player_by_client_id((s32) M2C_FIELD(arg0, u16 *, 0x24)));
        if (temp_r3_2 != NULL) {
            M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((lbl_805DF1BC * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_2, f32 *, 0x38));
            M2C_FIELD(arg0, f32 *, 0x38) = (f32) (lbl_805DF1C0 + M2C_FIELD(temp_r3_2, f32 *, 0x3C));
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((lbl_805DF1BC * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_2, f32 *, 0x40));
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((lbl_805DF1C4 * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_2, f32 *, 0x38));
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) (lbl_805DF1C8 + M2C_FIELD(temp_r3_2, f32 *, 0x3C));
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((lbl_805DF1C4 * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_2, f32 *, 0x40));
            TBoss8Dragon__sub_8030B818((u8 *)((void *) (arg0)), (int)((int) (M2C_FIELD(temp_r3_2, s32 *, 0x60) - 0x8000)));
            return;
        }
        break;
    case 3:
        temp_r3_3 = (u8 *)(get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x24)));
        if ((temp_r3_3 != NULL) && (M2C_FIELD(temp_r3_3, f32 *, 0x3C) >= lbl_805DF1B4)) {
            M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((lbl_805DF1CC * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_3, f32 *, 0x38));
            M2C_FIELD(arg0, f32 *, 0x38) = (f32) (lbl_805DF1A8 + M2C_FIELD(temp_r3_3, f32 *, 0x3C));
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((lbl_805DF1CC * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_3, f32 *, 0x40));
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((lbl_805DF1D0 * sin_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_3, f32 *, 0x38));
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) (lbl_805DF1D4 + M2C_FIELD(temp_r3_3, f32 *, 0x3C));
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((lbl_805DF1D0 * cos_table_lookup((int) (M2C_FIELD(arg0, s32 *, 0x28)))) + M2C_FIELD(temp_r3_3, f32 *, 0x40));
            TBoss8Dragon__sub_8030B818((u8 *)((void *) (arg0)), (int)((int) (M2C_FIELD(temp_r3_3, s32 *, 0x60) - 0x8000)));
            return;
        }
        break;
    case 5:
        temp_r3_4 = TBoss8Dragon__sub_802F3348((int) (0));
        if ((temp_r3_4 != 0U) && (TBoss8Dragon__sub_802FCCBC((int) (temp_r3_4)) != 0)) {
            M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        }
        break;
    }
}
#pragma pop

void update_toggle_state__12TBoss8DragonFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) >= TBoss8Dragon__sub_802F3638()) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
                TObjPlayer__sub_80082CBC(M2C_FIELD(arg0, void **, 0x50));
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            TObjPlayer__sub_80082CCC(M2C_FIELD(arg0, void **, 0x50));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    }
}

}
