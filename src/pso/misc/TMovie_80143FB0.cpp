#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct MovieFrameInfo {
    u32 field_00;
    u8 pad_C[0x4];
    M2C_UNK field_08;
    M2C_UNK field_0c;
    u8 trailing_storage[0x30];
};
struct Iface_80143FB0;
struct IfaceVt_80143FB0 {
    u8 pad0[0x18];
    void (*f18)(struct Iface_80143FB0 *, void *);
    u8 pad1C[0x2C - 0x1C];
    void (*f2C)(struct Iface_80143FB0 *, s32);
};
struct Iface_80143FB0 { IfaceVt_80143FB0 *vt; };
struct Info_80143FB0 {
    s32 mode;
    s32 rate;
    s32 width;
    s32 height;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 size;
};
struct Movie_80143FB0 {
    u8 pad0[4];
    Iface_80143FB0 *iface;
    u8 pad8[0x28 - 0x8];
    Info_80143FB0 info;
    s32 f48;
    u8 pad4C[0x9C - 0x4C];
    s32 f9C;
    s32 fA0;
    u8 fA4[4];
};

extern "C" {

s32 TMovie__sub_80143C94(int, int, int);
s32 flush_and_reset__6TMovieFv();
s32 flush_framebuffer(void *, void *, void *);
s32 copy__6TMovieFPvPv(void *, void *);
extern M2C_UNK (*lbl_805D6B38)(void **, u32 *);
extern M2C_UNK (*lbl_805D6B3C)(void **);

s32 get_lobby_data__6TLobbyFv();
extern u8 lbl_8043F33C[];
extern u8 lbl_8043F350[];
extern u8 lbl_8043F35C[];
extern u8 lbl_8043F368[];
extern u8 lbl_8043F374[];
extern s32 (*lbl_805D6B30)(Info_80143FB0 *);
extern Iface_80143FB0 *(*lbl_805D6B34)(Info_80143FB0 *);
extern void (*lbl_805D6B9C)(Iface_80143FB0 *, void *);
extern void (*lbl_805D6BA0)(Iface_80143FB0 *);
extern void (*lbl_805D6BA4)(Iface_80143FB0 *);

void TMovie__sub_80143FB0(Movie_80143FB0 *o, s32 arg1, s32 arg2) {
    Info_80143FB0 *info = &o->info;
    Iface_80143FB0 *f;

    o->fA0 = o->f9C;
    o->f48 = 0x11;
    if (arg1 != 0) {
        info->mode = 1;
    } else {
        info->mode = 2;
    }
    info->rate = 0x5B8D80;
    info->width = 0x280;
    info->height = 0x1E0;
    info->f10 = 3;
    info->size = lbl_805D6B30(info);
    if (info->size > 0x420000) {
        return;
    }
    info->f18 = o->fA0;
    info->f14 = 1;
    f = lbl_805D6B34(info);
    o->iface = f;
    if (arg1 != 0) {
        if (arg2 != 0) {
            lbl_805D6B9C(f, lbl_8043F33C);
        } else {
            lbl_805D6B9C(f, lbl_8043F350);
            lbl_805D6B9C(f, lbl_8043F35C);
            lbl_805D6B9C(f, lbl_8043F368);
            lbl_805D6B9C(f, lbl_8043F368);
            lbl_805D6B9C(f, lbl_8043F368);
            lbl_805D6B9C(f, lbl_8043F374);
        }
        lbl_805D6BA0(f);
        lbl_805D6BA4(f);
    } else {
        f->vt->f18(f, o->fA4);
    }
    f->vt->f2C(f, get_lobby_data__6TLobbyFv());
}

s32 TMovie__sub_80144184(u8 *arg0) {
    typedef char sp8_offset[(offsetof(MovieFrameInfo, field_00) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(MovieFrameInfo, field_08) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(MovieFrameInfo, field_0c) == 0xC) ? 1 : -1];
    MovieFrameInfo frame;

    s32 temp_r3_2;
    void **temp_r3;
    u8 *temp_r4;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
        flush_and_reset__6TMovieFv();
    }
    lbl_805D6B38(M2C_FIELD(arg0, void ***, 4), &frame.field_00);
    if (frame.field_00 != 0U) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
            TMovie__sub_80143C94((int) (frame.field_00), (int) (frame.field_08), (int) (frame.field_0c));
        } else {
            flush_framebuffer((void *) (arg0), (void *) (M2C_FIELD(arg0, void ***, 4)), (void *) (&frame.field_00));
        }
        copy__6TMovieFPvPv((void *) (arg0 + 0x5C), (void *) (&frame.field_00));
        lbl_805D6B3C(M2C_FIELD(arg0, void ***, 4));
    }
    temp_r3 = (void **)(M2C_FIELD(arg0, void ***, 4));
    temp_r4 = (u8 *)(*temp_r3);
    temp_r3_2 = M2C_FIELD(temp_r4, s32 (**)(void **, void *), 0x20)(temp_r3, temp_r4);
    if (temp_r3_2 == 3) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x58) = temp_r3_2;
    return 1;
}

}
