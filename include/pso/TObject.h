#ifndef PSO_TOBJECT_H
#define PSO_TOBJECT_H

/* TObject - Base scene graph / task hierarchy node.
 * Derived from pso-gc-reference decomp (mrb0nk500).
 * Adapted for GPOE8P (PSO EP I&II Plus, MWCC 2.6).
 *
 * TObject forms a tree structure where each node has:
 *   m_up   = parent node
 *   m_down = first child node
 *   m_next = next sibling
 *   m_prev = previous sibling (circular for first child)
 */

#include "pso/forward.h"
#include "pso/macros.h"
#include "types.h"

#define o(name) extern const char *name##_name;
OBJECT_NAMES
#undef o

extern TMainTask main_task;
extern TObject global_obj1;
extern TObject global_obj2;

enum object_flags {
    OBJ_NONE                    = 0x0000,
    OBJ_QUEUE_DESTRUCTION       = 0x0001,
    OBJ_CHILD_QUEUE_DESTRUCTION = 0x0002,
    OBJ_BIT_2                   = 0x0004,
    OBJ_BIT_3                   = 0x0008,
    OBJ_DISALLOW_UPDATE         = 0x000F,
    OBJ_DISALLOW_RENDER         = 0x0010,
    OBJ_DISALLOW_DESTRUCTION    = 0x0020,
    OBJ_DISALLOW_RENDER_SHADOWS = 0x0100,
    OBJ_BIT_9                   = 0x0200,
    OBJ_BIT_10                  = 0x0400,
    OBJ_BIT_11                  = 0x0800,
    OBJ_BIT_12                  = 0x1000,
    OBJ_BIT_13                  = 0x2000,
    OBJ_BIT_14                  = 0x4000,
    OBJ_BIT_15                  = 0x8000,
    OBJ_ALL_BITS                = 0xFFFF
};

class TObject {
public:
    const char *m_name;
    u16 m_flags;
    u16 m_id;
    TObject *m_prev;
    TObject *m_next;
    TObject *m_up;
    TObject *m_down;

public:
    void allow_rendering_shadows()    { m_flags &= ~OBJ_DISALLOW_RENDER_SHADOWS; }
    void disallow_rendering_shadows() { m_flags |= OBJ_DISALLOW_RENDER_SHADOWS; }
    void clear_flag_9()               { m_flags &= ~OBJ_BIT_9; }
    void set_flag_9()                 { m_flags |= OBJ_BIT_9; }
    u32  get_flag_9()                 { return m_flags & OBJ_BIT_9; }
    void allow_rendering()            { m_flags &= ~OBJ_DISALLOW_RENDER; }
    void disallow_rendering()         { m_flags |= OBJ_DISALLOW_RENDER; }
    void clear_flag_3()               { m_flags &= ~OBJ_BIT_3; }
    void set_flag_3()                 { m_flags |= OBJ_BIT_3; }
    void toggle_flag_3()              { m_flags ^= OBJ_BIT_3; }
    void queue_destruction()          { m_flags |= OBJ_QUEUE_DESTRUCTION; }

    TObject(TObject *parent = NULL);
    virtual ~TObject();

    void *operator new(size_t size);
    void  operator delete(void *ptr);

    void delete_children();
    void queue_destruction_for_each_node();
    void run_tasks();
    void render_nodes();
    void render_shadows_for_each_node();
    void render_nodes2();
    void empty_func();
    void set_parent(TObject *parent);

    virtual void run_task();
    virtual void render();
    virtual void render_shadows();

    void empty_func2();
    void log(const char *str);
    int  get_node_count();
    int  all_parents_unqueued_for_destruction();
    bool toggle_flag_9_if_flag_10_is_clear();
};

#endif
