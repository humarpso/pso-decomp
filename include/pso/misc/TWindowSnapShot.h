#ifndef PSO_MISC_TWINDOWSNAPSHOT_H
#define PSO_MISC_TWINDOWSNAPSHOT_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowSnapShot : public TUnk_804CE018 {
    virtual ~TWindowSnapShot();
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u8 _pad30[0x2C];
    u32 m_5c;
    u8 m_60;
    static void free_shared_instance();
    s32 get_size();
    s32 get_field_8();
    static int get_height();
    void play_open_sound();
    void run_task();
    void reset();
    u8 *init_and_reset();
    void update_both();
    s32 start_capture(s32 arg1);
    static int get_width();
    static void init_default();
    static void alloc_buffer();
    u8 unk_61[0x3];
};

typedef char TWindowSnapShot_size[sizeof(TWindowSnapShot) == 0x64 ? 1 : -1];
#endif
