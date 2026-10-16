#include "types.h"
#include "pso/ui/TAdPlyPltAnimCtrlGC.h"
#include "pso/TAdRicoRing.h"
#include "pso/TMainTask.h"
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80355414___vt__19TAdPlyPltAnimCtrlGC {
    s32 value;
    u8 remaining[0x14];
};

struct O_80355148 { u8 pad[0x1c]; s32 state; };

extern "C" {
s32 TAdPlyPltAnimCtrlGC__sub_80355D38();
void TAdPlyPltAnimCtrlGC__sub_80355168(u8 *arg0);
u8 fn_8035510C(s32 *arg0, s32 arg1);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 get_or_create__15TAdPlyPltAnimGCFii(void *, int);
extern s32 __vt__19TAdPlyPltAnimCtrlGC[];
extern s32 lbl_805D4390;
u8 *TAdPlyPltAnimCtrlGC__ct(u8 *arg0, s32 arg1);
s32 TAdPlyPltAnimCtrlGC__sub_80355148(O_80355148 *self);
void start_anim_rect__19TAdPlyPltAnimCtrlGCFPvPv(void *, void *);
extern u32 ply_plt_anim_time_threshold_table[];
}

extern "C" {

void *__dt__19TAdPlyPltAnimCtrlGCFv(void *arg0, s16 arg1);
int test_flags_any(void*, int);
void TObjPlayer__sub_80354F8C(void* p);
int TObjPlayer__sub_80354FB0(void* p);
int TObjPlayer__sub_8035501C(void* p);
s32 TObjPlayer__sub_80355098(s32 arg0, s16 arg1);
s32 __dl__7TObjectFPv(void *);
int __dl__FPv();
s32 __dt__7TObjectFv(void *, s32);
u32 __nw__7TObjectFUl(s32);
s32 get_quest_thread_id__10TObjPlayerFPv(void* p);
void* init_and_reset_forward__10TObjPlayerFPv(void* p);

u8 fn_8035510C(s32 *arg0, s32 arg1) {
    return (u8) (arg1 == (arg1 & *arg0));
}

void TAdPlyPltAnimCtrlGC::render() {
    if (TMainTask::get_state_flag() == 1) {
        return;
    }
}

s32 TAdPlyPltAnimCtrlGC__sub_80355148(O_80355148 *self) {
    s32 r = 1;
    if (self->state == 7 || self->state == 0) {
        r = 0;
    }
    return r;
}

void TAdPlyPltAnimCtrlGC__sub_80355168(u8 *arg0) {
    s32 var_r31;
    var_r31 = 0;
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = -1;
    do {
        if (TAdPlyPltAnimCtrlGC::get_table_value((int) (var_r31)) != 0U) {
            TAdPlyPltAnimCtrlGC__sub_80355D38();
        }
        var_r31 += 1;
    } while (var_r31 < 5);
}

void TAdPlyPltAnimCtrlGC::init(void* a1) { TAdPlyPltAnimCtrlGC__sub_80355168((u8 *)((void*)(this))); ((TWindowSubSymbolChatPartsSet *)((char*)this + 0x24))->copy_vec2(a1); *(int*)((char*)this + 0x1c) = 1; }

extern s32 __vt__19TAdPlyPltAnimCtrlGC[];
extern u32 plyplt_anim_ctrl_instance;

void TAdPlyPltAnimCtrlGC::run_task() {
    u8 *arg0 = (u8 *)this;
    void *p;
    if (*(s32 *)((s8 *)arg0 + 0x1C) == 0) {
        return;
    }
    (*(u32 *)((s8 *)arg0 + 0x20))++;
    switch ((u32)*(s32 *)((s8 *)arg0 + 0x1C)) {
    case 0:
        break;
    case 1:
        if (*(u32 *)((s8 *)arg0 + 0x20) >= ply_plt_anim_time_threshold_table[0]) {
            if ((p = (void *)TAdPlyPltAnimCtrlGC::get_table_value(0)) != NULL) {
                start_anim_rect__19TAdPlyPltAnimCtrlGCFPvPv(p, arg0 + 0x24);
            }
            *(s32 *)((s8 *)arg0 + 0x1C) = 2;
        }
        break;
    case 2:
        if (*(u32 *)((s8 *)arg0 + 0x20) >= ply_plt_anim_time_threshold_table[1]) {
            if ((p = (void *)TAdPlyPltAnimCtrlGC::get_table_value(1)) != NULL) {
                start_anim_rect__19TAdPlyPltAnimCtrlGCFPvPv(p, arg0 + 0x24);
            }
            *(s32 *)((s8 *)arg0 + 0x1C) = 3;
        }
        break;
    case 3:
        if (*(u32 *)((s8 *)arg0 + 0x20) >= ply_plt_anim_time_threshold_table[2]) {
            if ((p = (void *)TAdPlyPltAnimCtrlGC::get_table_value(2)) != NULL) {
                start_anim_rect__19TAdPlyPltAnimCtrlGCFPvPv(p, arg0 + 0x24);
            }
            *(s32 *)((s8 *)arg0 + 0x1C) = 4;
        }
        break;
    case 4:
        if (*(u32 *)((s8 *)arg0 + 0x20) >= ply_plt_anim_time_threshold_table[3]) {
            if ((p = (void *)TAdPlyPltAnimCtrlGC::get_table_value(3)) != NULL) {
                start_anim_rect__19TAdPlyPltAnimCtrlGCFPvPv(p, arg0 + 0x24);
            }
            *(s32 *)((s8 *)arg0 + 0x1C) = 5;
        }
        break;
    case 5:
        if (*(u32 *)((s8 *)arg0 + 0x20) >= ply_plt_anim_time_threshold_table[4]) {
            if ((p = (void *)TAdPlyPltAnimCtrlGC::get_table_value(4)) != NULL) {
                start_anim_rect__19TAdPlyPltAnimCtrlGCFPvPv(p, arg0 + 0x24);
            }
            *(s32 *)((s8 *)arg0 + 0x1C) = 6;
        }
        break;
    case 6:
        if (*(u32 *)((s8 *)arg0 + 0x20) > 0x1A) {
            *(s32 *)((s8 *)arg0 + 0x1C) = 7;
        }
        break;
    case 7:
        break;
    }
}

void *__dt__19TAdPlyPltAnimCtrlGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TAdPlyPltAnimCtrlGC;
        if ((u32) plyplt_anim_ctrl_instance != 0U) {
            plyplt_anim_ctrl_instance = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 plyplt_anim_ctrl_instance;

typedef char RecoveredGlobal_80355414___vt__19TAdPlyPltAnimCtrlGC_size[sizeof(RecoveredGlobal_80355414___vt__19TAdPlyPltAnimCtrlGC) == 0x18 ? 1 : -1];
u8 *TAdPlyPltAnimCtrlGC__ct(u8 *arg0, s32 arg1) {
    s32 var_r31;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80355414___vt__19TAdPlyPltAnimCtrlGC *)&__vt__19TAdPlyPltAnimCtrlGC).value;
    var_r31 = 0;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D4390;
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = -1;
    do {
        get_or_create__15TAdPlyPltAnimGCFii((void *) (arg0), (int) (var_r31));
        var_r31 += 1;
    } while (var_r31 < 5);
    return arg0;
}

u32 TAdPlyPltAnimCtrlGC::get_instance(s32 arg0) {
    u32 var_r0;

    if ((u32) plyplt_anim_ctrl_instance == 0U) {
        var_r0 = __nw__7TObjectFUl(0x2C);
        if (var_r0 != 0U) {
            var_r0 = ((u32)TAdPlyPltAnimCtrlGC__ct((u8 *)(var_r0), (s32)(arg0)));
        }
        plyplt_anim_ctrl_instance = var_r0;
    }
    return plyplt_anim_ctrl_instance;
}

    extern int TAdPlyPltAnimGC__instances[];
int TAdPlyPltAnimCtrlGC::get_table_value(int a0) {  return TAdPlyPltAnimGC__instances[a0]; }

}
