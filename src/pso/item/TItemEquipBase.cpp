#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void reset__14TItemEquipBaseFPv(void* p);

int memset(void*, void*, void*);

void reset__14TItemEquipBaseFPv(void* p) { memset((char*)p + 0xf8, (void*)0, (void*)36); memset((char*)p + 0x11c, (void*)0, (void*)48); memset((char*)p + 0x14c, (void*)0, (void*)32); memset((char*)p + 0x16c, (void*)0, (void*)4); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8010A788
#include "types.h"

extern "C" {

void* fn_8010A768(void* p);
void TItemEquipBase__sub_8010A788(void);

void TItemEquipBase__sub_8010A788(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010A938
#include "types.h"

extern "C" {

void TItemEquipBase__sub_8010A938(void);
void TItemEquipBase__sub_8010A93C(void);
void TItemEquipBase__sub_8010A940(void);
void TItemEquipBase__vt42(void);

void TItemEquipBase__sub_8010A938(void) {  }
void TItemEquipBase__sub_8010A93C(void) {  }
void TItemEquipBase__sub_8010A940(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010A944
#include "types.h"

extern "C" {

void TItemEquipBase__sub_8010A938(void);
void TItemEquipBase__sub_8010A93C(void);
void TItemEquipBase__sub_8010A940(void);
void TItemEquipBase__vt42(void);

void TItemEquipBase__vt42(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010ACC8
#include "types.h"

extern "C" {

s32 clear_flags__11TAdRicoRingFPvUi(s32, s32);
s32 TObjPlayer__sub_8001BEF8(s32);
void set_equip_flag__14TItemEquipBaseFPvUc(void* p, u8 v);

s32 apply_ad_rico_ring__14TItemEquipBaseFii(s32 arg0, s32 arg1) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x178) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x178, arg1);
        return 1;
    }
    return 0;
}
void set_equip_flag__14TItemEquipBaseFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x171) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010AD80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemEquipBase__sub_8010AD80(s32 unused, s16 *arg1, s16 arg2);

void TItemEquipBase__sub_8010AD80(s32 unused, s16 *arg1, s16 arg2) {
    if (arg2 > 0) {
        *arg1 -= arg2;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010AD98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void subtract_equip_stats__14TItemEquipBaseFPviPvPv(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3);
s32 get_id__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_800194E8(void *);
s32 get_level__10TObjPlayerFPv(void *);
M2C_UNK fn_8010B7D8(void *, void *);
M2C_UNK fn_8010B7E8(void *, void *);
M2C_UNK TItemData__sub_8010B7F8(void *, void *);

void subtract_equip_stats__14TItemEquipBaseFPviPvPv(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    if (arg1 != 0) {
        TItemData__sub_8010B7F8((void *) (arg1), (void *) (get_id__10TObjPlayerFPv((void *) (arg0 + 0x11C))));
        fn_8010B7E8((void *) (arg1), (void *) (get_level__10TObjPlayerFPv((void *) (arg0 + 0x11C))));
        fn_8010B7D8((void *) (arg1), (void *) (TObjPlayer__sub_800194E8((void *) (arg0 + 0x11C))));
    }
    if (arg2 != NULL) {
        M2C_FIELD(arg2, s16 *, 0) = (s16) (M2C_FIELD(arg2, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0x14C));
        M2C_FIELD(arg2, s32 *, 0x1C) = (s32) (M2C_FIELD(arg2, s32 *, 0x1C) - M2C_FIELD(arg0, s32 *, 0x168));
        M2C_FIELD(arg2, s16 *, 2) = (s16) (M2C_FIELD(arg2, s16 *, 2) - M2C_FIELD(arg0, s16 *, 0x14E));
        M2C_FIELD(arg2, s16 *, 4) = (s16) (M2C_FIELD(arg2, s16 *, 4) - M2C_FIELD(arg0, s16 *, 0x150));
        M2C_FIELD(arg2, s16 *, 6) = (s16) (M2C_FIELD(arg2, s16 *, 6) - M2C_FIELD(arg0, s16 *, 0x152));
        M2C_FIELD(arg2, s16 *, 8) = (s16) (M2C_FIELD(arg2, s16 *, 8) - M2C_FIELD(arg0, s16 *, 0x154));
        M2C_FIELD(arg2, s16 *, 0xA) = (s16) (M2C_FIELD(arg2, s16 *, 0xA) - M2C_FIELD(arg0, s16 *, 0x156));
    }
    if (arg3 != NULL) {
        M2C_FIELD(arg3, s16 *, 0) = (s16) (M2C_FIELD(arg3, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0xF8));
        M2C_FIELD(arg3, s16 *, 2) = (s16) (M2C_FIELD(arg3, s16 *, 2) - M2C_FIELD(arg0, s16 *, 0xFA));
        M2C_FIELD(arg3, s16 *, 4) = (s16) (M2C_FIELD(arg3, s16 *, 4) - M2C_FIELD(arg0, s16 *, 0xFC));
        M2C_FIELD(arg3, s16 *, 6) = (s16) (M2C_FIELD(arg3, s16 *, 6) - M2C_FIELD(arg0, s16 *, 0xFE));
        M2C_FIELD(arg3, s16 *, 8) = (s16) (M2C_FIELD(arg3, s16 *, 8) - M2C_FIELD(arg0, s16 *, 0x100));
        M2C_FIELD(arg3, s16 *, 0xA) = (s16) (M2C_FIELD(arg3, s16 *, 0xA) - M2C_FIELD(arg0, s16 *, 0x102));
        M2C_FIELD(arg3, s16 *, 0xC) = (s16) (M2C_FIELD(arg3, s16 *, 0xC) - M2C_FIELD(arg0, s16 *, 0x104));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010B054
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_equip__14TItemEquipBaseFPv(void *arg0);
M2C_UNK destroy__5TItemFPv(void *);
s8 TObjPlayer__sub_80102C30();

struct Base_8010B054 { char pad[0x18]; };
struct VObj_8010B054 : Base_8010B054 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();
    virtual void m7();  virtual void m8();  virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18();
    virtual void m19();
};

void update_equip__14TItemEquipBaseFPv(void *arg0) {
    if (TObjPlayer__sub_80102C30() == 2) {
        ((VObj_8010B054 *)arg0)->m19();
    }
    destroy__5TItemFPv(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010B530
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemLoad__sub_801103F4(s16);
s32 get_field_ed__10TObjPlayerFPv();
void TItemEquipBase__sub_8010B620(void);

void release__14TItemEquipBaseFPv(void *arg0) {
    s16 temp = M2C_FIELD(arg0, s16 *, 0x172);
    if (temp != -1) {
        TItemLoad__sub_801103F4(temp);
        M2C_FIELD(arg0, s16 *, 0x172) = -1;
        M2C_FIELD(arg0, s32 *, 0xF4) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x188) = 0;
        M2C_FIELD(arg0, s32 *, 0x17C) = 0;
        M2C_FIELD(arg0, s32 *, 0x180) = 0;
        M2C_FIELD(arg0, s32 *, 0x184) = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010B5E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TItemEquipBase__sub_8010B58C(void* a0 = 0, void* a1 = 0);

s32 TItemLoad__sub_801103F4(s16);
s32 get_field_ed__10TObjPlayerFPv();
void TItemEquipBase__sub_8010B620(void);

void update_with_player__14TItemEquipBaseFi(s32 arg0) {
    TItemEquipBase__sub_8010B58C((void*)(arg0), (void*)(get_field_ed__10TObjPlayerFPv()));
}
void TItemEquipBase__sub_8010B620(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010B624
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TItemEquipBaseFv(void *arg0, s16 arg1);
void TItemEquipBase__sub_8010AAD0(void *);
void __dt__5TItemFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK __vt__14TItemEquipBase[];

void *__dt__14TItemEquipBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TItemEquipBase;
        TItemEquipBase__sub_8010AAD0(arg0);
        __dt__5TItemFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010B76C
#include "types.h"

extern "C" {

void init_slot__14TItemEquipBaseFPv(void* a0);

    extern const float lbl_805DAB60;
void init_slot__14TItemEquipBaseFPv(void* a0) { *(short*)((char*)a0 + 0x0) = -1; *(short*)((char*)a0 + 0x2) = 0; *(float*)((char*)a0 + 0x4) = lbl_805DAB60; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010B788
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1);
void TItemData__sub_8010B818(void *arg0, s32 arg1);
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1);
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1);
int check_flag_32__14TItemEquipBaseFPv(void* p);
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p);
s32 TItemData__sub_8010B808(void* p);
s32 TItemData__sub_8010B810(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);

int check_flag_32__14TItemEquipBaseFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0xc, 32); }
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0xc, 32); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80119100
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemEquipBase__sub_80119100(int arg0);
M2C_UNK TObjEneMe3Stelth__sub_800F5864(u32, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

void TItemEquipBase__sub_80119100(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5864(temp, 0x20);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80119168
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemEquipBase__sub_80119168(int arg0);
M2C_UNK TObjEneMe3Stelth__sub_800F5864(u32, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

void TItemEquipBase__sub_80119168(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5864(temp, 8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011919C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemEquipBase__sub_8011919C(int arg0);
M2C_UNK TObjEneMe3Stelth__sub_800F5864(u32, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

void TItemEquipBase__sub_8011919C(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5864(temp, 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801191D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemEquipBase__sub_801191D0(int arg0);
M2C_UNK TObjEneMe3Stelth__sub_800F5864(u32, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

void TItemEquipBase__sub_801191D0(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5864(temp, 2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022F1C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_slot__14TItemEquipBaseFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TItemEquipBase__sub_8022F1F4(s32, s32);

void set_slot__14TItemEquipBaseFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 < 6) {
        TItemEquipBase__sub_8022F1F4(arg0 + (arg1 * 8), arg2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022F1F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemEquipBase__sub_8022F1F4(void *arg0, void *arg1);
void init_slots__14TItemEquipBaseFPv(void* p);
int init_slot__14TItemEquipBaseFPv(void*);

void TItemEquipBase__sub_8022F1F4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
}

void init_slots__14TItemEquipBaseFPv(void* p) { { int i; for (i = 0; i < 6; i++) { init_slot__14TItemEquipBaseFPv((char*)p + i * 8); } } }

}
#endif
#endif
