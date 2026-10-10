#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void *create_callback__22TAdEnterSerialAccessGCFPvPvPv(void *arg0, void *arg1, void *arg2);
extern char lbl_8047B8C4[];
extern char lbl_8047B8CC[];
void draw_message_window__11TAdEp3ExistFii(void);
void TAdEp3Exist__vt4(void);
}

extern "C" {

void set_display_copy_filter(int arg0);
M2C_UNK Dolphin_GXSetCopyFilter(int, void *, void *, void *, void *);

extern s32 display_copy_filter_enabled;
extern u8 *active_gx_render_mode;

void set_display_copy_filter(int arg0) {
    display_copy_filter_enabled = (s32) arg0;
    Dolphin_GXSetCopyFilter((int) (M2C_FIELD(active_gx_render_mode, u8 *, 0x19)), (void *) (active_gx_render_mode + 0x1A), (void *) ((u8) arg0), (void *) (active_gx_render_mode + 0x32), (void *) (active_gx_render_mode));
}

s32 TObjBoss2Tunnel__sub_8036EF44(void);
void TObjBoss2Tunnel__sub_8036EF4C(void);
void enable_and_trigger__15TObjBoss2TunnelFv(void);

    extern s32 display_copy_filter_enabled;
s32 TObjBoss2Tunnel__sub_8036EF44(void) {  return display_copy_filter_enabled; }

    extern s32 display_copy_filter_enabled;
void TObjBoss2Tunnel__sub_8036EF4C(void) { display_copy_filter_enabled = 1; }

    extern s32 display_copy_filter_enabled;
void enable_and_trigger__15TObjBoss2TunnelFv(void) { display_copy_filter_enabled = 1; ((int (*)(void *))set_display_copy_filter)((void*)1); }
void TAdEp3Exist__vt4(void) {
    create_callback__22TAdEnterSerialAccessGCFPvPvPv(lbl_8047B8C4, lbl_8047B8CC, (void *)draw_message_window__11TAdEp3ExistFii);
}

}
