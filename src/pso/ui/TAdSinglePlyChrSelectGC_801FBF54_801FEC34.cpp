#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FF200_lbl_80513910 {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef s32 M2C_UNK;
struct VBase_801FEE14 { u8 pad[0x18]; };

struct Win_801FEE14 : VBase_801FEE14 {
    virtual ~Win_801FEE14();
    virtual void v1();
};

struct V2_801FEE14 { f32 x, y; };

extern "C" {
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FDA4C();
M2C_UNK encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
M2C_UNK save_character_file__23TAdSinglePlyChrSelectGCFi(int);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
extern RecoveredGlobal_801FF200_lbl_80513910 lbl_80513910;
extern u32 lbl_805D5F58;
extern s32 lbl_805D5F78;
s32 encrypt_save_and_write__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
void wait_ready_loop__6TLobbyFv(void);
s32 get_localized_text_entry(s32, s32);
s8 func_801A5E54__Fv(void);
void controller_stuff__Fv(void);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 get_load_result__15TAdPlayerLoadGCFv(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
void render_tick__Fv(void);
s32 load_save_from_card__23TAdSinglePlyChrSelectGCFv(void);
void render_frame__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FDA4C();
void increment_counter__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
M2C_UNK save_character_file__23TAdSinglePlyChrSelectGCFi(int);
void run_save_load_sequence__23TAdSinglePlyChrSelectGCFv(void);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
void reparent_to_main_ctrl__17TWindowSubComCardFi(Win_801FEE14 *);
void complete_reveal__14TWindowMessageFPv(Win_801FEE14 *);
void send_and_handle__6TLobbyFPvii(Win_801FEE14 *, s32, s32);
void TLobby__sub_80269C90(void);
void TLobby__sub_80269CA4(s32);
Win_801FEE14 *create_message_window__6TLobbyFiiUis(V2_801FEE14 *, V2_801FEE14 *, s32, s32);
void TAdSinglePlyChrSelectGC__sub_8033B9EC(void);
s32 TAdSinglePlyChrSelectGC__sub_8033B9F8(Win_801FEE14 *);
Win_801FEE14 *create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(void *, s32, s32);
void func_803DCDFC__Fv(void);
extern V2_801FEE14 lbl_8044A7D0[];
extern V2_801FEE14 lbl_8044A7D8[];
extern V2_801FEE14 lbl_804C8A44[];
extern u8 lbl_8050E208[];
extern RecoveredGlobal_801FF200_lbl_80513910 lbl_80513910;
extern u32 lbl_805D5F58;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;
extern s8 lbl_805D5FB4;
extern f32 lbl_805D5FB8;
extern s8 lbl_805D5FBC;
extern void *tl_01;
extern const f32 lbl_805DC5C0;
extern const f32 lbl_805DC5C4;
extern const f32 lbl_805DC5C8;
s32 save_character_to_card__23TAdSinglePlyChrSelectGCFv(void);
}

extern "C" {

s32 load_selected_char__23TAdSinglePlyChrSelectGCFv(void);
s32 load_selected_character__23TAdSinglePlyChrSelectGCFv(void);
s32 start_load__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 TAdPlayerLoadGC__sub_801E1B50(void*);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FDA4C();
s32 load_chr_select_slot__23TAdSinglePlyChrSelectGCFv();
M2C_UNK clear_load_buffers__23TAdSinglePlyChrSelectGCFv();
M2C_UNK prepare_save_data__23TAdSinglePlyChrSelectGCFv();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);

extern M2C_UNK lbl_80513904[];
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 load_selected_char__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0x10) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((void*)lbl_805D5F7C);
        if (var_r31 == 0) {
            var_r31 = load_chr_select_slot__23TAdSinglePlyChrSelectGCFv();
            if (var_r31 == 0) {
                lbl_805D5F78 = 8;
                getDateStamp__FP9DateStamp(lbl_80513904);
            }
        }
    }
    return var_r31;
}

extern M2C_UNK lbl_80513904[];
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 load_selected_character__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50((void*)lbl_805D5F7C);
        if (var_r31 == 0) {
            var_r31 = load_chr_select_slot__23TAdSinglePlyChrSelectGCFv();
            if (var_r31 == 0) {
                lbl_805D5F78 = 8;
                getDateStamp__FP9DateStamp(lbl_80513904);
            }
        }
    }
    return var_r31;
}

M2C_UNK init_buffer();
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
extern s32 lbl_805D5F78;
extern s32 lbl_805D5F7C;

s32 start_load__23TAdSinglePlyChrSelectGCFv(void) {
    lbl_805D5F7C = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U) && (get_instance__15TAdPlayerLoadGCFv() == 0) && ((s32) lbl_805D5F7C >= 0) && ((s32) lbl_805D5F7C <= 7)) {
        clear_load_buffers__23TAdSinglePlyChrSelectGCFv();
        init_buffer();
        prepare_save_data__23TAdSinglePlyChrSelectGCFv();
        TAdSinglePlyChrSelectGC__sub_801FDA4C();
        lbl_805D5F78 = 6;
        return 7;
    }
    return 0xFFFF0000;
}
typedef char RecoveredGlobal_801FF200_lbl_80513910_size[sizeof(RecoveredGlobal_801FF200_lbl_80513910) == 0x10 ? 1 : -1];

