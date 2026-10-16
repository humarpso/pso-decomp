#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/unk/TUnk_804F0D34.h"

extern "C" {

s32 get_quest_bgm_issued_flag();
void *__nw__7TObjectFUl(s32);
s32 fn_80350440(void *, void *, u32);
extern void *tl_05;
u8 get_slot_count__14TItemProShieldFv();
void *item_object_variant_deleting_dtor_80350530(void *arg0, s16 arg1);
void *fn_80350588(void *arg0);
void TItemObject__ct(void *);
void __dt__11TItemObjectFv(void *, int);
extern s32 item_object_dispatch_table[];

void create_quest_bgm_object(s32 arg0, u32 arg1) {
    u32 var_r31;

    var_r31 = arg1;
    if (var_r31 >= 7U) {
        var_r31 = 0U;
    }
    if (get_quest_bgm_issued_flag() == 0) {
        void *obj = __nw__7TObjectFUl(0x1C);
        if (obj != 0) {
            fn_80350440(obj, tl_05, var_r31);
        }
    }
}

void TUnk_804F0D34::vfunc_44() {
    ((s32 (*)(s32, int))create_quest_bgm_object)((s32)tl_05, (u8)get_slot_count__14TItemProShieldFv());
}

void *item_object_variant_deleting_dtor_80350530(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = item_object_dispatch_table;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

void *fn_80350588(void *arg0) {
    TItemObject__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = item_object_dispatch_table;
    return arg0;
}

}
