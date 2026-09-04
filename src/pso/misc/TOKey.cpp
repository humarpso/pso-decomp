#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__5TOKeyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern M2C_UNK __vt__5TOKey[];

void *__dt__5TOKeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__5TOKey;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80158534
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_key_base__5TOKeyFPvs(void *arg0, s16 arg1);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804AFBF8[];

void *destroy_key_base__5TOKeyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804AFBF8;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80169EE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_key_object__5TOKeyFPvs(void *arg0, s16 arg1);
void destroy_key_base__5TOKeyFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804B27D8[];

void *destroy_key_object__5TOKeyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B27D8;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80169F3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__5TOKeyFPv(void *arg0);
void TOKey__sub_80169FB0(void *);
void init_map_object_base(void *);

extern M2C_UNK lbl_804B27D8[];

void *init__5TOKeyFPv(void *arg0) {
    init_map_object_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B27D8;
    M2C_FIELD(arg0, u32 *, 0xD0) = -1;
    M2C_FIELD(arg0, u32 *, 0xC8) = 0;
    M2C_FIELD(arg0, u32 *, 0xAC) = 0;
    M2C_FIELD(arg0, u32 *, 0xCC) = 0;
    M2C_FIELD(arg0, u32 *, 0xD4) = 0;
    M2C_FIELD(arg0, u32 *, 0xD8) = 0;
    TOKey__sub_80169FB0((void *)((char *)arg0 + 152));
    M2C_FIELD(arg0, u32 *, 0xDC) = 0;
    M2C_FIELD(arg0, u32 *, 0xE0) = 1;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80169FB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8016A004 { char pad[0x18]; };
struct VObj_8016A004 : Base_8016A004 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16();
    virtual void m17();
};

