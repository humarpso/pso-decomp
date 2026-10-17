#include "types.h"
struct Obj_803D4418 { u8 pad[0x40]; s32 vals[1]; };

extern "C" {
s32 gcrna_get_stream_id(Obj_803D4418 *self, s32 i);
s32 gcrna_get_stream_id(Obj_803D4418 *self, s32 i) {
    return self->vals[i];
}

}
