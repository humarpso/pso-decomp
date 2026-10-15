#include "types.h"

extern "C" {

void create__16TAdWarningBaseGCFv(void);
void* init_vtable__16TAdWarningBaseGCFPv(void*, s32);
void* __nw__7TObjectFUl(u32);

extern s32 tl_00;

void create__16TAdWarningBaseGCFv(void) {
    void* obj = __nw__7TObjectFUl(0x20);
    if (obj != 0) {
        init_vtable__16TAdWarningBaseGCFPv(obj, tl_00);
    }
}

}
