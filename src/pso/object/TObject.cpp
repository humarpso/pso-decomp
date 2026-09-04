#ifndef PSO_CLASS_PACKAGE
// Adapted from pso-gc-reference (mrb0nk500) for GPOE8P (MWCC 2.6)

#define TOBJECT_CPP

#include "pso/THeap.h"
#include "pso/TMainTask.h"
#include "pso/TObject.h"

TMainTask main_task;
TObject global_obj1;
TObject global_obj2;

#define o(name) OBJECT_NAME(name)
OBJECT_NAMES
#undef o

#define o(var, name) const char *var##_name = #name;
TL_OBJECTS
#undef o

void debug_print(const char *fmt) {

}

bool TObject::toggle_flag_9_if_flag_10_is_clear() {
    if (m_flags & BIT_10) {
        return false;
    }
    if (!get_flag_9()) {
        set_flag_9();
        return true;
    } else {
        clear_flag_9();
        return false;
    }
}

void TObject::operator delete(void *ptr) {
    obj_heap->heap_free(ptr);
}

void *TObject::operator new(size_t size) {
    return obj_heap->heap_alloc(size);
}

int TObject::all_parents_unqueued_for_destruction() {
    for (TObject *parent = this; parent != NULL; parent = parent->m_up) {
        if (parent->m_flags & QUEUE_DESTRUCTION) {
            return false;
        }
    }
    return true;
}

int TObject::get_node_count() {
    TObject *child;
    int node_count = 0;
    FOREACH_NODE_NODECL(TObject, this->m_down, child) {
        node_count += child->get_node_count() + 1;
    }
    return node_count;
}

void TObject::log(const char *str) {
    debug_print(str);
}

void TObject::empty_func2() {

}

void TObject::render_shadows() {

}

void TObject::render() {

}

void TObject::run_task() {

}

void TObject::set_parent(TObject *parent) {
    remove_parent();
    add_parent(parent, true);
}

void TObject::empty_func() {

}

void TObject::render_nodes2() {
    FOREACH_NODE(TObject, this->m_down, child) {
        if (child->m_flags & BIT_9) {
            child->render();
            child->clear_flag_9();
        }
        child->render_nodes2();
    }
}

void TObject::render_shadows_for_each_node() {
    FOREACH_NODE(TObject, this->m_down, child) {
        if (!(child->m_flags & DISALLOW_RENDER_SHADOWS)) {
            child->render_shadows();
            child->render_shadows_for_each_node();
        }
    }
}

void TObject::render_nodes() {
    FOREACH_NODE(TObject, this->m_down, child) {
        if (!(child->m_flags & DISALLOW_RENDER)) {
            child->render();
            child->render_nodes();
        }
    }
}

void TObject::run_tasks() {
    TObject *child = this->m_down;
    while (this->m_down != NULL && child != NULL) {
        TObject *node = child;
        child = child->m_next;
        if (node->m_flags & DISALLOW_UPDATE) {
            if (node->m_flags & QUEUE_DESTRUCTION && (node->m_flags &= ~QUEUE_DESTRUCTION, !(node->m_flags & DISALLOW_DESTRUCTION))) {
                delete node;
            } else {
                if (node->m_flags & CHILD_QUEUE_DESTRUCTION) {
                    node->delete_children();
                    node->run_task();
                    node->m_flags &= ~CHILD_QUEUE_DESTRUCTION;
                }

                if (node->m_flags & BIT_2) {
                    continue;
                }

                if (node->m_flags & BIT_3) {
                    continue;
                }
            }
        } else {
            node->run_task();
            node->run_tasks();
        }
    }
}

void TObject::queue_destruction_for_each_node() {
    FOREACH_NODE(TObject, this->m_down, child) {
        child->queue_destruction();
        child->queue_destruction_for_each_node();
    }
}

void TObject::delete_children() {
    _delete_children();
}

TObject::~TObject() {
    if (!(m_flags & DISALLOW_DESTRUCTION)) {
        m_flags |= DISALLOW_DESTRUCTION;
        _delete_children();
        remove_parent();
    }
}

TObject::TObject(TObject *parent) {
    m_flags = NONE;
    m_up = parent;
    m_down = NULL;
    m_name = TObject_name;
    add_parent(parent, false);
}

#undef TOBJECT_CPP
#else
#if PSO_CLASS_PACKAGE == 0x80019A50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void queue_destruction__7TObjectFv(void *arg0);

void queue_destruction__7TObjectFv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) | 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80019A60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObject__sub_80019A60(void);

extern s32 lbl_805D4A38;

s32 TObject__sub_80019A60(void) {
    return lbl_805D4A38;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001A448
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void allow_rendering__7TObjectFv(void *arg0);
void disallow_rendering__7TObjectFv(void *arg0);

void allow_rendering__7TObjectFv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) & 0xFFFFFFEF);
}

void disallow_rendering__7TObjectFv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) | 0x10);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003F3DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_3__7TObjectFv(void *arg0);

void set_flag_3__7TObjectFv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) | 8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F794C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag_3__7TObjectFv(void *arg0);

void clear_flag_3__7TObjectFv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) & 0xFFFFFFF7);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801158E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void disallow_rendering_shadows__7TObjectFv(void *arg0);

void disallow_rendering_shadows__7TObjectFv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) | 0x100);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022A5C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void __dl__7TObjectFPv(s32 arg0);
void __nw__7TObjectFUl(s32 arg0);
M2C_UNK heap_alloc__5THeapFUl(s32, s32);
M2C_UNK heap_free__5THeapFPv(s32, s32);

extern s32 obj_heap;

void __dl__7TObjectFPv(s32 arg0) {
    heap_free__5THeapFPv(obj_heap, arg0);
}

extern s32 obj_heap;

void __nw__7TObjectFUl(s32 arg0) {
    heap_alloc__5THeapFUl(obj_heap, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022ACA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_flag_9__7TObjectFv(void *arg0);

s32 get_flag_9__7TObjectFv(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 4) & 0x200;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EEE9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_and_delete__7TObjectFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804E4788[];

void *destroy_and_delete__7TObjectFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E4788;
        if (M2C_FIELD(arg0, void **, 0x11C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x11C)); M2C_FIELD(arg0, M2C_UNK *, 0x11C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803503D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *delete_instance__7TObjectFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

extern M2C_UNK lbl_804F0D1C[];
extern void *lbl_805D6EA8;

void *delete_instance__7TObjectFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0D1C;
        if (lbl_805D6EA8 == arg0) {
            lbl_805D6EA8 = NULL;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
