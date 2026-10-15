#include "types.h"

struct RecoveredGlobal_801BF9F0_lbl_804C3E50 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
s32 __dl__FPv(s32);
s32 free_if_valid__14TPlyDispConfigFis(void *, int);
extern RecoveredGlobal_801BF9F0_lbl_804C3E50 lbl_804C3E50;
u8 *TObjPlayer__sub_801BF9F0(u8 *arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801BF9E0(void* p, s16 v);
s32 TObjPlayer__sub_801BFA4C(s32 arg0, s16 arg1);
void init_tag__10TObjPlayerFPv(s32 *arg0);
void reset_counter_field4__10TObjPlayerFPv(void *arg0);
void set_pos_z__10TObjPlayerFPvf(void* p, f32 v);
void set_vec3_const__10TObjPlayerFPv(void* a0);
s32 __dl__FPv(s32);
s32 clear_id__10TObjPlayerFPv();
s32 free_if_valid__10TObjPlayerFis(s32, s32);
void init__6gc_tagFv(void *);

void init_tag__10TObjPlayerFPv(s32 *arg0) {
    *arg0 = 0;
    init__6gc_tagFv((char *)arg0 + 4);
}

void reset_counter_field4__10TObjPlayerFPv(void *arg0) {
    *(s32 *)((s8 *)arg0 + 4) = 0;
    clear_id__10TObjPlayerFPv();
}

    extern const float TObjPlayer__data_805DC294;
void set_vec3_const__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x0) = TObjPlayer__data_805DC294; *(float*)((char*)a0 + 0x4) = TObjPlayer__data_805DC294; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC294; }

void TObjPlayer__sub_801BF9E0(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void set_pos_z__10TObjPlayerFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }

typedef char RecoveredGlobal_801BF9F0_lbl_804C3E50_size[sizeof(RecoveredGlobal_801BF9F0_lbl_804C3E50) == 0x10 ? 1 : -1];
u8 *TObjPlayer__sub_801BF9F0(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 8) = &lbl_804C3E50.value;
        free_if_valid__14TPlyDispConfigFis((void *) (arg0 + 4), (int) (-1));
        if (arg1 > 0) {
            __dl__FPv((s32)((void *) (arg0)));
        }
    }
    return arg0;
}

s32 TObjPlayer__sub_801BFA4C(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free_if_valid__10TObjPlayerFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
