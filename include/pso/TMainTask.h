#ifndef PSO_TMAINTASK_H
#define PSO_TMAINTASK_H

/* TMainTask - Main game loop task manager.
 * Derived from pso-gc-reference decomp (mrb0nk500).
 * Adapted for GPOE8P (PSO EP I&II Plus, MWCC 2.6).
 *
 * TMainTask is the root of the scene graph. Its children are the
 * Task Layer (TL) objects that handle different rendering/update
 * passes (camera, geometry, particles, UI, etc.).
 */

#include "pso/forward.h"
#include "pso/macros.h"
#include "pso/TObject.h"

#define X_OR_Y_CHILD(flags, old_flags, one_prefix, zero_prefix, suffix) \
    if (flags != old_flags) { \
        TMainTask *child; \
        u32 bit = 1; \
        FOREACH_NODE_NODECL_MULTI_ITER(TMainTask, main_task.m_down, child, bit <<= 1) { \
            if (flags & bit) { \
                child->one_prefix##_##suffix(); \
            } else { \
                child->zero_prefix##_##suffix(); \
            } \
        } \
        old_flags = flags; \
    }

#define SET_OR_CLEAR_CHILD_FLAGS(flags, old_flags, flag_bit) \
    X_OR_Y_CHILD(flags, old_flags, set_flag, clear_flag, flag_bit)

#define DISALLOW_OR_ALLOW_CHILD(flags, old_flags, flag_name) \
    X_OR_Y_CHILD(flags, old_flags, allow, disallow, flag_name)

#define o(var, name) extern const char *var##_name;
TL_OBJECTS
#undef o

#define o(var, name) extern TObject *var;
TL_OBJECTS
#undef o

class TMainTask : public TObject {
public:
    u32 task_flags;
    u32 mbr_0x20;
    u32 mbr_0x24;

public:
    TMainTask();
    void render_screen_overlay();
    void some_empty_func();
    void tl_toggle_flag_3();
    void tl_clear_flag_3();
    void tl_delete_children();
    void tl_02_toggle_flag_3();
    void tl_02_clear_flag_3();
    void empty_render_screen_overlay_func();
    void run_tl_camera_tasks();
    void unused_render_func();
    void render_objects();
    void render_ui();
    void render_particle_effects();
    void render_effects();
    void render_geometry();
    void render_clipout_and_fade();
    void init_main_task();

    virtual ~TMainTask();
    virtual void run_task();
    virtual void render();
    virtual void render_shadows();
};

#endif
