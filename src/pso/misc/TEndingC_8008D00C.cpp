#include "pso/TObject.h"
#include "types.h"

class TEndingC : public TObject {
public:
    virtual void render_shadows();
    virtual void render();
    virtual void run_task();
    virtual ~TEndingC();

    u32 phase;
    s32 elapsed_ticks;
    s32 cycle_index;
    f32 primary_opacity;
    f32 secondary_opacity;
    u8 render_geometry[0x60];
    s32 timing_rate;
    f32 fade_in_ticks;
    f32 fade_out_ticks;
};
#include <stddef.h>
typedef char TEndingCSize[sizeof(TEndingC) == 0x9C ? 1 : -1];
typedef char TEndingC_phase_offset[offsetof(TEndingC, phase) == 0x1C ? 1 : -1];
typedef char TEndingC_elapsed_ticks_offset[offsetof(TEndingC, elapsed_ticks) == 0x20 ? 1 : -1];
typedef char TEndingC_cycle_index_offset[offsetof(TEndingC, cycle_index) == 0x24 ? 1 : -1];
typedef char TEndingC_primary_opacity_offset[offsetof(TEndingC, primary_opacity) == 0x28 ? 1 : -1];
typedef char TEndingC_secondary_opacity_offset[offsetof(TEndingC, secondary_opacity) == 0x2C ? 1 : -1];
typedef char TEndingC_render_geometry_offset[offsetof(TEndingC, render_geometry) == 0x30 ? 1 : -1];
typedef char TEndingC_timing_rate_offset[offsetof(TEndingC, timing_rate) == 0x90 ? 1 : -1];
typedef char TEndingC_fade_in_ticks_offset[offsetof(TEndingC, fade_in_ticks) == 0x94 ? 1 : -1];
typedef char TEndingC_fade_out_ticks_offset[offsetof(TEndingC, fade_out_ticks) == 0x98 ? 1 : -1];
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8008D3D4___vt__8TEndingC { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
s32 TKeyBoardControl__sub_8000F828(void);
void __ct__7TObjectFP7TObject(void *, void *);
extern void *__vt__8TEndingC[];
extern s32 lbl_805D2960;
extern const f32 lbl_805D95CC;
extern const f32 lbl_805D95D4;
extern const f32 lbl_805D95D8;
extern const f32 lbl_805D95DC;
extern const f32 lbl_805D95E0;
extern const f32 lbl_805D95E4;
extern const f32 lbl_805D95E8;
extern const f32 lbl_805D95EC;
extern const f32 lbl_805D95F0;
extern const f32 lbl_805D95F4;
extern const f32 lbl_805D95F8;
u8 *__ct__8TEndingCFv(u8 *arg0, u8 *arg1);
s32 TEndingC__sub_8008C6F4();
void TEndingAB__sub_8008D5A0(void);
void TEndingPic__sub_8008D5AC(void);
int TEnding__sub_8008D5B8(void);
extern const f32 lbl_805D95CC;
extern const f32 lbl_805D95D0;
extern const f32 lbl_805D95D4;
}

extern "C" {

M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK begin_screen_draw(M2C_UNK);
M2C_UNK set_draw_texture_and_color(M2C_UNK, s32, f32);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK set_global_param__8TObjFishFi(void *);

extern M2C_UNK TEndingC__wall_texture_list_entry[];
extern const f32 lbl_805D95C0;
extern const f32 lbl_805D95C4;
extern const f32 lbl_805D95C8;

}

void TEndingC::render() {
    set_global_param__8TObjFishFi(TEndingC__wall_texture_list_entry);
    begin_screen_draw(1);
    set_draw_texture_and_color(1, ((s32) (lbl_805D95C0 * primary_opacity) << 0x18) | 0xFF0000 | 0xFFFF, lbl_805D95C0);
    draw_textured_quad_at_depth(render_geometry + 0x0, lbl_805D95C4);
    draw_textured_quad_at_depth(render_geometry + 0x20, lbl_805D95C4);
    set_draw_texture_and_color(0, ((s32) (lbl_805D95C0 * secondary_opacity) << 0x18) | 0xFF0000 | 0xFFFF, lbl_805D95C0);
    draw_textured_quad_at_depth(render_geometry + 0x40, lbl_805D95C8);
    get_player__20TWindowSubStatusDispFv();
}

