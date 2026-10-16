#ifndef PSO_MISC_TOTRAPANCIENT01_H
#define PSO_MISC_TOTRAPANCIENT01_H

#include "types.h"
#include "pso/misc/TOTrap.h"

struct TOTrapAncient01 : public TOTrap {
    virtual ~TOTrapAncient01();
    virtual void vfunc_6(s16 *, s32);
    virtual f32 vfunc_22(void *, f32);
    virtual void render();
    u32 m_344;
    u32 m_348;
    u8 _pad34C[0xC];
    void* m_358;
    void release_trapped_player();
    void *create();
    static void release_static_resource();
    static void load_resources();
    static s32 check_trigger_flag(s32 arg0, s32 arg1);
    u8 unk_35C[0x6C];
};

typedef char TOTrapAncient01_size[sizeof(TOTrapAncient01) == 0x3C8 ? 1 : -1];
#endif
