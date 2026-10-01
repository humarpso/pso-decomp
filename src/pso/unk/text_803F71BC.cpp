#include "types.h"

struct Block_803F7438 { u8 b[0x10]; };

extern "C" {
extern u32 *lbl_805D79F0;
void fn_803F7660(u32 *mask);
void fn_803F7308(u32 *dst, u32 *src);
extern u32 *lbl_805D79F0;
void fn_803F7424(void);
extern u32 *lbl_805D79F0;
void fn_803F7404(u32 *p, s32 n);
s32 fn_803F71BC(char *s);
s32 fn_803F632C(u8 *, u32, s32);
void fn_803F7404(u32 *p, s32 n);
void fn_803F7424(void);
u32 *fn_803F74CC(s32);
void fn_803F7660(u32 *mask);
extern u32 lbl_805A8AE8[];
s32 fn_803F7254(s32 arg0, u8 *arg1, u32 arg2, s32 arg3);
void fn_803F7388(u32 *, Block_803F7438 *, Block_803F7438 *);
s32 fn_803F7438(u32 *key, u8 *src, s32 len, u8 *dst);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
#pragma optimization_level 2
s32 fn_803F71BC(char *s) {
    char c;
    s32 i;
    s32 v;
    v = 0;
    i = 0;
    while ((c = s[i]) >= '0' && c <= 'f') {
        if (c >= '0' && c <= '9') {
            v = c + (v << 4);
            v -= 0x30;
        } else if (c >= 'a' && c <= 'f') {
            v = c + (v << 4);
            v -= 0x57;
        } else if (c >= 'A' && c <= 'F') {
            v = c + (v << 4);
            v -= 0x37;
        }
        i++;
    }
    return v;
}
#pragma pop

#pragma push
#pragma use_lmw_stmw off
#pragma scheduling off
s32 fn_803F7254(s32 arg0, u8 *arg1, u32 arg2, s32 arg3) {
    u32 *key;
    u32 i;
    s32 r;
    fn_803F7404(lbl_805A8AE8, 1);
    key = fn_803F74CC(arg0);
    for (i = 0; i < arg2; i += 0x10) {
        if (fn_803F7438((u32 *)(key), (u8 *)(arg1 + i), (s32)(0x10), (u8 *)(arg1 + i)) != 0) {
            return -1;
        }
    }
    r = fn_803F632C(arg1, arg2, arg3);
    fn_803F7660(key);
    fn_803F7424();
    return r;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
#pragma optimization_level 2
void fn_803F7308(u32 *dst, u32 *src) {
    s32 i;
    for (i = 0; i < 4; i++, dst++, src++) {
        *dst = *src;
    }
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma optimization_level 1
void fn_803F7404(u32 *p, s32 n) {
    lbl_805D79F0 = p;
    if (n > 16) {
        n = 16;
    }
    *lbl_805D79F0 = n << 16;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
#pragma optimization_level 2
void fn_803F7424(void) {
    *lbl_805D79F0 = 0;
    lbl_805D79F0 = 0;
}
#pragma pop

#pragma push
#pragma use_lmw_stmw off
#pragma scheduling off
#pragma peephole off
#pragma optimization_level 2
s32 fn_803F7438(u32 *key, u8 *src, s32 len, u8 *dst) {
    s32 i;
    Block_803F7438 *p;
    Block_803F7438 *q;
    if (key == NULL) {
        return -1;
    }
    if ((len & 0xF) != 0) {
        return -2;
    }
    p = (Block_803F7438 *)src;
    q = (Block_803F7438 *)dst;
    for (i = 0; i < (len >> 4); i++) {
        fn_803F7388(key, p++, q++);
    }
    return 0;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
#pragma optimization_level 2
void fn_803F7660(u32 *mask) {
    *lbl_805D79F0 &= ~*mask;
}
#pragma pop

}
