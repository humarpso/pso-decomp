#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__ct__12TAdBackTxtGCFv(void *arg0);
void render__12TAdBackTxtGCFv(void *arg0);
void run_task__12TAdBackTxtGCFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(void *);
void render_shadows__7TObjectFv(void);
void *__dt__12TAdBackTxtGCFv(void *self, s16 arg1);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);
M2C_UNK restore_saved_depth_alpha_state();
M2C_UNK draw_character_background_frame(void *, s32, M2C_UNK);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
s32 toggle_flag_9__10TObjPlayerFPv();

void render__12TAdBackTxtGCFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
        if (toggle_flag_9__10TObjPlayerFPv() == 0) {
            set_depth_buffer_settings_2__Fv();
            goto block_4;
        }
    } else if (get_state_flag__9TMainTaskFv() != 1) {
block_4:
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        draw_character_background_frame(arg0, (s32) M2C_FIELD(arg0, s32 *, 0x1C) / 3, -1);
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
            restore_saved_depth_alpha_state();
        }
    }
}

void run_task__12TAdBackTxtGCFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r4 >= 0xE) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r4 + 1);
}

extern void *__vt__12TAdBackTxtGC[];
extern const f32 lbl_805DDD08;
extern void *lbl_805D3D28;

void *__dt__12TAdBackTxtGCFv(void *self, s16 arg1) {
    if (self != NULL) {
        M2C_FIELD(self, void ***, 0x18) = __vt__12TAdBackTxtGC;
        __dt__7TObjectFv(self, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

void *__ct__12TAdBackTxtGCFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, void ***, 0x18) = __vt__12TAdBackTxtGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D28;
    M2C_FIELD(arg0, u32 *, 0x1C) = -1;
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_805DDD08;
    M2C_FIELD(arg0, u32 *, 0x24) = 1;
    return arg0;
}

}

extern "C" {
    int TLobby__sub_8023E4B4(void*, void*);
    extern unsigned char lbl_80465490[];
    extern unsigned char lbl_80465430[], lbl_80465440[], lbl_80465450[], lbl_80465460[], lbl_80465470[];
    struct TexName_804DC098 { void *name; s32 a; s32 b; };
    struct TexList_804DC0D4 { TexName_804DC098 *list; s32 n; };
    TexName_804DC098 lbl_804DC098[5] = {
        { lbl_80465430, 0, 0 }, { lbl_80465440, 0, 0 }, { lbl_80465450, 0, 0 },
        { lbl_80465460, 0, 0 }, { lbl_80465470, 0, 0 },
    };
    __declspec(section ".data") TexList_804DC0D4 lbl_804DC0D4 = { lbl_804DC098, 5 };
extern u32 lbl_805D65C0;
void register_texture_f256_backtext(void);
}

extern "C" {

void free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D65C0;

void free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D65C0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D65C0);
        lbl_805D65C0 = 0U;
    }
}
void register_texture_f256_backtext(void) { (*(int *)&lbl_805D65C0) = (int)&lbl_804DC0D4; TLobby__sub_8023E4B4(lbl_80465490, &lbl_804DC0D4); }

}

extern "C" {
void *__vt__12TAdBackTxtGC[6] = {
    0, 0, (void *)__dt__12TAdBackTxtGCFv, (void *)run_task__12TAdBackTxtGCFv,
    (void *)render__12TAdBackTxtGCFv, (void *)render_shadows__7TObjectFv,
};
}
