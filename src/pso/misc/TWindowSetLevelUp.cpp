#include "types.h"
#include "pso/TWindowSetLevelUp.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Scroll_8026D790 { u8 pad0[4]; f32 height; s32 frame; };

struct Ctx_8026D790 {
    f32 x, y, width, height;
    u8 pad10[0x1C - 0x10];
    f32 clip_height;
    u8 pad20[0x30 - 0x20];
    s32 x30;
    u8 pad34[4];
    f32 x38;
};

struct Quad_8026D790 { f32 x, y, r, b, u, v, ur, vb; };

struct M2CCopy_16 { u8 bytes[0x16]; };

struct VOff_8026DD70_arg0_8026DCE0 { char pad_0[0x24]; char f_24[1]; };

struct VObj_8026DA44 {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s32 get_level();
};

typedef struct LvUp_8026DA44 {
    u8 pad0[0x1C];
    s8 state;
    u8 pad1d;
    s16 timer;
    s32 client;
    s16 d24;
    s16 d26;
    s16 d28;
    s16 d2a;
    s16 d2c;
    u8 pad2e[0xC];
    s16 d3a;
    s16 d3c;
} LvUp_8026DA44;

void queue_destruction__7TObjectFv(void *);
s32 get_shared_text_buffer(void);
char * get_message_10__20TWindowSubStatusDispFPv(s32);
u32 get_quest_id__12TQuestListVMFPv(void);
int __dl__FPv();
s32 calc_pulse_flash_color(int, int, int, int, int, int, int, int);
VObj_8026DA44 * get_player_by_client_id(s32);
void reset_sub_status_disp__10TObjPlayerFPv(void *);
void TWindowSubStatusDisp__sub_80228F5C(s32);
void text_builder_append(const char *);
void text_builder_reset(void);
void __ct__7TObjectFP7TObject(void *);
void set_window_flags_off__11TWindowCtrlFPvi(s32, s32);
void apply_context_transform_to_rect(void *, Quad_8026D790 *);
M2C_UNK copy_position__11TWindowMenuFPvPv();
void draw_window_scrollbar(Scroll_8026D790 *scroll, Ctx_8026D790 *c, f32 *offset);
void update_stat_messages__17TWindowSetLevelUpFv(LvUp_8026DA44 *self);
void render__17TWindowSetLevelUpFv(void);
void * __ct__17TWindowSetLevelUpFv(void *arg0, void *arg1, void *arg2, void *arg3);
void TWindowSetLevelUp__sub_8026DDE0(s32 arg0, s32 arg1);
void TWindowSetLevelUp__sub_8026DE28(void* p, s32 v);
void set_global_param__8TObjFishFi(void *);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv();
void draw_textured_quad_at_depth(Quad_8026D790 *, f32);
void set_draw_texture_and_color(int, u32);
void set_constant_material_color(s32);

void *__dt__17TWindowSetLevelUpFv(void *arg0, s16 arg1);
void run_task__17TWindowSetLevelUpFv(u8 *arg0);
void render_shadows__7TObjectFv(void);
void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
void *__vt__17TWindowSetLevelUp[6] = {
    0, 0,
    (void *)__dt__17TWindowSetLevelUpFv,
    (void *)run_task__17TWindowSetLevelUpFv,
    (void *)render__17TWindowSetLevelUpFv,
    (void *)render_shadows__7TObjectFv,
};
extern char lbl_8044F534[];
extern char lbl_8044F53C[];
extern char lbl_8044F544[];
extern void *lbl_805D39C8;
extern void *lbl_805D63F0;
extern const f32 lbl_805DD2FC;
extern const f32 lbl_805DD300;
extern const f32 lbl_805DD304;
extern const f32 lbl_805DD308;
extern const f32 lbl_805DD30C;
extern const f32 lbl_805DD310;
extern const f32 lbl_805DD314;
extern const f32 lbl_805DD318;
extern const f32 lbl_805DD31C;
extern const f32 lbl_805DD320;
extern const f32 lbl_805DD324;
extern const f32 lbl_805DD328;
extern const f32 lbl_805DD32C;
extern const f32 lbl_805DD330;
extern char lbl_805DD338[4];

