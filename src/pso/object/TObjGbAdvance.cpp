#include "types.h"

struct RecoveredGlobal_80187F78_lbl_804B6280 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80187F78___vt__13TObjGbAdvance {
    s32 value;
    u8 remaining[0x40];
};

extern "C" {
void reset_photon_effect__10TObjPlayerFPv(s32);
u32 init_collision_body_parts(void *, s32, s32);
void set_type__14TOKeyAncient01FPv(void *);
u8 * TObjMesBase__ct(void *, s32);
extern RecoveredGlobal_80187F78_lbl_804B6280 lbl_804B6280;
extern s32 __vt__13TObjGbAdvance[];
extern s32 lbl_805D32D0;
u8 *TObjGbAdvance__ct(u8 *arg0, s32 arg1);
s32 get_bml_model(void *, s32);
void debug_draw_label__11TObjMesBaseFPv(void *);
void set_global_count__12TObjNpcEnemyFi(int);
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_80444B48[];
extern u32 TObjComputer__model_archive;
extern s16 TObjComputer__data_805DBCD8[2];
void TObjComputer__vt14(void *arg0);
}

extern "C" {

void TObjGbAdvance__vt12(void *arg0);
void *__dt__13TObjGbAdvanceFv(void *arg0, s16 arg1);
s32 free_collision_body_parts(void *);
s32 TObjMesBase__vt12();
s32 unregister_object_by_id(s32 *);
s32 submit_cursor_candidate(void *, s32);
s32 __dl__7TObjectFPv(void *);
s32 __dt__11TObjMesBaseFv(void *, s32);

void TObjGbAdvance__vt12(void *arg0) {
    TObjMesBase__vt12();
    if ((s32) *(s32 *)((s8 *)arg0 + 0xB4) != 0) {
        submit_cursor_candidate(arg0, -1);
    }
}

extern s32 __vt__13TObjGbAdvance[];

void *__dt__13TObjGbAdvanceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjGbAdvance;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        __dt__11TObjMesBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80187F78_lbl_804B6280_size[sizeof(RecoveredGlobal_80187F78_lbl_804B6280) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80187F78___vt__13TObjGbAdvance_size[sizeof(RecoveredGlobal_80187F78___vt__13TObjGbAdvance) == 0x44 ? 1 : -1];
u8 *TObjGbAdvance__ct(u8 *arg0, s32 arg1) {
    TObjMesBase__ct(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80187F78___vt__13TObjGbAdvance *)&__vt__13TObjGbAdvance).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D32D0;
    init_collision_body_parts(arg0, (s32) &lbl_804B6280.value, 1);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x40000000);
    reset_photon_effect__10TObjPlayerFPv((s32) arg0);
    set_type__14TOKeyAncient01FPv(arg0 + 0x98);
    return arg0;
}
void TObjComputer__vt14(void *arg0) {
    debug_draw_label__11TObjMesBaseFPv(arg0);
    *(s32 *)((s8 *)arg0 + 0x88) = *(s32 *)((s8 *)arg0 + 0x88) % 2;
    *(s32 *)((s8 *)arg0 + 0xBC) = get_bml_model((void *)TObjComputer__model_archive, TObjComputer__data_805DBCD8[*(s32 *)((s8 *)arg0 + 0x88)]);
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130021, lbl_80444B48);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

}
