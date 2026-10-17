#ifndef PSO_OBJECT_TOBJMAPWARP_H
#define PSO_OBJECT_TOBJMAPWARP_H
#include "types.h"
#include "pso/object/TObjWarpBase.h"
struct TObjMapWarp : public TObjWarpBase {
    virtual ~TObjMapWarp();
    void vfunc_14();
    virtual void slot4C();
    virtual void closePlayerWindow(u16);
    u8 unk_AC[0x10];
    f32 destinations[4][3];
    void* playerPopups[4];
    void draw_debug_destinations();
    static u8 can_warp(s32 arg0, u16 arg1);
    void open_player_warp_window(s32 arg1);
};
#endif