void draw_window_scrollbar(Scroll_8026D790 *scroll, Ctx_8026D790 *c, f32 *offset) {
    Quad_8026D790 q;
    f32 depth;
    f32 x;
    f32 y;
    f32 t;
    if (c->x30 < 0) {
        return;
    }
    if (scroll->height <= c->clip_height) {
        return;
    }
    if (c->height < lbl_805DD2FC) {
        return;
    }
    x = c->x + c->width - lbl_805DD300;
    y = lbl_805DD304 + c->y;
    begin_screen_draw(0);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    set_draw_texture_and_color(0, 0xFF646464);
    depth = lbl_805DD308 / (lbl_805DD30C + c->x38);
    q.x = x;
    q.r = lbl_805DD310 + x;
    q.y = y;
    q.b = (y + c->height) - lbl_805DD314;
    q.u = lbl_805DD318;
    q.v = lbl_805DD31C;
    q.ur = lbl_805DD320;
    q.vb = lbl_805DD324;
    apply_context_transform_to_rect(c, &q);
    draw_textured_quad_at_depth(&q, depth);
    set_constant_material_color(calc_pulse_flash_color(0x86, 0xFF, 0x41, scroll->frame, 0x1C2, 0x12C, 0x13B, 0x14A));
    depth = lbl_805DD308 / (lbl_805DD328 + c->x38);
    t = c->height;
    if (t >= lbl_805DD2FC) {
        t -= lbl_805DD314;
        if (scroll->height <= t) {
            q.y = y;
            q.b = y + t;
        } else {
            q.y = y + offset[1] * t / scroll->height;
            q.b = q.y + c->clip_height * t / scroll->height;
        }
    }
    q.x = x;
    q.r = lbl_805DD310 + x;
    q.u = lbl_805DD32C;
    q.v = lbl_805DD31C;
    q.ur = lbl_805DD330;
    q.vb = lbl_805DD324;
    apply_context_transform_to_rect(c, &q);
    draw_textured_quad_at_depth(&q, depth);
    get_player__20TWindowSubStatusDispFv();
}

void increment_counter__20TWindowSubStatusDispFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}

s32 destroy_allocation__20TWindowSubStatusDispFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

void *reset_selection__20TWindowSubStatusDispFPv(void *arg0) {
    copy_position__11TWindowMenuFPvPv();
    M2C_FIELD(arg0, s32 *, 8) = 0;
    return arg0;
}

