#include "pso/ui/TAdChrSelSlotGC.h"

#include "types.h"

struct S802C7498_802C70AC { u8 pad[0x118]; s32 arr[1]; };

struct O_802C754C { u8 pad[0x110]; s32 v[1]; };

struct E_802C74AC { f32 x; f32 y; f32 x2; f32 y2; u8 pad[0x10]; };

struct V_802C74AC { f32 x; f32 y; };

struct S_802C74AC {
    u8 pad0[0x60];
    E_802C74AC e[3];
    V_802C74AC v[6];
    s32 b[4];
    u8 pad100[0x118 - 0x100];
    s32 a[4];
};

struct E_802C7560 { f32 x; f32 y; f32 x2; f32 y2; u8 pad[0x10]; };

struct V_802C7560 { f32 x; f32 y; };

struct S_802C7560 {
    u8 pad0[0x20];
    E_802C7560 e[4];
    u8 padA0[0xC0 - 0xA0];
    V_802C7560 v[4];
    u8 padE0[0xE8 - 0xE0];
    s32 b[4];
    u8 pad0xF8[0x110 - 0xF8];
    s32 a[4];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct ByteBlock_14 { s32 v[5]; };

struct E_802C7758 { f32 x; f32 y; f32 z; f32 w; u8 pad[0x10]; };

struct S_802C7758 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s32 f1C;
    u8 pad20[0x10];
    E_802C7758 e[2];
    E_802C7758 e2[3];
    u8 padD0[0xE8 - 0xD0];
    s32 aE8[5];
    s32 aFC[5];
    void *a110[2];
    void *a118[3];
    s32 f124;
};

struct Quad_802C7314 {
    u8 data[0x20];
};

struct TAdChrSelSlotGC_802C7314 {
    u8 pad0[0x20];
    Quad_802C7314 quad[5];
    u8 padC0[0x3C];
    s32 tex[5];
    s32 visible[5];
};

#include <stddef.h>
struct TObject;
struct StatusWindow;
struct CallbackTask;
struct CharacterSelectTransitionState {
    u8 base[0x18];
    const void* vtable;
    f32 position0X;
    f32 position0Y;
    f32 target0X;
    f32 target0Y;
    f32 position1X;
    f32 position1Y;
    f32 target1X;
    f32 target1Y;
    s32 client;
    s32 timer;
    TObject* parent;
    StatusWindow* statusWindow;
    CallbackTask* callback;
};

extern "C" {
void TAdChrSelSlotGC__sub_802C754C(O_802C754C *self, s32 i);
extern const f32 lbl_805DE5CC;
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void init_slot_entry__15TAdChrSelSlotGCFPviPv(S_802C74AC *arg0, s32 arg1, void *arg2);
extern const f32 lbl_805DE5CC;
extern f32 lbl_805D67F4, lbl_805D67F8;
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void init_slot__13TAdMcSelectGCFPviPv(S_802C7560 *arg0, s32 arg1, void *arg2);
void update_menu_cursor__6TLobbyFv();
void TLobby__sub_8023E4B4(s32, s32);
extern const s32 chr_sel_slot_resource_name_table[];
extern const s32 lbl_80471D50[];
extern const s32 current_language;
extern u32 lbl_805D67F0;
void TLobby__sub_802C7920(void);
extern u8 __vt__15TAdChrSelSlotGC[];
extern s32 TAdChrSelSlotGC__name;
S_802C7758 *__ct__15TAdChrSelSlotGCFv(S_802C7758 *self, TObject* _w1);
void set_global_param__8TObjFishFi(void *);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv();
void draw_textured_quad_at_depth(void *, f32);
void set_draw_texture_and_color(int, int);
extern u32 lbl_805D67F0;
extern const f32 lbl_805DE5C8;
void draw_slot_icons__15TAdChrSelSlotGCFPv(TAdChrSelSlotGC_802C7314 *self);
s32 get_main_phase();
f32 calc_result_offset__6TLobbyFv();
f32 calc_phase_offset__6TLobbyFv();
extern const f32 lbl_805DE5B4, lbl_805DE5B8, lbl_805DE5BC, lbl_805DE5C0;
void update_character_select_transition(CharacterSelectTransitionState* self);
s32 __ct__7TObjectFP7TObject(CharacterSelectTransitionState*, TObject* parent);
f32 calc_phase_offset__6TLobbyFv();
void* __nw__7TObjectFUl(u32 size);
StatusWindow* TWindowSubStatusDisp__ct(void* storage, s32 client);
CallbackTask* update_display__20TWindowSubSymbolChatFi(void (*callback)());
void update_transition_anim_if_active__22TAdMultiPlyChrSelectGCFv();
extern s32 lbl_804E0B28[];
extern s32 lbl_805D67E8;
extern const f32 lbl_805DE5B8, lbl_805DE5BC, lbl_805DE5C0;
CharacterSelectTransitionState* construct_character_select_transition(CharacterSelectTransitionState* self, TObject* parent, s32 client);
}

