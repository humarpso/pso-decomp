#ifndef PSO_MISC_TMOVIE_H
#define PSO_MISC_TMOVIE_H

#include "types.h"
#include "pso/TObject.h"

struct TMovie : public TObject {
    virtual ~TMovie();
    u32 m_1c;
    u32 m_20;
    void* m_24;
    u8 _pad28[0x1C];
    u32 m_44;
    u32 m_48;
    static void flush_cache();
    static void flip_frame_buffer();
    static void flush_and_reset();
    static void calc_frame_buffer_size(s32 arg0, s32 arg1);
    s32 stop_if_advanced();
    s32 check_finished();
    bool is_playback_finished();
    void update_stop();
    void release();
    void init_sfd_player(s32 arg1, s32 arg2);
    s32 decode_frame();
    void copy(void* q);
    void free_buffer();
    static void render_until_finished();
    s32 check_skip_input();};

typedef char TMovie_size[sizeof(TMovie) == 0x4C ? 1 : -1];
#endif
