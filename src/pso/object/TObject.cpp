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

#include "types.h"
extern "C" {
void allow_rendering_shadows__7TObjectFv(void* p);
void allow_rendering_shadows__7TObjectFv(void* p);
}

extern "C" {

void allow_rendering_shadows__7TObjectFv(void* p) { *(u16*)((char*)p + 0x4) &= 0xfffffeff; }

}
