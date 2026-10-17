#include "types.h"
#include "pso/item/TItemObject.h"
#include "pso/item/TUnk_8049FB08.h"
#include "pso/item/TUnk_8049FA50.h"
#include "pso/item/TUnk_8049F998.h"
#include "pso/item/TUnk_8049F770.h"
#include "pso/item/TUnk_8049F8E0.h"
#include "pso/item/TUnk_8049F828.h"
#include "pso/item/TItemProShield.h"
#include "pso/misc/TMainCursor.h"
#include "pso/player/TObjPlayer.h"

struct Obj_80116634
{
  u8 pad0[0xF0];
  s32 f0;
};

extern "C" {
void * TItemProShield__sub_80116708(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *TItemProShield__sub_80116744(u8 *arg0);
s32 add_actor_hp(u8 *arg0, s16 arg1);
s32 get_slot_count__14TItemProShieldFv(void *);
extern s32 game_difficulty_selection;
void vfunc_44__13TUnk_8049F770Fv(Obj_80116634 *arg0);
void *__dt__13TUnk_8049F770Fv(void *arg0, s16 arg1);
void *__dt__13TUnk_8049F828Fv(void *arg0, s16 arg1);
void vfunc_44__13TUnk_8049F828Fv(void *arg0);
s32 apply_transform_action__8TItemMagFUc(s32, s32);
void TItemObject__ct(void *);
void *__dt__11TItemObjectFv(void *arg0, s16 arg1);

extern void *item_hp_recovery_vtable[];

typedef struct Obj_80116634 Obj_80116634;
void TUnk_8049F770::vfunc_44() {
    Obj_80116634 *arg0 = (Obj_80116634 *)this;
  u8 (*new_var2)(void *);
  s32 t;
  new_var2 = (u8 (*)(void *)) get_slot_count__14TItemProShieldFv;
  if (new_var2(arg0) != 2)
  {
    int new_var;
    t = ((TItemObject *)arg0)->get_tool_pmt_amount_byte();
    new_var = game_difficulty_selection;
    new_var = t + (new_var * (t / 2));
    add_actor_hp((u8 *)arg0->f0, new_var);
  }
  else
  {
    add_actor_hp((u8 *)arg0->f0, ((TItemProShield *)(arg0->f0))->get_field_2b8());
  }
}

void *__dt__13TUnk_8049F770Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)item_hp_recovery_vtable;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

void *TItemProShield__sub_80116708(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)item_hp_recovery_vtable;
    return arg0;
}

u8 *TItemProShield__sub_80116744(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TItemProShield__sub_80116708((void *)temp_r3, (void *)tl_05, (void *)arg0)));
        }
        return var_r0;
    }
    return NULL;
}

void TUnk_8049F828::vfunc_44() {
    s32 temp_r3;

    temp_r3 = ((TObjPlayer *)(this->m_f0))->activate_d04_slot();
    if (temp_r3 != 0) {
        apply_transform_action__8TItemMagFUc(temp_r3, get_slot_count__14TItemProShieldFv(this));
    }
}

extern void *item_mag_transform_vtable[];

void *__dt__13TUnk_8049F828Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)item_mag_transform_vtable;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

s32 obj_getField1c(void *);
int get_type_id__10TObjPlayerFv();
s32 TObjPlayer__sub_80116620(s32, s32);
s32 sub_801A1DDC__10TObjPlayerFv(void *);
s32 send_6x33_revive_player(s32, s32);
void vfunc_44__13TUnk_8049F8E0Fv(void *arg0);
u8 *create_moon_atomizer_item(u8 *arg0);
struct Base_80116A5C_80116634 { char pad[0x18]; };
struct VObj_80116A5C_80116634 : Base_80116A5C_80116634 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36();
    virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40();
    virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52();
};

void *__dt__13TUnk_8049F8E0Fv(void *arg0, s16 arg1);
void vfunc_44__13TUnk_8049F998Fv(void *arg0);

