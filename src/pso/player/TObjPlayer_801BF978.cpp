#include "types.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_801BF9F0_lbl_804C3E50 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
s32 __dl__FPv(s32);
s32 free_if_valid__14TPlyDispConfigFis(void *, int);
extern RecoveredGlobal_801BF9F0_lbl_804C3E50 lbl_804C3E50;
u8 *TObjPlayer__sub_801BF9F0(u8 *arg0, s16 arg1);
void TObjPlayer__sub_801BF9E0(void* p, s16 v);
s32 TObjPlayer__sub_801BFA4C(s32 arg0, s16 arg1);
s32 clear_id__10TObjPlayerFv();
void init__6gc_tagFv(void *);

void TObjPlayer::init_tag() {
    s32 *arg0 = (s32 *)this;
    *arg0 = 0;
    init__6gc_tagFv((char *)arg0 + 4);
}

void TObjPlayer::reset_counter_field4() {
    *(s32 *)((s8 *)this + 4) = 0;
    clear_id__10TObjPlayerFv();
}

    extern const float TObjPlayer__data_805DC294;
void TObjPlayer::set_vec3_const() { *(float*)((char*)this + 0x0) = TObjPlayer__data_805DC294; *(float*)((char*)this + 0x4) = TObjPlayer__data_805DC294; *(float*)((char*)this + 0x8) = TObjPlayer__data_805DC294; }

void TObjPlayer__sub_801BF9E0(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void TObjPlayer::set_pos_z(f32 v) { *(f32*)((char*)this + 0x8) = v; }

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
        TObjPlayer::free_if_valid(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
