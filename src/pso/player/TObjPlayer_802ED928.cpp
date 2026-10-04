#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802ED928 { char pad[0x18]; };
struct VObj_802ED928 : Base_802ED928 {
    virtual void m0();    virtual void m1();    virtual void m2();    virtual void m3();
    virtual void m4();    virtual void m5();    virtual void m6();    virtual void m7();
    virtual void m8();    virtual void m9();    virtual void m10();    virtual void m11();
    virtual void m12();    virtual void m13();    virtual void m14();    virtual void m15();
    virtual void m16();    virtual void m17();    virtual void m18();    virtual void m19();
    virtual void m20();    virtual void m21();    virtual void m22();    virtual void m23();
    virtual void m24();    virtual void m25();    virtual void m26();    virtual void m27();
    virtual void m28();    virtual void m29();    virtual void m30();    virtual void m31();
    virtual void m32();    virtual void m33();    virtual void m34();    virtual void m35();
    virtual void m36();    virtual void m37();    virtual void m38();    virtual void m39();
    virtual void m40();    virtual void m41();    virtual void m42();    virtual void m43();
    virtual void m44();    virtual void m45();    virtual void m46();    virtual void m47();
    virtual void m48();    virtual void m49();    virtual void m50();    virtual void m51();
    virtual void m52();    virtual void m53();    virtual void m54();    virtual void m55();
    virtual void m56();    virtual void m57();    virtual void m58();    virtual void m59();
    virtual void m60();    virtual void m61();    virtual void m62();    virtual void m63();
    virtual void m64();    virtual void m65();    virtual void m66();    virtual void m67();
    virtual void m68();    virtual void m69();    virtual void m70();    virtual void m71();
    virtual void m72();    virtual void m73();    virtual void m74();    virtual void m75();
    virtual void m76();    virtual void m77();    virtual void m78();    virtual void m79();
    virtual void m80();    virtual void m81();    virtual void m82();    virtual void m83();
    virtual void m84();
    virtual void m85(s16, int);
};

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual s32 m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual M2C_UNK m39();
    virtual M2C_UNK m40();
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
    virtual M2C_UNK m60();
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
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual M2C_UNK m85(s16, M2C_UNK);
    virtual M2C_UNK m86();
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK get_speed__10TObjPlayerFPv(void *);
s32 query_teammate_state__9TObjEneDDFPv();
s32 update_lobby_state__9TObjEneDDFPv(void *);
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK TObjEneDD__sub_800BBA0C(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
u32 __nw__7TObjectFUl(int);
M2C_UNK run_tasks__7TObjectFv(void *);
M2C_UNK TObjPlayer__sub_802E6F10(void *, void *, int);
M2C_UNK fn_802E79B0(void *);
M2C_UNK TObjPlayer__sub_802E8234(void *);
M2C_UNK update_projectile_spawns__8TObjFishFPv(void *);
M2C_UNK TParticleCtrl__sub_802EC550(void *);
M2C_UNK TObjFish__sub_802EC7F0(void *);
M2C_UNK TObjPlayer__sub_802ECAA4(void *);
s32 TObjPlayer__sub_802ECB10();
M2C_UNK flee_if_disturbed__8TObjFishFPv(void *);
M2C_UNK sync_position_vectors__8TObjFishFi(void *);
void update_or_dispatch__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_802ED984(void);
M2C_UNK apply_with_callback__10TObjPlayerFPvif(int, int);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
M2C_UNK rotate_matrix_by_node_angles(void *, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK scale_current_matrix(void *);
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_flag__10TObjPlayerFv(void);
M2C_UNK clear_global_state__10TObjPlayerFv();
extern M2C_UNK lbl_804E3BF0[];
void TObjPlayer__sub_802ED988(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_802ED984(void);
void update_or_dispatch__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_802ECAA4(void *);
s32 TObjPlayer__sub_802ECB10();

void update_or_dispatch__10TObjPlayerFPv(void *arg0) {
    if (TObjPlayer__sub_802ECB10() != 0) {
        TObjPlayer__sub_802ECAA4(arg0);
        return;
    }
    ((VObj_802ED928*)arg0)->m85(M2C_FIELD(arg0, s16 *, 0x326), 9);
}

void TObjPlayer__sub_802ED984(void) {  }
void TObjPlayer__sub_802ED988(u8 *arg0) {
    s32 temp_r0_2;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r30;
    s32 temp_r3;
    TObjPlayer__sub_802ED984();
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x628);
    if (temp_r3 & 0x8000) {
        send_entity_set_flags__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (temp_r3 & 0x80) {
        M2C_FIELD(arg0, s32 *, 0x628) = (s32) (temp_r3 & 0xFFFFFF7F);
        M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) | 0x40);
        {
            void *p = (void *) __nw__7TObjectFUl((int) (0x3C));
            if (p != NULL) {
                TObjPlayer__sub_802E6F10(p, (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x6D4)));
            }
        }
    }
    if ((is_main_phase_15__9TObjEneDDFv() != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x6AC) == 0)) {
        if (update_lobby_state__9TObjEneDDFPv((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x6B8) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x6B8) = 1;
        }
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x6AC) != 0) && (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x624), s32 *, 8) & 0x10000)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x6B8);
        switch (temp_r0) {
        case 1:
            M2C_FIELD(arg0, s32 *, 0x6B8) = 0;
            TObjFish__sub_802EC7F0((void *) (arg0));
            break;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x6B8) = 2;
            break;
        case 2:
            M2C_FIELD(arg0, s32 *, 0x6B8) = 1;
            break;
        }
    }
    temp_r30 = query_teammate_state__9TObjEneDDFPv();
    ((VObj_18 *)(arg0))->m39();
    ((VObj_18 *)(arg0))->m40();
    if (temp_r30 == 0) {
        if ((M2C_FIELD(arg0, s16 *, 0x326) == 0x1C) || (M2C_FIELD(arg0, s16 *, 0x326) == 0x1D) || (M2C_FIELD(arg0, s16 *, 0x326) == 0x1B)) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800);
        } else {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF7FF);
        }
        temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x6B8);
        if (temp_r0_3 != 1) {
            if (temp_r0_3 == 2) {
                if (((s32 (*)(void *))TObjPlayer__sub_802ECB10)((void *) (arg0)) != 0) {
                    TObjPlayer__sub_802ECAA4((void *) (arg0));
                } else {
                    ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 2);
                }
            } else {
                update_or_dispatch__10TObjPlayerFPv((void *) (arg0));
            }
            if (((VObj_18 *)(arg0))->m30() != 0) {
                ((VObj_18 *)(arg0))->m60();
            }
            ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 8);
            ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 0);
        } else {
            if (((VObj_18 *)(arg0))->m30() != 0) {
                ((VObj_18 *)(arg0))->m60();
            }
            ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 0);
        }
        update_projectile_spawns__8TObjFishFPv((void *) (arg0));
    }
    TObjEneDD__sub_800BBA0C((void *) (arg0));
    ((VObj_18 *)(arg0))->m86();
    sync_position_vectors__8TObjFishFi((void *) (arg0));
    flee_if_disturbed__8TObjFishFPv((void *) (arg0));
    TParticleCtrl__sub_802EC550((void *) (arg0));
    if (temp_r30 == 0) {
        run_tasks__7TObjectFv((void *) (arg0 + 0x690));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7AC) != 0U) {
        set_global_flag__10TObjPlayerFv();
        push_matrix();
        TObjPlayer__sub_803D8CD4((int) (0));
        post_translate_matrix((void *) (arg0 + 0x38));
        post_translate_matrix((void *) (arg0 + 0x6EC));
        rotate_matrix_by_node_angles((void *) (arg0 + 0x5C), (int) (1));
        scale_current_matrix((void *) (lbl_804E3BF0));
        TObjPlayer__sub_802E8234((void *) (arg0));
        get_speed__10TObjPlayerFPv((void *) (arg0));
        apply_with_callback__10TObjPlayerFPvif((int) (M2C_FIELD(arg0, u32 *, 0x7AC)), (int) (M2C_FIELD(arg0, s32 *, 0xF8)));
        pop_matrix();
        clear_global_state__10TObjPlayerFv();
        fn_802E79B0((void *) (arg0));
    }
}

}
