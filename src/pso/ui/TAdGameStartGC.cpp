#include "pso/TObject.h"
class TAdGameStartGC : public TObject {
public:
    virtual void render();
    virtual ~TAdGameStartGC();
};
class TAdGameStartSubGC : public TObject {
public:
    virtual void render();
    virtual ~TAdGameStartSubGC();
    virtual void run_task();
};

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef s32 M2C_UNK;
struct Ent_802E6750 { s32 idx; f32 x; f32 y; s32 c; };

struct Obj_802E6750 {
    s32 g; u8 pad0[0x14]; void *vt; Ent_802E6750 e[8];
    s32 f9C; s32 fA0; s32 z[8]; s32 fC4; s32 fC8; s32 fCC; s32 fD0;
};

struct Obj_802E6380 {
    u8 pad0[0x9C];
    s32 f9C;
    s32 fA0;
    void *list[8];
    void *fC4;
    void *fC8;
    void *fCC;
    void *fD0;
};

struct Obj_802E6380;
struct Slot_802E655C { u8 pad[0x10]; };

struct GS_802E655C { u8 pad0[0x1C]; Slot_802E655C slots[8]; s32 count; s32 active; s32 subs[8]; };

extern "C" {
s32 queue_destruction__7TObjectFv(int);
u32 __nw__7TObjectFUl(int);
u32 __ct__18TAdGameStartBackGCFv(int, void *);
u32 __ct__20TAdGameStartShadowGCFv(int, void *);
u32 __ct__18TAdGameStartLineGCFv(int, void *);
u32 __ct__19TAdGameStartShineGCFv(int, void *);
void create_effects__14TAdGameStartGCFPv(u8 *arg0);
M2C_UNK __ct__7TObjectFP7TObject(void *);
extern M2C_UNK __vt__14TAdGameStartGC[];
extern void *lbl_805D3FA8[2];
Obj_802E6750 *__ct__14TAdGameStartGCFv(Obj_802E6750 *arg0);
s32 queue_destruction__7TObjectFv(int);
void TAdGameStartGC__sub_802E6380(Obj_802E6380 *o);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(void *, int, int, int);
u32 __nw__7TObjectFUl(int);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
void TAdGameStartGC__sub_802E6380(Obj_802E6380 *o);
u8 *__ct__17TAdGameStartSubGCFv(u8 *arg0, void *arg1, u8 *arg2);
extern u8 lbl_8050E3B8[];
void run_task__14TAdGameStartGCFv(u8 *arg0);
}

