#include "types.h"

extern "C" {
s32 prs_decompress_buffer(s32, s32);
extern int item_load_compressed_work_buffer;
s32 decompress_buffer__9TItemLoadFUi(u32 arg0);
}

extern "C" {

struct VOff_8010FD2C_arg0_8010fd2c { char pad_0[0x1C]; char f_1C[1]; };

void free_boss4_rock__9TItemLoadFv(void);
void *init__9TItemLoadFPv(void *arg0);
void init_buffer__9TItemLoadFPviii(void *);
void clear_id__10TObjPlayerFPv(void *);
int free__11TOBoss4RockFUi(void*);
void init_forward__10TObjPlayerFPv(void *);

extern s32 lbl_8049F42C[];

void *init__9TItemLoadFPv(void *arg0) {
    struct VOff_8010FD2C_arg0_8010fd2c *self = (struct VOff_8010FD2C_arg0_8010fd2c *)arg0;
    init_buffer__9TItemLoadFPviii(arg0);
    *(s32 **)((s8 *)arg0 + 0x14) = lbl_8049F42C;
    init_forward__10TObjPlayerFPv(self->f_1C);
    *(u32 *)((s8 *)arg0 + 0x18) = 0;
    clear_id__10TObjPlayerFPv(self->f_1C);
    return arg0;
}

    extern int item_load_compressed_work_buffer;

s32 decompress_buffer__9TItemLoadFUi(u32 arg0) {
    if (((u32) (*(u32 *)&item_load_compressed_work_buffer) != 0U) && (arg0 != 0U)) {
        return prs_decompress_buffer((s32) (*(u32 *)&item_load_compressed_work_buffer), (s32) arg0);
    }
    return 0;
}

void free_boss4_rock__9TItemLoadFv(void) { free__11TOBoss4RockFUi((void*)(item_load_compressed_work_buffer)); item_load_compressed_work_buffer = 0; }

}
