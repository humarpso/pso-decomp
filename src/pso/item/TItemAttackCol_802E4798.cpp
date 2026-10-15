#include "types.h"

struct Hit_802E4798 { u8 *obj; s32 idx; };

struct Rec_802E4798 { u8 pad[0x18]; s32 flags; u8 pad2[0x2C - 0x1C]; };

struct VBase_18_909b87 { char pad[0x18]; };

struct VObj_18_909b87 : VBase_18_909b87 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4(s32);
};

extern "C" {
s32 obj_is_hit_receivable(void *);
s32 obj_testFlags30(void *, u32);
u16 obj_getField1c(void *);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *);
s32 is_technique_ready__8TTecCtrlFv();
void copy_pos__14TItemAttackColFPvPv(void* p, void* q);
s32 try_add_hit_target__14TItemAttackColFPvPv(u8 *arg0, Hit_802E4798 *arg1);
s32 queue_destruction__7TObjectFv(void *);
s32 apply_status_effect__10TObjPlayerFi(void *);
s32 TObjPlayer__sub_801542F4(void *);
s32 TObjPlayer__sub_8015431C(void *);
s32 reset_global_table();
s32 try_add_hit_target__14TItemAttackColFPvPv(u8 *arg0, Hit_802E4798 *arg1);
s32 get_instance__16TObjOnlineEndingFv();
Hit_802E4798 *get_attack_entry__16TObjOnlineEndingFi(int);
void check_hits__14TItemAttackColFPv(u8 *arg0);
}

extern "C" {

void copy_pos__14TItemAttackColFPvPv(void* p, void* q);
void *destroy_attack_collision__14TItemAttackColFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

s32 try_add_hit_target__14TItemAttackColFPvPv(u8 *arg0, Hit_802E4798 *arg1) {
    s32 ok;
    Hit_802E4798 *e;
    s32 i;
    s32 flags;
    if (*(s32 *)((s8 *)arg0 + 0xA0) >= 8) {
        return 0;
    }
    if (*(u16 *)((s8 *)arg0 + 0xA8) == obj_getField1c(arg1->obj)) {
        return 0;
    }
    ok = 1;
    if (is_technique_ready__8TTecCtrlFv() == 0 && obj_testFlags30(arg1->obj, 0x60000000) == 0x20000000
        && *(s16 *)((s8 *)arg0 + 0xAA) != get_stat_by_key_state__10TObjPlayerFPv(arg1->obj)) {
        ok = 0;
    }
    if (obj_testFlags30(arg1->obj, 0x04000000) != 0
        || ((flags = (*(Rec_802E4798 **)((s8 *)arg1->obj + 0xA4))[arg1->idx].flags) & 0x02000000)
        || (flags & 0x1000) || (flags & 0x80)) {
        ok = 0;
    }
    if (ok != 0) {
        e = (Hit_802E4798 *) (arg0 + 0x60);
        for (i = 0; i != *(s32 *)((s8 *)arg0 + 0xA0); i++) {
            if (e->obj == arg1->obj && e->idx == arg1->idx) {
                return 0;
            }
            e++;
        }
        if (obj_is_hit_receivable(arg1->obj) != 0) {
            copy_pos__14TItemAttackColFPvPv(e, arg1);
            *(s32 *)((s8 *)arg0 + 0xA0) += 1;
            return 1;
        }
    }
    return 0;
}

void copy_pos__14TItemAttackColFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

extern s32 lbl_804E355C[];

void check_hits__14TItemAttackColFPv(u8 *arg0) {
    s32 i;
    Hit_802E4798 *e;
    reset_global_table();
    TObjPlayer__sub_801542F4(arg0 + 0x1C);
    if (*(s32 *)((s8 *)arg0 + 0xC0) != 0) {
        TObjPlayer__sub_8015431C(arg0 + 0x1C);
    }
    if (*(s32 *)((s8 *)arg0 + 0xBC) != 0) {
        apply_status_effect__10TObjPlayerFi(arg0 + 0x1C);
    }
    for (i = 0; i != get_instance__16TObjOnlineEndingFv(); i++) {
        e = get_attack_entry__16TObjOnlineEndingFi(i);
        if (try_add_hit_target__14TItemAttackColFPvPv(arg0, e) != 0) {
            ((VObj_18_909b87 *)arg0)->m4((s32)e);
            *(s32 *)((s8 *)arg0 + 0xA4) -= 1;
            if (*(s32 *)((s8 *)arg0 + 0xA4) == 0) {
                queue_destruction__7TObjectFv(arg0);
                reset_global_table();
                return;
            }
        }
    }
    reset_global_table();
}

void *destroy_attack_collision__14TItemAttackColFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E355C;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
