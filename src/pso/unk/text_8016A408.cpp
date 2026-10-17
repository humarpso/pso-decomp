#include "types.h"
#include "pso/misc/TOKey.h"
struct Obj_8016A408 { u8 pad[0xD0]; s32 state; s32 sub; u8 pad2[0xC]; s32 flag; };

extern "C" {
void submit_cursor_candidate(void *, s32);
void TOKey::submit_cursor_target() {
    Obj_8016A408 *self = (Obj_8016A408 *)this;
    switch (self->state) {
    case 0:
        switch (self->sub) {
        case 0:
            if (self->flag == 1) {
                submit_cursor_candidate(self, -1);
            }
            break;
        }
        break;
    case 1:
        if (self->flag == 1) {
            submit_cursor_candidate(self, -1);
        }
        break;
    }
}

}