extern "C" {

void TAdChrSelSlotGC__sub_802C70AC(void);
void TAdChrSelSlotGC__sub_802C7498(struct S802C7498_802C70AC *arg0, s32 arg1);
void TLobby__sub_802C78EC(void);
void *destroy_character_select_transition(void *arg0, s16 arg1);
void render__15TAdChrSelSlotGCFv(void *arg0);
void reset_all_slots__15TAdChrSelSlotGCFPv(void* p);
void TLobby__sub_803DA16C(void*);
s32 TWindow__close(void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
s32 set_cached_blend_factor(s32, s32);
s32 restore_saved_depth_alpha_state();
s32 get_state_flag__9TMainTaskFv();
s32 set_depth_buffer_settings_2__Fv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv();

void TAdChrSelSlotGC__sub_802C70AC(void) {  }

extern s32 lbl_804E0B28[];
extern s32 lbl_805D67E8;

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
typedef char TransitionClientOffset[offsetof(CharacterSelectTransitionState, client) == 0x3C ? 1 : -1];
typedef char TransitionParentOffset[offsetof(CharacterSelectTransitionState, parent) == 0x44 ? 1 : -1];
typedef char TransitionWindowOffset[offsetof(CharacterSelectTransitionState, statusWindow) == 0x48 ? 1 : -1];
void update_character_select_transition(CharacterSelectTransitionState* self) {
    self->position0X = lbl_805DE5B4 * (self->target0X - self->position0X) + self->position0X;
    self->position0Y = lbl_805DE5B4 * (self->target0Y - self->position0Y) + self->position0Y;
    self->position1X = lbl_805DE5B4 * (self->target1X - self->position1X) + self->position1X;
    self->position1Y = lbl_805DE5B4 * (self->target1Y - self->position1Y) + self->position1Y;
    if (get_main_phase() == 15) {
        switch (self->timer) {
        case 150:
            self->position1X = lbl_805DE5B8;
            self->position1Y = lbl_805DE5BC;
            self->target1X = lbl_805DE5C0 + calc_result_offset__6TLobbyFv();
            self->target1Y = lbl_805DE5BC;
            break;
        case 300:
            self->position0X = lbl_805DE5B8;
            self->position0Y = lbl_805DE5BC;
            self->target0X = lbl_805DE5C0 + calc_phase_offset__6TLobbyFv();
            self->target0Y = lbl_805DE5BC;
            self->timer = 0;
            break;
        }
        ++self->timer;
    }
}
#pragma pop

void *destroy_character_select_transition(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E0B28;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x4C));
            *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x48) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x48));
            *(u32 *)((s8 *)arg0 + 0x48) = 0U;
        }
        lbl_805D67E8 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

