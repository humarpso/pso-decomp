#include "types.h"
#include <string.h>
#include "pso/system/memory.h"
#include "pso/player/TObjPlayer.h"

struct MovieFrameRate {
    f32 rate;
    s32 m_04;
    s32 m_08;
    s32 m_0c;
};

struct MovieState {
    s32 m_00;
    s32 m_04;
    MovieFrameRate frame_rate;
    u8 unk_18[0x84];
    void *buffer;
    u8 unk_a0[0x4];
    char name[0x20];
    s32 m_c4;
    s32 m_c8;
    s32 m_cc;
};

extern "C" void TMovie__sub_80144324(MovieState *movie, const s8 *name);

extern void (*lbl_805D6B28)(MovieFrameRate *);

void TMovie__sub_80144324(MovieState *movie, const s8 *name) {
    TObjPlayer::reset_movie_state();
    memset(&movie->m_04, 0, 0xC8);
    movie->buffer = xmalloc(0x420000);
    movie->m_04 = 0;
    movie->m_c8 = 1;
    movie->m_c4 = 0;
    strcpy(movie->name, (const char *)name);
    movie->frame_rate.rate = 59.94f;
    movie->frame_rate.m_04 = 1;
    movie->frame_rate.m_08 = 2;
    movie->frame_rate.m_0c = 0;
    lbl_805D6B28(&movie->frame_rate);
}
