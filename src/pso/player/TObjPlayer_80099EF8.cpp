#include "types.h"

struct O_80099F00 { u8 pad[0xb0]; s32 xb0; };

extern "C" {
void fn_80099F00(O_80099F00 *self);
}

extern "C" {

s32 get_field_d8__10TObjPlayerFPv(void* p);

s32 get_field_d8__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0xd8); }
void fn_80099F00(O_80099F00 *self) {
    if (self->xb0 == 0) {
        return;
    }
}

}