s32 save_character_to_card__23TAdSinglePlyChrSelectGCFv(void) {
    Win_801FEE14 *w;
    s32 result;
    s32 v;
    w = create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(tl_01, 0, 1);
    if (w == NULL) {
        return 0;
    }
    if (w != NULL) {
        TAdSinglePlyChrSelectGC__sub_8033B9EC();
        while (1) {
            func_803DCDFC__Fv();
            w->v1();
            if (TAdSinglePlyChrSelectGC__sub_8033B9F8(w) != 0) {
                break;
            }
            controller_stuff__Fv();
            wait_ready_loop__6TLobbyFv();
            render_frame__23TAdSinglePlyChrSelectGCFv();
            if (func_801A5E54__Fv() != 0 || TWindowShortListCtrl__check_controller_button(&lbl_8050E208[0x20], 8) != 0) {
                if (w != NULL) {
            delete w;
        }
                return 0;
            }
            render_tick__Fv();
        }
        if (w != NULL) {
            delete w;
        }
    }
    if (lbl_805D5FB4 == 0) {
        lbl_805D5FB4 = 1;
        lbl_804C8A44[0].x = lbl_805DC5C0 + lbl_8044A7D0[0].x;
        lbl_804C8A44[0].y = lbl_805DC5C4 + (lbl_8044A7D0[0].y + lbl_8044A7D8[0].y);
    }
    if (lbl_805D5FBC == 0) {
        lbl_805D5FBC = 1;
        lbl_805D5FB8 = lbl_8044A7D8[0].x - lbl_805DC5C8;
    }
    if (load_save_from_card__23TAdSinglePlyChrSelectGCFv() == 0) {
        w = create_message_window__6TLobbyFiiUis(lbl_8044A7D0, lbl_8044A7D8, 1, 4);
        if (w != NULL) {
            send_and_handle__6TLobbyFPvii(w, get_localized_text_entry(0x20, 4), 3);
            reparent_to_main_ctrl__17TWindowSubComCardFi(w);
        }
        complete_reveal__14TWindowMessageFPv(w);
        while (1) {
            func_803DCDFC__Fv();
            controller_stuff__Fv();
            wait_ready_loop__6TLobbyFv();
            render_frame__23TAdSinglePlyChrSelectGCFv();
            if (func_801A5E54__Fv() != 0) {
                break;
            }
            render_tick__Fv();
        }
        if (w != NULL) {
            delete w;
        }
        return 0;
    }
    increment_counter__23TAdSinglePlyChrSelectGCFv();
    v = get_field_118__22TAdEnterSerialAccessGCFv();
    M2C_FIELD(&lbl_80513910.value, s32 *, 4) = v;
    M2C_FIELD(&lbl_80513910.value, s32 *, 0) = v;
    encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv((void *)lbl_805D5F58, &lbl_80513910.value);
    save_character_file__23TAdSinglePlyChrSelectGCFi(1);
    TAdSinglePlyChrSelectGC__sub_801FDA4C();
    lbl_805D5F78 = 6;
    while (1) {
        func_803DCDFC__Fv();
        controller_stuff__Fv();
        run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
        render_frame__23TAdSinglePlyChrSelectGCFv();
        if (probe_card_slot__15TAdPlayerLoadGCFi(lbl_805D5F7C) != 1) {
            result = 0;
            break;
        }
        if (get_instance__15TAdPlayerLoadGCFv() == 0) {
            result = 1;
            if (get_load_result__15TAdPlayerLoadGCFv(0) == 0xFFFFFF81 || get_load_result__15TAdPlayerLoadGCFv(0) == 0xFFFFFF83) {
                result = 0;
            }
            break;
        }
        render_tick__Fv();
    }
    TLobby__sub_80269CA4(0x23);
    w = create_message_window__6TLobbyFiiUis(lbl_8044A7D0, lbl_8044A7D8, 1, 4);
    TLobby__sub_80269C90();
    if (w != NULL) {
        if (get_load_result__15TAdPlayerLoadGCFv(0) == 0xFFFFFF81 || get_load_result__15TAdPlayerLoadGCFv(0) == 0xFFFFFF83) {
            send_and_handle__6TLobbyFPvii(w, get_localized_text_entry(0x1C, 1), 3);
        } else {
            send_and_handle__6TLobbyFPvii(w, get_localized_text_entry(0x20, 5), 3);
        }
        reparent_to_main_ctrl__17TWindowSubComCardFi(w);
    }
    complete_reveal__14TWindowMessageFPv(w);
    if (result == 0) {
        while (1) {
            func_803DCDFC__Fv();
            controller_stuff__Fv();
            wait_ready_loop__6TLobbyFv();
            render_frame__23TAdSinglePlyChrSelectGCFv();
            if (func_801A5E54__Fv() != 0 || TWindowShortListCtrl__check_controller_button(&lbl_8050E208[0x20], 0x60E) != 0) {
                break;
            }
            render_tick__Fv();
        }
    }
    if (w != NULL) {
            delete w;
        }
    return result;
}

s32 encrypt_save_and_write__23TAdSinglePlyChrSelectGCFv(void) {
    s32 temp_r3;
    temp_r3 = get_field_118__22TAdEnterSerialAccessGCFv();
    M2C_FIELD(&lbl_80513910.value, s32 *, 4) = temp_r3;
    M2C_FIELD(&lbl_80513910.value, s32 *, 0) = temp_r3;
    encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv((void *) ((*(s32 *)&lbl_805D5F58)), (void *) (&lbl_80513910.value));
    save_character_file__23TAdSinglePlyChrSelectGCFi((int) (1));
    if (((s32)TAdSinglePlyChrSelectGC__sub_801FDA4C()) != 0) {
        return 0;
    }
    lbl_805D5F78 = 6;
    return 1;
}

}