void update_stat_messages__17TWindowSetLevelUpFv(LvUp_8026DA44 *self) {
    VObj_8026DA44 *pl;

    text_builder_reset();
    text_builder_append(get_message_10__20TWindowSubStatusDispFPv(0x46));
    switch (self->state) {
    case 0:
    case 1:
        pl = get_player_by_client_id(self->client);
        if (pl != NULL && get_quest_id__12TQuestListVMFPv() != 0) {
            text_builder_append(lbl_8044F534);
            TWindowSubStatusDisp__sub_80228F5C(pl->get_level() + 1);
            set_window_flags_off__11TWindowCtrlFPvi(self->client, get_shared_text_buffer());
            self->state = 2;
        }
        break;
    case 2:
        if (self->d3a > 0) {
            text_builder_append(lbl_8044F53C);
            TWindowSubStatusDisp__sub_80228F5C(self->d3a);
            set_window_flags_off__11TWindowCtrlFPvi(self->client, get_shared_text_buffer());
            self->state = 3;
            break;
        }
    case 3:
        if (self->d3c > 0) {
            text_builder_append(lbl_8044F544);
            TWindowSubStatusDisp__sub_80228F5C(self->d3c);
            set_window_flags_off__11TWindowCtrlFPvi(self->client, get_shared_text_buffer());
            self->state = 4;
            break;
        }
    case 4:
        if (self->d24 > 0) {
            text_builder_append(get_message_10__20TWindowSubStatusDispFPv(0x83));
            text_builder_append(lbl_805DD338);
            TWindowSubStatusDisp__sub_80228F5C(self->d24);
            set_window_flags_off__11TWindowCtrlFPvi(self->client, get_shared_text_buffer());
            self->state = 5;
            break;
        }
    case 5:
        if (self->d26 > 0) {
            text_builder_append(get_message_10__20TWindowSubStatusDispFPv(0x84));
            text_builder_append(lbl_805DD338);
            TWindowSubStatusDisp__sub_80228F5C(self->d26);
            set_window_flags_off__11TWindowCtrlFPvi(self->client, get_shared_text_buffer());
            self->state = 6;
            break;
        }
    case 6:
        if (self->d28 > 0) {
            text_builder_append(get_message_10__20TWindowSubStatusDispFPv(0x85));
            text_builder_append(lbl_805DD338);
            TWindowSubStatusDisp__sub_80228F5C(self->d28);
            set_window_flags_off__11TWindowCtrlFPvi(self->client, get_shared_text_buffer());
            self->state = 7;
            break;
        }
    case 7:
        if (self->d2a > 0) {
            text_builder_append(get_message_10__20TWindowSubStatusDispFPv(0x86));
            text_builder_append(lbl_805DD338);
            TWindowSubStatusDisp__sub_80228F5C(self->d2a);
            set_window_flags_off__11TWindowCtrlFPvi(self->client, get_shared_text_buffer());
            self->state = 8;
            break;
        }
    case 8:
        if (self->d2c > 0) {
            text_builder_append(get_message_10__20TWindowSubStatusDispFPv(0x87));
            text_builder_append(lbl_805DD338);
            TWindowSubStatusDisp__sub_80228F5C(self->d2c);
            set_window_flags_off__11TWindowCtrlFPvi(self->client, get_shared_text_buffer());
            self->state = 9;
            break;
        }
    case 9:
        queue_destruction__7TObjectFv(self);
        break;
    }
    self->timer = 0x16;
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
void render__17TWindowSetLevelUpFv(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
void run_task__17TWindowSetLevelUpFv(u8 *arg0) {
    s16 temp_r5;
    temp_r5 = M2C_FIELD(arg0, s16 *, 0x1E);
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (temp_r5 - 1);
    if (temp_r5 <= 0) {
        ((M2C_UNK (*)(void))update_stat_messages__17TWindowSetLevelUpFv)();
    }
}
extern int fold_flush_0;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
void *__dt__17TWindowSetLevelUpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__17TWindowSetLevelUp;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
void *__ct__17TWindowSetLevelUpFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    struct VOff_8026DD70_arg0_8026DCE0 *self = (struct VOff_8026DD70_arg0_8026DCE0 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__17TWindowSetLevelUp;
    reset_sub_status_disp__10TObjPlayerFPv(self->f_24);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D39C8;
    TWindowSetLevelUp__sub_8026DDE0((s32)((void *)(self->f_24)), (s32)((void *)(arg2)));
    M2C_FIELD(arg0, u16 *, 0x1E) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg3;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}
extern int fold_flush_1;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
void TWindowSetLevelUp__sub_8026DDE0(s32 arg0, s32 arg1) {
    *(M2CCopy_16 *)(arg0) = *(const M2CCopy_16 *)(arg1);
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) M2C_FIELD(arg1, s16 *, 0x16);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) M2C_FIELD(arg1, s16 *, 0x18);
}
extern int fold_flush_2;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
void TWindowSetLevelUp__sub_8026DE28(void* p, s32 v) { *(s32*)((char*)p + 0x88) = v; }
#pragma pop

}
