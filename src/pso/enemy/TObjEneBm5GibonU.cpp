#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TObjEneBm5GibonUFPv(void *arg0);
void *TObjEneBm5GibonU__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__16TObjEneBm5GibonUFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x568);
    if (o != NULL) {
        o = TObjEneBm5GibonU__ct(o, tl_04, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800CCC4C
#include "types.h"

extern "C" {

int get_attack_state__16TObjEneBm5GibonUFPv(void* p);
int TObjEneBm5GibonU__sub_800CCC6C(void*);

int get_attack_state__16TObjEneBm5GibonUFPv(void* p) { return TObjEneBm5GibonU__sub_800CCC6C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CD194
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__16TObjEneBm5GibonUFPv(void *arg0);
M2C_UNK TObjEneBm5GibonU__sub_800D10A0(void *);
M2C_UNK update_center_position__16TObjEneBm5GibonUFPv(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D184C(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D187C(void *);
s32 get_target_info__9TObjEneDDFPv();

void update_state__16TObjEneBm5GibonUFPv(void *arg0) {
    s32 temp_r31;

    if (get_target_info__9TObjEneDDFPv() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x464);
        TObjEneBm5GibonU__sub_800D10A0(arg0);
        if (temp_r31 != (s32) M2C_FIELD(arg0, s32 *, 0x464)) {
            if (temp_r31 != 0) {
                TObjEneBm5GibonU__sub_800D184C(arg0);
            } else {
                TObjEneBm5GibonU__sub_800D187C(arg0);
            }
        }
        update_center_position__16TObjEneBm5GibonUFPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CD570
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_anim_frame__16TObjEneBm5GibonUFv(void);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);

extern s32 TObjEneBm5GibonU__data_805D51D4;
extern s32 TObjEneBm5GibonU__data_805D51D8;

void advance_anim_frame__16TObjEneBm5GibonUFv(void) {
    if (((s32) TObjEneBm5GibonU__data_805D51D4 >= 0x30) && ((s32) TObjEneBm5GibonU__data_805D51D4 < 0x32)) {
        TObjPlayer__sub_803D9214(0, TObjEneBm5GibonU__data_805D51D8);
    }
    TObjEneBm5GibonU__data_805D51D4 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CE560
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_VT { char pad[0x18]; };
struct VObj_CE : Base_VT {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    PADV
    PADV
    virtual void m87();
    PADV4
    PADV
    PADV
    virtual void m95();
};

extern "C" {

void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1);
M2C_UNK TObjEneBm5GibonU__sub_800D086C(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D08E4(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D0FDC(void *, s32);
M2C_UNK TObjEneBm5GibonU__sub_800D17E8(s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, M2C_UNK, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

extern const f32 TObjEneBm5GibonU__data_805DA178;

void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        ((VObj_CE *)arg0)->m95();
        set_field_378__9TObjEneDDFPvi(arg0, 8);
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        TObjEneBm5GibonU__sub_800D17E8(M2C_FIELD(arg0, s32 *, 0x46C));
        return;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 8);
        }
    case 5:
        return;
    case 0:
        TBoss1Dragon__sub_80143504(arg0);
        TObjEneBm5GibonU__sub_800D0FDC(arg0, M2C_FIELD(arg0, s32 *, 0x60));
        if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA178) != 0) {
            TBoss3Volopt__sub_8022675C((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AA22), arg0 + 0x38, 0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x518) = (s32) (M2C_FIELD(arg0, s32 *, 0x518) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x518);
        if (temp_r0 == 0x1E) {
            TObjEneBm5GibonU__sub_800D08E4(arg0);
        } else if (temp_r0 == 0x28) {
            TObjEneBm5GibonU__sub_800D086C(arg0);
        }
        ((VObj_CE *)arg0)->m87();
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800CFE30
#include "types.h"

extern "C" {

void TObjEneBm5GibonU__sub_800CFE30(void);

void TObjEneBm5GibonU__sub_800CFE30(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D095C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5GibonU__sub_800D095C(void *arg0, s32 arg1, s16 arg2);

void TObjEneBm5GibonU__sub_800D095C(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0x510) = arg1;
    M2C_FIELD(arg0, s16 *, 0x514) = arg2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D0A88
#include "types.h"

extern "C" {

int is_active__16TObjEneBm5GibonUFPv(void* p);

int is_active__16TObjEneBm5GibonUFPv(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D0B50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_sound_variant__16TObjEneBm5GibonUFPv(void *arg0);
void update_target__16TObjEneBm5GibonUFPv(void *arg0);
void set_flag__16TObjEneBm5GibonUFPv(void* p);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(f32);

extern f32 lbl_805DA244;
extern f32 lbl_805DA248;

void play_sound_variant__16TObjEneBm5GibonUFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x464) != 0) {
        update_linked_position__14TObjEneEpsilonFPv(lbl_805DA244);
        return;
    }
    update_linked_position__14TObjEneEpsilonFPv(lbl_805DA248);
}

extern f32 lbl_805DA244;
extern f32 lbl_805DA248;

void update_target__16TObjEneBm5GibonUFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x464) != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805DA244);
        return;
    }
    select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805DA248);
}

void set_flag__16TObjEneBm5GibonUFPv(void* p) { *(u32*)((char*)p + 0x4ac) |= 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D0C7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_anim_by_state__16TObjEneBm5GibonUFPv(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void set_anim_by_state__16TObjEneBm5GibonUFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x464) != 0) {
        TObjEneDD__sub_800BBA18(arg0, 7);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 6);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D0CB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_attack_by_range__16TObjEneBm5GibonUFPv(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi();

extern const f32 TObjEneBm5GibonU__data_805DA158;
extern const f32 TObjEneBm5GibonU__data_805DA15C;

void select_attack_by_range__16TObjEneBm5GibonUFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x49C) = TObjEneBm5GibonU__data_805DA15C;
    if (calc_boss4_scale__10TObjPlayerFi() < TObjEneBm5GibonU__data_805DA158) {
        TObjEneDD__sub_800BBA18(arg0, 9);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 0xA);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D0D14
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_rotated_vector__16TObjEneBm5GibonUFPviPvPv(void *arg0, s32 arg1, void *arg2, s32 *arg3);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f64 TObjEneBm5GibonU__data_8043C0F8;

void calc_rotated_vector__16TObjEneBm5GibonUFPviPvPv(void *arg0, s32 arg1, void *arg2, s32 *arg3) {
    f32 temp_f1;
    f32 temp_f31;

    temp_f31 = TBoss8Dragon__sub_803D64C0(arg1);
    temp_f1 = TBoss8Dragon__sub_803D64DC(arg1);
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((temp_f1 * M2C_FIELD(arg0, f32 *, 0x3A8)) - (temp_f31 * M2C_FIELD(arg0, f32 *, 0x3A0)));
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_f31 * M2C_FIELD(arg0, f32 *, 0x3A8)) + (temp_f1 * M2C_FIELD(arg0, f32 *, 0x3A0)));
    *arg3 = (s32) (TObjEneBm5GibonU__data_8043C0F8 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 8)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D0DBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void approach_target__16TObjEneBm5GibonUFPvf(void *arg0, f32 farg0);

void approach_target__16TObjEneBm5GibonUFPvf(void *arg0, f32 farg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x498);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x494);
    if (temp_f2 != temp_f0) {
        if (temp_f2 > temp_f0) {
            M2C_FIELD(arg0, f32 *, 0x498) = (f32) (temp_f2 - farg0);
            if (M2C_FIELD(arg0, f32 *, 0x498) < M2C_FIELD(arg0, f32 *, 0x494)) {
                M2C_FIELD(arg0, f32 *, 0x498) = M2C_FIELD(arg0, f32 *, 0x494);
            }
        } else {
            M2C_FIELD(arg0, f32 *, 0x498) = (f32) (temp_f2 + farg0);
            if (M2C_FIELD(arg0, f32 *, 0x498) > M2C_FIELD(arg0, f32 *, 0x494)) {
                M2C_FIELD(arg0, f32 *, 0x498) = M2C_FIELD(arg0, f32 *, 0x494);
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D119C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5GibonU__sub_800D119C(u8 *arg0);

extern const f32 TObjEneBm5GibonU__data_805DA178;

void TObjEneBm5GibonU__sub_800D119C(u8 *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) TObjEneBm5GibonU__data_805DA178;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D11AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_center_position__16TObjEneBm5GibonUFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *, f32);

extern const f32 TObjEneBm5GibonU__data_805DA178;

void update_center_position__16TObjEneBm5GibonUFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (TObjEneBm5GibonU__data_805DA178 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (TObjEneBm5GibonU__data_805DA178));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D11F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5GibonU__sub_800D11F8(void);
void set_state__16TObjEneBm5GibonUFPv(void* p);
void set_anim_hit__16TObjEneBm5GibonUFPv(void *arg0);
void TObjEneBm5GibonU__sub_800D1264(void);
int TObjEneDD__sub_800BBA18(void*, void*);

void TObjEneBm5GibonU__sub_800D11F8(void) {  }
void set_state__16TObjEneBm5GibonUFPv(void* p) { if (*(short*)((char*)p + 0x326) != 16) { TObjEneDD__sub_800BBA18(p, (void*)16); } }
void set_anim_hit__16TObjEneBm5GibonUFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0x11) && (temp_r0 != 0x12)) {
        TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(0x11));
    }
}
void TObjEneBm5GibonU__sub_800D1264(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D190C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_resource__16TObjEneBm5GibonUFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjEneBm5GibonU__data_805D51D0;

void release_static_resource__16TObjEneBm5GibonUFv(void) {
    if ((u32) TObjEneBm5GibonU__data_805D51D0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneBm5GibonU__data_805D51D0, 1);
        TObjEneBm5GibonU__data_805D51D0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D1B0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TPhotonMylla__sub_80154CB4(u16);
s16 obj_getField1c(s32);
s32 __dt__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1);
int __dl__FPv();
s32 destroy__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1);
int TObjEneBm5GibonU__sub_800D1C40(void* a0 = 0, void* a1 = 0, void* a2 = 0);
int TObjEneBm5GibonU__sub_800D1C78(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void forward_hit__16TObjEneBm5GibonUFPvPv(void* p, void* a1);
void init_child__16TObjEneBm5GibonUFPvPv(void* p, void* a1);
void reset_fields__16TObjEneBm5GibonUFPv(void* p);

void forward_hit__16TObjEneBm5GibonUFPvPv(void* p, void* a1) { TObjEneBm5GibonU__sub_800D1C78(a1, p, (char*)p + 0x4); }
void init_child__16TObjEneBm5GibonUFPvPv(void* p, void* a1) { TObjEneBm5GibonU__sub_800D1C40(a1, p, (char*)p + 0x4); }
void reset_fields__16TObjEneBm5GibonUFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 __dt__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void* reset__16TObjEneBm5GibonUFPv(void* p) { reset_fields__16TObjEneBm5GibonUFPv(p); return p; }
void update_photon_mylla__16TObjEneBm5GibonUFPv(void *arg0) {
    TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 8));
}
void set_field8_from_obj__16TObjEneBm5GibonUFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = obj_getField1c(arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D1CBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TPhotonMylla__sub_80154CB4(u16);
s16 obj_getField1c(s32);
s32 __dt__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1);
int __dl__FPv();
s32 destroy__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1);
int TObjEneBm5GibonU__sub_800D1C40(void* a0 = 0, void* a1 = 0, void* a2 = 0);
int TObjEneBm5GibonU__sub_800D1C78(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void forward_hit__16TObjEneBm5GibonUFPvPv(void* p, void* a1);
void init_child__16TObjEneBm5GibonUFPvPv(void* p, void* a1);
void reset_fields__16TObjEneBm5GibonUFPv(void* p);

s32 destroy__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D1D70
#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80016D78();
s32 TObjPlayer__sub_80016C54();
s32 TObjEneBm5GibonU__sub_800D1D70(void* p);
void* TObjEneBm5GibonU__sub_800D1D78(void* p);

s32 TObjEneBm5GibonU__sub_800D1D70(void* p) { return *(s32*)((char*)p + 0x46c); }
void* TObjEneBm5GibonU__sub_800D1D78(void* p) { return (char*)p + 0x47c; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D1DBC
#include "types.h"

extern "C" {
int TObjEneBm5GibonU__sub_800D1D80(void* a0 = 0);

s32 TObjPlayer__sub_80016D78();
s32 TObjPlayer__sub_80016C54();
s32 TObjEneBm5GibonU__sub_800D1D70(void* p);
void* TObjEneBm5GibonU__sub_800D1D78(void* p);

s32 check_and_update__16TObjEneBm5GibonUFi(s32 arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        TObjEneBm5GibonU__sub_800D1D80((void*)(arg0));
        return 1;
    }
    return 0;
}
s32 try_activate__16TObjEneBm5GibonUFi(s32 arg0) {
    if (TObjPlayer__sub_80016C54() != 0) {
        TObjEneBm5GibonU__sub_800D1D80((void*)(arg0));
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801833C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__16TObjEneBm5GibonUFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804B5C40[];

void *destroy__16TObjEneBm5GibonUFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5C40;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
