#include "types.h"

extern "C" {

int get_state__17TBoss5GryphonDemoFPv(void* p);
int draw_linked_model__17TBoss5GryphonDemoFPv(void* p);
int TBoss5GryphonDemo__sub_8006626C(void*);
int draw_model__17TBoss5GryphonDemoFPvPvPv(void*);

int get_state__17TBoss5GryphonDemoFPv(void* p) { return TBoss5GryphonDemo__sub_8006626C(*(void**)((char*)p + 0x1c)); }
int draw_linked_model__17TBoss5GryphonDemoFPv(void* p) { return draw_model__17TBoss5GryphonDemoFPvPvPv(*(void**)((char*)p + 0x1c)); }

}
