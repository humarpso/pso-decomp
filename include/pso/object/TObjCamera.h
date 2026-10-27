#ifndef PSO_OBJECT_TOBJCAMERA_H
#define PSO_OBJECT_TOBJCAMERA_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TObjCamera : public TUnk_804AFBF8 {
    virtual ~TObjCamera();
    virtual s32 update_object_view_visibility(f32, f32);
    virtual void run_task();
    u32 m_c8;
    void queue_target_destruction();
    virtual void render();
    static void *create(void *arg0);
    static void release_static_resource();
    static void load_shared_resource();
    static void update_camera_slots();
    u8 unk_CC[0xE0];
};

typedef char TObjCamera_size[sizeof(TObjCamera) == 0x1AC ? 1 : -1];
#endif
