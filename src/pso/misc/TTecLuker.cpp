#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_all_players__9TTecLukerFv(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TTecLuker__sub_802340A0(s32);

void apply_all_players__9TTecLukerFv(void) {
    s32 var_r31;
    u32 temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if (temp_r3 != 0U) {
            TTecLuker__sub_802340A0(temp_r3 + 0x830);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801A1880
#include "types.h"

extern "C" {

void set_state__9TTecLukerFPvi(void* p, s32 v);

void set_state__9TTecLukerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022BF28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_lifetime__9TTecLukerFPv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const f64 lbl_8044CDF0;

void tick_lifetime__9TTecLukerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x6C) = 1;
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 1);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x68) > M2C_FIELD(arg0, f32 *, 0x70)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022C008
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TTecLuker__sub_8022C008(u8 *arg0);
M2C_UNK TEffStarLightChild__sub_80141FBC(int, void *, int, f32);

void TTecLuker__sub_8022C008(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = (long) (arg0 + 0x20);
    TEffStarLightChild__sub_80141FBC((int) (temp_r3), (void *) (arg0 + 0x7C), (int) (temp_r3), (f32) (M2C_FIELD(arg0, f32 *, 0x64)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022C03C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8022C03C { char pad[0x18]; };
struct VObj_8022C03C : Base_8022C03C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};

extern "C" {

void dispatch_state__9TTecLukerFPv(void *arg0);
M2C_UNK TTecLuker__sub_8022BF8C(void *);
M2C_UNK TTecLuker__sub_8022C008();

void dispatch_state__9TTecLukerFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x6C);
    switch (temp_r0) {
    case 0:
        TTecLuker__sub_8022C008();
        TTecLuker__sub_8022BF8C(arg0);
        return;
    case 1:
        ((VObj_8022C03C *)arg0)->m5();
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022C0A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_technique_base__9TTecLukerFPvs(void *arg0, s16 arg1);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TEffectFv(void *, int);

extern M2C_UNK lbl_804CC148[];

void *destroy_technique_base__9TTecLukerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC148;
        if (M2C_FIELD(arg0, void **, 0xE8) != NULL) { TObjEneGibbles__sub_80156720(M2C_FIELD(arg0, void **, 0xE8)); }
        __dt__7TEffectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80233B38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__9TTecLukerFPvs(void *arg0, s16 arg1);
void TLobby__sub_80226294(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CC990[];

void *destroy__9TTecLukerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC990;
        TLobby__sub_80226294(M2C_FIELD(arg0, void **, 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80233C18
#include "types.h"

extern "C" {

void TTecLuker__sub_80233C18(void* p);

void TTecLuker__sub_80233C18(void* p) { *(s32*)((char*)p + 0xb0) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80233C24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_player_target__9TTecLukerFPv(u8 *arg0);
s32 TObjLuker__sub_801A0F34(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);

s32 is_split_screen();
extern const f32 lbl_805DC858;

void update_player_target__9TTecLukerFPv(u8 *arg0) {
    if (is_split_screen() != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
            return;
        }
        if (TObjLuker__sub_801A0F34(arg0 + 0x38, 0, lbl_805DC858) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
    } else {
        TObjPlayer__sub_801B4A18(arg0, -1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80233CA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__9TTecLukerFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK lbl_804CC9D4[];

void *__dt__9TTecLukerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC9D4;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80233DF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_for_player__9TTecLukerFii(int arg0, s32 arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK create__9TTecLukerFPvPvPvPv(s32, s32, s32, M2C_UNK);

void create_for_player__9TTecLukerFii(int arg0, s32 arg1) {
    u32 r = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg0);
    if (r != 0U) {
        create__9TTecLukerFPvPvPvPv(r, arg1, arg1, 0xA);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802340D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_fields__9TTecLukerFPvs(void *arg0, s16 arg1);

void init_fields__9TTecLukerFPvs(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023475C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TTecLuker__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        TTecLuker__ct(o, arg0, arg1, arg2, arg3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80234C90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BaseM_80234C90 { char pad[0x24]; };
struct VM_80234C90 : BaseM_80234C90 { virtual void m0(int); };

extern "C" {

void *__dt__9TTecLukerFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_technique_base__9TTecLukerFPvs(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern void* __vt__9TTecLuker[];

void *__dt__9TTecLukerFv(void *arg0, s16 arg1) {
    s32 temp_cr0_eq;
    void *temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__9TTecLuker;
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF8));
            M2C_FIELD(arg0, u32 *, 0xF8) = 0U;
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0xEC);
        if (temp_r3 != NULL) {
            if (temp_r3 != NULL) {
                ((struct VM_80234C90 *) temp_r3)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0xEC) = NULL;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF0));
            M2C_FIELD(arg0, u32 *, 0xF0) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0xF0) = 0U;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80234F68
#include "types.h"

extern "C" {

void TTecLuker__sub_80234F68(void* p);
s16 get_field_2__9TTecLukerFPv(void* p);
s32 TLobby__send_and_handle_60(s32);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFPv();

void TTecLuker__sub_80234F68(void* p) { *(s32*)((char*)p + 0x0) = 6; }
s16 get_field_2__9TTecLukerFPv(void* p) { return *(s16*)((char*)p + 0x2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802360E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_parents_unqueued__9TTecLukerFUi(u32 arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv();

s32 is_parents_unqueued__9TTecLukerFUi(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    if (all_parents_unqueued_for_destruction__7TObjectFv()) {
        return 1;
    }
    return 0;
}

}
#endif
#endif
