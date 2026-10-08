#include "pso/TAdChrSelSlotGC.h"

TAdChrSelSlotGC::~TAdChrSelSlotGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
struct M2CCopy_14 { s32 v[5]; };

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

extern "C" {
void TAdChrSelSlotGC__sub_802C754C(O_802C754C *self, s32 i);
extern const f32 lbl_805DE5CC;
extern const f32 TAdChrSelSlotGC__data_805DE5D0;
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void TAdChrSelSlotGC__sub_802C74AC(S_802C74AC *arg0, s32 arg1, void *arg2);
extern const f32 lbl_805DE5CC;
extern const f32 lbl_805DE5D4;
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void init_slot__13TAdMcSelectGCFPviPv(S_802C7560 *arg0, s32 arg1, void *arg2);
void update_menu_cursor__6TLobbyFv();
void TLobby__sub_8023E4B4(s32, s32);
extern const s32 lbl_80471D3C[];
extern const s32 lbl_80471D50[];
extern const s32 lbl_805D5544;
extern u32 lbl_805D67F0;
void TLobby__sub_802C7920(void);
M2C_UNK __ct__7TObjectFP7TObject(void *);
extern u8 __vt__15TAdChrSelSlotGC[];
extern s32 lbl_805D3EE8;
S_802C7758 *__ct__15TAdChrSelSlotGCFv(S_802C7758 *self);
}

extern "C" {

void TAdChrSelSlotGC__sub_802C70AC(void);
void TAdChrSelSlotGC__sub_802C7498(struct S802C7498_802C70AC *arg0, s32 arg1);
void TLobby__sub_802C78EC(void);
void *destroy__15TAdChrSelSlotGCFPvs(void *arg0, s16 arg1);
void render__15TAdChrSelSlotGCFv(void *arg0);
void reset_all_slots__15TAdChrSelSlotGCFPv(void* p);
M2C_UNK TAdChrSelSlotGC__sub_802C7314(void *);
void TLobby__sub_803DA16C(void*);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);
M2C_UNK restore_saved_depth_alpha_state();
s32 get_state_flag__9TMainTaskFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
s32 toggle_flag_9__10TObjPlayerFPv();

void TAdChrSelSlotGC__sub_802C70AC(void) {  }

extern M2C_UNK lbl_804E0B28[];
extern s32 lbl_805D67E8;

void *destroy__15TAdChrSelSlotGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E0B28;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x4C));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x48));
            M2C_FIELD(arg0, u32 *, 0x48) = 0U;
        }
        lbl_805D67E8 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void render__15TAdChrSelSlotGCFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x124) == 1) {
        if (get_state_flag__9TMainTaskFv() == 1) {
            return;
        }
        goto block_5;
    }
    if (toggle_flag_9__10TObjPlayerFPv() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        TAdChrSelSlotGC__sub_802C7314(arg0);
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x124) == 0) {
            restore_saved_depth_alpha_state();
        }
    }
}

void reset_all_slots__15TAdChrSelSlotGCFPv(void* p) { TAdChrSelSlotGC__sub_802C754C((O_802C754C *)(p), (s32)((void*)0)); TAdChrSelSlotGC__sub_802C754C((O_802C754C *)(p), (s32)((void*)1)); TAdChrSelSlotGC__sub_802C7498((struct S802C7498_802C70AC *)((struct S802C7498_802C70AC *)(p)), (s32)((s32)((void*)0))); TAdChrSelSlotGC__sub_802C7498((struct S802C7498_802C70AC *)((struct S802C7498_802C70AC *)(p)), (s32)((s32)((void*)1))); TAdChrSelSlotGC__sub_802C7498((struct S802C7498_802C70AC *)((struct S802C7498_802C70AC *)(p)), (s32)((s32)((void*)2))); }

void TAdChrSelSlotGC__sub_802C7498(struct S802C7498_802C70AC *arg0, s32 arg1) {
    arg0->arr[arg1] = 0;
}

extern u32 lbl_805D67F0;

void TAdChrSelSlotGC__sub_802C74AC(S_802C74AC *arg0, s32 arg1, void *arg2) {
    arg0->a[arg1] = 1;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&arg0->v[arg1 + 2], arg2);
    arg0->e[arg1].x = arg0->v[arg1 + 2].x;
    arg0->e[arg1].y = arg0->v[arg1 + 2].y;
    arg0->e[arg1].x2 = lbl_805DE5CC + arg0->v[arg1 + 2].x;
    arg0->e[arg1].y2 = TAdChrSelSlotGC__data_805DE5D0 + arg0->v[arg1 + 2].y;
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
    arg0->e[arg1].y2 = lbl_805DE5D4 + arg0->v[arg1].y;
    arg0->b[arg1] = 0;
}

#pragma push
#pragma fp_contract on
S_802C7758 *__ct__15TAdChrSelSlotGCFv(S_802C7758 *self) {
    u32 i;
    u32 j;
    u32 k;
    f32 t;
    __ct__7TObjectFP7TObject(self);
    self->vt = __vt__15TAdChrSelSlotGC;
    self->f0 = lbl_805D3EE8;
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
    M2CCopy_14 a = *(const M2CCopy_14 *)lbl_80471D3C;
    M2CCopy_14 b = *(const M2CCopy_14 *)lbl_80471D50;
    s32 r4 = b.v[lbl_805D5544];
    lbl_805D67F0 = r4;
    TLobby__sub_8023E4B4(a.v[lbl_805D5544], r4);
}

}
