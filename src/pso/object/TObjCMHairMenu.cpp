#include "pso/TObjCMHairMenu.h"

TObjCMHairMenu::~TObjCMHairMenu() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Ent_802964B0 {
    u8 pad0[8];
    s16 f8;
    u8 pad[0x2C - 0xA];
};

struct Hair_802964B0 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
    u8 pad2c[4];
    s32 f30;
    f32 f34;
    s32 a38[3];
};

extern "C" {
void *__ct__7TObjectFP7TObject(void *, void *);
s32 get_display_index__12TCharaMakingFPv(s32);
void set_eff_tag__11TChCrEffTagFi(s32);
extern Ent_802964B0 lbl_804D8E20[];
extern u8 __vt__14TObjCMHairMenu[];
extern s32 lbl_805D3CE0;
extern s32 lbl_805D6520;
extern const f32 lbl_805DDA90;
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK play_sound_effect(int, int, int, int);
M2C_UNK clear_task_state__14TObjCMMainMenuFv();
s32 TChCrCharSelect__sub_80298F8C(int);
s32 TObjCMProportion__sub_8029914C(int);
s32 TObjCMProportion__sub_8029916C(int);
extern const f32 lbl_805DDA70;
extern const f32 lbl_805DDAA8;
extern const f32 lbl_805DDAAC;
Hair_802964B0 *__ct__14TObjCMHairMenuFv(Hair_802964B0 *arg0, void *arg1);
}

extern "C" {

void *create__14TObjCMHairMenuFPv(void *arg0);
void *__nw__7TObjectFUl(int);

#pragma push
#pragma opt_common_subs off
void TObjCMHairMenu::run_task() {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s16 temp_r0_4;
    s32 temp_r3;
    CharacterAppearanceFields *app;
    s32 off;

    ticks++;
    if (initialized == 0) {
        initialized = 1;
        return;
    }
    if (active == 0) {
        temp_f1 = fade + lbl_805DDAA8;
        fade = temp_f1;
        if (temp_f1 <= lbl_805DDA90) {
            fade = lbl_805DDA90;
            queue_destruction__7TObjectFv(this);
        }
    } else {
        temp_f1_2 = fade + lbl_805DDAAC;
        fade = temp_f1_2;
        if (temp_f1_2 > lbl_805DDA70) {
            fade = lbl_805DDA70;
        }
        if (TChCrCharSelect__sub_80298F8C(0x20) != 0) {
            temp_r0 = selection + 1;
            selection = temp_r0;
            if (temp_r0 >= 4) {
                selection = 0;
            }
            play_sound_effect(0x54100, 0, 0, 0);
        } else if (TChCrCharSelect__sub_80298F8C(0x10) != 0) {
            temp_r0_2 = selection - 1;
            selection = temp_r0_2;
            if (temp_r0_2 < 0) {
                selection = 3;
            }
            play_sound_effect(0x54100, 0, 0, 0);
        }
        temp_r3 = selection;
        if (temp_r3 == 0) {
            app = appearance;
            if (TChCrCharSelect__sub_80298F8C(0x80) != 0) {
                if (++app->hair >= count) {
                    app->hair = 0;
                }
                play_sound_effect(0x54100, 0, 0, 0);
            } else if (TChCrCharSelect__sub_80298F8C(0x40) != 0) {
                if (--app->hair < 0) {
                    app->hair = count - 1;
                }
                play_sound_effect(0x54100, 0, 0, 0);
            }
        } else {
            app = appearance;
            off = (temp_r3 + 4) * 2 + 0x38;
            if (TObjCMProportion__sub_8029916C(0x80) != 0) {
                M2C_FIELD(app, s16 *, off) = M2C_FIELD(app, s16 *, off) + 1;
            } else if (TObjCMProportion__sub_8029916C(0x40) != 0) {
                M2C_FIELD(app, s16 *, off) = M2C_FIELD(app, s16 *, off) - 1;
            } else if (TObjCMProportion__sub_8029914C(0x80) != 0) {
                M2C_FIELD(app, s16 *, off) = M2C_FIELD(app, s16 *, off) + 5;
            } else if (TObjCMProportion__sub_8029914C(0x40) != 0) {
                M2C_FIELD(app, s16 *, off) = M2C_FIELD(app, s16 *, off) - 5;
            }
            temp_r0_4 = M2C_FIELD(app, s16 *, off);
            if (temp_r0_4 > 0xFF) {
                M2C_FIELD(app, s16 *, off) = 0xFF;
            } else if (temp_r0_4 < 0) {
                M2C_FIELD(app, s16 *, off) = 0;
            }
        }
        if (TObjCMProportion__sub_8029916C(6) != 0) {
            play_sound_effect(0x53704, 0, 0, 0);
            clear_task_state__14TObjCMMainMenuFv();
            active = 0;
        }
    }
}

#pragma pop
void *create__14TObjCMHairMenuFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = __ct__14TObjCMHairMenuFv((Hair_802964B0 *)(o), (void *)(arg0));
    }
    return o;
}
Hair_802964B0 *__ct__14TObjCMHairMenuFv(Hair_802964B0 *arg0, void *arg1) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0, arg1);
    arg0->vt = __vt__14TObjCMHairMenu;
    arg0->f0 = lbl_805D3CE0;
    arg0->f1c = lbl_805D6520;
    arg0->f20 = 0;
    arg0->f24 = 0;
    arg0->f28 = lbl_804D8E20[get_display_index__12TCharaMakingFPv(arg0->f1c)].f8;
    arg0->f30 = 1;
    arg0->f34 = lbl_805DDA90;
    for (i = 0; i < 3; i++) {
        arg0->a38[i] = 0;
    }
    set_eff_tag__11TChCrEffTagFi(5);
    return arg0;
}

}
