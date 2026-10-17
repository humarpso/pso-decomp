#include "types.h"
extern "C" {
s32 init_ginja_texture_header(void *p);
void alloc_buffer_from_heap(void *p);
void fn_803DA12C(void *p);
#pragma push
#pragma scheduling off
#pragma peephole off
void fn_803DA12C(void *p) {
    switch (init_ginja_texture_header(p)) {
    case 0:
        alloc_buffer_from_heap(p);
        break;
    }
}
#pragma pop

}
