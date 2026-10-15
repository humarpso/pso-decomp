#include "types.h"
#include "pso/boss/TBoss3Volopt.h"

extern "C" {

void debug_printf_nop(s32 arg0, ...);
s32 collect_recursive__23TObjSeabedSuisoBrakableFv();

extern s32 model_node_search_walk_index;
extern s32 model_node_search_target_index;
extern s32 model_node_search_result;

s32 TBoss3Volopt::collect_and_count(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        return 0;
    }
    model_node_search_target_index = arg1;
    model_node_search_walk_index = 0;
    model_node_search_result = 0;
    collect_recursive__23TObjSeabedSuisoBrakableFv();
    return model_node_search_result;
}

void debug_printf_nop(s32 arg0, ...) {}

}
