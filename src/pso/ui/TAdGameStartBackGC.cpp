#include "pso/TAdGameStartBackGC.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803074FC___vt__18TAdGameStartBackGC {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void clear_equip_flags__10TObjPlayerFPvUi(void *, u32);
void TObjPlayer__sub_803075EC(u8 *arg0);
void __ct__7TObjectFP7TObject(void *, void *);
s32 get_instance__10TObjPlayerFv(void);
extern RecoveredGlobal_803074FC___vt__18TAdGameStartBackGC __vt__18TAdGameStartBackGC;
extern s32 lbl_805D4088;
extern s32 lbl_805D6A50;
extern const f32 lbl_805DF07C;
extern const f32 lbl_805DF084;
extern const f32 lbl_805DF088;
extern const f32 lbl_805DF08C;
extern const f32 lbl_805DF090;
extern const f32 lbl_805DF094;
extern const f32 lbl_805DF098;
extern const f32 lbl_805DF09C;
extern const f32 lbl_805DF0A0;
u8 *__ct__18TAdGameStartBackGCFv(u8 *arg0, u8 *arg1);
extern const f32 lbl_805DF07C;
extern const f32 lbl_805DF080;
void run_task__18TAdGameStartBackGCFv(u8 *arg0);
}

extern "C" {

void render__18TAdGameStartBackGCFv(void* p);
void render_background_status__18TAdGameStartBackGCFPv(u8 *arg0);
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK begin_screen_draw(int);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(int, int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
int get_state_flag__9TMainTaskFv(void*);
int init_xyz_limits__10TObjPlayerFv(void);
int reset_transform_state__10TObjPlayerFv(void);
M2C_UNK set_global_param__8TObjFishFi(void *);

extern s32 lbl_805D6A50;
extern const f32 lbl_805DF078;

void render_background_status__18TAdGameStartBackGCFPv(u8 *arg0) {
    begin_screen_draw((int) (1));
    set_global_param__8TObjFishFi((void *) (lbl_805D6A50));
    TWindowSubStatusDisp__sub_803DF160((int) (0), (int) ((M2C_FIELD(arg0, s32 *, 0x78) << 0x18) | 0xFF0000 | 0xFFFF));
    draw_textured_quad_at_depth((void *) (arg0 + 0x3C), (f32) (lbl_805DF078));
    get_player__20TWindowSubStatusDispFv();
}

void render__18TAdGameStartBackGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { init_xyz_limits__10TObjPlayerFv(); render_background_status__18TAdGameStartBackGCFPv((u8 *)(p)); reset_transform_state__10TObjPlayerFv(); } }

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_803074FC___vt__18TAdGameStartBackGC_size[sizeof(RecoveredGlobal_803074FC___vt__18TAdGameStartBackGC) == 0x18 ? 1 : -1];

#pragma push
#pragma fp_contract on
void run_task__18TAdGameStartBackGCFv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_r4;
    s32 var_r0;
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (M2C_FIELD(arg0, s32 *, 0x7C) + 1);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x7C);
    if (temp_r4 < 0xA) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) -((lbl_805DF080 * (f32) temp_r4) - lbl_805DF07C);
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) -((lbl_805DF080 * (f32) M2C_FIELD(arg0, s32 *, 0x7C)) - lbl_805DF07C);
    } else if (temp_r4 > 0x1C) {
        M2C_FIELD(arg0, s32 *, 0x78) = (s32) (M2C_FIELD(arg0, s32 *, 0x78) - 0x19);
        var_r0 = M2C_FIELD(arg0, s32 *, 0x78);
        if (var_r0 < 0) {
            var_r0 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x78) = var_r0;
    }
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x6C) * (M2C_FIELD(arg0, f32 *, 0x1C) - temp_f2)) + temp_f2);
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((M2C_FIELD(arg0, f32 *, 0x70) * (M2C_FIELD(arg0, f32 *, 0x20) - temp_f2_2)) + temp_f2_2);
    temp_f2_3 = M2C_FIELD(arg0, f32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) ((M2C_FIELD(arg0, f32 *, 0x6C) * (M2C_FIELD(arg0, f32 *, 0x24) - temp_f2_3)) + temp_f2_3);
    temp_f2_4 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((M2C_FIELD(arg0, f32 *, 0x70) * (M2C_FIELD(arg0, f32 *, 0x28) - temp_f2_4)) + temp_f2_4);
}
#pragma pop

TAdGameStartBackGC::~TAdGameStartBackGC() {}
u8 *__ct__18TAdGameStartBackGCFv(u8 *arg0, u8 *arg1) {
    f32 temp_f5;
    f32 temp_f5_2;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__18TAdGameStartBackGC.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4088;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805DF084;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_805DF088;
    M2C_FIELD(arg0, s32 *, 0x78) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x7C) = -1;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DF07C;
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805DF07C;
    lbl_805D6A50 = get_instance__10TObjPlayerFv();
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x5C);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x60);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (lbl_805DF08C + M2C_FIELD(arg0, f32 *, 0x5C));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (lbl_805DF090 + M2C_FIELD(arg0, f32 *, 0x60));
    temp_f5 = M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) ((lbl_805DF094 * (M2C_FIELD(arg0, f32 *, 0x24) - temp_f5)) + temp_f5);
    temp_f5_2 = M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) ((lbl_805DF094 * (M2C_FIELD(arg0, f32 *, 0x28) - temp_f5_2)) + temp_f5_2);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805DF098;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805DF09C;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DF0A0;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805DF094;
    return arg0;
}
#pragma pop

void TObjPlayer__sub_803075EC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1F8) = 5;
    clear_equip_flags__10TObjPlayerFPvUi(arg0, 0x800U);
}

}
