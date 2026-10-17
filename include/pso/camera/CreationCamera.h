#ifndef PSO_CREATION_CAMERA_H
#define PSO_CREATION_CAMERA_H
#include "types.h"
#include "pso/TObject.h"

class CameraObjectBase : public TObject {
public:
    virtual ~CameraObjectBase();
    virtual void run_task();
    u8 unknown1C[0x30];
    f32 height;
    u8 unknown50[0x1C];
};

class CreationCamera : public CameraObjectBase {
public:
    virtual ~CreationCamera();
    virtual void run_task();
    void update_auto();
    void begin_review();
    void advance_review();
    void update_idle();
    void advance_manual();

    f32 distance;
    s32 pitch, yaw;
    u32 focus, delay;
    f32 startDistance;
    s32 ticks;
    f32 unknown88, unknown8C;
};

typedef CreationCamera CreationCameraFields;
#include <stddef.h>
typedef char CameraObjectBase_size[sizeof(CameraObjectBase)==0x6C?1:-1];
typedef char CreationCamera_size[sizeof(CreationCamera)==0x90?1:-1];
typedef char CreationCamera_height[offsetof(CreationCamera,height)==0x4C?1:-1];
typedef char CreationCamera_distance[offsetof(CreationCamera,distance)==0x6C?1:-1];
typedef char CreationCamera_pitch[offsetof(CreationCamera,pitch)==0x70?1:-1];
typedef char CreationCamera_yaw[offsetof(CreationCamera,yaw)==0x74?1:-1];
typedef char CreationCamera_focus[offsetof(CreationCamera,focus)==0x78?1:-1];
typedef char CreationCamera_delay[offsetof(CreationCamera,delay)==0x7C?1:-1];
typedef char CreationCamera_startDistance[offsetof(CreationCamera,startDistance)==0x80?1:-1];
typedef char CreationCamera_ticks[offsetof(CreationCamera,ticks)==0x84?1:-1];
typedef char CreationCamera_unknown88[offsetof(CreationCamera,unknown88)==0x88?1:-1];
typedef char CreationCamera_unknown8C[offsetof(CreationCamera,unknown8C)==0x8C?1:-1];

extern "C" {
void *TCameraCtrl__sub_80291C64(void *arg0, s16 arg1);
void *TCameraCtrl__vt8(void);
s32 *TLobby__sub_80291D4C(void);
void *construct_creation_camera(void *a0);
u32 get_character_creation_selected_entry_id(void);
}

#endif