extern "C" {

void TAdGameStartGC__sub_802E6368(void* p);
void bswap_6x92__14TAdGameStartGCFPv(void* p);
void render__14TAdGameStartGCFv(void);
void send_6x92__14TAdGameStartGCFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

void bswap_6x92__14TAdGameStartGCFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }
void send_6x92__14TAdGameStartGCFPv(void* p) { bswap_6x92__14TAdGameStartGCFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TAdGameStartGC__sub_802E6368(void* p) { *(u8*)((char*)p + 0x0) = 146; *(u8*)((char*)p + 0x1) = 3; }

void render__14TAdGameStartGCFv(void) {  }

void TAdGameStartGC__sub_802E6380(Obj_802E6380 *o) {
    u32 i;
    if (o->fC4 != NULL) {
        queue_destruction__7TObjectFv((int)o->fC4);
        o->fC4 = NULL;
    }
    if (o->fC8 != NULL) {
        queue_destruction__7TObjectFv((int)o->fC8);
        o->fC8 = NULL;
    }
    if (o->fCC != NULL) {
        queue_destruction__7TObjectFv((int)o->fCC);
        o->fCC = NULL;
    }
    if (o->fD0 != NULL) {
        queue_destruction__7TObjectFv((int)o->fD0);
        o->fD0 = NULL;
    }
    for (i = 0; i < 8; i++) {
        if (o->list[i] != NULL) {
            queue_destruction__7TObjectFv((int)o->list[i]);
            o->list[i] = NULL;
        }
    }
    o->fA0 = 0;
    o->f9C = -1;
}

void create_effects__14TAdGameStartGCFPv(u8 *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 temp_r3_5;
    u32 temp_r3_6;
    u32 temp_r3_7;
    u32 temp_r3_8;
    u32 var_r0;
    u32 var_r0_2;
    u32 var_r0_3;
    u32 var_r0_4;
    M2C_FIELD(arg0, s32 *, 0xA0) = 1;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0xC4);
    if (temp_r3 != 0U) {
        queue_destruction__7TObjectFv((int) (temp_r3));
        M2C_FIELD(arg0, u32 *, 0xC4) = 0U;
    }
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0xC8);
    if (temp_r3_2 != 0U) {
        queue_destruction__7TObjectFv((int) (temp_r3_2));
        M2C_FIELD(arg0, u32 *, 0xC8) = 0U;
    }
    temp_r3_3 = M2C_FIELD(arg0, u32 *, 0xCC);
    if (temp_r3_3 != 0U) {
        queue_destruction__7TObjectFv((int) (temp_r3_3));
        M2C_FIELD(arg0, u32 *, 0xCC) = 0U;
    }
    temp_r3_4 = M2C_FIELD(arg0, u32 *, 0xD0);
    if (temp_r3_4 != 0U) {
        queue_destruction__7TObjectFv((int) (temp_r3_4));
        M2C_FIELD(arg0, u32 *, 0xD0) = 0U;
    }
    temp_r3_5 = __nw__7TObjectFUl((int) (0xC8));
    var_r0 = temp_r3_5;
    if (var_r0 != 0U) {
        var_r0 = __ct__20TAdGameStartShadowGCFv((int) (temp_r3_5), (void *) (arg0));
    }
    M2C_FIELD(arg0, u32 *, 0xC4) = var_r0;
    temp_r3_6 = __nw__7TObjectFUl((int) (0x80));
    var_r0_2 = temp_r3_6;
    if (var_r0_2 != 0U) {
        var_r0_2 = __ct__18TAdGameStartBackGCFv((int) (temp_r3_6), (void *) (arg0));
    }
    M2C_FIELD(arg0, u32 *, 0xC8) = var_r0_2;
    temp_r3_7 = __nw__7TObjectFUl((int) (0x160));
    var_r0_3 = temp_r3_7;
    if (var_r0_3 != 0U) {
        var_r0_3 = __ct__18TAdGameStartLineGCFv((int) (temp_r3_7), (void *) (arg0));
    }
    M2C_FIELD(arg0, u32 *, 0xCC) = var_r0_3;
    temp_r3_8 = __nw__7TObjectFUl((int) (0x80));
    var_r0_4 = temp_r3_8;
    if (var_r0_4 != 0U) {
        var_r0_4 = __ct__19TAdGameStartShineGCFv((int) (temp_r3_8), (void *) (arg0));
    }
    M2C_FIELD(arg0, u32 *, 0xD0) = var_r0_4;
}

void run_task__14TAdGameStartGCFv(u8 *arg0) {
    GS_802E655C *gs = (GS_802E655C *) arg0;
    s32 sub;
    u8 *pad;
    if (gs->active != 0) {
        gs->count++;
        if (gs->count < 8) {
            sub = __nw__7TObjectFUl(0x88);
            if (sub != 0) {
                sub = ((s32 (*)(void *, void *, void *))__ct__17TAdGameStartSubGCFv)((void *) sub, arg0, &gs->slots[gs->count]);
            }
            gs->subs[gs->count] = sub;
        }
        if (gs->count > 0x3C) {
            TAdGameStartGC__sub_802E6380((Obj_802E6380 *) arg0);
            return;
        }
        pad = lbl_8050E3B8 + get_clamped_cursor__22TAdMultiPlyChrSelectGCFv() * 0x50 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(pad, 4) != 0) {
            TAdGameStartGC__sub_802E6380((Obj_802E6380 *) arg0);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 2) != 0) {
            TAdGameStartGC__sub_802E6380((Obj_802E6380 *) arg0);
        }
        if (TWindowShortListCtrl__check_controller_button(pad, 8) != 0) {
            TAdGameStartGC__sub_802E6380((Obj_802E6380 *) arg0);
        }
        if (dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(pad, 0x10, 6, 1) != 0) {
            TAdGameStartGC__sub_802E6380((Obj_802E6380 *) arg0);
        }
        if (dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(pad, 0x20, 6, 1) != 0) {
            TAdGameStartGC__sub_802E6380((Obj_802E6380 *) arg0);
        }
        if (dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(pad, 0x40, 6, 1) != 0) {
            TAdGameStartGC__sub_802E6380((Obj_802E6380 *) arg0);
        }
        if (dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(pad, 0x80, 6, 1) != 0) {
            TAdGameStartGC__sub_802E6380((Obj_802E6380 *) arg0);
        }
    }
}

