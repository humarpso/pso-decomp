#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int get_instance__11TCameraCtrlFv(void);
int get_camera_id__11TCameraCtrlFv(void);
void set_target__11TCameraCtrlFii(int a0, int a1);
void set_target_coords__11TCameraCtrlFii(int a0, int a1);
u16 TCameraCtrl__sub_8006B358(void* p);
s32 get_mode__11TCameraCtrlFPv(void* p);
int TCameraCtrl__sub_8006B368(void);

    extern int lbl_805D34B8;
int get_instance__11TCameraCtrlFv(void) {  return lbl_805D34B8; }

    extern int lbl_805D4E04;
int get_camera_id__11TCameraCtrlFv(void) {  return lbl_805D4E04; }

    extern short TCameraCtrl__data_805D2838;
    extern short TCameraCtrl__data_805D283A;
void set_target__11TCameraCtrlFii(int a0, int a1) { TCameraCtrl__data_805D2838 = a0; TCameraCtrl__data_805D283A = a1; }

    extern short TCameraCtrl__data_805D4DFA;
    extern short TCameraCtrl__data_805D4DFC;
void set_target_coords__11TCameraCtrlFii(int a0, int a1) { TCameraCtrl__data_805D4DFA = a0; TCameraCtrl__data_805D4DFC = a1; }

u16 TCameraCtrl__sub_8006B358(void* p) { return *(u16*)((char*)p + 0x20); }
s32 get_mode__11TCameraCtrlFPv(void* p) { return *(s32*)((char*)p + 0x1c); }

    extern int lbl_805D5ED8;
int TCameraCtrl__sub_8006B368(void) {  return lbl_805D5ED8; }

}
#else
#if PSO_CLASS_PACKAGE == 0x8002ADD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 get_camera_mode__11TCameraCtrlFv(void);

extern s16 lbl_805D4E08;

