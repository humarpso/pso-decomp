#include "types.h"

extern "C" {
void walk_linked_switches__23TObjSeabedSuisoBrakableFPv(void *arg0);
extern s32 linked_switch_walk_index;
extern s32 linked_switch_count;
extern void *TObjSeabedSuisoBrakable__linked_switch_count;
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(u32 arg0, s32 arg1);
extern s32 model_node_search_walk_index;
extern s32 model_node_search_target_index;
extern void *model_node_search_result;
void collect_recursive__23TObjSeabedSuisoBrakableFPv(void *arg0);
}

extern "C" {

extern s32 linked_switch_walk_index;
extern s32 linked_switch_count;
extern void *TObjSeabedSuisoBrakable__linked_switch_count;

void walk_linked_switches__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    if ((s32) linked_switch_walk_index == (s32) linked_switch_count) {
        TObjSeabedSuisoBrakable__linked_switch_count = arg0;
    }
    linked_switch_walk_index += 1;
    if ((void *) TObjSeabedSuisoBrakable__linked_switch_count == NULL) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
            walk_linked_switches__23TObjSeabedSuisoBrakableFPv((void *)(*(void **)((s8 *)arg0 + 0x2C)));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
            walk_linked_switches__23TObjSeabedSuisoBrakableFPv((void *)(*(void **)((s8 *)arg0 + 0x30)));
        }
    }
}
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        return 0;
    }
    linked_switch_count = arg1;
    linked_switch_walk_index = 0;
    (*(s32 *)&TObjSeabedSuisoBrakable__linked_switch_count) = 0;
    walk_linked_switches__23TObjSeabedSuisoBrakableFPv((void *)(arg0));
    return (*(s32 *)&TObjSeabedSuisoBrakable__linked_switch_count);
}
void collect_recursive__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    if ((s32) model_node_search_walk_index == (s32) model_node_search_target_index) {
        model_node_search_result = arg0;
    }
    model_node_search_walk_index += 1;
    if ((void *) model_node_search_result == NULL) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
            collect_recursive__23TObjSeabedSuisoBrakableFPv((void *)(*(void **)((s8 *)arg0 + 0x2C)));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
            collect_recursive__23TObjSeabedSuisoBrakableFPv((void *)(*(void **)((s8 *)arg0 + 0x30)));
        }
    }
}

}
