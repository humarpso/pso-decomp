#include "types.h"

extern "C" {

int draw_node_tree__10TObjPlayerFPvPv(void*, void*);
void fn_8035A740(void* p);

void fn_8035A740(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { *(int*)((char*)p + 0x30) = 0; draw_node_tree__10TObjPlayerFPvPv(p, *(void**)((char*)p + 0x1c)); } }

}
