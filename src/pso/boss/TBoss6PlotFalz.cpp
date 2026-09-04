#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_visible_flag__14TBoss6PlotFalzFPv(void *arg0);

s32 TLobby__sub_800C6C10();

void set_visible_flag__14TBoss6PlotFalzFPv(void *arg0) {
    if (TLobby__sub_800C6C10() != 0) {
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = 1;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802AABA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_phase_reached__14TBoss6PlotFalzFv(void);
s32 get_phase__8TObjFishFPv(void*);

extern u32 TBoss6PlotFalz__data_805D66EC;

s32 is_phase_reached__14TBoss6PlotFalzFv(void) {
    u32 p = TBoss6PlotFalz__data_805D66EC;
    if (!p) {
        return 0;
    }
    return get_phase__8TObjFishFPv((void*)TBoss6PlotFalz__data_805D66EC) >= 7 ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AABEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_flag_set__14TBoss6PlotFalzFv(void);

extern s32 TBoss6PlotFalz__data_805D66EC;

u8 is_flag_set__14TBoss6PlotFalzFv(void) {
    return (u8) (TBoss6PlotFalz__data_805D66EC != 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AAC00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_main_phase();
s32 is_split_screen();
s32 TBoss6PlotFalz__sub_802AAC74(void);
void TBoss6PlotFalz__sub_802AAC98(void* p);
int is_ready__14TBoss6PlotFalzFv(void);

s32 get_next_point__14TBoss6PlotFalzFPvPvPv(void *arg0, s16 *arg1, s16 *arg2) {
    if (TBoss6PlotFalz__sub_802AAC74() < 1) {
        return 0;
    }
    *arg1 = M2C_FIELD(arg0, s16 *, 0x2C) + M2C_FIELD(arg0, s32 *, 0x3C8);
    *arg2 = M2C_FIELD(arg0, u16 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x3C8);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) + 1);
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AAC98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_main_phase();
s32 is_split_screen();
s32 TBoss6PlotFalz__sub_802AAC74(void);
void TBoss6PlotFalz__sub_802AAC98(void* p);
int is_ready__14TBoss6PlotFalzFv(void);

void TBoss6PlotFalz__sub_802AAC98(void* p) { *(s32*)((char*)p + 0x3c8) = 1; }
u8 is_ending_or_split_screen__14TBoss6PlotFalzFv(void) {
    s32 var_r31;

    var_r31 = 0;
    if ((get_main_phase() == 0xF) || (is_split_screen() != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}
int is_ready__14TBoss6PlotFalzFv(void) { return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AB0BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_active__14TBoss6PlotFalzFPv(void *arg0);
s32 is_state_1f__14TBoss6PlotFalzFUi();

s32 is_active__14TBoss6PlotFalzFPv(void *arg0) {
    if ((is_state_1f__14TBoss6PlotFalzFUi() != 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000800)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AB110
#include "types.h"

extern "C" {

s32 is_state_1f__14TBoss6PlotFalzFUi(u32 arg0);
s32 get_field_3e0__12TBoss3VoloptFPv();

s32 is_state_1f__14TBoss6PlotFalzFUi(u32 arg0) {
    if ((arg0 == 0U) || (get_field_3e0__12TBoss3VoloptFPv() != 0x1F)) {
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AB23C
#include "types.h"

extern "C" {

void set_state_2__14TBoss6PlotFalzFPv(void* p);
void reset_state__14TBoss6PlotFalzFPv(void* p);
void activate_warp__14TBoss6PlotFalzFPv(void* p);
void free_child__14TBoss6PlotFalzFPv(void* p);
int activate_warp__15TBoss6EmptyWarpFPv(void*);
int TBoss6EmptyWarp__sub_802B1004(void*);

void set_state_2__14TBoss6PlotFalzFPv(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 2; }
void reset_state__14TBoss6PlotFalzFPv(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 0; }
void activate_warp__14TBoss6PlotFalzFPv(void* p) { void* m = *(void**)((char*)p + 0x384); if (m) activate_warp__15TBoss6EmptyWarpFPv(m); }
void free_child__14TBoss6PlotFalzFPv(void* p) { void* m = *(void**)((char*)p + 0x384); if (m) TBoss6EmptyWarp__sub_802B1004(m); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ABA5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_value__14TBoss6PlotFalzFv(void);
s32 TBoss6PlotFalz__sub_802ABADC();

extern void *TBoss6PlotFalz__data_805D66F0;
extern f32 TBoss6PlotFalz__data_805DE098;

f32 get_value__14TBoss6PlotFalzFv(void) {
    if ((TBoss6PlotFalz__sub_802ABADC() == 0) || ((void *) TBoss6PlotFalz__data_805D66F0 == NULL)) {
        return TBoss6PlotFalz__data_805DE098;
    }
    return M2C_FIELD(TBoss6PlotFalz__data_805D66F0, f32 *, 0x3C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ABB1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_static_instance__14TBoss6PlotFalzFv(void);
void queue_instance_destruction__14TBoss6PlotFalzFv(void);
void queue_destruction__7TObjectFv(void*);

extern u32 TBoss6PlotFalz__data_805D66F4;

void destroy_static_instance__14TBoss6PlotFalzFv(void) {
    if ((u32) TBoss6PlotFalz__data_805D66F4 != 0U) {
        queue_destruction__7TObjectFv((void*)TBoss6PlotFalz__data_805D66F4);
        TBoss6PlotFalz__data_805D66F4 = 0U;
    }
}

extern u32 TBoss6PlotFalz__data_805D66F0;

void queue_instance_destruction__14TBoss6PlotFalzFv(void) {
    if ((u32) TBoss6PlotFalz__data_805D66F0 != 0U) {
        queue_destruction__7TObjectFv((void*)TBoss6PlotFalz__data_805D66F0);
        TBoss6PlotFalz__data_805D66F0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ABB84
#include "types.h"

extern "C" {

void release_object__14TBoss6PlotFalzFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void release_object__14TBoss6PlotFalzFPv(void* p) { if (*(unsigned int*)((char*)p + 0x384) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x384)); *(int*)((char*)p + 0x384) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ABD4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void ensure_field384__14TBoss6PlotFalzFPv(void *arg0);

u32 create__10TBoss6TubeFPv();

void ensure_field384__14TBoss6PlotFalzFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x384) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x384) = create__10TBoss6TubeFPv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ABFD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_camera_target__14TBoss6PlotFalzFv(void);

extern f32 TBoss6PlotFalz__data_805D3E54;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern f32 TBoss6PlotFalz__data_805DE098;
extern f32 TBoss6PlotFalz__data_805DE0BC;

void update_camera_target__14TBoss6PlotFalzFv(void) {
    if (TBoss6PlotFalz__data_805D3E54 > TBoss6PlotFalz__data_805DE098) {
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        some_id_805c6f74 = lbl_805D5660;
    }
    TBoss6PlotFalz__data_805D3E54 = TBoss6PlotFalz__data_805DE0BC;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AC18C
#include "types.h"

extern "C" {

int get_phase__14TBoss6PlotFalzFv(void);

    extern int lbl_805D66F8;
int get_phase__14TBoss6PlotFalzFv(void) {  return lbl_805D66F8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AC194
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_active_flag__14TBoss6PlotFalzFv(void);
s32 get_main_phase();
s32 is_split_screen();

extern s32 lbl_805D66F8;

void update_active_flag__14TBoss6PlotFalzFv(void) {
    lbl_805D66F8 = 0;
    if ((get_main_phase() == 0xF) || (is_split_screen() != 0)) {
        lbl_805D66F8 = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AC784
#include "types.h"

extern "C" {

void render__14TBoss6PlotFalzFv(void);
void TBoss6PlotFalz__vt61(void);

void render__14TBoss6PlotFalzFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AC7E0
#include "types.h"

extern "C" {

void render__14TBoss6PlotFalzFv(void);
void TBoss6PlotFalz__vt61(void);

void TBoss6PlotFalz__vt61(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ACBA4
#include "types.h"

extern "C" {

void free_all__14TBoss6PlotFalzFv(void);
int free_resources__10TBoss6TubeFv(void);
int TLobby__sub_8001FE7C(void*, void*);
int TItemEffOrgaFlowShot__sub_80357204(void);
int free_data__10TBoss6RockFv(void);
int free_global_instance__14TBoss4DarkFalzFv(void);

    extern int lbl_805D66E8;
void free_all__14TBoss6PlotFalzFv(void) { free_global_instance__14TBoss4DarkFalzFv(); free_resources__10TBoss6TubeFv(); free_data__10TBoss6RockFv(); TItemEffOrgaFlowShot__sub_80357204(); TLobby__sub_8001FE7C((void*)(lbl_805D66E8), (void*)1); lbl_805D66E8 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ACC50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__14TBoss6PlotFalzFi(s32 arg0);
s32 TBoss6PlotFalz__ct(s32, s32, s32);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__14TBoss6PlotFalzFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3E0);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6PlotFalz__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B0228
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6PlotFalz__sub_802B0228(void *arg0);
void reset_ending_state__14TBoss6PlotFalzFPv(void* p);
M2C_UNK TBoss6PlotFalz__sub_802AB490(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC678();
int TBoss6PlotFalz__sub_802AC6D0(void*);
int create__16TObjOnlineEndingFPv(void*);

void TBoss6PlotFalz__sub_802B0228(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x1C6) {
        TBoss6PlotFalz__sub_802AC678();
        TBoss6PlotFalz__sub_802AB490(arg0);
    }
}

void reset_ending_state__14TBoss6PlotFalzFPv(void* p) { TBoss6PlotFalz__sub_802AC6D0(p); *(int*)((char*)p + 0x3d0) = 0; *(int*)((char*)p + 0x3cc) = 0; create__16TObjOnlineEndingFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B02B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_plot_timer__14TBoss6PlotFalzFPv(void *arg0);
s32 is_ready__14TBoss6PlotFalzFv(void *);
M2C_UNK TBoss6PlotFalz__sub_802AB2B8(void *, M2C_UNK);
M2C_UNK TBoss6PlotFalz__sub_802AB490(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC4D8();
M2C_UNK TBoss6PlotFalz__sub_802AC678();
s32 is_ending_or_split_screen__14TBoss6PlotFalzFv(void *);

void update_plot_timer__14TBoss6PlotFalzFPv(void *arg0) {
    s32 temp_r0;

    TBoss6PlotFalz__sub_802AC4D8();
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3CC) > 1) && (is_ready__14TBoss6PlotFalzFv(arg0) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x3CC) = 0x2CA;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x2CA) {
        if (is_ending_or_split_screen__14TBoss6PlotFalzFv(arg0) != 0) {
            TBoss6PlotFalz__sub_802AB2B8(arg0, 8);
            return;
        }
        TBoss6PlotFalz__sub_802AC678();
        TBoss6PlotFalz__sub_802AB490(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B0340
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void finish_and_dispatch_next_phase__14TBoss6PlotFalzFPv(u8 *arg0);
M2C_UNK TBoss6PlotFalz__sub_802ABBC4(void *, void *);
M2C_UNK TBoss6PlotFalz__sub_802AC6D0();
M2C_UNK TBoss6Type2__sub_802BD3CC(void *, void *, void *, void *);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK destroy_static_instance__14TBoss6PlotFalzFv(void *);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(int);
M2C_UNK fn_8033E8C0(void *, void *);
M2C_UNK obj_setArrS16_FC(void *, int, void *);
M2C_UNK try_dispatch_darkfalz_phase__12TBoss6ThanksFv();

extern u32 TBoss6PlotFalz__data_805D66F4;

void finish_and_dispatch_next_phase__14TBoss6PlotFalzFPv(u8 *arg0) {
    s32 sp10[2];
    u16 sp8[4];
    s32 var_r29;

    if ((u32) TBoss6PlotFalz__data_805D66F4 != 0U) {
        TBoss6Type2__sub_802BD3CC((void *) (TBoss6PlotFalz__data_805D66F4), (void *) (arg0 + 0x2D6), (void *) (arg0 + 0x2D4), (void *) (sp8));
        var_r29 = 0;
        do {
            obj_setArrS16_FC((void *) (arg0), (int) (var_r29), (void *) (sp8[var_r29]));
            var_r29 += 1;
        } while (var_r29 < 4);
    }
    TBoss6PlotFalz__sub_802ABBC4((void *) (arg0), (void *) (sp10));
    destroy_static_instance__14TBoss6PlotFalzFv((void *) (arg0));
    TLobby__sub_8022743C();
    TBoss6PlotFalz__sub_802AC6D0();
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    dispatch_by_main_phase__14TBoss4DarkFalzFUs((int) (0x57));
    try_dispatch_darkfalz_phase__12TBoss6ThanksFv();
    fn_8033E8C0((void *) (arg0), (void *) (sp10));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B03F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6PlotFalz__sub_802B03F4(void);
void check_action_7__14TBoss6PlotFalzFi(s32 arg0);
void TBoss6PlotFalz__sub_802B0448(void* p);
void advance_timer__14TBoss6PlotFalzFPv(void *arg0);
void advance_phase_if_ready__14TBoss6PlotFalzFPv(void* p);
int is_ready__14TBoss6PlotFalzFv(void*);
s32 TBoss6PlotFalz__sub_802AB2B8(void *, s32);
s32 TBoss6PlotFalz__sub_802ABA9C();
int TBoss6PlotFalz__sub_802ABC64(void*);
int TBoss6PlotFalz__sub_802AC4D8(void);
int TBoss6PlotFalz__sub_802AC678(void*);
int TBoss6PlotFalz__sub_802AC86C(void*, void*);

void TBoss6PlotFalz__sub_802B03F4(void) {  }
void check_action_7__14TBoss6PlotFalzFi(s32 arg0) {
    if ((TBoss6PlotFalz__sub_802ABA9C() == 0) || (is_ready__14TBoss6PlotFalzFv((void*)(arg0)) != 0)) {
        TBoss6PlotFalz__sub_802AC86C((void*)(arg0), (void*)(7));
    }
}
void TBoss6PlotFalz__sub_802B0448(void* p) { TBoss6PlotFalz__sub_802AC678(p); TBoss6PlotFalz__sub_802AC4D8(); *(int*)((char*)p + 0x3d0) = 0; *(int*)((char*)p + 0x3cc) = 0; TBoss6PlotFalz__sub_802ABC64(p); }
void advance_timer__14TBoss6PlotFalzFPv(void *arg0) {
    s32 temp_r0;

    TBoss6PlotFalz__sub_802AC4D8();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x198) {
        TBoss6PlotFalz__sub_802AB2B8(arg0, 6);
    }
}
void advance_phase_if_ready__14TBoss6PlotFalzFPv(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { TBoss6PlotFalz__sub_802AC86C(p, (void*)6); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B061C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_and_advance_state__14TBoss6PlotFalzFPv(void *arg0);
s32 is_ready__14TBoss6PlotFalzFv(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC86C(void *, M2C_UNK);
s32 get_plot_state__10TObjPlayerFPv(void *);

void check_and_advance_state__14TBoss6PlotFalzFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x3DC);
    if ((temp_r3 != NULL) && ((get_plot_state__10TObjPlayerFPv(temp_r3) != 0) || (is_ready__14TBoss6PlotFalzFv(arg0) != 0))) {
        TBoss6PlotFalz__sub_802AC86C(arg0, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B0770
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6PlotFalz__sub_802ABADC();
s32 TBoss6PlotFalz__sub_802AB2B8(void *, s32);
int is_ready__14TBoss6PlotFalzFv(void*);
int TBoss6PlotFalz__sub_802AC86C(void*, void*);
void set_state4_if_ready__14TBoss6PlotFalzFPv(void* p);
void TBoss6PlotFalz__sub_802B08F0(void* p);
int TBoss6PlotFalz__sub_802ABCDC(void*);
int TBoss6PlotFalz__sub_802AC4D8(void);
int TBoss6PlotFalz__sub_802AC678(void*);
void enter_active_state__14TBoss6PlotFalzFPv(void* p);
void TBoss6PlotFalz__sub_802B0808(void);

void set_state4_if_ready__14TBoss6PlotFalzFPv(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { TBoss6PlotFalz__sub_802AC86C(p, (void*)4); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B0808
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6PlotFalz__sub_802ABADC();
s32 TBoss6PlotFalz__sub_802AB2B8(void *, s32);
int is_ready__14TBoss6PlotFalzFv(void*);
int TBoss6PlotFalz__sub_802AC86C(void*, void*);
void set_state4_if_ready__14TBoss6PlotFalzFPv(void* p);
void TBoss6PlotFalz__sub_802B08F0(void* p);
int TBoss6PlotFalz__sub_802ABCDC(void*);
int TBoss6PlotFalz__sub_802AC4D8(void);
int TBoss6PlotFalz__sub_802AC678(void*);
void enter_active_state__14TBoss6PlotFalzFPv(void* p);
void TBoss6PlotFalz__sub_802B0808(void);

void TBoss6PlotFalz__sub_802B0808(void) {  }
void update_phase__14TBoss6PlotFalzFi(s32 arg0) {
    if ((TBoss6PlotFalz__sub_802ABADC() == 0) || (is_ready__14TBoss6PlotFalzFv((void*)(arg0)) != 0)) {
        TBoss6PlotFalz__sub_802AC86C((void*)(arg0), (void*)(3));
    }
}
void enter_active_state__14TBoss6PlotFalzFPv(void* p) { TBoss6PlotFalz__sub_802AC678(p); TBoss6PlotFalz__sub_802AC4D8(); *(int*)((char*)p + 0x3d0) = 1; *(int*)((char*)p + 0x3cc) = 0; TBoss6PlotFalz__sub_802ABCDC(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B08A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_timeout__14TBoss6PlotFalzFPv(void *arg0);
void TBoss6PlotFalz__sub_802B08F0(void* p);
int is_ready__14TBoss6PlotFalzFv(void*);
s32 TBoss6PlotFalz__sub_802AB2B8(void *, s32);
s32 TBoss6PlotFalz__sub_802ABADC();
int TBoss6PlotFalz__sub_802ABCDC(void*);
int TBoss6PlotFalz__sub_802AC4D8(void);
int TBoss6PlotFalz__sub_802AC678(void*);
int TBoss6PlotFalz__sub_802AC86C(void*, void*);
void set_state4_if_ready__14TBoss6PlotFalzFPv(void* p);
void TBoss6PlotFalz__sub_802B0808(void);
void enter_active_state__14TBoss6PlotFalzFPv(void* p);

void tick_timeout__14TBoss6PlotFalzFPv(void *arg0) {
    s32 temp_r0;

    TBoss6PlotFalz__sub_802AC4D8();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x1F4) {
        TBoss6PlotFalz__sub_802AB2B8(arg0, 2);
    }
}
void TBoss6PlotFalz__sub_802B08F0(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { TBoss6PlotFalz__sub_802AC86C(p, (void*)2); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B0984
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_intro_timer__14TBoss6PlotFalzFPv(void *arg0);
void advance_if_ready__14TBoss6PlotFalzFPv(void* p);
void TBoss6PlotFalz__sub_802B0A34(void* p);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
int is_ready__14TBoss6PlotFalzFv(void*);
s32 TBoss6PlotFalz__sub_802AB2B8(void *, s32);
int TBoss6PlotFalz__sub_802AC86C(void*, void*);

void advance_intro_timer__14TBoss6PlotFalzFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) == 0x69) {
        TBoss3Volopt__sub_8022675C(0x40030F00, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) > 0x12C) {
        TBoss6PlotFalz__sub_802AB2B8(arg0, 1);
    }
}
void advance_if_ready__14TBoss6PlotFalzFPv(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { TBoss6PlotFalz__sub_802AC86C(p, (void*)2); } }
void TBoss6PlotFalz__sub_802B0A34(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3cc) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033D2D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__14TBoss6PlotFalzFPvPv(void *arg0, void *arg1);
void *TObjFish__sub_8033D1AC(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create__14TBoss6PlotFalzFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TObjFish__sub_8033D1AC(o, arg0, arg1);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035A620
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_hp__14TBoss6PlotFalzFv(void);

extern s32 TBoss6PlotFalz__data_805D66EC;

s32 get_hp__14TBoss6PlotFalzFv(void) {
    return TBoss6PlotFalz__data_805D66EC;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036964C
#include "types.h"

extern "C" {

int TBoss6PlotFalz__sub_8036964C(void);

    extern int TBoss6PlotFalz__data_805D66F4;
int TBoss6PlotFalz__sub_8036964C(void) {  return TBoss6PlotFalz__data_805D66F4; }

}
#endif
#endif
