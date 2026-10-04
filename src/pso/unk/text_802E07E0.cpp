#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK copy_player_visual_record(void *, void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
M2C_UNK advance_animation_playback(void *);
u8 *get_entry__23TAdSinglePlyChrSelectGCFi(int);
u8 *get_char_table_entry__23TAdSinglePlyChrSelectGCFi(int);
u8 *get_char_index__23TAdSinglePlyChrSelectGCFUi(int);
M2C_UNK free_chcr_resources(void *, int);
void *TNpcPlayer__sub_8028B810(void *, void *, void *, int);
s32 is_unloaded__12TChCrLoadAfsFPv(void *);
M2C_UNK set_cursor_index_2__17TAdMultiConfirmGCFPv(void *);
M2C_UNK set_cursor_index_1__17TAdMultiConfirmGCFPv(void *);
M2C_UNK reset_cursor__17TAdMultiConfirmGCFPv(void *);
M2C_UNK fn_802E0784(void *);
void set_status_param__14TAdPlyStatusGCFii(void *, void *);
void *get_index__14TAdPlyStatusGCFv();
void TAdPlyStatusGC__sub_8033F900(void *, int);
void TNpcPlayer__sub_802E07E0(u8 *arg0);
}

extern "C" {

#define F(o, t) M2C_FIELD(arg0, t *, o)
void TNpcPlayer__sub_802E07E0(u8 *arg0) {
    void *p;
    void *idx;
    s32 t;
    switch (F(0xFC, s32)) {
    case 0:
        if (F(0x170, void *) != NULL) {
            free_chcr_resources(F(0x170, void *), 1);
            F(0x170, void *) = NULL;
        }
        if (F(0x100, s32) != 0) {
            F(0xFC, s32) = F(0x100, s32) - 1;
            F(0x100, s32) = 0;
        }
        break;
    case 1:
        if (F(0x170, void *) != NULL) {
            free_chcr_resources(F(0x170, void *), 1);
            F(0x170, void *) = NULL;
        }
        if (F(0x100, s32) != 0) {
            F(0xFC, s32) = F(0x100, s32) - 1;
            F(0x100, s32) = 0;
            break;
        }
        switch (F(0x104, s32)) {
        case 0:
            copy_player_visual_record(arg0 + 0x120, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) + 0x370);
            p = alloc__23TAdSinglePlyChrSelectGCFPv(0x4AC);
            if (p != NULL) {
                p = TNpcPlayer__sub_8028B810(p, arg0, arg0 + 0x120, 0);
            }
            F(0x170, void *) = p;
            F(0x60, s32) = 0xF3D5;
            break;
        case 1:
            copy_player_visual_record(arg0 + 0x120, get_entry__23TAdSinglePlyChrSelectGCFi(F(0x110, s32)) + 0x370);
            p = alloc__23TAdSinglePlyChrSelectGCFPv(0x4AC);
            if (p != NULL) {
                p = TNpcPlayer__sub_8028B810(p, arg0, arg0 + 0x120, 0);
            }
            F(0x170, void *) = p;
            F(0x60, s32) = 0xF3D5;
            break;
        case 2:
            copy_player_visual_record(arg0 + 0x120, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) + 0x370);
            p = alloc__23TAdSinglePlyChrSelectGCFPv(0x4AC);
            if (p != NULL) {
                p = TNpcPlayer__sub_8028B810(p, arg0, arg0 + 0x120, 0);
            }
            F(0x170, void *) = p;
            F(0x60, s32) = 0xF3D5;
            break;
        case 3:
        case 4:
        case 5:
            copy_player_visual_record(arg0 + 0x120, get_char_table_entry__23TAdSinglePlyChrSelectGCFi(F(0x10C, s32)) + 0x370);
            p = alloc__23TAdSinglePlyChrSelectGCFPv(0x4AC);
            if (p != NULL) {
                p = TNpcPlayer__sub_8028B810(p, arg0, arg0 + 0x120, F(0x10C, s32));
            }
            F(0x170, void *) = p;
            break;
        }
        fn_802E0784(arg0);
        F(0xFC, s32) = 2;
        break;
    case 2:
        if (F(0x100, s32) != 0) {
            if (F(0x170, void *) != NULL) {
                free_chcr_resources(F(0x170, void *), 1);
                F(0x170, void *) = NULL;
            }
            F(0xFC, s32) = F(0x100, s32) - 1;
            F(0x100, s32) = 0;
        } else if (is_unloaded__12TChCrLoadAfsFPv(F(0x170, void *)) != 0) {
            F(0xFC, s32) = 3;
            F(0x118, s32) = 0;
        }
        break;
    case 3:
        if (F(0x100, s32) != 0) {
            if (F(0x170, void *) != NULL) {
                free_chcr_resources(F(0x170, void *), 1);
                F(0x170, void *) = NULL;
            }
            F(0xFC, s32) = F(0x100, s32) - 1;
            F(0x100, s32) = 0;
        } else {
            if (F(0x11C, s32) == 1) {
                F(0x60, s32) = F(0x60, s32) - 0x100;
            }
            F(0x118, s32) = F(0x118, s32) + 1;
            t = F(0x118, s32);
            if (t == 0x384 || t == 0x708) {
                set_cursor_index_1__17TAdMultiConfirmGCFPv(arg0);
            } else if (t == 0x546) {
                set_cursor_index_2__17TAdMultiConfirmGCFPv(arg0);
            }
            if (F(0x118, s32) == 0x8CA) {
                reset_cursor__17TAdMultiConfirmGCFPv(arg0);
                F(0x118, s32) = 0;
            }
            advance_animation_playback(arg0);
        }
        break;
    }
    idx = get_index__14TAdPlyStatusGCFv();
    if (idx != NULL) {
        TAdPlyStatusGC__sub_8033F900(idx, F(0xFC, s32));
        set_status_param__14TAdPlyStatusGCFii(idx, F(0x170, void *));
    }
}

}
