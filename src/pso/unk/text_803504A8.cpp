#include "types.h"
#include "pso/object/TObjBgmColCtrl_8017E8E4.h"
#include "pso/unk/text_80350440.h"
#include "pso/unk/text_803504A8.h"
#include "pso/player/TObjPlayer.h"
#include "pso/unk/TUnk_804F0D34.h"

extern "C" {

void *__nw__7TObjectFUl(s32);
extern void *tl_05;
u8 get_slot_count__5TItemFv();
void TItemObject__ct(void *);
void *__dt__11TItemObjectFv(void *arg0, s16 arg1);
}
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
            fn_80350440((u8 *)obj, (u8 *)tl_05, var_r31);
        }
    }
}

void TUnk_804F0D34::vfunc_44() {
    ((s32 (*)(s32, int))create_quest_bgm_object)((s32)tl_05, (u8)get_slot_count__5TItemFv());
}

void *__dt__13TUnk_804F0D34Fv(void *arg0, s16 arg1) {
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
