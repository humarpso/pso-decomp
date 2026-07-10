#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK TWindowSubComCard__sub_8024AB98(s32);
M2C_UNK handle_close_flag__17TWindowSubComCardFPv(void *);
M2C_UNK TWindowSubComCard__sub_80271EC0(void *);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
extern void* __vt__17TWindowSubComCard[];

void *__dt__17TWindowSubComCardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__17TWindowSubComCard;
        handle_close_flag__17TWindowSubComCardFPv(arg0);
        TWindowSubComCard__sub_80271EC0(arg0);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) == 0x26) {
            TWindowSubComCard__sub_8024AB98(M2C_FIELD(arg0, s32 *, 0x20));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
            M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x70));
            M2C_FIELD(arg0, u32 *, 0x70) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x84));
            M2C_FIELD(arg0, u32 *, 0x84) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x80));
            M2C_FIELD(arg0, u32 *, 0x80) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x64));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x78));
            M2C_FIELD(arg0, u32 *, 0x78) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x74));
            M2C_FIELD(arg0, u32 *, 0x74) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x6C));
            M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x60));
            M2C_FIELD(arg0, u32 *, 0x60) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
