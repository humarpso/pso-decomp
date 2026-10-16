#ifndef PSO_OBJECT_TOBJDOAEX01_H
#define PSO_OBJECT_TOBJDOAEX01_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TObjDoaEx01 : public TUnk_804B0BB8 {
    virtual ~TObjDoaEx01();
    virtual void vfunc_18();
    virtual void vfunc_17();
    virtual void vfunc_16();
    virtual void play_proximity_sound();
    virtual void render();
    s32 draw_object_tree(s32 arg1);
    static void free_resource();
    static void load_resources();
    u8 unk_D4[0x10];
    void try_open();
    void draw_model();
};

typedef char TObjDoaEx01_size[sizeof(TObjDoaEx01) == 0xE4 ? 1 : -1];
#endif
