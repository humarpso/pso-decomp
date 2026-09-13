#include "pso/TAdBackTxtGC.h"

TAdBackTxtGC::~TAdBackTxtGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__ct__12TAdBackTxtGCFv(void *arg0);
void render__12TAdBackTxtGCFv(void *arg0);
void run_task__12TAdBackTxtGCFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);
M2C_UNK fn_80141A30();
M2C_UNK draw_character_background_frame(void *, s32, M2C_UNK);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
s32 toggle_flag_9__10TObjPlayerFPv();

void render__12TAdBackTxtGCFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
        if (toggle_flag_9__10TObjPlayerFPv() == 0) {
            set_depth_buffer_settings_2__Fv();
            goto block_4;
        }
    } else if (get_state_flag__9TMainTaskFv() != 1) {
block_4:
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        draw_character_background_frame(arg0, (s32) M2C_FIELD(arg0, s32 *, 0x1C) / 3, -1);
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
            fn_80141A30();
        }
    }
}

void run_task__12TAdBackTxtGCFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r4 >= 0xE) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r4 + 1);
}

extern M2C_UNK __vt__12TAdBackTxtGC[];
extern const f32 lbl_805DDD08;
extern void *lbl_805D3D28;

void *__ct__12TAdBackTxtGCFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TAdBackTxtGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D28;
    M2C_FIELD(arg0, u32 *, 0x1C) = -1;
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_805DDD08;
    M2C_FIELD(arg0, u32 *, 0x24) = 1;
    return arg0;
}

}
