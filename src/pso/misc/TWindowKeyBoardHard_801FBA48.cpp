#include "types.h"
#include "pso/misc/TWindowKeyBoardHard.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
f32 rotate_matrix_by_node_angles(void *, void *);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
f32 post_translate_matrix(void *);
s32 draw_ginja_model(int);
void draw_ginja_box_tree(u8 *arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFv(s32);
void render_tick__Fv();
void render_frame__23TAdSinglePlyChrSelectGCFv();
void apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(void *, void *, s32);
void subtractive_rng_unshuffle(void *, void *, void *, s32);
void subtractive_rng_make_shuffle(void *);
void subtractive_rng_xor_buffer(void *, void *, s32);
void subtractive_rng_seed(void *, s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(u32);
s32 TAdSinglePlyChrSelectGC__sub_80202A68(void *);
void destroy_chardata_array__23TAdSinglePlyChrSelectGCFis(void *, s32);
void copy_save_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
void *construct_chardata_array__23TAdSinglePlyChrSelectGCFPv(void *);
extern u8 chr_select_rng_state[];
extern s32 chr_select_serial_seeds[];
void TAdSinglePlyChrSelectGC__sub_801FBC3C(void *arg0);
s32 safe_free__23TAdSinglePlyChrSelectGCFUl(void *);
void *alloc__22TQuestVmDownLoadServerFv(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, char *);
void TAdSinglePlyChrSelectGC__sub_801FBC3C(void *arg0);
void copy_name__23TAdSinglePlyChrSelectGCFl(s32);
void set_card_disk_id__23TAdSinglePlyChrSelectGCFl(s32);
s32 load_system_file__23TAdSinglePlyChrSelectGCFiPv(s32, s32 *);
s32 TAdSinglePlyChrSelectGC__sub_80201204(void *, s32);
s32 load_player_slot__23TAdSinglePlyChrSelectGCFii(s32, char *, void *);
char *strncpy(char *, const char *, u32);
void *memcpy(void *, const void *, u32);
extern char lbl_804C8954[];
extern s32 chr_select_serial_seeds[];
extern s32 lbl_805D49B4;
u8 load_and_verify_character_save__23TAdSinglePlyChrSelectGCFPvPv(char *name, char *desc);
s32 probe_and_check_card__15TAdPlayerLoadGCFv(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, char *);
void poll_load_status__15TAdPlayerLoadGCFl(s32, void *);
extern char lbl_804C88C0[];
void TAdSinglePlyChrSelectGC__sub_801FBB1C(void);
s32 probe_and_check_card__15TAdPlayerLoadGCFv(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, char *);
void poll_load_status__15TAdPlayerLoadGCFl(s32, void *);
extern char lbl_804C89BC[];
void TAdSinglePlyChrSelectGC__sub_801FBB7C(void);
s32 probe_and_check_card__15TAdPlayerLoadGCFv(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, char *);
void poll_load_status__15TAdPlayerLoadGCFl(s32, void *);
extern char pso_system_card_filename[];
}

extern "C" {

int test_card_flag__19TWindowKeyBoardHardFll(void*, int);

int TWindowKeyBoardHard::is_card_flag_set() { return test_card_flag__19TWindowKeyBoardHardFll(this, 1); }
void draw_ginja_box_tree(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    u8 *var_r30;
    var_r30 = (u8 *)(arg0);
    do {
        temp_r31 = *(s32 *)((s8 *)var_r30 + 0);
        push_matrix();
        if (!(temp_r31 & 1)) {
            post_translate_matrix((void *) (var_r30 + 8));
        }
        if (!(temp_r31 & 2)) {
            rotate_matrix_by_node_angles((void *) (var_r30 + 0x14), (void *) (temp_r31 & 0x20));
        }
        if (!(temp_r31 & 4)) {
            scale_current_matrix((void *) (var_r30 + 0x20));
        }
        if (!(temp_r31 & 0x100000)) {
            end_effect_render__13TParticleCtrlFv();
        } else {
            begin_effect_render__13TParticleCtrlFv();
        }
        if (!(temp_r31 & 8)) {
            draw_ginja_model((int) (*(s32 *)((s8 *)var_r30 + 4)));
        }
        if (!(temp_r31 & 0x10)) {
            temp_r3 = (u8 *)(*(u8 **)((s8 *)var_r30 + 0x2C));
            if (temp_r3 != NULL) {
                draw_ginja_box_tree(temp_r3);
            }
        }
        pop_matrix();
        var_r30 = (u8 *)(*(u8 **)((s8 *)var_r30 + 0x30));
    } while (var_r30 != NULL);
}

void TAdSinglePlyChrSelectGC__sub_801FBB1C(void) {
    s32 r;
    if (probe_and_check_card__15TAdPlayerLoadGCFv(0) != 0) {
        r = find_card_file__15TAdPlayerLoadGCFiPv(0, lbl_804C88C0);
        if (r == 0 || (u32)r == 0xFFFFFF41U) {
            poll_load_status__15TAdPlayerLoadGCFl(0, lbl_804C88C0);
        }
    }
}

void TAdSinglePlyChrSelectGC__sub_801FBB7C(void) {
    s32 r;
    if (probe_and_check_card__15TAdPlayerLoadGCFv(0) != 0) {
        r = find_card_file__15TAdPlayerLoadGCFiPv(0, lbl_804C89BC);
        if (r == 0 || (u32)r == 0xFFFFFF41U) {
            poll_load_status__15TAdPlayerLoadGCFl(0, lbl_804C89BC);
        }
    }
}

void TAdSinglePlyChrSelectGC::try_load_system_file() {
    s32 r;
    if (probe_and_check_card__15TAdPlayerLoadGCFv(0) != 0) {
        r = find_card_file__15TAdPlayerLoadGCFiPv(0, pso_system_card_filename);
        if (r == 0 || (u32)r == 0xFFFFFF41U) {
            poll_load_status__15TAdPlayerLoadGCFl(0, pso_system_card_filename);
        }
    }
}

void TAdSinglePlyChrSelectGC__sub_801FBC3C(void *arg0) {
    void *a;
    void *b;
    a = alloc__23TAdSinglePlyChrSelectGCFv(0x194B0);
    if (a != 0) {
        a = construct_chardata_array__23TAdSinglePlyChrSelectGCFPv(a);
    }
    b = alloc__23TAdSinglePlyChrSelectGCFv(0x194B0);
    if (b != 0) {
        b = construct_chardata_array__23TAdSinglePlyChrSelectGCFPv(b);
    }
    copy_save_data__23TAdSinglePlyChrSelectGCFPvPv(a, arg0);
    subtractive_rng_seed(chr_select_rng_state, chr_select_serial_seeds[1]);
    subtractive_rng_make_shuffle(chr_select_rng_state);
    subtractive_rng_unshuffle(chr_select_rng_state, a, b, 0x194B0);
    copy_save_data__23TAdSinglePlyChrSelectGCFPvPv(arg0, b);
    destroy_chardata_array__23TAdSinglePlyChrSelectGCFis(b, 1);
    destroy_chardata_array__23TAdSinglePlyChrSelectGCFis(a, 1);
    subtractive_rng_seed(chr_select_rng_state, chr_select_serial_seeds[0]);
    apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(chr_select_rng_state, arg0, 0x194B0);
    subtractive_rng_seed(chr_select_rng_state, TAdSinglePlyChrSelectGC__sub_80202A68(arg0));
    subtractive_rng_xor_buffer(chr_select_rng_state, arg0, 0x194AC);
}

u8 load_and_verify_character_save__23TAdSinglePlyChrSelectGCFPvPv(char *name, char *desc) {
    s32 sum;
    u8 *buf;
    s32 res;
    u8 *data;
    s32 saved;
    buf = (u8 *)alloc__22TQuestVmDownLoadServerFv(0x214B0);
    res = find_card_file__15TAdPlayerLoadGCFiPv(0, lbl_804C8954);
    if (res == 0) {
        lbl_805D49B4 = 1;
        set_card_disk_id__23TAdSinglePlyChrSelectGCFl(0);
        res = load_player_slot__23TAdSinglePlyChrSelectGCFii(0, lbl_804C8954, buf);
        TAdSinglePlyChrSelectGC::wait_for_card_load(0);
        copy_name__23TAdSinglePlyChrSelectGCFl(0);
    }
    if (res != 0) {
        lbl_805D49B4 = 0;
        safe_free__23TAdSinglePlyChrSelectGCFUl(buf);
        return 0;
    }
    if (load_system_file__23TAdSinglePlyChrSelectGCFiPv(0, &sum) == 0) {
        lbl_805D49B4 = 0;
        safe_free__23TAdSinglePlyChrSelectGCFUl(buf);
        return 0;
    }
    lbl_805D49B4 = 0;
    chr_select_serial_seeds[0] = chr_select_serial_seeds[1] = sum;
    data = (u8 *)alloc__22TQuestVmDownLoadServerFv(0x194B0);
    memcpy(data, buf + 0x2048, 0x194B0);
    TAdSinglePlyChrSelectGC__sub_801FBC3C(data);
    saved = *(s32 *)data;
    *(s32 *)data = 0;
    res = TAdSinglePlyChrSelectGC__sub_80201204(data, 0x194B0);
    strncpy(name, (char *)(data + 0x193F0), 0x10);
    strncpy(desc, (char *)(data + 0x19400), 0x10);
    safe_free__23TAdSinglePlyChrSelectGCFUl(data);
    safe_free__23TAdSinglePlyChrSelectGCFUl(buf);
    return saved == res;
}

s32 TAdSinglePlyChrSelectGC::wait_for_card_load(s32 arg0) {
    while (TAdPlayerLoadGC__sub_801E1B50(arg0) != 0) {
        if (probe_card_slot__15TAdPlayerLoadGCFv(arg0) != 1) {
            return 0;
        }
        render_frame__23TAdSinglePlyChrSelectGCFv();
        render_tick__Fv();
    }
    return 1;
}

}
