#include "types.h"
#include "pso/TItemLoad.h"

extern "C" {
s32 prs_decompress_buffer(s32, s32);
extern int item_load_compressed_work_buffer;
}

extern "C" {

struct VOff_8010FD2C_arg0_8010fd2c { char pad_0[0x1C]; char f_1C[1]; };

void init_buffer__9TItemLoadFPviii(void *);
void clear_id__10TObjPlayerFv(void *);
int mem_free(void*);
void init_forward__10TObjPlayerFv(void *);

extern s32 lbl_8049F42C[];

void *TItemLoad::init() {
    struct VOff_8010FD2C_arg0_8010fd2c *self = (struct VOff_8010FD2C_arg0_8010fd2c *)this;
    init_buffer__9TItemLoadFPviii(this);
    *(s32 **)((s8 *)this + 0x14) = lbl_8049F42C;
    init_forward__10TObjPlayerFv(self->f_1C);
    *(u32 *)((s8 *)this + 0x18) = 0;
    clear_id__10TObjPlayerFv(self->f_1C);
    return this;
}

    extern int item_load_compressed_work_buffer;

s32 TItemLoad::decompress_buffer(u32 arg0) {
    if (((u32) (*(u32 *)&item_load_compressed_work_buffer) != 0U) && (arg0 != 0U)) {
        return prs_decompress_buffer((s32) (*(u32 *)&item_load_compressed_work_buffer), (s32) arg0);
    }
    return 0;
}

void TItemLoad::free_boss4_rock() { mem_free((void*)(item_load_compressed_work_buffer)); item_load_compressed_work_buffer = 0; }

}