s16 get_camera_mode__11TCameraCtrlFv(void) {
    return lbl_805D4E08;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003D1E8
#include "types.h"

extern "C" {

int TCameraCtrl__sub_8003D1E8(void);

    extern int lbl_805D4C24;
int TCameraCtrl__sub_8003D1E8(void) {  return lbl_805D4C24; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003D1F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_photon_blast_active__11TCameraCtrlFv(void);
void *TPhotonMylla__sub_80154CB4(u16);
s32 is_photon_blast_active__11TCameraCtrlFPv();

extern u16 lbl_80483770[];
extern u16 lbl_805D271C;

s32 is_photon_blast_active__11TCameraCtrlFv(void) {
    s32 var_r29;
    s32 var_r31;
    void *temp_r3;

    temp_r3 = TPhotonMylla__sub_80154CB4(lbl_805D271C);
    if ((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x800)) {
        return 1;
    }
    for (var_r29 = 0; var_r29 < 6; var_r29 += 1) {
        if ((TPhotonMylla__sub_80154CB4(lbl_80483770[var_r29]) != NULL) && (is_photon_blast_active__11TCameraCtrlFPv() == 0)) {
            return 0;
        }
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003D280
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_photon_ready__11TCameraCtrlFv(void);
u32 TPhotonMylla__sub_80154CB4(u16);
s32 fn_8003F3F8();

extern u16 lbl_805D2718;

s32 is_photon_ready__11TCameraCtrlFv(void) {
    if ((TPhotonMylla__sub_80154CB4(lbl_805D2718) != 0U) && (fn_8003F3F8() != 0)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003D558
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PAD3 virtual void CAT(f,__LINE__)(); virtual void CAT(g,__LINE__)(); virtual void CAT(h,__LINE__)();
struct Base_A_8003d558 { char pad[0x18]; };
struct V_A_8003d558 : Base_A_8003d558 {
    virtual void f0();
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    virtual void CAT(f,__LINE__)(); virtual void CAT(g,__LINE__)();
    virtual void m72(s32);
};

extern "C" {

void update_volopt_seq__11TCameraCtrlFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8003DD4C(void *);
s32 TCameraCtrl__sub_8003D1E8(void *);
s32 TLobby__sub_800C6C10();
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK update_phase__12TBoss3VoloptFv();
M2C_UNK init_object__16TBoss3VoloptCtrlFPv();
s32 get_main_phase();
M2C_UNK obj_setFlags30(void *, M2C_UNK);

void update_volopt_seq__11TCameraCtrlFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        if (get_main_phase() == 0xF) {
            if (TLobby__sub_800C6C10() != 0) {
                TBoss3Volopt__sub_8003DD4C(arg0);
            }
        } else {
            TBoss3Volopt__sub_8003DD4C(arg0);
        }
        if (TCameraCtrl__sub_8003D1E8(arg0) != 0) {
            update_phase__12TBoss3VoloptFv();
            obj_setFlags30(arg0, 0x800);
            ((V_A_8003d558 *)arg0)->m72(0);
            M2C_FIELD(arg0, s32 *, 0x374) = 5;
            if (__nw__7TObjectFUl(0x1C) != 0U) {
                init_object__16TBoss3VoloptCtrlFPv();
            }
        }
        TOTrapAncient01__sub_80226578(0x4003C601, arg0, 0, 0, 0);
        break;
    case -1:
        break;
    case 2:
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003F3EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 fn_8003F3F8(void *arg0);
u8 TBoss3Volopt__sub_8003F458(void *arg0);
int is_photon_blast_active__11TCameraCtrlFPv(void* p);

int is_photon_blast_active__11TCameraCtrlFPv(void* p) { return (*(u32*)((char*)p + 0x388) >> 18) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80044420
#include "types.h"

extern "C" {

void reset_look_state__11TCameraCtrlFPv(void* p);
void set_mode__11TCameraCtrlFPv(void* p);
void set_flag_08000000__11TCameraCtrlFi(s32 arg0);
void set_player_view_flag__11TCameraCtrlFi(s32 arg0);
s32 clear_player_status_flag__10TObjPlayerFPviUi(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 set_indexed_flags(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);

void reset_look_state__11TCameraCtrlFPv(void* p) { *(s32*)((char*)p + 0x20) = 1; *(s32*)((char*)p + 0x24) = 0; }
void set_mode__11TCameraCtrlFPv(void* p) { *(s32*)((char*)p + 0x20) = 2; *(s32*)((char*)p + 0x24) = 0; }
void set_player_view_flag__11TCameraCtrlFi(s32 arg0) {
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08000000);
}
void set_flag_08000000__11TCameraCtrlFi(s32 arg0) {
    set_indexed_flags(arg0, 0, 0x08000000);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80067654
#include "types.h"

extern "C" {

void TCameraCtrl__sub_80067654(void);
void TCameraCtrl__sub_80067658(void);
void TCameraCtrl__sub_8006765C(void);
void TCameraCtrl__sub_80067660(void);
void TCameraCtrl__sub_80067664(void);

void TCameraCtrl__sub_80067654(void) {  }
void TCameraCtrl__sub_80067658(void) {  }
void TCameraCtrl__sub_8006765C(void) {  }
void TCameraCtrl__sub_80067660(void) {  }
void TCameraCtrl__sub_80067664(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006777C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt_deleting__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TCameraCtrl__sub_800686BC(void *, int);

extern M2C_UNK lbl_804887C8[];

void *__dt_deleting__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804887C8;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006782C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_target__11TCameraCtrlFPvUi(void *arg0, u32 arg1);

s16 obj_getField1c(u32);

void set_target__11TCameraCtrlFPvUi(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, u32 *, 0x1C) = arg1;
    if (arg1 != 0U) {
        M2C_FIELD(arg0, s16 *, 0x20) = obj_getField1c(arg1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80067B8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_state__11TCameraCtrlFPv(void *arg0);
void *__dt_deleting_2__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void *TCameraCtrl__vt12(void);
M2C_UNK TCameraCtrl__sub_8006786C(void *);
void *init__11TCameraCtrlFPv(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK TCameraCtrl__sub_8006E310(void *);
void deleting_dtor__11TCameraCtrlFPvs(void *, int);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, M2C_UNK);

void *TCameraCtrl__vt12(void) {
    void *o = __nw__7TObjectFUl(0x130);
    if (o != NULL) {
        o = init__11TCameraCtrlFPv(o);
    }
    return o;
}

extern u8 lbl_8050E208[];

void init_state__11TCameraCtrlFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0x15;
    if (is_on_current_screen__11TCameraCtrlFPv(lbl_8050E208 + 0x20, 0x10000) != 0) {
        TCameraCtrl__sub_8006E310(arg0);
    } else {
        TCameraCtrl__sub_8006786C(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 0x10);
}

extern M2C_UNK lbl_804887F8[];

void *__dt_deleting_2__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804887F8;
        deleting_dtor__11TCameraCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80067C88
#include "types.h"

extern "C" {

void* init__11TCameraCtrlFPv(void* a0);
int TCameraCtrl__sub_8006E714(void);

    extern unsigned char lbl_804887F8[];
    extern const float lbl_805D8F60;
void* init__11TCameraCtrlFPv(void* a0) { TCameraCtrl__sub_8006E714(); *(int*)((char*)a0 + 0x18) = (int)lbl_804887F8; *(int*)((char*)a0 + 0x38) = 21; *(float*)((char*)a0 + 0x58) = lbl_805D8F60; *(int*)((char*)a0 + 0x114) = 0; *(int*)((char*)a0 + 0x110) = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80067CE0
#include "types.h"

extern "C" {

void TCameraCtrl__sub_80067CE0(void* p, s32 v);

void TCameraCtrl__sub_80067CE0(void* p, s32 v) { *(s32*)((char*)p + 0x10c) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80067F44
#include "types.h"

extern "C" {

void reset_state__11TCameraCtrlFPv(void* a0);
int TCameraCtrl__sub_80067E30(void*);
int TCameraCtrl__sub_80067EE0(void);

    extern const float lbl_805D8F7C;
void reset_state__11TCameraCtrlFPv(void* a0) { *(float*)((char*)a0 + 0x70) = lbl_805D8F7C; *(int*)((char*)a0 + 0x2c) = 0; *(int*)((char*)a0 + 0x34) = 0; TCameraCtrl__sub_80067EE0(); TCameraCtrl__sub_80067E30(a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80067F8C
#include "types.h"

extern "C" {

void TCameraCtrl__sub_80067F8C(void* p);
int TCameraCtrl__sub_80067D20(void*);
int TCameraCtrl__sub_80067EE0(void*);

void TCameraCtrl__sub_80067F8C(void* p) { TCameraCtrl__sub_80067EE0(p); TCameraCtrl__sub_80067D20(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80067FC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TCameraCtrl__sub_80067FC0(void *arg0, s16 arg1);
void TCameraCtrl__sub_800686BC(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_80488838[];

void *TCameraCtrl__sub_80067FC0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488838;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80068080
#include "types.h"

extern "C" {

void set_target_pos__11TCameraCtrlFPvPv(void* p, void* q);

void set_target_pos__11TCameraCtrlFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x48) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4c) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x50) = *(f32*)((char*)q + 0x8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80068354
#include "types.h"

extern "C" {

void TCameraCtrl__sub_80068354(void);
void TCameraCtrl__sub_80068358(void);

void TCameraCtrl__sub_80068354(void) {  }
void TCameraCtrl__sub_80068358(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800686BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TCameraCtrl__sub_800686BC(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_80488A28[];

void *TCameraCtrl__sub_800686BC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488A28;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800687BC
#include "types.h"

extern "C" {

void TCameraCtrl__sub_800687BC(void);
void* get_target_ptr__11TCameraCtrlFPv(void* p);

void TCameraCtrl__sub_800687BC(void) {  }
void* get_target_ptr__11TCameraCtrlFPv(void* p) { return (char*)p + 0x44; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800689E8
#include "types.h"

extern "C" {

void TCameraCtrl__sub_800689E8(void);

    extern int TCameraCtrl__data_805D4E00;
void TCameraCtrl__sub_800689E8(void) { TCameraCtrl__data_805D4E00 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80068A04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TCameraCtrl__sub_80068A04(void);
f32 get_split_offset__11TCameraCtrlFi(s32 arg0);
s32 get_camera_id__11TCameraCtrlFv();

extern f32 TCameraCtrl__data_805D8FA8;

f32 TCameraCtrl__sub_80068A04(void) {
    return TCameraCtrl__data_805D8FA8;
}

s32 is_split_screen();
extern f32 TCameraCtrl__data_805D8FA8;
extern f32 lbl_805D8FB0;
extern f32 lbl_805D8FB4;

f32 get_split_offset__11TCameraCtrlFi(s32 arg0) {
    if ((is_split_screen() != 0) && (get_camera_id__11TCameraCtrlFv() == 2)) {
        if (arg0 == 0) {
            return lbl_805D8FB0;
        }
        return lbl_805D8FB4;
    }
    return TCameraCtrl__data_805D8FA8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80068E60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_fov__11TCameraCtrlFv(void);
f32 get_view_scale__11TCameraCtrlFv(void);
s32 get_camera_id__11TCameraCtrlFv();

s32 is_split_screen();
extern f32 TCameraCtrl__data_805D8FAC;
extern f32 lbl_805D8FC8;

f32 get_fov__11TCameraCtrlFv(void) {
    if (is_split_screen() != 0) {
        if (get_camera_id__11TCameraCtrlFv() == 2) {
            return TCameraCtrl__data_805D8FAC;
        }
        return lbl_805D8FC8;
    }
    return TCameraCtrl__data_805D8FAC;
}

s32 is_split_screen();
extern f32 TCameraCtrl__data_805D8FAC;
extern f32 lbl_805D8FC8;

f32 get_view_scale__11TCameraCtrlFv(void) {
    if (is_split_screen() != 0) {
        if (get_camera_id__11TCameraCtrlFv() == 2) {
            return TCameraCtrl__data_805D8FAC;
        }
        return lbl_805D8FC8;
    }
    return TCameraCtrl__data_805D8FAC;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800692D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__11TCameraCtrlFv(void);
M2C_UNK TCameraCtrl__ct(void *, s32);
void * __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_camera;

void create__11TCameraCtrlFv(void) {
    void *obj = __nw__7TObjectFUl(0x1D4);
    if (obj != 0) {
        TCameraCtrl__ct(obj, tl_camera);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800696C8
#include "types.h"

extern "C" {

void* get_target__11TCameraCtrlFPv(void* p);

void* get_target__11TCameraCtrlFPv(void* p) { return (char*)p + 0x68; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80069B38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__11TCameraCtrlFPv(u8 *arg0);
s32 get_camera_no__11TCameraCtrlFv();

s32 is_split_screen();

void update_position__11TCameraCtrlFPv(u8 *arg0) {
    u8 *temp_r3;

    M2C_FIELD(arg0, f32 *, 0x178) = (f32) M2C_FIELD(arg0, f32 *, 0x1A0);
    M2C_FIELD(arg0, f32 *, 0x17C) = (f32) M2C_FIELD(arg0, f32 *, 0x1A4);
    M2C_FIELD(arg0, f32 *, 0x180) = (f32) M2C_FIELD(arg0, f32 *, 0x1A8);
    M2C_FIELD(arg0, f32 *, 0x184) = (f32) M2C_FIELD(arg0, f32 *, 0x1AC);
    M2C_FIELD(arg0, f32 *, 0x188) = (f32) M2C_FIELD(arg0, f32 *, 0x1B0);
    M2C_FIELD(arg0, f32 *, 0x18C) = (f32) M2C_FIELD(arg0, f32 *, 0x1B4);
    M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) M2C_FIELD(arg0, f32 *, 0x178);
    M2C_FIELD(arg0, f32 *, 0x1CC) = (f32) M2C_FIELD(arg0, f32 *, 0x17C);
    M2C_FIELD(arg0, f32 *, 0x1D0) = (f32) M2C_FIELD(arg0, f32 *, 0x180);
    if (is_split_screen() != 0) {
        temp_r3 = arg0 + (get_camera_no__11TCameraCtrlFv() * 0xC);
        M2C_FIELD(temp_r3, f32 *, 0x134) = (f32) M2C_FIELD(arg0, f32 *, 0x178);
        M2C_FIELD(temp_r3, f32 *, 0x138) = (f32) M2C_FIELD(arg0, f32 *, 0x17C);
        M2C_FIELD(temp_r3, f32 *, 0x13C) = (f32) M2C_FIELD(arg0, f32 *, 0x180);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006A03C
#include "types.h"

extern "C" {

void* get_params__11TCameraCtrlFPv(void* p);

void* get_params__11TCameraCtrlFPv(void* p) { return (char*)p + 0x20; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006A088
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_shake_preset__11TCameraCtrlFi(s32 arg0);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(M2C_UNK, M2C_UNK, void *);

extern void *lbl_805D4DF0;
extern const f32 lbl_805D8FE8;
extern const f32 lbl_805D8FEC;
extern const f32 lbl_805D8FF0;

void set_shake_preset__11TCameraCtrlFi(s32 arg0) {
    void *p;

    if ((void *) lbl_805D4DF0 != NULL) {
        switch (arg0) {
        case 0:
            M2C_FIELD(lbl_805D4DF0, s32 *, 0x1C0) = 0x14;
            p = lbl_805D4DF0;
            M2C_FIELD(p, f32 *, 0x1C4) = (f32) lbl_805D8FE8;
            queue_event_1D__12TBoss3VoloptFss(0x60, 0x14, p);
            return;
        case 1:
            M2C_FIELD(lbl_805D4DF0, s32 *, 0x1C0) = 0x1E;
            p = lbl_805D4DF0;
            M2C_FIELD(p, f32 *, 0x1C4) = (f32) lbl_805D8FEC;
            queue_event_1D__12TBoss3VoloptFss(0xA0, 0x1E, p);
            return;
        case 2:
            M2C_FIELD(lbl_805D4DF0, s32 *, 0x1C0) = 0x1E;
            p = lbl_805D4DF0;
            M2C_FIELD(p, f32 *, 0x1C4) = (f32) lbl_805D8FF0;
            queue_event_1D__12TBoss3VoloptFss(0xE0, 0x1E, p);
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006A31C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__11TCameraCtrlFv(void);
M2C_UNK TCameraCtrl__sub_80068354();

extern s8 TCameraCtrl__data_804FF628[];
extern s16 TCameraCtrl__data_805D4E0A;

void reset__11TCameraCtrlFv(void) {
    TCameraCtrl__data_805D4E0A = 0;
    TCameraCtrl__sub_80068354();
    M2C_FIELD(TCameraCtrl__data_804FF628, s8 *, 0) = 0;
    M2C_FIELD(TCameraCtrl__data_804FF628, s16 *, 2) = 0;
    M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 4) = 0;
    M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006A9F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_target_from_state__11TCameraCtrlFPv(void *arg0);
M2C_UNK TCameraCtrl__sub_8006A410(M2C_UNK, M2C_UNK);
M2C_UNK TCameraCtrl__sub_8006A788(int);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

extern M2C_UNK TCameraCtrl__data_804FF628[];
extern s32 lbl_805D53A0;

void update_target_from_state__11TCameraCtrlFPv(void *arg0) {
    if ((!(M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 4) && !(M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 8)) || (M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 0x20) || (M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 0x80) || (M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 0x800)) {
        if (M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 2) {
            TCameraCtrl__sub_8006A788(M2C_FIELD(arg0, s32 *, 0x20) + 9);
            return;
        }
        if ((M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 0x20) || (M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 0x80)) {
            TCameraCtrl__sub_8006A788(M2C_FIELD(TCameraCtrl__data_804FF628, u8 *, 1));
            u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
            if (temp != 0U) {
                TCameraCtrl__sub_8006A410(temp, 0);
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006AB4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_split_flag__11TCameraCtrlFPv(void *arg0);
M2C_UNK TCameraCtrl__sub_8006AF9C(void *, M2C_UNK);
s32 is_split_screen();
s32 get_state_flag__9TMainTaskFv();

void reset_split_flag__11TCameraCtrlFPv(void *arg0) {
    if ((is_split_screen() == 0) && (get_state_flag__9TMainTaskFv() != 1)) {
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
            TCameraCtrl__sub_8006AF9C(arg0, 0);
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006B398
#include "types.h"

extern "C" {

int reset_battle_camera__11TCameraCtrlFPv(void* p);
int TCameraCtrl__sub_8006B3B8(void* p);
int TCameraCtrl__sub_8006CCEC(void*);
int TCameraCtrl__sub_8006CD78(void*);

int reset_battle_camera__11TCameraCtrlFPv(void* p) { return TCameraCtrl__sub_8006CCEC(p); }
int TCameraCtrl__sub_8006B3B8(void* p) { return TCameraCtrl__sub_8006CD78(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006B3D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_active_player__11TCameraCtrlFv(void);
void update_battle_camera__11TCameraCtrlFv(void);
M2C_UNK TObjPlayer__sub_801B12CC();
M2C_UNK TObjPlayer__sub_801B130C();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

extern s32 lbl_805D53A0;

void update_active_player__11TCameraCtrlFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        TObjPlayer__sub_801B12CC();
    }
}

extern s32 lbl_805D53A0;

void update_battle_camera__11TCameraCtrlFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        TObjPlayer__sub_801B130C();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006B520
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TCameraCtrl__sub_8006B520(void *arg0, s16 arg1);
M2C_UNK TCameraCtrl__sub_80069DA8();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

extern const M2C_UNK lbl_80488AD8[];
extern s32 TCameraCtrl__data_805D4E10;

void *TCameraCtrl__sub_8006B520(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, const M2C_UNK **, 0x18) = lbl_80488AD8;
        TCameraCtrl__sub_80069DA8();
        TCameraCtrl__data_805D4E10 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006B654
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TCameraCtrl__sub_8006B798(void *, s32, s32, s32, s32);
void *__nw__7TObjectFUl(M2C_UNK);

extern s32 tl_07;

void create__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *obj = __nw__7TObjectFUl(0x40);
    if (obj != NULL) {
        TCameraCtrl__sub_8006B798(obj, arg0, arg1, arg2, tl_07);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006B738
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void TCameraCtrl__sub_8006CCEC();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_80488AF0[];

void *destroy__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488AF0;
        TCameraCtrl__sub_8006CCEC();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006B91C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TCameraCtrl__vt9(void);
void *TCameraCtrl__sub_8006BA68(void *);
void *__nw__7TObjectFUl(int);

void *TCameraCtrl__vt9(void) {
    void *o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = TCameraCtrl__sub_8006BA68(o);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006B954
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_camera_params__11TCameraCtrlFPv(void *arg0);
void *get_params__11TCameraCtrlFPv(u32);

extern const f64 lbl_804383C8;
extern u32 lbl_805D4DF0;
extern const f32 lbl_805D9000;

void copy_camera_params__11TCameraCtrlFPv(void *arg0) {
    void *temp_r3;

    if ((u32) lbl_805D4DF0 != 0U) {
        temp_r3 = get_params__11TCameraCtrlFPv(lbl_805D4DF0);
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(temp_r3, f32 *, 0x28);
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x2C);
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(temp_r3, f32 *, 0x30);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x1C);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_r3, f32 *, 0x20);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(temp_r3, f32 *, 0x24);
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (lbl_805D9000 * (f32) M2C_FIELD(temp_r3, s32 *, 0x14));
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(temp_r3, f32 *, 0x10);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006BA04
#include "types.h"

extern "C" {

void TCameraCtrl__sub_8006BA04(void);

void TCameraCtrl__sub_8006BA04(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006BA68
#include "types.h"

extern "C" {

void* TCameraCtrl__sub_8006BA68(void* a0);
int TCameraCtrl__sub_80068714(void);

    extern unsigned char lbl_80488B08[];
    extern int TCameraCtrl__data_805D4E10;
void* TCameraCtrl__sub_8006BA68(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B08; *(int*)((char*)a0 + 0x38) = 4; TCameraCtrl__data_805D4E10 = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006BADC
#include "types.h"

extern "C" {

unsigned char TCameraCtrl__sub_8006BADC(void);

    extern unsigned char TCameraCtrl__data_805D4E20;
unsigned char TCameraCtrl__sub_8006BADC(void) {  return TCameraCtrl__data_805D4E20; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006BAE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TCameraCtrl__vt4(void);
void *init_defaults__11TCameraCtrlFPv(void *);
void *__nw__7TObjectFUl(int);

void *TCameraCtrl__vt4(void) {
    void *o = __nw__7TObjectFUl(0x70);
    if (o != NULL) {
        o = init_defaults__11TCameraCtrlFPv(o);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006BC34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt_deleting_3__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TCameraCtrl__sub_800686BC(void *, int);

extern M2C_UNK lbl_80488B38[];

void *__dt_deleting_3__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488B38;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006BC8C
#include "types.h"

extern "C" {

void* init_defaults__11TCameraCtrlFPv(void* a0);
int TCameraCtrl__sub_80068714(void);

    extern unsigned char lbl_80488B38[];
    extern const float lbl_805D900C;
void* init_defaults__11TCameraCtrlFPv(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B38; *(float*)((char*)a0 + 0x6c) = lbl_805D900C; *(int*)((char*)a0 + 0x38) = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006BF80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 clamp_distance__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
s32 TObjPlayer__sub_80141F84(s32, s32);
s32 TObjPlayer__sub_801423A4(s32, s32, s32);

s32 clamp_distance__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (TObjPlayer__sub_80141F84(arg1, arg0) < (s32) (arg2 * 0x7F)) {
        return arg1;
    }
    return TObjPlayer__sub_801423A4(arg0, arg1, arg2 * 0x7F);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006C108
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cache_target_and_forward__11TCameraCtrlFii(s32 arg0, s32 arg1);
M2C_UNK TCameraCtrl__sub_8006C140(s32, s32);

extern void *lbl_805D4DF0;
extern s32 lbl_805D4E18;
extern s32 lbl_805D4E1C;

void cache_target_and_forward__11TCameraCtrlFii(s32 arg0, s32 arg1) {
    if ((void *) lbl_805D4DF0 != NULL) {
        lbl_805D4E18 = M2C_FIELD(lbl_805D4DF0, s32 *, 0x19C);
        lbl_805D4E1C = arg1;
    }
    TCameraCtrl__sub_8006C140(arg0, arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006C254
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TCameraCtrl__vt5(void);
void *reset__11TCameraCtrlFPv(void *);
void *__nw__7TObjectFUl(int);

void *TCameraCtrl__vt5(void) {
    void *o = __nw__7TObjectFUl(0xA4);
    if (o != NULL) {
        o = reset__11TCameraCtrlFPv(o);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006C580
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt_deleting_4__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TCameraCtrl__sub_800686BC(void *, int);

extern M2C_UNK lbl_80488B68[];

void *__dt_deleting_4__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488B68;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006C5D8
#include "types.h"

extern "C" {

void* reset__11TCameraCtrlFPv(void* a0);
int TCameraCtrl__sub_80068714(void);

    extern unsigned char lbl_80488B68[];
    extern int lbl_805D4E18;
    extern int lbl_805D4E1C;
    extern const float lbl_805D9028;
void* reset__11TCameraCtrlFPv(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B68; *(int*)((char*)a0 + 0x38) = 0; lbl_805D4E1C = 0; lbl_805D4E18 = 0; *(unsigned char*)((char*)a0 + 0x99) = 0; *(unsigned char*)((char*)a0 + 0x98) = 0; *(short*)((char*)a0 + 0x9a) = 0; *(float*)((char*)a0 + 0x9c) = lbl_805D9028; *(float*)((char*)a0 + 0xa0) = lbl_805D9028; *(float*)((char*)a0 + 0x6c) = lbl_805D9028; *(float*)((char*)a0 + 0x70) = lbl_805D9028; *(float*)((char*)a0 + 0x74) = lbl_805D9028; *(float*)((char*)a0 + 0x78) = lbl_805D9028; *(float*)((char*)a0 + 0x7c) = lbl_805D9028; *(float*)((char*)a0 + 0x80) = lbl_805D9028; *(int*)((char*)a0 + 0x84) = 0; *(int*)((char*)a0 + 0x88) = 0; *(int*)((char*)a0 + 0x8c) = 0; *(int*)((char*)a0 + 0x90) = 0; *(int*)((char*)a0 + 0x94) = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006C7C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__11TCameraCtrlFPv(void *arg0);
void *__dt_deleting_5__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void *TCameraCtrl__vt10(void);
void *get_params__11TCameraCtrlFPv(u32);
void *init_subobject__11TCameraCtrlFPv(void *);
void *TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void TCameraCtrl__sub_800686BC(void *, int);

void *TCameraCtrl__vt10(void) {
    void *o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = init_subobject__11TCameraCtrlFPv(o);
    }
    return o;
}

extern u32 lbl_805D4DF0;
extern const f32 lbl_805D9038;

void update__11TCameraCtrlFPv(void *arg0) {
    void *temp_r31;
    void *temp_r3;

    if ((u32) lbl_805D4DF0 != 0U) {
        temp_r31 = get_params__11TCameraCtrlFPv(lbl_805D4DF0);
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(0);
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(temp_r3, f32 *, 0x38);
            M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (lbl_805D9038 + M2C_FIELD(temp_r3, f32 *, 0x3C));
            M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(temp_r3, f32 *, 0x40);
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(temp_r31, f32 *, 0x1C);
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_r31, f32 *, 0x20);
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(temp_r31, f32 *, 0x24);
            M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(temp_r31, f32 *, 0x10);
        }
    }
}

extern M2C_UNK lbl_80488D70[];

void *__dt_deleting_5__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488D70;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006C8E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_subobject__11TCameraCtrlFPv(void *arg0);
void TCameraCtrl__sub_80068714(void *);

extern M2C_UNK lbl_80488D70[];

void *init_subobject__11TCameraCtrlFPv(void *arg0) {
    TCameraCtrl__sub_80068714(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488D70;
    M2C_FIELD(arg0, u32 *, 0x38) = 4;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006C928
#include "types.h"

extern "C" {

void TCameraCtrl__sub_8006C928(void);

void TCameraCtrl__sub_8006C928(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006CBD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt_deleting_6__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TCameraCtrl__sub_800686BC(void *, int);

extern M2C_UNK lbl_80488DA0[];

void *__dt_deleting_6__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488DA0;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006CC30
#include "types.h"

extern "C" {

void* TCameraCtrl__sub_8006CC30(void* a0);
int TCameraCtrl__sub_80068714(void);

    extern unsigned char lbl_80488DA0[];
    extern const float lbl_805D9044;
void* TCameraCtrl__sub_8006CC30(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488DA0; *(float*)((char*)a0 + 0x6c) = lbl_805D9044; *(int*)((char*)a0 + 0x38) = 0; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006CE78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8006CE78 { char pad[0x18]; };
struct VObj_8006CE78 : Base_8006CE78 {
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
    virtual void m12(s32);
};

extern "C" {

void set_pos_target__11TCameraCtrlFPvPvPvi(void *arg0, void *arg1, void *arg2, s32 arg3);

void set_pos_target__11TCameraCtrlFPvPvPvi(void *arg0, void *arg1, void *arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (M2C_FIELD(arg0, s32 *, 0xFC) | 8);
    ((VObj_8006CE78*)arg0)->m12(arg3);
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) M2C_FIELD(arg2, f32 *, 8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006CEF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_flag_set__11TCameraCtrlFv(void);
s32 is_split_screen();
void *TKeyBoardControl__sub_803DEB74(M2C_UNK);

s32 is_flag_set__11TCameraCtrlFv(void) {
    if (is_split_screen() != 0) {
        return 0;
    }
    return ((u32) M2C_FIELD(TKeyBoardControl__sub_803DEB74(0x12), u32 *, 8) >> 0x11U) & 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006DCC8
#include "types.h"

extern "C" {

void TCameraCtrl__sub_8006DCC8(void* p);

void TCameraCtrl__sub_8006DCC8(void* p) { *(s32*)((char*)p + 0xfc) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006DEF4
#include "types.h"

extern "C" {

void TCameraCtrl__sub_8006DEF4(void);

void TCameraCtrl__sub_8006DEF4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006E138
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TCameraCtrl__vt0(void);
void *__nw__7TObjectFUl(int);
void *TCameraCtrl__sub_8006E714(void *);

void *TCameraCtrl__vt0(void) {
    void *o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        o = TCameraCtrl__sub_8006E714(o);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006E6B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *deleting_dtor__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void TCameraCtrl__sub_800686BC(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_80488E00[];

void *deleting_dtor__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488E00;
        M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0;
        M2C_FIELD(arg0, M2C_UNK *, 0x100) = 0;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8006E7F4
#include "types.h"

extern "C" {

void set_field_100__11TCameraCtrlFPvi(void* p, s32 v);
s32 TCameraCtrl__sub_8006E7FC(void* p);
void TCameraCtrl__sub_8006E804(void* a0);

void set_field_100__11TCameraCtrlFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x100) = v; }
s32 TCameraCtrl__sub_8006E7FC(void* p) { return *(s32*)((char*)p + 0x10c); }

    extern const float TCameraCtrl__data_805D905C;
void TCameraCtrl__sub_8006E804(void* a0) { *(int*)((char*)a0 + 0x18) = 0; *(float*)((char*)a0 + 0x0) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x4) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x8) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0xc) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x10) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x14) = TCameraCtrl__data_805D905C; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800766C4
#include "types.h"

extern "C" {

short get_screen_width__11TCameraCtrlFv(void);
short get_screen_height__11TCameraCtrlFv(void);

    extern short TCameraCtrl__data_805D4DFC;
short get_screen_width__11TCameraCtrlFv(void) {  return TCameraCtrl__data_805D4DFC; }

    extern short TCameraCtrl__data_805D4DFA;
short get_screen_height__11TCameraCtrlFv(void) {  return TCameraCtrl__data_805D4DFA; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800766D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 should_update__11TCameraCtrlFv(void);
s32 TCameraCtrl__sub_8006B368();
s32 check_player_state_flag_2__6TLobbyFPv();
s32 get_global_state__14TOKeyMachine01Fv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_split_screen();

extern s32 lbl_805D53A0;

s32 should_update__11TCameraCtrlFv(void) {
    s32 temp_r3;

    if (is_split_screen() == 0) {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) == 0U) || (check_player_state_flag_2__6TLobbyFPv() != 0)) {
            return 0;
        }
        if (TCameraCtrl__sub_8006B368() == 0) {
            return 0;
        }
        goto block_6;
    }
block_6:
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    if (temp_r3 < 0xF) {
        if (temp_r3 == 0) {
            goto block_10;
        }
        goto block_11;
    }
    if (temp_r3 < 0x13) {
block_10:
        return 0;
    }
block_11:
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80083018
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_position_vectors__11TCameraCtrlFPvPvPv(void *arg0, void *arg1, void *arg2);
void update_single_screen__11TCameraCtrlFv(void);
void TCameraCtrl__sub_800830A8(void);
void TCameraCtrl__sub_800830AC(void);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjPlayer__sub_803E1D90(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void VecCopy__FP3VecPC3Vec(void *);
s32 is_split_screen();

void copy_position_vectors__11TCameraCtrlFPvPvPv(void *arg0, void *arg1, void *arg2) {
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 32));
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *)((char *)arg0 + 44), arg2);
}

extern u32 lbl_805D4EE8;

void update_single_screen__11TCameraCtrlFv(void) {
    if ((is_split_screen() == 0) && ((u32) lbl_805D4EE8 != 0U)) {
        set_global_param__8TObjFishFi(lbl_805D4EE8 + 0x1C);
        TObjPlayer__sub_803E1D90(0, 0, 0, 0);
    }
}

void TCameraCtrl__sub_800830A8(void) {  }
void TCameraCtrl__sub_800830AC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80083294
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_8048E5DC[];

void *dt__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E5DC;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013F25C
#include "types.h"

extern "C" {

int get_mode__11TCameraCtrlFv(void);

    extern int TCameraCtrl__data_805D4E10;
int get_mode__11TCameraCtrlFv(void) {  return TCameraCtrl__data_805D4E10; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2FE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_camera_no__11TCameraCtrlFv(void);
s32 get_camera_mode__11TCameraCtrlFv();
s32 is_split_screen();

extern s32 lbl_805D53A0;

s32 get_camera_no__11TCameraCtrlFv(void) {
    if (is_split_screen() != 0) {
        return get_camera_mode__11TCameraCtrlFv();
    }
    return lbl_805D53A0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A3C24
#include "types.h"

extern "C" {

void TCameraCtrl__sub_801A3C24(void);
void TCameraCtrl__sub_801A3C30(int a0);
void set_mode__11TCameraCtrlFi(int a0);

    extern short lbl_805D4E08;
void TCameraCtrl__sub_801A3C24(void) { lbl_805D4E08 = 0; }

    extern int lbl_805D4E04;
void TCameraCtrl__sub_801A3C30(int a0) { lbl_805D4E04 = a0; }

    extern short lbl_805D4E08;
void set_mode__11TCameraCtrlFi(int a0) { lbl_805D4E08 = a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A6E60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_on_current_screen__11TCameraCtrlFPv(void *arg0);
s32 pack_flags__13TRaderMapCoreFii();

u8 is_on_current_screen__11TCameraCtrlFPv(void *arg0) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0x48) & pack_flags__13TRaderMapCoreFii()) != 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A7AF0
#include "types.h"

extern "C" {

void update__11TCameraCtrlFv(void);
int TCameraCtrl__sub_80069D7C(void);
int TCameraCtrl__sub_80069DA8(void);

void update__11TCameraCtrlFv(void) { TCameraCtrl__sub_80069DA8(); TCameraCtrl__sub_80069D7C(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E32E4
#include "types.h"

extern "C" {

void TCameraCtrl__sub_801E32E4(void);
int TObjPlayer__sub_803DAD28(void*);
int TObjPlayer__sub_803E2810(void*, void*, void*);

void TCameraCtrl__sub_801E32E4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80291B48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TCameraCtrl__vt8(void);
void *__nw__7TObjectFUl(int);
void *TCameraCtrl__sub_80291CBC(void *);

void *TCameraCtrl__vt8(void) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TCameraCtrl__sub_80291CBC(o);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80291C64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TCameraCtrl__sub_80291C64(void *arg0, s16 arg1);
void TCameraCtrl__sub_800686BC(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804DAB08[];

void *TCameraCtrl__sub_80291C64(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DAB08;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80291CBC
#include "types.h"

extern "C" {

void* TCameraCtrl__sub_80291CBC(void* a0);
int TCameraCtrl__sub_80068714(void);

    extern unsigned char lbl_804DAB08[];
    extern int lbl_805D6570;
    extern const float lbl_805DD974;
    extern const float lbl_805DD9C4;
    extern const float lbl_805DD9C8;
void* TCameraCtrl__sub_80291CBC(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_804DAB08; *(int*)((char*)a0 + 0x38) = 0; *(float*)((char*)a0 + 0x48) = lbl_805DD974; *(float*)((char*)a0 + 0x4c) = lbl_805DD9C4; *(float*)((char*)a0 + 0x50) = lbl_805DD974; *(float*)((char*)a0 + 0x6c) = lbl_805DD9C8; *(int*)((char*)a0 + 0x74) = 0; *(int*)((char*)a0 + 0x70) = 0; *(int*)((char*)a0 + 0x78) = 2; *(int*)((char*)a0 + 0x7c) = 0; *(float*)((char*)a0 + 0x88) = lbl_805DD974; *(float*)((char*)a0 + 0x8c) = lbl_805DD974; lbl_805D6570 = 0; *(int*)((char*)a0 + 0x54) = 17294; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D6538
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_camera_state__11TCameraCtrlFv(void);
M2C_UNK TCameraCtrl__sub_803D65C8();

void update_camera_state__11TCameraCtrlFv(void) {
    TCameraCtrl__sub_803D65C8();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D65F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TCameraCtrl__sub_803D65F8(void);

void TCameraCtrl__sub_803D65F8(void) {

}

}
#endif
#endif