TAdGameStartGC::~TAdGameStartGC() {}

Obj_802E6750 *__ct__14TAdGameStartGCFv(Obj_802E6750 *arg0) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0);
    arg0->vt = __vt__14TAdGameStartGC;
    arg0->g = (s32)lbl_805D3FA8[0];
    arg0->f9C = -1;
    arg0->fA0 = 0;
    arg0->fC4 = 0;
    arg0->fC8 = 0;
    arg0->fCC = 0;
    arg0->fD0 = 0;
    for (i = 0; i < 8; i++) {
        arg0->e[i].idx = i;
        arg0->e[i].x = (94.0f);
        arg0->e[i].y = (196.0f);
        arg0->e[i].c = -1;
        arg0->z[i] = 0;
    }
    return arg0;
}

}

extern "C" {

void destroy_instance__17TAdGameStartSubGCFv(void);
void TLobby__sub_803DA16C(void*);

extern int lbl_805D6900;

void destroy_instance__17TAdGameStartSubGCFv(void) {
    if ((u32) lbl_805D6900 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6900);
        lbl_805D6900 = 0U;
    }
}

}

extern "C" {
    int TLobby__sub_8023E4B4(void*, void*);
    extern const unsigned char lbl_80472C28[];
    extern void *lbl_804E3B6C[];
    extern int lbl_805D6900;
void register_texture_f512_multiplay(void) { lbl_805D6900 = (int)lbl_804E3B6C; TLobby__sub_8023E4B4((void *)lbl_80472C28, lbl_804E3B6C); }
__declspec(section ".rodata") extern const unsigned char lbl_80472C28[] = "f512_multiplay";
__declspec(section ".rodata") extern const char lbl_80472C38[] = "TAdGameStartGC";
__declspec(section ".rodata") extern const char lbl_80472C48[] = "TAdGameStartSubGC";

}

extern "C" {
#pragma push
#pragma fp_contract on

M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK begin_screen_draw(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(void *, int, f32);
M2C_UNK set_draw_texture_and_color(int, int);
extern s32 lbl_805D6908;

void TAdGameStartSubGC__sub_802E6864(u8 *arg0) {
    s32 temp_r4;

    begin_screen_draw((int) (1));
    set_global_param__8TObjFishFi((void *) (lbl_805D6908));
    set_draw_texture_and_color((int) (0), (int) ((M2C_FIELD(arg0, s32 *, 0x80) << 0x18) | 0xFF0000 | 0xFFFF));
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
    draw_textured_quad_at_depth((void *) (arg0 + 0x40), (int) (temp_r4), (f32) (((0.01f) * (f32) temp_r4) + (0.8f)));
    get_player__20TWindowSubStatusDispFv();
}
#pragma pop
}

extern "C" {
void run_task__17TAdGameStartSubGCFv(u8 *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
s32 get_instance__10TObjPlayerFv(void);
extern M2C_UNK __vt__17TAdGameStartSubGC[];
extern void *lbl_805D3FB0[2];
extern s32 lbl_805D6908;
u8 *__ct__17TAdGameStartSubGCFv(u8 *arg0, void *arg1, u8 *arg2);
}

extern "C" {

void render__17TAdGameStartSubGCFv(void* p);
#define TAdGameStartSubGC__sub_802E6864 ((int (*)(void*))TAdGameStartSubGC__sub_802E6864)
int abs__4cXyzCFv(void*, void*);
int get_state_flag__9TMainTaskFv(void*);

void render__17TAdGameStartSubGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); TAdGameStartSubGC__sub_802E6864(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }
#pragma push
#pragma fp_contract on
void run_task__17TAdGameStartSubGCFv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_r4;
    s32 var_r0;
    M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) + 1);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r4 < 4) {
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) ((3.0f) - ((0.6666667f) * (f32) temp_r4));
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) ((3.0f) - ((0.6666667f) * (f32) M2C_FIELD(arg0, s32 *, 0x84)));
    } else if (temp_r4 > 0x1C) {
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) ((1.0f) - ((-0.6666667f) * (f32) (temp_r4 - 0x1D)));
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) ((1.0f) - ((-0.6666667f) * (f32) (M2C_FIELD(arg0, s32 *, 0x84) - 0x1D)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x84) > 0x1D) {
            M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) - 0x55);
        }
        var_r0 = M2C_FIELD(arg0, s32 *, 0x80);
        if (var_r0 < 0) {
            var_r0 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x80) = var_r0;
    }
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((M2C_FIELD(arg0, f32 *, 0x70) * (M2C_FIELD(arg0, f32 *, 0x20) - temp_f2)) + temp_f2);
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) ((M2C_FIELD(arg0, f32 *, 0x74) * (M2C_FIELD(arg0, f32 *, 0x24) - temp_f2_2)) + temp_f2_2);
    temp_f2_3 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((M2C_FIELD(arg0, f32 *, 0x70) * (M2C_FIELD(arg0, f32 *, 0x28) - temp_f2_3)) + temp_f2_3);
    temp_f2_4 = M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x74) * (M2C_FIELD(arg0, f32 *, 0x2C) - temp_f2_4)) + temp_f2_4);
}
#pragma pop

