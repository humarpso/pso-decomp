#include "types.h"

extern "C" {

void draw_node_tree_if_visible__10TObjPlayerFPv(void* p);
int draw_node_tree__10TObjPlayerFPvPv(void*, void*);

void draw_node_tree_if_visible__10TObjPlayerFPv(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { *(int*)((char*)p + 0x30) = 0; draw_node_tree__10TObjPlayerFPvPv(p, *(void**)((char*)p + 0x1c)); } }

}
