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
    NONE                    = 0x0000,
    QUEUE_DESTRUCTION       = 0x0001,
    CHILD_QUEUE_DESTRUCTION = 0x0002,
    BIT_2                   = 0x0004,
    BIT_3                   = 0x0008,
    DISALLOW_UPDATE         = 0x000F,
    DISALLOW_RENDER         = 0x0010,
    DISALLOW_DESTRUCTION    = 0x0020,
    DISALLOW_RENDER_SHADOWS = 0x0100,
    BIT_9                   = 0x0200,
    BIT_10                  = 0x0400,
    BIT_11                  = 0x0800,
    BIT_12                  = 0x1000,
    BIT_13                  = 0x2000,
    BIT_14                  = 0x4000,
    BIT_15                  = 0x8000,
    ALL_BITS                = 0xFFFF
};

class TObject {
#ifdef TOBJECT_CPP
    #define _delete_children() { \
        while (m_down != NULL) { \
            delete m_down; \
        } \
    }
    #define add_parent(parent, set_parent) { \
        if (set_parent) { \
            m_up = parent; \
        } \
        if (parent == NULL) { \
            m_prev = this; \
            m_next = NULL; \
        } else { \
            TObject *child = parent->m_down; \
            if (child != NULL) { \
                m_prev = child->m_prev; \
                m_next = NULL; \
                child->m_prev->m_next = this; \
                child->m_prev = this; \
            } else { \
                m_prev = this; \
                parent->m_down = this; \
                m_next = NULL; \
            } \
        } \
    }
    #define remove_parent() { \
        if (m_up != NULL) { \
            if (m_prev == this) { \
                m_up->m_down = NULL; \
            } else if (m_up->m_down == this) { \
                m_up->m_down = m_next; \
                m_prev->m_next = NULL; \
                if (m_next != NULL) { \
                    m_next->m_prev = m_prev; \
                } \
            } else { \
                m_prev->m_next = m_next; \
                if (m_next != NULL) { \
                    m_next->m_prev = m_prev; \
                } else { \
                    m_up->m_down->m_prev = m_prev; \
                } \
            } \
        } \
    }
#endif
public:
    const char *m_name;
    u16 m_flags;
    u16 m_id;
    TObject *m_prev;
    TObject *m_next;
    TObject *m_up;
    TObject *m_down;

public:
#ifdef TOBJECT_OUT_OF_LINE_HELPERS
    void allow_rendering_shadows();
    void disallow_rendering_shadows();
    void clear_flag_9();
    void set_flag_9();
    u32 get_flag_9();
    void allow_rendering();
    void disallow_rendering();
    void clear_flag_3();
    void set_flag_3();
    void toggle_flag_3()              { m_flags ^= BIT_3; }
    void queue_destruction();
#else
    void allow_rendering_shadows()    { m_flags &= ~DISALLOW_RENDER_SHADOWS; }
    void disallow_rendering_shadows() { m_flags |= DISALLOW_RENDER_SHADOWS; }
    void clear_flag_9()               { m_flags &= ~BIT_9; }
    void set_flag_9()                 { m_flags |= BIT_9; }
    u32  get_flag_9()                 { return m_flags & BIT_9; }
    void allow_rendering()            { m_flags &= ~DISALLOW_RENDER; }
    void disallow_rendering()         { m_flags |= DISALLOW_RENDER; }
    void clear_flag_3()               { m_flags &= ~BIT_3; }
    void set_flag_3()                 { m_flags |= BIT_3; }
    void toggle_flag_3()              { m_flags ^= BIT_3; }
    void queue_destruction()          { m_flags |= QUEUE_DESTRUCTION; }

#endif

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
