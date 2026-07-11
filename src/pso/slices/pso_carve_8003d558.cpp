#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_main_phase();
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK fn_8003CAD0();
s32 fn_8003D1E8(void *);
M2C_UNK fn_8003DD4C(void *);
M2C_UNK fn_80040C34();
s32 TLobby__sub_800C6C10();
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);

}

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PAD3 virtual void CAT(f,__LINE__)(); virtual void CAT(g,__LINE__)(); virtual void CAT(h,__LINE__)();
struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    virtual void f0();
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    PAD3
    virtual void CAT(f,__LINE__)(); virtual void CAT(g,__LINE__)();
    virtual void m72(s32);
};

extern "C" {

void fn_8003D558(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        if (get_main_phase() == 0xF) {
            if (TLobby__sub_800C6C10() != 0) {
                fn_8003DD4C(arg0);
            }
        } else {
            fn_8003DD4C(arg0);
        }
        if (fn_8003D1E8(arg0) != 0) {
            fn_8003CAD0();
            obj_setFlags30(arg0, 0x800);
            ((V_A *)arg0)->m72(0);
            M2C_FIELD(arg0, s32 *, 0x374) = 5;
            if (__nw__7TObjectFUl(0x1C) != 0U) {
                fn_80040C34();
            }
        }
        TOTrapAncient01__sub_80226578(0x4003C601, arg0, 0, 0, 0);
        break;
    case -1:
        break;
    case 2:
        break;
    }
}

}
