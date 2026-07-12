#include "types.h"

extern "C" {

int TBoss5GryphonDemo__sub_80066128(void* p);
int TBoss5GryphonDemo__sub_8006614C(void* p);
int TBoss5GryphonDemo__sub_8006626C(void*);
int draw_model__17TBoss5GryphonDemoFPvPvPv(void*);

int TBoss5GryphonDemo__sub_80066128(void* p) { return TBoss5GryphonDemo__sub_8006626C(*(void**)((char*)p + 0x1c)); }
int TBoss5GryphonDemo__sub_8006614C(void* p) { return draw_model__17TBoss5GryphonDemoFPvPvPv(*(void**)((char*)p + 0x1c)); }

}
