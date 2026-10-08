#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_wrapped_cursor__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void *destroy_and_free__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1);
void init_image_buffer__23TAdSinglePlyChrSelectGCFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
M2C_UNK pso_load_texture__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_803DA16C(s32);
M2C_UNK set_texture_name(void *, void *, int, int);
M2C_UNK __dl__FPv(void *);
s32 alloc__22TQuestVmDownLoadServerFPv(int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
M2C_UNK set_render_rect__10TObjPlayerFPviiii(void *, int, int, int, int);

void advance_wrapped_cursor__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) + 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 >= temp_r4) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r0 - temp_r4);
    }
}

extern M2C_UNK lbl_804C57E0[];

void *destroy_and_free__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x50) = lbl_804C57E0;
        TLobby__sub_803DA16C(M2C_FIELD(arg0, s32 *, 0x3C));
        safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, s32 *, 0x44));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void init_image_buffer__23TAdSinglePlyChrSelectGCFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *temp_r3;

    M2C_FIELD(arg0, void **, 0x40) = arg1;
    M2C_FIELD(arg0, s32 *, 0x48) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), u16 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), u16 *, 0x1E);
    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x40));
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_r3, u16 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | (M2C_FIELD(temp_r3, u16 *, 0xA) << 0x10));
    M2C_FIELD(arg0, s32 *, 0x44) = alloc__22TQuestVmDownLoadServerFPv((int) ((M2C_FIELD(arg0, s32 *, 0) * (M2C_FIELD(arg0, s32 *, 4) * 2)) + 0x20));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), void **, 0) = (void *) (arg0 + 0xC);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 4) = 1;
    set_render_rect__10TObjPlayerFPviiii((void *) (arg0 + 0x18), (int) (M2C_FIELD(arg0, s32 *, 0x44) + 0x20), (int) (5), (int) (M2C_FIELD(arg0, s32 *, 4)), (int) (M2C_FIELD(arg0, s32 *, 0)));
    set_texture_name((void *) (arg0 + 0xC), (void *) (arg0 + 0x18), (int) (M2C_FIELD(arg0, s32 *, 8)), (int) (0x40800000));
    pso_load_texture__6TLobbyFPv((void *) (M2C_FIELD(arg0, void **, 0x3C)));
}

}