extern "C" {

void TOKey__sub_80169FB0(void* p);
s32 set_ready_if_pressed__5TOKeyFPv(void *arg0);
void handle_switch_trigger__5TOKeyFPvPv(void *arg0, void *arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_800196EC();
M2C_UNK TSwitch__sub_802292E0(u16);
M2C_UNK TSwitch__sub_802293A0(u16);
s32 fn_801A2340();

void TOKey__sub_80169FB0(void* p) { *(s32*)((char*)p + 0x0) = 1; }
s32 set_ready_if_pressed__5TOKeyFPv(void *arg0) {
    if (fn_801A2340() == 1) {
        M2C_FIELD(arg0, s32 *, 0xE4) = 1;
        return 1;
    }
    return 0;
}

void handle_switch_trigger__5TOKeyFPvPv(void *arg0, void *arg1) {
    s32 temp_r0;

    if ((M2C_FIELD(arg1, u8 *, 0xB) & 2) && ((s8) M2C_FIELD(arg1, u8 *, 0xA) == TObjPlayer__sub_800196EC())) {
        TBoss3Volopt__sub_8022675C(0x4005281F, 0, 0, 0);
    }
    if (M2C_FIELD(arg1, u8 *, 0xB) & 1) {
        TSwitch__sub_802293A0(M2C_FIELD(arg1, u16 *, 8));
    } else {
        TSwitch__sub_802292E0(M2C_FIELD(arg1, u16 *, 8));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD4);
    switch (temp_r0) {
    case 0:
        ((VObj_8016A004 *)arg0)->m16();
        M2C_FIELD(arg0, s32 *, 0xD4) = 1;
        return;
    case 1:
        ((VObj_8016A004 *)arg0)->m17();
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016A19C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void trigger_camera_pan__5TOKeyFPvi(u8 *arg0, s32 arg1);
s32 calc_angle_to__10TObjPlayerFPvPv(s32, void *);
M2C_UNK start_camera_pan__10TObjPlayerFPvs(s32, M2C_UNK, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

void trigger_camera_pan__5TOKeyFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    if ((temp_r0 != 2) && ((temp_r0 != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1))) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg1);
        if (temp_r3 != 0) {
            start_camera_pan__10TObjPlayerFPvs(temp_r3, 0xC, calc_angle_to__10TObjPlayerFPvPv(temp_r3 + 0x38, arg0 + 0x38));
            M2C_FIELD(arg0, s32 *, 0xDC) = (s32) M2C_FIELD(arg0, s32 *, 0xD8);
            M2C_FIELD(arg0, s32 *, 0xE0) = 1;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016A388
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_confirm_pressed__5TOKeyFPv(void *arg0);
s32 TOKey__sub_8016A310();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);

extern s8 lbl_8050E208[];

s32 is_confirm_pressed__5TOKeyFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    if (temp_r0 == 2) {
        return 0;
    }
    if ((temp_r0 == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 1)) {
        return 0;
    }
    if ((TOKey__sub_8016A310() != 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016A8D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8016A8D0 { char pad[0x18]; };
struct VObj_8016A8D0 : Base_8016A8D0 {
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
};
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOKey__sub_8016A8D0(void *arg0);
void update_lock_state__5TOKeyFPv(void *arg0);
u8 TODoorAncient08__sub_80229220(u16);

void TOKey__sub_8016A8D0(void *arg0) {
    struct VObj_8016A8D0 *o = (struct VObj_8016A8D0 *)arg0;
    o->m20();
}

void update_lock_state__5TOKeyFPv(void *arg0) {
    u8 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xD0) != 2) {
        temp_r3 = TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s32 *, 0xC8));
        if (temp_r3 == 0) {
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        }
        if (temp_r3 == 1) {
            M2C_FIELD(arg0, s32 *, 0xD4) = 1;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016AB20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_switch_id__5TOKeyFPv(void *arg0);
void init_key__5TOKeyFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

void init_switch_id__5TOKeyFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
    if ((temp_r0 < 0) || (temp_r0 > 0xFF)) {
        M2C_FIELD(arg0, s32 *, 0xC8) = -1;
        M2C_FIELD(arg0, s32 *, 0xD0) = 2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
}

struct Base0_8016ab58 { char pad[0x18]; };
struct VObj0_8016ab58 : Base0_8016ab58 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); };

void init_key__5TOKeyFPv(u8 *arg0) {
    ((VObj0_8016ab58*)arg0)->m5();
    init_switch_id__5TOKeyFPv((void *)(arg0));
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x20) = 2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016AC04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOKey__ct(void *arg0);
void init_map_object_base(void *);
void set_type__14TOKeyAncient01FPv(void *);

extern M2C_UNK __vt__5TOKey[];
extern const f32 lbl_805DB6E0;
extern void *lbl_805D3010;

void *TOKey__ct(void *arg0) {
    init_map_object_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__5TOKey;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3010;
    M2C_FIELD(arg0, u32 *, 0xC8) = -1;
    M2C_FIELD(arg0, f32 *, 0xCC) = lbl_805DB6E0;
    M2C_FIELD(arg0, u32 *, 0xD0) = 2;
    M2C_FIELD(arg0, u32 *, 0xD4) = 0;
    M2C_FIELD(arg0, u32 *, 0xE0) = 0;
    M2C_FIELD(arg0, u32 *, 0xD8) = 28;
    M2C_FIELD(arg0, u32 *, 0xDC) = 28;
    set_type__14TOKeyAncient01FPv((void *)((char *)arg0 + 152));
    M2C_FIELD(arg0, u32 *, 0xE4) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016AC88
#include "types.h"

extern "C" {

int fn_8016AD3C(void* a0 = 0);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
void set_type__14TOKeyAncient01FPv(void* p);
void TOKeyAncient01__vt23(void);

void TOKey__sub_8016AC88(void) {  }
void TOKey__sub_8016AC8C(void) {  }
void TOKey__sub_8016AC90(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016AC94
#include "types.h"

extern "C" {

void bswap_6x05_switch_flag__5TOKeyFPv(void* p);
int TLobby__send_and_handle_60(void*);
void TOKeyAncient01__vt23(void);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);
int fn_8016AD3C(void* a0 = 0);
void set_type__14TOKeyAncient01FPv(void* p);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);

void bswap_6x05_switch_flag__5TOKeyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x8); }

}
#endif
#endif