extern "C" {
void __dt__8TEndingCFv(); void run_task__8TEndingCFv(); void render__8TEndingCFv(); void render_shadows__7TObjectFv();
void *__vt__8TEndingC[6] = {
    0, 0,
    (void *)__dt__8TEndingCFv,
    (void *)run_task__8TEndingCFv,
    (void *)render__8TEndingCFv,
    (void *)render_shadows__7TObjectFv,
};
}

void TEndingC::run_task() {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    u32 temp_r0;
    u32 temp_r30;
    temp_r0 = phase;
    switch (temp_r0) {
    case 0:
        temp_r30 = timing_rate * TEndingC__sub_8008C6F4();
        if (((u32 (*)())TEnding__sub_8008D5B8)() > temp_r30) {
            phase = 1U;
            break;
        }
    default:
        break;
    case 1:
        temp_f1 = primary_opacity;
        temp_f3 = lbl_805D95CC / fade_in_ticks;
        if (temp_f1 < (lbl_805D95CC - temp_f3)) {
            primary_opacity = (f32) (temp_f1 + temp_f3);
            secondary_opacity = (f32) (lbl_805D95D0 * primary_opacity);
            if (secondary_opacity > lbl_805D95CC) {
                secondary_opacity = (f32) lbl_805D95CC;
                break;
            }
        } else {
            primary_opacity = (f32) lbl_805D95CC;
            secondary_opacity = (f32) lbl_805D95CC;
            TEndingPic__sub_8008D5AC();
            TEndingAB__sub_8008D5A0();
            phase = 2U;
            break;
        }
        break;
    case 2:
        temp_r3 = elapsed_ticks + 1;
        elapsed_ticks = temp_r3;
        if (temp_r3 > (s32) (timing_rate * 3)) {
            phase = 3U;
            break;
        }
        break;
    case 3:
        temp_f2 = primary_opacity;
        temp_f0 = lbl_805D95CC / fade_out_ticks;
        if (temp_f2 > temp_f0) {
            primary_opacity = (f32) (temp_f2 - temp_f0);
        } else {
            primary_opacity = (f32) lbl_805D95D4;
        }
        temp_r3_2 = elapsed_ticks + 1;
        elapsed_ticks = temp_r3_2;
        if (temp_r3_2 > (s32) (timing_rate * 0xB)) {
            phase = 4U;
            break;
        }
        break;
    case 4:
        temp_f2_2 = primary_opacity;
        temp_f3_2 = lbl_805D95CC / fade_in_ticks;
        if (temp_f2_2 < (lbl_805D95CC - temp_f3_2)) {
            primary_opacity = (f32) (temp_f2_2 + temp_f3_2);
        } else {
            primary_opacity = (f32) lbl_805D95CC;
        }
        temp_r3_3 = elapsed_ticks + 1;
        elapsed_ticks = temp_r3_3;
        if (temp_r3_3 > (s32) (timing_rate * 0xE)) {
            phase = 5U;
            break;
        }
        break;
    case 5:
        temp_f2_3 = primary_opacity;
        temp_f0_2 = lbl_805D95CC / fade_out_ticks;
        if (temp_f2_3 > temp_f0_2) {
            primary_opacity = (f32) (temp_f2_3 - temp_f0_2);
        } else {
            primary_opacity = (f32) lbl_805D95D4;
        }
        temp_r3_4 = elapsed_ticks + 1;
        elapsed_ticks = temp_r3_4;
        if (temp_r3_4 > (s32) (timing_rate * 0x16)) {
            phase = 6U;
            temp_r0_2 = cycle_index + 1;
            cycle_index = temp_r0_2;
            if (temp_r0_2 > 5) {
                primary_opacity = (f32) lbl_805D95D4;
                cycle_index = 5;
                phase = 7U;
                break;
            }
        }
        break;
    case 6:
        temp_f2_4 = primary_opacity;
        temp_f3_3 = lbl_805D95CC / fade_in_ticks;
        if (temp_f2_4 < (lbl_805D95CC - temp_f3_3)) {
            primary_opacity = (f32) (temp_f2_4 + temp_f3_3);
        } else {
            primary_opacity = (f32) lbl_805D95CC;
        }
        temp_r3_5 = elapsed_ticks + 1;
        elapsed_ticks = temp_r3_5;
        if (temp_r3_5 > (s32) (timing_rate * 0x18)) {
            elapsed_ticks = 0;
            primary_opacity = (f32) lbl_805D95CC;
            phase = 2U;
            break;
        }
        break;
    case 8:
        temp_f2_5 = primary_opacity;
        temp_f0_3 = lbl_805D95CC / fade_out_ticks;
        if (temp_f2_5 > temp_f0_3) {
            primary_opacity = (f32) (temp_f2_5 - temp_f0_3);
            break;
        }
        primary_opacity = (f32) lbl_805D95D4;
        break;
    }
}

