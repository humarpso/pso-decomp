#include "types.h"
#include "pso/player/TObjPlayer_801AEB84.h"
#include "pso/item/TItemObject_80115D6C.h"
#include "pso/item/TItem_80100508.h"
#include "pso/item/TItem_80100674.h"
#include "pso/misc/pso_const_ids6.h"
#include "pso/unk/text_80116DE8.h"
#include "pso/player/TObjPlayer.h"
#include "pso/unk/TUnk_8049FBC0.h"

struct VBase_18_ddf499 { char pad[0x18]; };

struct VObj_18_ddf499 : VBase_18_ddf499 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual s32 m71();
};

extern "C" {
s32 obj_getField1c(void *);
s16 calc_stat_bonus_sum__10TObjPlayerFUs();
s16 calc_equip_bonus__10TObjPlayerFUs();
s32 check_class_equip_permission(void *, int);
u8 get_slot_count__14TItemProShieldFv();
void vfunc_44__13TUnk_8049FBC0Fv(u8 *arg0);
void run_task__5TItemFv();
void dispatch_state__5TItemFv();
void render_shadows__5TItemFv();
void vfunc_6__13TUnk_804B9870FPsl();
void apply_object_set_data__13TUnk_804B9870FPv();
void release_member_90__10TObjPlayerFv();
void vfunc_9__11TItemObjectFv();
void classify_actor_view_detail__13TUnk_804B9870Ffff();
void register_attack__5TItemFv();
void try_pick_up_item__5TItemFl();
void vfunc_14__11TItemObjectFv();
void vfunc_16__5TItemFv();
void vfunc_17__5TItemFv();
void vfunc_19__5TItemFSc();
void vfunc_20__5TItemFv();
void vfunc_21__5TItemFPUclll();
void vfunc_22__5TItemFl();
void vfunc_23__5TItemFl();
void vfunc_24__5TItemFllPs();
void vfunc_25__5TItemFv();
void vfunc_26__5TItemFv();
void vfunc_27__5TItemFv();
void vfunc_28__5TItemFv();
void destroy__5TItemFv();
void vfunc_30__5TItemFv();
void vfunc_31__11TItemObjectFv();
void vfunc_32__5TItemFv();
void vfunc_33__5TItemFv();
void vfunc_34__5TItemFv();
void vfunc_35__5TItemFv();
void vfunc_36__11TItemObjectFv();
void vfunc_43__5TItemFv();
void *lbl_8049FBC0[45] = {
    0, 0, (void *)__dt__13TUnk_8049FBC0Fv, (void *)run_task__5TItemFv, (void *)dispatch_state__5TItemFv, (void *)render_shadows__5TItemFv, (void *)vfunc_6__13TUnk_804B9870FPsl, (void *)apply_object_set_data__13TUnk_804B9870FPv, (void *)release_member_90__10TObjPlayerFv, (void *)vfunc_9__11TItemObjectFv, (void *)TItem__sub_80100B8C, (void *)classify_actor_view_detail__13TUnk_804B9870Ffff, (void *)register_attack__5TItemFv, (void *)try_pick_up_item__5TItemFl, (void *)vfunc_14__11TItemObjectFv, (void *)TItem__sub_801005E0, (void *)vfunc_16__5TItemFv, (void *)vfunc_17__5TItemFv, (void *)TItemObject__vt16, (void *)vfunc_19__5TItemFSc, (void *)vfunc_20__5TItemFv, (void *)vfunc_21__5TItemFPUclll, (void *)vfunc_22__5TItemFl, (void *)vfunc_23__5TItemFl, (void *)vfunc_24__5TItemFllPs, (void *)vfunc_25__5TItemFv, (void *)vfunc_26__5TItemFv, (void *)vfunc_27__5TItemFv, (void *)vfunc_28__5TItemFv, (void *)destroy__5TItemFv, (void *)vfunc_30__5TItemFv, (void *)vfunc_31__11TItemObjectFv, (void *)vfunc_32__5TItemFv, (void *)vfunc_33__5TItemFv, (void *)vfunc_34__5TItemFv, (void *)vfunc_35__5TItemFv, (void *)vfunc_36__11TItemObjectFv, (void *)TItemObject__vt35, (void *)vfunc_38__11TItemObjectFl, (void *)ret_8010064C, (void *)TItem__sub_80100648, (void *)TItem__sub_801005E4, (void *)TItem__sub_801005D8, (void *)vfunc_43__5TItemFv, (void *)vfunc_44__13TUnk_8049FBC0Fv
};

void TUnk_8049FBC0::vfunc_44() {
    switch (get_slot_count__14TItemProShieldFv()) {
    case 0:
        add_stat_and_item__10TObjPlayerFiUc((s32)(*(u8 * *)&this->m_f0), 2);
        break;
    case 1:
        if (check_class_equip_permission((void *) (*(u8 * *)&this->m_f0), 0xD7) == 0) {
            add_mst_and_item__10TObjPlayerFiUc((s32)(*(u8 * *)&this->m_f0), 2);
        }
        break;
    case 2:
        add_evp_material__10TObjPlayerFiUc((s32)(*(u8 * *)&this->m_f0), 2);
        break;
    case 3:
        obj_getField1c((void *) (*(u8 * *)&this->m_f0));
        if (calc_equip_bonus__10TObjPlayerFUs() < 0xFA) {
            apply_speed_with_camera_scale__10TObjPlayerFiUc((s32)(*(u8 * *)&this->m_f0), (u8)(2));
        }
        break;
    case 4:
        obj_getField1c((void *) (*(u8 * *)&this->m_f0));
        if ((calc_stat_bonus_sum__10TObjPlayerFUs() < 0xFA) && (check_class_equip_permission((void *) (*(u8 * *)&this->m_f0), 0xD7) == 0)) {
            set_speed_scaled_by_camera__10TObjPlayerFiUc((s32)(*(u8 * *)&this->m_f0), (u8)(2));
        }
        break;
    case 5:
        add_dfp_material__10TObjPlayerFiUc((s32)(*(u8 * *)&this->m_f0), 2);
        break;
    case 6:
        apply_luck_reward__10TObjPlayerFiUc((s32)(*(u8 * *)&this->m_f0), 2);
        break;
    }
    ((VObj_18_ddf499 *)((u8 *)(*(u8 * *)&this->m_f0)))->m71();
}
void *__dt__13TUnk_8049FBC0Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)lbl_8049FBC0;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

}