void *TUnk_8049F828::init(void *_w1, void *_w2) {
    TItemObject__ct(this);
    *(s32 **)((s8 *)this + 0x18) = (s32 *)item_mag_transform_vtable;
    return this;
}

extern void *item_moon_atomizer_vtable[];

u8 *TItemProShield::create() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((TUnk_8049F828 *)temp_r3)->init((void *)tl_05, (void *)arg0)));
        }
        return var_r0;
    }
    return NULL;
}

#pragma push
#pragma scheduling off
void TUnk_8049F8E0::vfunc_44() {
    s32 temp_r3;
    u32 temp_r424;
    if (sub_801A1DDC__10TObjPlayerFv(*(void * *)&this->m_f0) != 0) {
        temp_r424 = (u32) *(u32 *)(this->m_f0 + 0x424);
        if (temp_r424 != 0U) {
            temp_r3 = ((TMainCursor *)temp_r424)->find_by_pos(4, 9);
            if (temp_r3 != 0) {
                TObjPlayer__sub_80116620(temp_r3 + 0x9C, 0);
                if ((u16) get_type_id__10TObjPlayerFv() != 0xffffU) {
                    TObjPlayer__sub_80116620(temp_r3 + 0x9C, 0);
                    send_6x33_revive_player(obj_getField1c(*(void * *)&this->m_f0), get_type_id__10TObjPlayerFv());
                }
            }
        }
    }
}
#pragma pop

void *__dt__13TUnk_8049F8E0Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)item_moon_atomizer_vtable;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

void *TUnk_8049F8E0::init_item_object(void *_w1, void *_w2) {
    TItemObject__ct(this);
    *(s32 **)((s8 *)this + 0x18) = (s32 *)item_moon_atomizer_vtable;
    return this;
}

u8 *create_moon_atomizer_item(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((TUnk_8049F8E0 *)temp_r3)->init_item_object((void *)tl_05, (void *)arg0)));
        }
        return var_r0;
    }
    return NULL;
}

void TUnk_8049F998::vfunc_44() {
    struct VObj_80116A5C_80116634 *obj;

    switch ((s32) (((u8 (*)())get_slot_count__14TItemProShieldFv)())) {
    case 0:
        obj = *(struct VObj_80116A5C_80116634 * *)&this->m_f0;
        obj->m51();
        return;
    case 1:
        obj = *(struct VObj_80116A5C_80116634 * *)&this->m_f0;
        obj->m52();
        return;
    }
}

}

struct Base_80116BBC_80116634 { char pad[0x18]; };
struct VObj_80116BBC_80116634 : Base_80116BBC_80116634 {
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
};

extern "C" {
void * TItemProShield__sub_80116B28(void *arg0, void *arg1, void *arg2);
u8 *create_status_cure_item(u8 *arg0);
void * TItemProShield__sub_80116C44(void *arg0, void *arg1, void *arg2);
u8 *create_sol_atomizer_item(u8 *arg0);
void *__dt__13TUnk_8049FA50Fv(void *arg0, s16 arg1);
void *__dt__13TUnk_8049FB08Fv(void *arg0, s16 arg1);
void *__dt__13TUnk_8049F998Fv(void *arg0, s16 arg1);
void vfunc_44__13TUnk_8049FA50Fv(void *arg0);
int vfunc_44__13TUnk_8049FB08Fv(void* p);
void *TItemProShield__sub_80116D54(void *arg0);
void send_star_atomizer_targets(void *arg0);

extern void *item_status_cure_vtable[];

void *__dt__13TUnk_8049F998Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)item_status_cure_vtable;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

void *TItemProShield__sub_80116B28(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)item_status_cure_vtable;
    return arg0;
}

u8 *create_status_cure_item(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TItemProShield__sub_80116B28((void *)temp_r3, (void *)tl_05, (void *)arg0)));
        }
        return var_r0;
    }
    return NULL;
}