#pragma push
#pragma fp_contract on
#define F(o) M2C_FIELD(arg0, f32 *, o)
#define I(o) M2C_FIELD(arg0, s32 *, o)
TAdGameStartSubGC::~TAdGameStartSubGC() {}
u8 *__ct__17TAdGameStartSubGCFv(u8 *arg0, void *arg1, u8 *arg2) {
    s32 t;
    ((void (*)(void *, void *))__ct__7TObjectFP7TObject)(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdGameStartSubGC;
    I(0) = (s32)lbl_805D3FB0[0];
    I(0x1C) = M2C_FIELD(arg2, s32 *, 0);
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0 + 0x60, arg2 + 4);
    t = M2C_FIELD(arg2, s32 *, 0xC);
    I(0x7C) = t;
    I(0x84) = -1;
    F(0x70) = (3.0f);
    F(0x74) = (3.0f);
    I(0x80) = 0xFF;
    lbl_805D6908 = get_instance__10TObjPlayerFv();
    F(0x20) = (64.0f) * (f32)I(0x1C) + F(0x60);
    F(0x24) = F(0x64);
    F(0x28) = (64.0f) * (f32)(I(0x1C) + 1) + F(0x60);
    F(0x2C) = (128.0f) + F(0x64);
    F(0x68) = (0.5f) * (F(0x28) - F(0x20)) + F(0x20);
    F(0x6C) = (0.5f) * (F(0x2C) - F(0x24)) + F(0x24);
    F(0x50) = (64.0f) * (f32)I(0x1C) / 512.0f;
    F(0x54) = (0.0f);
    F(0x58) = ((64.0f) * (f32)(I(0x1C) + 1) - (1.0f)) / 512.0f;
    F(0x5C) = (0.25f);
    return arg0;
}
#undef F
#undef I
#pragma pop

}

#undef TAdGameStartSubGC__sub_802E6864
extern "C" {
void __dt__14TAdGameStartGCFv();
void __dt__17TAdGameStartSubGCFv();
void render_shadows__7TObjectFv();
void *lbl_804E3B60[3] = {(void *)lbl_80472C28, 0, 0};
__declspec(section ".data") void *lbl_804E3B6C[2] = {(void *)lbl_804E3B60, (void *)1};
M2C_UNK __vt__14TAdGameStartGC[] = {
    0, 0,
    (M2C_UNK)__dt__14TAdGameStartGCFv,
    (M2C_UNK)run_task__14TAdGameStartGCFv,
    (M2C_UNK)render__14TAdGameStartGCFv,
    (M2C_UNK)render_shadows__7TObjectFv,
    0,
};
M2C_UNK __vt__17TAdGameStartSubGC[] = {
    0, 0,
    (M2C_UNK)__dt__17TAdGameStartSubGCFv,
    (M2C_UNK)run_task__17TAdGameStartSubGCFv,
    (M2C_UNK)render__17TAdGameStartSubGCFv,
    (M2C_UNK)render_shadows__7TObjectFv,
};
void *lbl_805D3FA8[2] = {(void *)lbl_80472C38, 0};
void *lbl_805D3FB0[2] = {(void *)lbl_80472C48, 0};
}