CharacterSelectTransitionState* construct_character_select_transition(CharacterSelectTransitionState* self, TObject* parent, s32 client) {
    __ct__7TObjectFP7TObject((CharacterSelectTransitionState*)(self), (TObject*)(parent));
    self->vtable = ((const u32 *)&lbl_804E0B28);
    self->parent = parent;
    self->position0X = lbl_805DE5B8;
    self->position0Y = lbl_805DE5BC;
    self->target0X = lbl_805DE5C0 + calc_phase_offset__6TLobbyFv();
    self->target0Y = lbl_805DE5BC;
    self->position1X = lbl_805DE5B8;
    self->position1Y = lbl_805DE5BC;
    self->target1X = lbl_805DE5B8;
    self->target1Y = lbl_805DE5BC;
    self->client = client;
    self->timer = 0;
    (*(CharacterSelectTransitionState* *)&lbl_805D67E8) = self;
    StatusWindow* window = (StatusWindow*)__nw__7TObjectFUl(0x74);
    if (window) {
        window = TWindowSubStatusDisp__ct(window, self->client);
    }
    self->statusWindow = window;
    self->callback = update_display__20TWindowSubSymbolChatFi(update_transition_anim_if_active__22TAdMultiPlyChrSelectGCFv);
    return self;
}

void draw_slot_icons__15TAdChrSelSlotGCFPv(TAdChrSelSlotGC_802C7314 *self) {
    u32 i;
    for (i = 0; i < 5; i++) {
        if (self->visible[i] != 0) {
            begin_screen_draw(1);
            set_global_param__8TObjFishFi((void *)lbl_805D67F0);
            set_draw_texture_and_color(0, self->tex[i]);
            draw_textured_quad_at_depth(&self->quad[i], lbl_805DE5C8);
            get_player__20TWindowSubStatusDispFv();
        }
    }
}

void render__15TAdChrSelSlotGCFv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x124) == 1) {
        if (get_state_flag__9TMainTaskFv() == 1) {
            return;
        }
        goto block_5;
    }
    if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        set_cached_blend_factor(0, 8);
        set_cached_blend_factor(1, 0xA);
        draw_slot_icons__15TAdChrSelSlotGCFPv((TAdChrSelSlotGC_802C7314 *)(arg0));
        set_cached_blend_factor(0, 8);
        set_cached_blend_factor(1, 6);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x124) == 0) {
            restore_saved_depth_alpha_state();
        }
    }
}

void reset_all_slots__15TAdChrSelSlotGCFPv(void* p) { TAdChrSelSlotGC__sub_802C754C((O_802C754C *)(p), (s32)((void*)0)); TAdChrSelSlotGC__sub_802C754C((O_802C754C *)(p), (s32)((void*)1)); TAdChrSelSlotGC__sub_802C7498((struct S802C7498_802C70AC *)((struct S802C7498_802C70AC *)(p)), (s32)((s32)((void*)0))); TAdChrSelSlotGC__sub_802C7498((struct S802C7498_802C70AC *)((struct S802C7498_802C70AC *)(p)), (s32)((s32)((void*)1))); TAdChrSelSlotGC__sub_802C7498((struct S802C7498_802C70AC *)((struct S802C7498_802C70AC *)(p)), (s32)((s32)((void*)2))); }

void TAdChrSelSlotGC__sub_802C7498(struct S802C7498_802C70AC *arg0, s32 arg1) {
    arg0->arr[arg1] = 0;
}

extern u32 lbl_805D67F0;

void init_slot_entry__15TAdChrSelSlotGCFPviPv(S_802C74AC *arg0, s32 arg1, void *arg2) {
    arg0->a[arg1] = 1;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&arg0->v[arg1 + 2], arg2);
    arg0->e[arg1].x = arg0->v[arg1 + 2].x;
    arg0->e[arg1].y = arg0->v[arg1 + 2].y;
    arg0->e[arg1].x2 = lbl_805DE5CC + arg0->v[arg1 + 2].x;
    arg0->e[arg1].y2 = 24.0f + arg0->v[arg1 + 2].y;
    arg0->b[arg1] = 0;
}

