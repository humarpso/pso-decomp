#include "types.h"
#include "pso/enemy/TObjEneRe7Berura.h"

extern s32 chunk_model_node_callback;

void TObjEneRe7Berura::set_global_state(s32 arg0) {
    chunk_model_node_callback = arg0;
}
