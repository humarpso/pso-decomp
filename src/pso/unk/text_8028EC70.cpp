#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
struct M2CCopy_50 { u8 bytes[0x50]; };

struct Dst_8028ED24 { u8 pad[4]; s16 a[5]; u8 b; };

struct Src_8028ED24 { u8 pad[0x30]; u8 b; u8 pad2[7]; s16 a[5]; };

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
struct Chr_8028EE20 { u8 pad[0x38]; s16 sel[5]; u8 pad2[0x50 - 0x42]; };

struct Row_8028EE20 { s16 max[0x16]; };

extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_8028EF90(int);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028F084(u32, void *);
u32 TAdSinglePlyChrSelectGC__sub_8028F150();
s32 TAdSinglePlyChrSelectGC__sub_8028F198(void *);
s32 TAdSinglePlyChrSelectGC__sub_8028F210();
extern s32 lbl_805D6520;
void TAdSinglePlyChrSelectGC__sub_8028ED54(s32 arg0);
void TAdSinglePlyChrSelectGC__sub_8028ED24(Dst_8028ED24 *d, Src_8028ED24 *s);
void TNpcPlayer__sub_8007206C(void *, void *);
s32 get_display_index__12TCharaMakingFPv(void *);
s32 TAdSinglePlyChrSelectGC__sub_8028F198(void *);
extern Row_8028EE20 lbl_804D8E20[];
s32 TAdSinglePlyChrSelectGC__sub_8028EE20(void *arg0, void *arg1_);
}

extern "C" {

void TAdSinglePlyChrSelectGC__sub_8028ED24(Dst_8028ED24 *d, Src_8028ED24 *s) {
    s32 i;
    for (i = 0; i < 5; i++) d->a[i] = s->a[i];
    d->b = s->b;
}

#pragma push
#pragma fp_contract on
void TAdSinglePlyChrSelectGC__sub_8028ED54(s32 arg0) {
    M2CCopy_50 buf;
    u32 h;
    if (TAdSinglePlyChrSelectGC__sub_8028F210() > 0) {
        buf = *(const M2CCopy_50 *)lbl_805D6520;
        if ((arg0 < 0) || (arg0 >= 5)) {
            if (TAdSinglePlyChrSelectGC__sub_8028F198((void *) (&buf)) != 0) {
                return;
            }
            goto block_7;
        }
        if ((TAdSinglePlyChrSelectGC__sub_8028F198((void *) (&buf)) == 0) || (TAdSinglePlyChrSelectGC__sub_8028EE20((void *)((void *) (&buf)), (void *)((void *) (arg0))) != 0)) {
block_7:
            h = TAdSinglePlyChrSelectGC__sub_8028F150();
            if (h == 0U) {
                if (TAdSinglePlyChrSelectGC__sub_8028EF90((int) (1)) == 0) {
                    return;
                }
                h = TAdSinglePlyChrSelectGC__sub_8028F150();
            }
            TAdSinglePlyChrSelectGC__sub_8028F084(h, (void *) (&buf));
        }
    }
}
#pragma pop

s32 TAdSinglePlyChrSelectGC__sub_8028EE20(void *arg0, void *arg1_) {
    s32 arg1 = (s32)arg1_;
    Chr_8028EE20 c = *(Chr_8028EE20 *)arg0;
    s32 max;
    s32 cur;
    s32 v;
    max = lbl_804D8E20[get_display_index__12TCharaMakingFPv(&c)].max[arg1];
    cur = c.sel[arg1];
    v = cur;
    do {
        if (++v >= max) {
            v = 0;
        }
    } while (v != cur);
    if (v != cur) {
        c.sel[arg1] = v;
        if (TAdSinglePlyChrSelectGC__sub_8028F198(&c) == 0) {
            goto ok;
        }
    }
    v = cur;
    do {
        if (--v < 0) {
            v = max - 1;
        }
    } while (v != cur);
    if (v != cur) {
        c.sel[arg1] = v;
        if (TAdSinglePlyChrSelectGC__sub_8028F198(&c) == 0) {
            goto ok;
        }
    }
    return 0;
ok:
    TNpcPlayer__sub_8007206C(arg0, &c);
    return 1;
}

}
