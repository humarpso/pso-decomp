#include "types.h"
#include "pso/object/TObjSeabedSuisoBrakable.h"

extern s32 linked_switch_walk_index;
extern s32 linked_switch_count;
extern void *TObjSeabedSuisoBrakable__linked_switch_count;
extern s32 model_node_search_walk_index;
extern s32 model_node_search_target_index;
extern void *model_node_search_result;

void TObjSeabedSuisoBrakable::walk_linked_switches() {
    if ((s32) linked_switch_walk_index == (s32) linked_switch_count) {
        TObjSeabedSuisoBrakable__linked_switch_count = this;
    }
    linked_switch_walk_index += 1;
    if ((void *) TObjSeabedSuisoBrakable__linked_switch_count == NULL) {
        if ((u32) this->m_2c != 0U) {
            ((TObjSeabedSuisoBrakable *)(this->m_2c))->walk_linked_switches();
        }
        if ((u32) this->actorFlags != 0U) {
            ((TObjSeabedSuisoBrakable *)(this->actorFlags))->walk_linked_switches();
        }
    }
}
s32 TObjSeabedSuisoBrakable::count_linked_switches(s32 arg1) {
    u32 arg0 = (u32)this;
    if (arg0 == 0U) {
        return 0;
    }
    linked_switch_count = arg1;
    linked_switch_walk_index = 0;
    (*(s32 *)&TObjSeabedSuisoBrakable__linked_switch_count) = 0;
    walk_linked_switches();
    return (*(s32 *)&TObjSeabedSuisoBrakable__linked_switch_count);
}
void TObjSeabedSuisoBrakable::collect_recursive() {
    if ((s32) model_node_search_walk_index == (s32) model_node_search_target_index) {
        model_node_search_result = this;
    }
    model_node_search_walk_index += 1;
    if ((void *) model_node_search_result == NULL) {
        if ((u32) this->m_2c != 0U) {
            ((TObjSeabedSuisoBrakable *)(this->m_2c))->collect_recursive();
        }
        if ((u32) this->actorFlags != 0U) {
            ((TObjSeabedSuisoBrakable *)(this->actorFlags))->collect_recursive();
        }
    }
}
