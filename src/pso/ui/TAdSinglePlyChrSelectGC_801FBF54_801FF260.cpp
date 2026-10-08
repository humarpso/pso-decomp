#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 load_system_file(s32);
extern s32 lbl_805D5FA8;
void TAdSinglePlyChrSelectGC__sub_801FF2D4(void);
s32 get_instance__15TAdPlayerLoadGCFv();
void run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 load_system_file(s32);
s32 verify_save_checksum__23TAdSinglePlyChrSelectGCFi(s32);
extern s32 lbl_805D5FA8;
u8 load_system_file_blocking__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
void run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 load_selected_character__23TAdSinglePlyChrSelectGCFv();
s32 apply_loaded_character__23TAdSinglePlyChrSelectGCFi(s32);
extern s32 lbl_805D5FA8;
u8 load_character_and_wait__23TAdSinglePlyChrSelectGCFv(void);
s32 get_instance__15TAdPlayerLoadGCFv();
void run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 load_player__23TAdSinglePlyChrSelectGCFv();
s32 load_and_verify_data(s32);
extern s32 lbl_805D5FA8;
u8 load_player_and_wait__23TAdSinglePlyChrSelectGCFv(void);
}

extern "C" {

void *get_instance__23TAdSinglePlyChrSelectGCFv();

void increment_counter__23TAdSinglePlyChrSelectGCFv(void) {
    void *temp_r3;

    temp_r3 = get_instance__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x11564) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x11564) + 1);
    }
}

extern void *lbl_805D5F58;
extern void *lbl_805D5F5C;

void increment_counters__23TAdSinglePlyChrSelectGCFv(void) {
    if ((void *) lbl_805D5F58 != NULL) {
        M2C_FIELD(lbl_805D5F58, s32 *, 0x11564) = (s32) (M2C_FIELD(lbl_805D5F58, s32 *, 0x11564) + 1);
    }
    if ((void *) lbl_805D5F5C != NULL) {
        M2C_FIELD(lbl_805D5F5C, s32 *, 0x11564) = (s32) (M2C_FIELD(lbl_805D5F5C, s32 *, 0x11564) + 1);
    }
}
void TAdSinglePlyChrSelectGC__sub_801FF2D4(void) {
    s32 r = load_system_file(0);
    lbl_805D5FA8 = 0;
    if (r == 0) lbl_805D5FA8 = 1;
}
u8 load_system_file_blocking__23TAdSinglePlyChrSelectGCFv(void) {
    s32 r = load_system_file(1);
    lbl_805D5FA8 = 0;
    if (r == 0) {
        lbl_805D5FA8 = 1;
    } else {
        return 0;
    }
    for (;;) {
        if (get_instance__15TAdPlayerLoadGCFv() == 0) break;
        run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    }
    lbl_805D5FA8 = 0;
    return verify_save_checksum__23TAdSinglePlyChrSelectGCFi(1) == 0;
}
u8 load_character_and_wait__23TAdSinglePlyChrSelectGCFv(void) {
    s32 r = load_selected_character__23TAdSinglePlyChrSelectGCFv();
    lbl_805D5FA8 = 0;
    if (r == 0) {
        lbl_805D5FA8 = 1;
    } else {
        return 0;
    }
    for (;;) {
        if (get_instance__15TAdPlayerLoadGCFv() == 0) break;
        run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    }
    lbl_805D5FA8 = 0;
    return apply_loaded_character__23TAdSinglePlyChrSelectGCFi(1) == 0;
}
u8 load_player_and_wait__23TAdSinglePlyChrSelectGCFv(void) {
    s32 r = load_player__23TAdSinglePlyChrSelectGCFv();
    lbl_805D5FA8 = 0;
    if (r == 0) {
        lbl_805D5FA8 = 1;
    } else {
        return 0;
    }
    for (;;) {
        if (get_instance__15TAdPlayerLoadGCFv() == 0) break;
        run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    }
    lbl_805D5FA8 = 0;
    return load_and_verify_data(1) == 0;
}

}
