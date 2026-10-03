#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Obj_8019B978 {
    u8 pad0[0x8C];
    s32 f8c;
    u8 pad90[0xFC - 0x90];
    s32 ffc;
};

extern "C" {
M2C_UNK TObjMapWarp__sub_8019D0A8(Obj_8019B978 *);
M2C_UNK set_global_count__12TObjNpcEnemyFi(M2C_UNK);
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_804463D0[];
extern char lbl_804463E0[];
extern char lbl_804463F0[];
void TObjMapForceWarp__vt17(Obj_8019B978 *arg0);
}

extern "C" {

s32 TObjMapForceWarp__vt16(void *arg0, u16 arg1);
M2C_UNK fn_8019B8D8(void *, int);

s32 TObjMapForceWarp__vt16(void *arg0, u16 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xFC) != 0) {
        fn_8019B8D8(arg0, arg1);
    }
    return 1;
}
void TObjMapForceWarp__vt17(Obj_8019B978 *arg0) {
    TObjMapWarp__sub_8019D0A8(arg0);
    if (arg0->f8c > 0) {
        arg0->ffc = 0;
    } else {
        arg0->ffc = 1;
    }
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130021, lbl_804463D0);
    if (arg0->ffc != 0) {
        debug_printf_at(0x130022, lbl_804463E0);
    } else {
        debug_printf_at(0x130022, lbl_804463F0);
    }
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

}
