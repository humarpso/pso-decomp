#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

u16 get_trap_type__10TOMineTrapFPv(void* p);
void TOMineTrap__sub_80171348(void* p, s16 v);
void fn_80171314(void* p);
s16 TOMineTrap__sub_80171340(void* p);

int check_flag__10TObjPlayerFPvi(void*, void*);

void fn_80171314(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)65536); }
u16 get_trap_type__10TOMineTrapFPv(void* p) { return *(u16*)((char*)p + 0x2d8); }
s16 TOMineTrap__sub_80171340(void* p) { return *(s16*)((char*)p + 0x326); }
void TOMineTrap__sub_80171348(void* p, s16 v) { *(s16*)((char*)p + 0x2d8) = v; }

}
#else
#if PSO_CLASS_PACKAGE == 0x8016ED9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 matches_id__10TOMineTrapFPvUs(void *arg0, u16 arg1);

s32 matches_id__10TOMineTrapFPvUs(void *arg0, u16 arg1) {
    if ((arg1 == (u16) M2C_FIELD(arg0, u16 *, 0xA8)) && ((s32) M2C_FIELD(arg0, s32 *, 0xA4) != 2)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016F22C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOMineTrap__vt81(s32 arg0);
u32 TOMineTrapDisp__ct(u32, s32, u16, s32);
s32 get_trap_type__10TOMineTrapFPv(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 is_split_screen();

extern s32 lbl_805D53A0;

void TOMineTrap__vt81(s32 arg0) {
    u32 var_r31;
    u16 var_r30;

    if (is_split_screen() == 0) {
        var_r31 = __nw__7TObjectFUl(0xB0);
        if (var_r31 != 0U) {
            var_r31 = TOMineTrapDisp__ct(var_r31, arg0, (u16) lbl_805D53A0, get_trap_type__10TOMineTrapFPv(arg0));
        }
        if (var_r31 != 0U) {
            VecCopy__FP3VecPC3Vec(var_r31 + 0x50, arg0 + 0x50);
            VecCopy__FP3VecPC3Vec(var_r31 + 0x38, arg0 + 0x38);
        }
    } else {
        for (var_r30 = 0; var_r30 != 4; var_r30++) {
            var_r31 = __nw__7TObjectFUl(0xB0);
            if (var_r31 != 0U) {
                var_r31 = TOMineTrapDisp__ct(var_r31, arg0, var_r30, get_trap_type__10TOMineTrapFPv(arg0));
            }
            if (var_r31 != 0U) {
                VecCopy__FP3VecPC3Vec(var_r31 + 0x50, arg0 + 0x50);
                VecCopy__FP3VecPC3Vec(var_r31 + 0x38, arg0 + 0x38);
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016F3C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOMineTrap__vt10(void);
u16 get_trap_type__10TOMineTrapFPv();
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);

struct VObj8016F3C4Base { char pad[0x18]; };
struct VObj8016F3C4 : VObj8016F3C4Base { virtual s32 m0(); virtual s32 m1(); virtual s32 m2(); virtual s32 m3(); virtual s32 m4(); virtual s32 m5(); virtual s32 m6(); virtual s32 m7(); virtual s32 m8(); virtual s32 m9(); virtual s32 m10(); virtual s32 m11(); };

s32 TOMineTrap__vt10(void) {
    s32 var_r31;
    void *temp_r3;

    var_r31 = 0;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) get_trap_type__10TOMineTrapFPv());
    if (temp_r3 != NULL) {
        var_r31 = ((VObj8016F3C4 *)temp_r3)->m10();
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016F6F8
#include "types.h"

extern "C" {

void set_state__10TOMineTrapFPv(void* p);

void set_state__10TOMineTrapFPv(void* p) { *(s16*)((char*)p + 0x326) = 4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016FE28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* get_mine_data_ptr__10TOMineTrapFPv(void* p);
void *__dt__10TOMineTrapFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__6TOMineFv(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);

void* get_mine_data_ptr__10TOMineTrapFPv(void* p) { return (char*)p + 0x334; }

extern M2C_UNK __vt__10TOMineTrap[];

void *__dt__10TOMineTrapFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TOMineTrap;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__6TOMineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80170340
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOMineTrap__sub_801702C8(void);
s32 TObjPlayer__sub_80019248(u32 a0 = 0);
int TOMineTrap__sub_80170340(void);
int TOMineTrap__sub_80170348(void);
void TOMineTrap__sub_80170350(void);
void TOMineTrap__sub_80170354(void);

int TOMineTrap__sub_80170340(void) { return 1; }
int TOMineTrap__sub_80170348(void) { return 1; }
void TOMineTrap__sub_80170350(void) {  }
void TOMineTrap__sub_80170354(void) {  }
s32 check_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1) {
    if (TOMineTrap__sub_801702C8() == 1) {
        return 0;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x344) == 2) && (arg1 == (u32) M2C_FIELD(arg0, u32 *, 0x2A8))) {
        return 0;
    }
    if (TObjPlayer__sub_80019248(arg1) != 0) {
        return 1;
    }
    return 0;
}
s32 can_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1) {
    if (TOMineTrap__sub_801702C8() == 1) {
        return 0;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x344) == 2) && (arg1 == (u32) M2C_FIELD(arg0, u32 *, 0x2A8))) {
        return 0;
    }
    if (TObjPlayer__sub_80019248(arg1) != 0) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80170570
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOMineTrap__sub_80170570(void);
void init_trap__10TOMineTrapFv(void);
void update_state__10TOMineTrapFPv(void *arg0);
s32 get_main_phase();
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);

void TOMineTrap__sub_80170570(void) {  }
void init_trap__10TOMineTrapFv(void) { TAdSinglePlyChrSelectGC__sub_80132F2C((void*)16, (void*)16); }
void update_state__10TOMineTrapFPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x348) = (s32) M2C_FIELD(arg0, f32 *, 0x70);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x348);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
        return;
    }
    if (temp_r0 > 0) {
        M2C_FIELD(arg0, s32 *, 0x344) = 1;
        return;
    }
    if (get_main_phase() == 0xE) {
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
        M2C_FIELD(arg0, s32 *, 0x8C) = 0x1E;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x344) = 2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80170628
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_effect__10TOMineTrapFi(s32 arg0);
void attach_to_keymachine__10TOMineTrapFi(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);