void TUnk_8049FA50::vfunc_44() {
    struct VObj_80116BBC_80116634 *o = (struct VObj_80116BBC_80116634 *)this->m_f0;
    o->m48();
}

extern void *item_sol_atomizer_vtable[];

void *__dt__13TUnk_8049FA50Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)item_sol_atomizer_vtable;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

void *TItemProShield__sub_80116C44(void *arg0, void * _w1, void * _w2) {
    TItemObject__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)item_sol_atomizer_vtable;
    return arg0;
}

u8 *create_sol_atomizer_item(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TItemProShield__sub_80116C44((void *)temp_r3, (void *)tl_05, (void *)arg0)));
        }
        return var_r0;
    }
    return NULL;
}

void TUnk_8049FB08::vfunc_44() { send_star_atomizer_targets(*(void* *)&this->m_f0); }

extern void *item_star_atomizer_vtable[];

void *__dt__13TUnk_8049FB08Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)item_star_atomizer_vtable;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

void *TItemProShield__sub_80116D54(void *arg0) {
    TItemObject__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)item_star_atomizer_vtable;
    return arg0;
}

void vfunc_14__11TItemObjectFv();
void TItemObject__vt16(u8 *arg0, u8 *item);
void vfunc_31__11TItemObjectFv();
s32 TItemObject__vt35(void *arg0, s32 arg1);
s32 vfunc_38__11TItemObjectFl(void *arg0, s32 arg1);
void vfunc_9__11TItemObjectFv();
void TItem__sub_801005D8();
void vfunc_16__5TItemFv();
void TItem__sub_801005E0();
int TItem__sub_801005E4(void);
void TItem__sub_80100648();
void vfunc_34__5TItemFv();
void vfunc_17__5TItemFv();
void vfunc_19__5TItemFSc();
void vfunc_32__5TItemFv();
void vfunc_28__5TItemFv();
void vfunc_27__5TItemFv();
void vfunc_26__5TItemFv();
void vfunc_25__5TItemFv();
void vfunc_24__5TItemFllPs();
void vfunc_23__5TItemFl();
void vfunc_22__5TItemFl();
void vfunc_30__5TItemFv();
void vfunc_21__5TItemFPUclll();
void vfunc_20__5TItemFv();
int TItem__sub_80100B8C(void *p);
void vfunc_6__13TUnk_804B9870FPsl();
void vfunc_33__5TItemFv();
void vfunc_43__5TItemFv();
void apply_object_set_data__13TUnk_804B9870FPv();
void classify_actor_view_detail__13TUnk_804B9870Ffff();
void destroy__5TItemFv();
void dispatch_state__5TItemFv();
void vfunc_36__11TItemObjectFv();
void register_attack__5TItemFv();
void release_member_90__10TObjPlayerFv();
void render_shadows__5TItemFv();
int ret_8010064C(void);
void vfunc_35__5TItemFv();
void run_task__5TItemFv();
void try_pick_up_item__5TItemFl();
void *item_hp_recovery_vtable[46] = {
    0,
    0,
    (void *)&__dt__13TUnk_8049F770Fv,
    (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv,
    (void *)&render_shadows__5TItemFv,
    (void *)&vfunc_6__13TUnk_804B9870FPsl,
    (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&release_member_90__10TObjPlayerFv,
    (void *)&vfunc_9__11TItemObjectFv,
    (void *)&TItem__sub_80100B8C,
    (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&register_attack__5TItemFv,
    (void *)&try_pick_up_item__5TItemFl,
    (void *)&vfunc_14__11TItemObjectFv,
    (void *)&TItem__sub_801005E0,
    (void *)&vfunc_16__5TItemFv,
    (void *)&vfunc_17__5TItemFv,
    (void *)&TItemObject__vt16,
    (void *)&vfunc_19__5TItemFSc,
    (void *)&vfunc_20__5TItemFv,
    (void *)&vfunc_21__5TItemFPUclll,
    (void *)&vfunc_22__5TItemFl,
    (void *)&vfunc_23__5TItemFl,
    (void *)&vfunc_24__5TItemFllPs,
    (void *)&vfunc_25__5TItemFv,
    (void *)&vfunc_26__5TItemFv,
    (void *)&vfunc_27__5TItemFv,
    (void *)&vfunc_28__5TItemFv,
    (void *)&destroy__5TItemFv,
    (void *)&vfunc_30__5TItemFv,
    (void *)&vfunc_31__11TItemObjectFv,
    (void *)&vfunc_32__5TItemFv,
    (void *)&vfunc_33__5TItemFv,
    (void *)&vfunc_34__5TItemFv,
    (void *)&vfunc_35__5TItemFv,
    (void *)&vfunc_36__11TItemObjectFv,
    (void *)&TItemObject__vt35,
    (void *)&vfunc_38__11TItemObjectFl,
    (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648,
    (void *)&TItem__sub_801005E4,
    (void *)&TItem__sub_801005D8,
    (void *)&vfunc_43__5TItemFv,
    (void *)&vfunc_44__13TUnk_8049F770Fv,
    0
};
void *item_mag_transform_vtable[46] = {
    0,
    0,
    (void *)&__dt__13TUnk_8049F828Fv,
    (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv,
    (void *)&render_shadows__5TItemFv,
    (void *)&vfunc_6__13TUnk_804B9870FPsl,
    (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&release_member_90__10TObjPlayerFv,
    (void *)&vfunc_9__11TItemObjectFv,
    (void *)&TItem__sub_80100B8C,
    (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&register_attack__5TItemFv,
    (void *)&try_pick_up_item__5TItemFl,
    (void *)&vfunc_14__11TItemObjectFv,
    (void *)&TItem__sub_801005E0,
    (void *)&vfunc_16__5TItemFv,
    (void *)&vfunc_17__5TItemFv,
    (void *)&TItemObject__vt16,
    (void *)&vfunc_19__5TItemFSc,
    (void *)&vfunc_20__5TItemFv,
    (void *)&vfunc_21__5TItemFPUclll,
    (void *)&vfunc_22__5TItemFl,
    (void *)&vfunc_23__5TItemFl,
    (void *)&vfunc_24__5TItemFllPs,
    (void *)&vfunc_25__5TItemFv,
    (void *)&vfunc_26__5TItemFv,
    (void *)&vfunc_27__5TItemFv,
    (void *)&vfunc_28__5TItemFv,
    (void *)&destroy__5TItemFv,
    (void *)&vfunc_30__5TItemFv,
    (void *)&vfunc_31__11TItemObjectFv,
    (void *)&vfunc_32__5TItemFv,
    (void *)&vfunc_33__5TItemFv,
    (void *)&vfunc_34__5TItemFv,
    (void *)&vfunc_35__5TItemFv,
    (void *)&vfunc_36__11TItemObjectFv,
    (void *)&TItemObject__vt35,
    (void *)&vfunc_38__11TItemObjectFl,
    (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648,
    (void *)&TItem__sub_801005E4,
    (void *)&TItem__sub_801005D8,
    (void *)&vfunc_43__5TItemFv,
    (void *)&vfunc_44__13TUnk_8049F828Fv,
    0
};
void *item_moon_atomizer_vtable[46] = {
    0,
    0,
    (void *)&__dt__13TUnk_8049F8E0Fv,
    (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv,
    (void *)&render_shadows__5TItemFv,
    (void *)&vfunc_6__13TUnk_804B9870FPsl,
    (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&release_member_90__10TObjPlayerFv,
    (void *)&vfunc_9__11TItemObjectFv,
    (void *)&TItem__sub_80100B8C,
    (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&register_attack__5TItemFv,
    (void *)&try_pick_up_item__5TItemFl,
    (void *)&vfunc_14__11TItemObjectFv,
    (void *)&TItem__sub_801005E0,
    (void *)&vfunc_16__5TItemFv,
    (void *)&vfunc_17__5TItemFv,
    (void *)&TItemObject__vt16,
    (void *)&vfunc_19__5TItemFSc,
    (void *)&vfunc_20__5TItemFv,
    (void *)&vfunc_21__5TItemFPUclll,
    (void *)&vfunc_22__5TItemFl,
    (void *)&vfunc_23__5TItemFl,
    (void *)&vfunc_24__5TItemFllPs,
    (void *)&vfunc_25__5TItemFv,
    (void *)&vfunc_26__5TItemFv,
    (void *)&vfunc_27__5TItemFv,
    (void *)&vfunc_28__5TItemFv,
    (void *)&destroy__5TItemFv,
    (void *)&vfunc_30__5TItemFv,
    (void *)&vfunc_31__11TItemObjectFv,
    (void *)&vfunc_32__5TItemFv,
    (void *)&vfunc_33__5TItemFv,
    (void *)&vfunc_34__5TItemFv,
    (void *)&vfunc_35__5TItemFv,
    (void *)&vfunc_36__11TItemObjectFv,
    (void *)&TItemObject__vt35,
    (void *)&vfunc_38__11TItemObjectFl,
    (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648,
    (void *)&TItem__sub_801005E4,
    (void *)&TItem__sub_801005D8,
    (void *)&vfunc_43__5TItemFv,
    (void *)&vfunc_44__13TUnk_8049F8E0Fv,
    0
};
void *item_status_cure_vtable[46] = {
    0,
    0,
    (void *)&__dt__13TUnk_8049F998Fv,
    (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv,
    (void *)&render_shadows__5TItemFv,
    (void *)&vfunc_6__13TUnk_804B9870FPsl,
    (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&release_member_90__10TObjPlayerFv,
    (void *)&vfunc_9__11TItemObjectFv,
    (void *)&TItem__sub_80100B8C,
    (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&register_attack__5TItemFv,
    (void *)&try_pick_up_item__5TItemFl,
    (void *)&vfunc_14__11TItemObjectFv,
    (void *)&TItem__sub_801005E0,
    (void *)&vfunc_16__5TItemFv,
    (void *)&vfunc_17__5TItemFv,
    (void *)&TItemObject__vt16,
    (void *)&vfunc_19__5TItemFSc,
    (void *)&vfunc_20__5TItemFv,
    (void *)&vfunc_21__5TItemFPUclll,
    (void *)&vfunc_22__5TItemFl,
    (void *)&vfunc_23__5TItemFl,
    (void *)&vfunc_24__5TItemFllPs,
    (void *)&vfunc_25__5TItemFv,
    (void *)&vfunc_26__5TItemFv,
    (void *)&vfunc_27__5TItemFv,
    (void *)&vfunc_28__5TItemFv,
    (void *)&destroy__5TItemFv,
    (void *)&vfunc_30__5TItemFv,
    (void *)&vfunc_31__11TItemObjectFv,
    (void *)&vfunc_32__5TItemFv,
    (void *)&vfunc_33__5TItemFv,
    (void *)&vfunc_34__5TItemFv,
    (void *)&vfunc_35__5TItemFv,
    (void *)&vfunc_36__11TItemObjectFv,
    (void *)&TItemObject__vt35,
    (void *)&vfunc_38__11TItemObjectFl,
    (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648,
    (void *)&TItem__sub_801005E4,
    (void *)&TItem__sub_801005D8,
    (void *)&vfunc_43__5TItemFv,
    (void *)&vfunc_44__13TUnk_8049F998Fv,
    0
};
void *item_sol_atomizer_vtable[46] = {
    0,
    0,
    (void *)&__dt__13TUnk_8049FA50Fv,
    (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv,
    (void *)&render_shadows__5TItemFv,
    (void *)&vfunc_6__13TUnk_804B9870FPsl,
    (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&release_member_90__10TObjPlayerFv,
    (void *)&vfunc_9__11TItemObjectFv,
    (void *)&TItem__sub_80100B8C,
    (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&register_attack__5TItemFv,
    (void *)&try_pick_up_item__5TItemFl,
    (void *)&vfunc_14__11TItemObjectFv,
    (void *)&TItem__sub_801005E0,
    (void *)&vfunc_16__5TItemFv,
    (void *)&vfunc_17__5TItemFv,
    (void *)&TItemObject__vt16,
    (void *)&vfunc_19__5TItemFSc,
    (void *)&vfunc_20__5TItemFv,
    (void *)&vfunc_21__5TItemFPUclll,
    (void *)&vfunc_22__5TItemFl,
    (void *)&vfunc_23__5TItemFl,
    (void *)&vfunc_24__5TItemFllPs,
    (void *)&vfunc_25__5TItemFv,
    (void *)&vfunc_26__5TItemFv,
    (void *)&vfunc_27__5TItemFv,
    (void *)&vfunc_28__5TItemFv,
    (void *)&destroy__5TItemFv,
    (void *)&vfunc_30__5TItemFv,
    (void *)&vfunc_31__11TItemObjectFv,
    (void *)&vfunc_32__5TItemFv,
    (void *)&vfunc_33__5TItemFv,
    (void *)&vfunc_34__5TItemFv,
    (void *)&vfunc_35__5TItemFv,
    (void *)&vfunc_36__11TItemObjectFv,
    (void *)&TItemObject__vt35,
    (void *)&vfunc_38__11TItemObjectFl,
    (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648,
    (void *)&TItem__sub_801005E4,
    (void *)&TItem__sub_801005D8,
    (void *)&vfunc_43__5TItemFv,
    (void *)&vfunc_44__13TUnk_8049FA50Fv,
    0
};
void *item_star_atomizer_vtable[46] = {
    0,
    0,
    (void *)&__dt__13TUnk_8049FB08Fv,
    (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv,
    (void *)&render_shadows__5TItemFv,
    (void *)&vfunc_6__13TUnk_804B9870FPsl,
    (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&release_member_90__10TObjPlayerFv,
    (void *)&vfunc_9__11TItemObjectFv,
    (void *)&TItem__sub_80100B8C,
    (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&register_attack__5TItemFv,
    (void *)&try_pick_up_item__5TItemFl,
    (void *)&vfunc_14__11TItemObjectFv,
    (void *)&TItem__sub_801005E0,
    (void *)&vfunc_16__5TItemFv,
    (void *)&vfunc_17__5TItemFv,
    (void *)&TItemObject__vt16,
    (void *)&vfunc_19__5TItemFSc,
    (void *)&vfunc_20__5TItemFv,
    (void *)&vfunc_21__5TItemFPUclll,
    (void *)&vfunc_22__5TItemFl,
    (void *)&vfunc_23__5TItemFl,
    (void *)&vfunc_24__5TItemFllPs,
    (void *)&vfunc_25__5TItemFv,
    (void *)&vfunc_26__5TItemFv,
    (void *)&vfunc_27__5TItemFv,
    (void *)&vfunc_28__5TItemFv,
    (void *)&destroy__5TItemFv,
    (void *)&vfunc_30__5TItemFv,
    (void *)&vfunc_31__11TItemObjectFv,
    (void *)&vfunc_32__5TItemFv,
    (void *)&vfunc_33__5TItemFv,
    (void *)&vfunc_34__5TItemFv,
    (void *)&vfunc_35__5TItemFv,
    (void *)&vfunc_36__11TItemObjectFv,
    (void *)&TItemObject__vt35,
    (void *)&vfunc_38__11TItemObjectFl,
    (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648,
    (void *)&TItem__sub_801005E4,
    (void *)&TItem__sub_801005D8,
    (void *)&vfunc_43__5TItemFv,
    (void *)&vfunc_44__13TUnk_8049FB08Fv,
    0
};
}
