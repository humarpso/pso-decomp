#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TMovie__sub_80144324(void *,const s8 *);
void init_sfd_player__6TMovieFPvii(void *,s32,s32);
void play_area_music(const s8 *);
extern s8 lbl_8043F30C[];
extern s8 lbl_8043F31C[];
extern s8 lbl_8043F330[];
s32 get_opening_movie_selector();
s8 get_opening_movie_purpose();
u8 *initialize_movie_with_soundtrack(u8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

u8 *initialize_movie_with_soundtrack(u8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0xCC) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    TMovie__sub_80144324(arg0, arg1);
    init_sfd_player__6TMovieFPvii(arg0, arg3, arg4);
    if (arg3 != 0) {
        play_area_music(lbl_8043F30C);
    } else if ((get_opening_movie_purpose() == 0) && (get_opening_movie_selector() == 1)) {
        play_area_music(lbl_8043F31C);
    } else {
        play_area_music(lbl_8043F330);
    }
    return arg0;
}

}