extern s8 lbl_804420A8[];

void spawn_effect__10TOMineTrapFi(s32 arg0) {
    s32 idx = get_global_state__14TOKeyMachine01Fv();
    s32 elem = *(s32 *)(lbl_804420A8 + idx * 4);
    if (elem != -1) {
        TBoss3Volopt__sub_8022675C(elem, arg0 + 0x38, 0, 0);
    }
}

extern s8 lbl_80442018[];

void attach_to_keymachine__10TOMineTrapFi(s32 arg0) {
    s32 idx = get_global_state__14TOKeyMachine01Fv();
    s32 elem = *(s32 *)(lbl_80442018 + idx * 4);
    if (elem != -1) {
        TBoss3Volopt__sub_8022675C(elem, arg0 + 0x38, 0, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801706D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void detonate_if_triggered__10TOMineTrapFi(s32 arg0);
M2C_UNK set_position_xy__10TObjPlayerFPvff(f32, f32);
u32 TObjEneDellBiter__sub_80087350(s32, M2C_UNK);

extern f32 lbl_805DB864;

void detonate_if_triggered__10TOMineTrapFi(s32 arg0) {
    if (TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0x45) != 0U) {
        set_position_xy__10TObjPlayerFPvff(lbl_805DB864, lbl_805DB864);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80170830
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 trigger_explosion__10TOMineTrapFPv(void *arg0);
M2C_UNK TObjPlayer__sub_80154954(void *, s16 *);
s32 TLobby__sub_80156A80(void*, s16 *, M2C_UNK);

extern f32 lbl_805DB85C;

f32 trigger_explosion__10TOMineTrapFPv(void *arg0) {
    s16 sp8;

    if (((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x4000U) && ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (TLobby__sub_80156A80(arg0, &sp8, 1) != 0)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        sp8 = M2C_FIELD(arg0, s16 *, 0x326);
        TObjPlayer__sub_80154954(arg0, &sp8);
    }
    return lbl_805DB85C;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801708A4
#include "types.h"
struct Base_801708A4 { char pad[0x18]; };
struct VObj_801708A4 : Base_801708A4 {
    virtual int v00();
    virtual int v01();
    virtual int v02();
    virtual int v03();
    virtual int v04();
    virtual int v05();
    virtual int v06();
    virtual int v07();
    virtual int v08();
    virtual int v09();
    virtual int v10();
    virtual int v11();
    virtual int v12();
    virtual int v13();
    virtual int v14();
    virtual int v15();
    virtual int v16();
    virtual int v17();
    virtual int v18();
    virtual int v19();
    virtual void v20(int, f32);
};

extern "C" {

f32 calc_trigger_range__10TOMineTrapFPvi(void *arg0, s32 arg1);
s32 TOMineTrap__sub_801702C8();
s32 TObjPlayer__sub_80019248(s32);

s16 obj_getS16_116(s32);
extern f32 lbl_805DB85C;
extern f32 TOMineTrap__data_805DB868;

f32 calc_trigger_range__10TOMineTrapFPvi(void *arg0, s32 arg1) {
    if (TOMineTrap__sub_801702C8() == 1) {
        return lbl_805DB85C;
    }
    if ((TObjPlayer__sub_80019248(arg1) != 0) && (obj_getS16_116(arg1) != 0)) {
        ((VObj_801708A4 *)arg0)->v20(0, TOMineTrap__data_805DB868);
    }
    return lbl_805DB85C;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801709EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_trigger__10TOMineTrapFPv(void *arg0);
M2C_UNK TObjPlayer__sub_80154954(void *, s16 *);
s32 TLobby__sub_80156A80(void *, s16 *, M2C_UNK);

void update_trigger__10TOMineTrapFPv(void *arg0) {
    s16 sp8;

    if (((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x4000U) && ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (TLobby__sub_80156A80(arg0, &sp8, 1) != 0)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        sp8 = M2C_FIELD(arg0, s16 *, 0x326);
        TObjPlayer__sub_80154954(arg0, &sp8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80170CD4
#include "types.h"

extern "C" {

int TOMineTrap__sub_80170CD4(void* p);

int sync_position__10TOMineTrapFPv(void*);

int TOMineTrap__sub_80170CD4(void* p) { return sync_position__10TOMineTrapFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80170D9C
#include "types.h"

extern "C" {

void sync_position__10TOMineTrapFPv(void* p);

int VecCopy__FP3VecPC3Vec(void*, void*);
int TObjPlayer__sub_80154E3C(void*);

void sync_position__10TOMineTrapFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x38, (char*)p + 0x334); TObjPlayer__sub_80154E3C(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80171350
#include "types.h"

extern "C" {

int TOMineTrap__sub_80171350(void);
u16 TOMineTrap__sub_80171358(void* p);
int get_trap_count__10TOMineTrapFv(void);

    extern int lbl_805D3078;
int TOMineTrap__sub_80171350(void) {  return lbl_805D3078; }

u16 TOMineTrap__sub_80171358(void* p) { return *(u16*)((char*)p + 0x37e); }

    extern int lbl_805D5A54;
int get_trap_count__10TOMineTrapFv(void) {  return lbl_805D5A54; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80171370
#include "types.h"

extern "C" {

void set_instance__10TOMineTrapFi(int a0);
void set_trap_count__10TOMineTrapFi(int a0);

    extern int lbl_805D3078;
void set_instance__10TOMineTrapFi(int a0) { lbl_805D3078 = a0; }

    extern int lbl_805D5A54;
void set_trap_count__10TOMineTrapFi(int a0) { lbl_805D5A54 = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80171380
#include "types.h"

extern "C" {

void TOMineTrap__sub_80171380(void);
void TOMineTrap__sub_8017141C(void* p);
void TOMineIcon01__vt82(void);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);

void TOMineTrap__sub_80171380(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801713AC
#include "types.h"

extern "C" {

void TOMineTrap__sub_80171380(void);
void TOMineTrap__sub_8017141C(void* p);
void TOMineIcon01__vt82(void);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);

void bswap_6x80_trigger_trap__10TOMineTrapFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void send_and_handle_60__10TOMineTrapFPv(void* p) { bswap_6x80_trigger_trap__10TOMineTrapFPv(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8017141C
#include "types.h"

extern "C" {

void TOMineTrap__sub_8017141C(void* p);
int TLobby__send_and_handle_60(void*);
void TOMineIcon01__vt82(void);
void TOMineTrap__sub_80171380(void);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

void TOMineTrap__sub_8017141C(void* p) { *(u8*)((char*)p + 0x0) = 128; *(u8*)((char*)p + 0x1) = 2; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801B045C
#include "types.h"

extern "C" {

int update_trap_sub__10TOMineTrapFPv(void* p);
int TOMineTrap__sub_801D6A44(void*);

int update_trap_sub__10TOMineTrapFPv(void* p) { return TOMineTrap__sub_801D6A44((char*)p + 0x76c); }

}
#endif
#endif
