#include "pso/TChCrTagPlGraphic.h"

TChCrTagPlGraphic::~TChCrTagPlGraphic() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TChCrTagPlGraphic__data_804664A4 {
    M2C_UNK value;
    u8 remaining[0x11C];
};

struct RecoveredGlobal_802A3454___vt__17TChCrTagPlGraphic {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
u8 * __ct__8TChCrTagFv(void *, s32);
extern const TChCrTagPlGraphic__data_804664A4 TChCrTagPlGraphic__data_804664A4;
extern RecoveredGlobal_802A3454___vt__17TChCrTagPlGraphic __vt__17TChCrTagPlGraphic;
extern s32 lbl_805D3DB8;
extern const f32 lbl_805DDF18;
extern const f32 lbl_805DDF2C;
extern const f32 lbl_805DDF30;
u8 *__ct__17TChCrTagPlGraphicFv(u8 *arg0, s32 arg1, s32 _w2);
s32 get_selected_index__15TChCrCharSelectFv();
s32 get_selected_char__15TChCrCharSelectFv();
s32 get_instance__15TChCrCharSelectFv();
s32 TChCrTagPlGraphic__vt4(u8 *arg0);
}

extern "C" {

void *create__17TChCrTagPlGraphicFPv(void *arg0);
void render__17TChCrTagPlGraphicFv(void* p);
void run_task__17TChCrTagPlGraphicFv(void* p);
int TChCrTagPlGraphic__sub_802A3230(void*);
int update_fade__8TChCrTagFPv(void*);
void *__nw__7TObjectFUl(int);
int restore_saved_depth_alpha_state(void);
int draw_class_illustration__17TChCrTagPlGraphicFPv(void*);
int set_depth_buffer_settings_1__Fv(void*);

void render__17TChCrTagPlGraphicFv(void* p) { set_depth_buffer_settings_1__Fv(p); draw_class_illustration__17TChCrTagPlGraphicFPv(p); restore_saved_depth_alpha_state(); }

void run_task__17TChCrTagPlGraphicFv(void* p) { update_fade__8TChCrTagFPv(p); TChCrTagPlGraphic__sub_802A3230(p); }

extern void *tl_03;

typedef char RecoveredGlobal_802A3454_TChCrTagPlGraphic__data_804664A4_size[sizeof(TChCrTagPlGraphic__data_804664A4) == 0x120 ? 1 : -1];
typedef char RecoveredGlobal_802A3454___vt__17TChCrTagPlGraphic_size[sizeof(RecoveredGlobal_802A3454___vt__17TChCrTagPlGraphic) == 0x20 ? 1 : -1];

s32 TChCrTagPlGraphic__vt4(u8 *arg0) {
    switch (get_selected_index__15TChCrCharSelectFv()) {
    case 0:
        if (*(s32 *)(arg0 + 0x20) / 4 == get_selected_char__15TChCrCharSelectFv()) {
            return 1;
        }
        break;
    default:
        if (*(s32 *)(arg0 + 0x20) == get_instance__15TChCrCharSelectFv()) {
            return 1;
        }
        break;
    }
    return 0;
}

u8 *__ct__17TChCrTagPlGraphicFv(u8 *arg0, s32 arg1, s32 _w2) {
    u8 *temp_r5;
    __ct__8TChCrTagFv(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TChCrTagPlGraphic.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3DB8;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DDF2C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DDF30;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DDF2C;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DDF30;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DDF18;
    temp_r5 = (u8 *)&TChCrTagPlGraphic__data_804664A4.value + (M2C_FIELD(arg0, s32 *, 0x20) * 0x18);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_r5, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(temp_r5, f32 *, 0);
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0 + 0x48, temp_r5 + 8);
    return arg0;
}

void *create__17TChCrTagPlGraphicFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = __ct__17TChCrTagPlGraphicFv((u8 *)(o), (s32)(tl_03), (s32)(arg0));
    }
    return o;
}

struct Ent_802A3534 { f32 a; f32 b; u8 pad[0x10]; };
extern f32 lbl_804665C4[];

void TChCrTagPlGraphic__sub_802A3534(void) {
    s32 i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 12; j++) {
            if (((Ent_802A3534 *)&TChCrTagPlGraphic__data_804664A4)[j].b == lbl_804665C4[i]) {
                create__17TChCrTagPlGraphicFPv((void *)j);
            }
        }
    }
}

}