void TAdChrSelSlotGC__sub_802C754C(O_802C754C *self, s32 i) {
    self->v[i] = 0;
}

void init_slot__13TAdMcSelectGCFPviPv(S_802C7560 *arg0, s32 arg1, void *arg2) {
    arg0->a[arg1] = 1;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&arg0->v[arg1], arg2);
    arg0->e[arg1].x = arg0->v[arg1].x;
    arg0->e[arg1].y = arg0->v[arg1].y;
    arg0->e[arg1].x2 = lbl_805DE5CC + arg0->v[arg1].x;
    arg0->e[arg1].y2 = 32.0f + arg0->v[arg1].y;
    arg0->b[arg1] = 0;
}

}

void TAdChrSelSlotGC::run_task() {
    ++frame;
    for (u32 i = 0; i < 5; ++i) {
        if (i < 2) {
            lbl_805D67F4 = lbl_805DE5CC;
            lbl_805D67F8 = 32.0f;
        } else {
            lbl_805D67F4 = lbl_805DE5CC;
            lbl_805D67F8 = 24.0f;
        }
        quads[i].left = positions[i].x;
        quads[i].top = positions[i].y;
        quads[i].right = positions[i].x + lbl_805D67F4;
        quads[i].bottom = positions[i].y + lbl_805D67F8;
        if (visible[i]) {
            alpha[i] += 22;
            alpha[i] = alpha[i] > 255 ? 255 : alpha[i];
            colors[i] = (alpha[i] << 24) | 0x00FFFFFF;
        } else {
            alpha[i] = 0;
            colors[i] = (alpha[i] << 24) | 0x00FFFFFF;
        }
    }
}

TAdChrSelSlotGC::~TAdChrSelSlotGC() {}

extern "C" {
#pragma push
#pragma fp_contract on
S_802C7758 *__ct__15TAdChrSelSlotGCFv(S_802C7758 *self, TObject* _w1) {
    u32 i;
    u32 j;
    u32 k;
    f32 t;
    __ct__7TObjectFP7TObject((CharacterSelectTransitionState*)(self), (TObject*)(_w1));
    self->vt = __vt__15TAdChrSelSlotGC;
    self->f0 = TAdChrSelSlotGC__name;
    self->f1C = -1;
    self->f124 = 1;
    for (i = 0; i < 5; i++) {
        self->aFC[i] = 0;
        self->aE8[i] = 0;
    }
    for (j = 0; j < 2; j++) {
        self->a110[j] = NULL;
        self->e[j].x = 0.0f;
        t = 32.0f * (f32)j;
        self->e[j].y = t / 256.0f;
        self->e[j].z = 174.0f / 256.0f;
        self->e[j].w = (32.0f + t) / 256.0f;
    }
    for (k = 0; k < 3; k++) {
        self->a118[k] = NULL;
        self->e2[k].x = 0.0f;
        self->e2[k].y = (24.0f * (f32)k + 64.0f) / 256.0f;
        self->e2[k].z = 174.0f / 256.0f;
        self->e2[k].w = (24.0f * (f32)(k + 1) + 64.0f) / 256.0f;
    }
    return self;
}
#pragma pop

void TLobby__sub_802C78EC(void) {
    if ((u32) lbl_805D67F0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D67F0);
        lbl_805D67F0 = 0U;
    }
}
void TLobby__sub_802C7920(void) {
    update_menu_cursor__6TLobbyFv();
    ByteBlock_14 a = *(const ByteBlock_14 *)chr_sel_slot_resource_name_table;
    ByteBlock_14 b = *(const ByteBlock_14 *)lbl_80471D50;
    s32 r4 = b.v[current_language];
    lbl_805D67F0 = r4;
    TLobby__sub_8023E4B4(a.v[current_language], r4);
}

}