TEndingC::~TEndingC() {}

extern "C" {
u8 *__ct__8TEndingCFv(u8 *arg0, u8 *arg1) {
    s32 temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__8TEndingC;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2960;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805D95D8;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D95DC;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D95E0;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805D95E4;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805D95CC;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805D95E8;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805D95EC;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805D95E0;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805D95E4;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805D95E8;
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805D95F0;
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) lbl_805D95F4;
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) lbl_805D95E0;
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) lbl_805D95CC;
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) lbl_805D95CC;
    temp_r3 = TKeyBoardControl__sub_8000F828();
    switch (temp_r3) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x90) = 0x1E;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x90) = 0x19;
        break;
    }
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) (lbl_805D95F8 * (f32) M2C_FIELD(arg0, s32 *, 0x90));
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) (lbl_805D95F8 * (f32) M2C_FIELD(arg0, s32 *, 0x90));
    return arg0;
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_lobby__8TEndingCFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 TEndingC__wall_texture_list;

void release_lobby__8TEndingCFv(void) {
    if ((u32) TEndingC__wall_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)TEndingC__wall_texture_list);
        TEndingC__wall_texture_list = 0U;
    }
}

}

extern "C" {
    int bind_gvm_texture_list(void*, void*);
    extern unsigned char lbl_804398EC[];
void register_texture_ed_512kabe_c(void) { TEndingC__wall_texture_list = (int)TEndingC__wall_texture_list_entry; bind_gvm_texture_list(lbl_804398EC, TEndingC__wall_texture_list_entry); }
}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_Sub { char pad[0x14]; };

struct V_Sub : Base_Sub {
    PADV4
    PADV
    virtual s32 m5();
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
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual M2C_UNK m63(M2C_UNK, void *);
};

extern "C" {
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32);
void clear_flag_in_state7__14TObjEneBalClawFPv(u8 *arg0);
}

extern "C" {

s32 TObjEneBalClaw__vt34(s32 arg0);
s32 TObjEneBalClaw__vt37(s32 arg0);
s32 update_movement_status__10TObjPlayerFv();
s32 update_action_hold_status__10TObjPlayerFv();

    extern int TEndingAB__fade_sequence_state;
void TEndingAB__sub_8008D5A0(void) { TEndingAB__fade_sequence_state = 1; }

    extern int TEndingPic__animation_state;
void TEndingPic__sub_8008D5AC(void) { TEndingPic__animation_state = 1; }

    extern int ending_frame_counter;
int TEnding__sub_8008D5B8(void) {  return ending_frame_counter; }

void clear_flag_in_state7__14TObjEneBalClawFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 7) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
    }
}

s32 TObjEneBalClaw__vt37(s32 arg0) {
    if (update_movement_status__10TObjPlayerFv() != 0) {
        clear_flag_in_state7__14TObjEneBalClawFPv((u8 *)(arg0));
        return 1;
    }
    return 0;
}

s32 TObjEneBalClaw__vt34(s32 arg0) {
    if (update_action_hold_status__10TObjPlayerFv() != 0) {
        clear_flag_in_state7__14TObjEneBalClawFPv((u8 *)(arg0));
        return 1;
    }
    return 0;
}

}
