#ifndef PSO_OBJECT_TOBJMAPWARP_H
#define PSO_OBJECT_TOBJMAPWARP_H
#include "types.h"
struct TObjMapWarpPrefix {u32 type;u8 base04[0x14];};
struct TObjMapWarp : TObjMapWarpPrefix {
    virtual void slot08();
    virtual void run_task();
    virtual void render();
    virtual void render_shadows();
    virtual void vfunc_6();
    virtual void vfunc_7();
    virtual void reset_motion_fields();
    virtual void vfunc_9();
    virtual void update_object_view_visibility();
    virtual void vfunc_11();
    virtual void vfunc_12();
    virtual void vfunc_13();
    virtual void vfunc_14();
    virtual void slot3C();
    virtual void vfunc_16();
    virtual void vfunc_17();
    virtual void vfunc_18();
    virtual void slot4C();
    virtual void closePlayerWindow(u16);
    u8 base1C[0x44];
    s32 sourceYaw;
    u8 base64[4];
    f32 destination[3];
    u8 parameters74[0x10];
    s32 destinationFacing;
    u8 base88[0x34];
    f32 destinations[4][3];
    void* playerPopups[4];
    void draw_debug_destinations();
    static u8 can_warp(s32 arg0, u16 arg1);
    void open_player_warp_window(s32 arg1);
};
#endif
