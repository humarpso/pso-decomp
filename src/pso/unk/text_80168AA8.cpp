#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
struct Buf_80168AA8 { s32 a; s32 b; s32 c; };
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
void *load_resource_from_descriptor(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
Buf_80168AA8 *alloc_buffer__11TOBoss4RockFPv(u32);
s32 load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern u8 lbl_80441858[];
extern u8 lbl_80441874[];
extern u8 lbl_804B2144[];
extern u8 lbl_804B2164[];
extern void *lbl_805D59D0;
extern Buf_80168AA8 *lbl_805D59D4;
extern s32 lbl_805D59D8;
extern s32 lbl_805D59DC;
extern s32 lbl_805D59E0;
extern s32 lbl_805D59E4;

void fn_80168AA8(void) {
    void *p;

    lbl_805D59D0 = 0;
    lbl_805D59D4 = 0;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 19:
    case 20:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != 0) {
            p = load_resource_from_descriptor(p, 5, lbl_804B2164, 0, 0, 0);
        }
        lbl_805D59D0 = p;
        lbl_805D59D4 = alloc_buffer__11TOBoss4RockFPv(0xC);
        lbl_805D59D4->b = 0;
        lbl_805D59D4->a = 0;
        lbl_805D59D4->c = TObjFish__sub_8001EDB0(lbl_805D59D0, 0);
        lbl_805D59D8 = 0;
        lbl_805D59DC = 0;
        lbl_805D59E0 = 0;
        lbl_805D59E4 = 0;
        break;
    default:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != 0) {
            p = load_resource_from_descriptor(p, 5, lbl_804B2144, 0, 0, 0);
        }
        lbl_805D59D0 = p;
        lbl_805D59D4 = alloc_buffer__11TOBoss4RockFPv(0xC);
        lbl_805D59D4->a = load_gvm_texture_file(lbl_80441858);
        lbl_805D59D4->b = load_gvm_texture_file(lbl_80441874);
        lbl_805D59D4->c = TObjFish__sub_8001EDB0(lbl_805D59D0, 1);
        lbl_805D59DC = get_bml_model(lbl_805D59D0, 2);
        lbl_805D59E0 = 1;
        lbl_805D59E4 = 0;
        break;
    }
}

}
