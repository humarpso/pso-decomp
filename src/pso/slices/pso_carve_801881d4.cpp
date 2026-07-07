#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();

struct Base_TOC { char pad[0x18]; };
struct V_TOC : Base_TOC {
    PADV4
    PADV4
    virtual s32 m8(f32, f32);
};

extern "C" {

M2C_UNK TObjComputer__sub_8018807C(void *);
extern const f32 lbl_805DBCDC;
extern const f32 lbl_805DBCE0;

void render__12TObjComputerFv(u8 *arg0) {
    if (((V_TOC *)arg0)->m8(lbl_805DBCDC, lbl_805DBCE0) != 0) {
        TObjComputer__sub_8018807C(arg0);
    }
}

}
