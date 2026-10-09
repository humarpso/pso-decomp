#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802A1324_lbl_804DCB64 {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *,void *);
u8 *TMovie__ct(void *,void *,const s8 *,void (*)(s32),s32,s32,s32);
void set_movie_finished_flag(s32);
extern const s8 *opening_movie_path_table[10];
M2C_UNK update_menu_cursor__6TLobbyFv();
u8 *__nw__7TObjectFUl(M2C_UNK);
s32 get_mode_data__19TAdSelectGameModeGCFv();
s32 get_data__23TAdSinglePlyChrSelectGCFv();
extern RecoveredGlobal_802A1324_lbl_804DCB64 lbl_804DCB64;
extern s32 opening_movie_selector;
extern s32 current_language;
extern u8 *tl_00;
extern u8 *tl_01;
extern u8 lbl_805D6639;
u8 *create_opening_movie_sequence(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_802A1324_lbl_804DCB64_size[sizeof(RecoveredGlobal_802A1324_lbl_804DCB64) == 0x1C ? 1 : -1];
u8 *create_opening_movie_sequence(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    __ct__7TObjectFP7TObject(arg0, tl_01);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804DCB64.value;
    update_menu_cursor__6TLobbyFv();
    if ((get_data__23TAdSinglePlyChrSelectGCFv() == 1) && (get_mode_data__19TAdSelectGameModeGCFv() == 1)) {
        set_movie_finished_flag(0);
        return arg0;
    }
    if ((s8) lbl_805D6639 == 0) {
        temp_r3 = (u8 *)(__nw__7TObjectFUl(0x4C));
        if (temp_r3 != NULL) {
            TMovie__ct(temp_r3, tl_00, opening_movie_path_table[current_language + (opening_movie_selector * 5)], set_movie_finished_flag, 1, 1, 0);
        }
        opening_movie_selector = 1 - opening_movie_selector;
    } else {
        temp_r3_2 = (u8 *)(__nw__7TObjectFUl(0x4C));
        if (temp_r3_2 != NULL) {
            TMovie__ct(temp_r3_2, tl_00, opening_movie_path_table[current_language], set_movie_finished_flag, 1, 1, 0);
        }
    }
    return arg0;
}

}
