#include "types.h"
struct O_8002B094 { s32 *arr; s32 val; s32 f8; s32 count; };

extern "C" {
void fill_value_array(O_8002B094 *self);
}

extern "C" {

void fill_value_array(O_8002B094 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        self->arr[i] = self->val;
    }
    self->f8 = 0;
}

}
