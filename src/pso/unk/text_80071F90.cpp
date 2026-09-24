#include "types.h"
struct Elem_80071F90 { s32 v; };

struct Obj_80071F90 { s32 f0; Elem_80071F90 a[4]; Elem_80071F90 b[4]; };

extern "C" {
void *__construct_array(void *, void *, void *, u32, u32);
void init_gc_tag(void);
void free_if_valid__14TPlyDispConfigFis(void);
Obj_80071F90 *fn_80071F90(Obj_80071F90 *self);
}

extern "C" {

Obj_80071F90 *fn_80071F90(Obj_80071F90 *self) {
    __construct_array(self->a, (void *)init_gc_tag, (void *)free_if_valid__14TPlyDispConfigFis, 4, 4);
    __construct_array(self->b, (void *)init_gc_tag, (void *)free_if_valid__14TPlyDispConfigFis, 4, 4);
    self->f0 = 0;
    return self;
}

}
