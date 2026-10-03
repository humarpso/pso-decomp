#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8029756C_TObjCMMainMenu__data_804DB9C8 {
    M2C_UNK value;
    u8 remaining[0x9C];
};

struct V2_80297DB8 {
    f32 x;
    f32 y;
};

struct Quad_80297DB8 {
    V2_80297DB8 p[4];
};

struct Cols_80297DB8 {
    u32 c[4];
};

struct Prim_80297DB8 {
    V2_80297DB8 *pts;
    u32 *colors;
    s32 start;
    s32 count;
};

struct Menu_80297DB8 {
    u8 pad[0x38];
    f32 alpha;
};

extern "C" {
s32 play_sound_effect(s32, s32, s32, s32);
s32 create__16TObjCMAssignMenuFPvPv(s32, s32);
extern RecoveredGlobal_8029756C_TObjCMMainMenu__data_804DB9C8 TObjCMMainMenu__data_804DB9C8;
extern s32 TObjCMMainMenu__data_805D659C;
void TObjCMMainMenu__sub_8029756C(u8 *arg0);
void TWindowCtrlMain__sub_801E352C(void *, int, int, f32);
f32 get_scale__14TObjCMMainMenuFv(void);
u32 __cvt_fp2unsigned(f32);
extern Cols_80297DB8 lbl_804DBC68[2];
extern Quad_80297DB8 lbl_804DBC88[2];
extern const f32 lbl_805DDB90;
extern const f32 lbl_805DDBB0;
extern const f32 lbl_805DDBB4;
void draw_footer_divider__14TObjCMMainMenuFPv(Menu_80297DB8 *self);
}

extern "C" {

void TObjCMMainMenu__sub_802972C4(void);
s32 try_pay_fee__14TObjCMMainMenuFv(void);
void confirm_selection__14TObjCMMainMenuFPv(void *arg0);
void open_name_menu__14TObjCMMainMenuFPv(void *arg0);
void open_proportion_menu__14TObjCMMainMenuFPv(void *arg0);
void open_auto_mk_menu__14TObjCMMainMenuFPv(void *arg0);
void open_hair_menu__14TObjCMMainMenuFPv(void *arg0);
void fn_802972BC(void);
void fn_802972C0(void);
u8 calc_section_id_from_name();
M2C_UNK create__16TObjCMAutoMkDataFPv(s32);
M2C_UNK create__14TObjCMHairMenuFPv(s32);
M2C_UNK create__10TObjCMNameFPv(s32);
M2C_UNK create__16TObjCMProportionFPv(s32);
void *get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 TObjCMMainMenu__sub_8028DA7C(void *);
M2C_UNK fn_80290BE0();
M2C_UNK set_selection__14TObjCMMainMenuFi(M2C_UNK);

void fn_802972BC(void) {  }
void fn_802972C0(void) {  }
void TObjCMMainMenu__sub_802972C4(void) {  }
s32 try_pay_fee__14TObjCMMainMenuFv(void) {
    s32 temp_r4;
    void *temp_r3;

    if (get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) == NULL) {
        play_sound_effect((s32)(0x40018519), (s32)(0), (s32)(0), (s32)(0));
        return 0;
    }
    temp_r3 = get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF);
    temp_r4 = M2C_FIELD(temp_r3, s32 *, 0x36C);
    if (temp_r4 < 0x2710) {
        M2C_FIELD(temp_r3, s32 *, 0x36C) = 0;
        play_sound_effect((s32)(0xB20C), (s32)(0), (s32)(0), (s32)(0));
        return 0;
    }
    M2C_FIELD(temp_r3, s32 *, 0x36C) = (s32) (temp_r4 - 0x2710);
    play_sound_effect((s32)(0x44E03), (s32)(0), (s32)(0), (s32)(0));
    return 1;
}

extern s32 TObjCMMainMenu__data_805D659C;

void confirm_selection__14TObjCMMainMenuFPv(void *arg0) {
    if (TObjCMMainMenu__sub_8028DA7C(M2C_FIELD(arg0, void **, 0x1C)) == 0) {
        play_sound_effect((s32)(0x53F06), (s32)(0), (s32)(0), (s32)(0));
        return;
    }
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x30) == -1) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x30) = calc_section_id_from_name();
    } else {
        try_pay_fee__14TObjCMMainMenuFv();
    }
    set_selection__14TObjCMMainMenuFi(1);
    fn_80290BE0();
    M2C_FIELD(arg0, s32 *, 0x30) = 0x3C;
    TObjCMMainMenu__data_805D659C = 2;
}

extern s32 TObjCMMainMenu__data_805D659C;

void open_name_menu__14TObjCMMainMenuFPv(void *arg0) {
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    create__10TObjCMNameFPv(M2C_FIELD(arg0, s32 *, 0x50));
}

extern s32 TObjCMMainMenu__data_805D659C;

void open_proportion_menu__14TObjCMMainMenuFPv(void *arg0) {
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    create__16TObjCMProportionFPv(M2C_FIELD(arg0, s32 *, 0x50));
}

extern s32 TObjCMMainMenu__data_805D659C;

void open_auto_mk_menu__14TObjCMMainMenuFPv(void *arg0) {
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    create__16TObjCMAutoMkDataFPv(M2C_FIELD(arg0, s32 *, 0x50));
}

extern s32 TObjCMMainMenu__data_805D659C;

void open_hair_menu__14TObjCMMainMenuFPv(void *arg0) {
    play_sound_effect((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    create__14TObjCMHairMenuFPv(M2C_FIELD(arg0, s32 *, 0x50));
}
typedef char RecoveredGlobal_8029756C_TObjCMMainMenu__data_804DB9C8_size[sizeof(RecoveredGlobal_8029756C_TObjCMMainMenu__data_804DB9C8) == 0xA0 ? 1 : -1];
void TObjCMMainMenu__sub_8029756C(u8 *arg0) {
    play_sound_effect((s32)(0x52D01), (s32)(0U), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    create__16TObjCMAssignMenuFPvPv(M2C_FIELD(arg0, s32 *, 0x50), M2C_FIELD(&TObjCMMainMenu__data_804DB9C8.value, M2C_UNK *, (M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x24), M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x2C) * 4)) * 0x10)));
}
void draw_footer_divider__14TObjCMMainMenuFPv(Menu_80297DB8 *self) {
    Prim_80297DB8 prim;
    u32 cols[4];
    f32 s = get_scale__14TObjCMMainMenuFv();
    f32 top = lbl_805DDBB0 * s;
    f32 bot = top + lbl_805DDBB4 * s;
    Cols_80297DB8 *src;
    Quad_80297DB8 *q;
    s32 i;
    s32 j;
    prim.start = 0;
    prim.count = 4;
    for (i = 0; i < 2; i++) {
        q = &lbl_804DBC88[i];
        src = &lbl_804DBC68[i];
        q->p[1].y = top;
        q->p[0].y = top;
        q->p[3].y = bot;
        q->p[2].y = bot;
        for (j = 0; j < 4; j++) {
            u32 c = src->c[j];
            cols[j] = (c & 0x00FFFFFF) | (__cvt_fp2unsigned((f32)(c >> 24) * self->alpha) << 24);
        }
        prim.colors = cols;
        prim.pts = q->p;
        TWindowCtrlMain__sub_801E352C(&prim, 4, 6, lbl_805DDB90);
    }
}

}
