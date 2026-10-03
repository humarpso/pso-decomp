#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Obj_80185E14 { u8 pad0[0x88]; s32 f88; u8 pad1[0xC4]; s32 f150; };

struct V3_80185E14 { s32 w[3]; };

extern "C" {
void set_global_count__12TObjNpcEnemyFi(int);
void debug_printf_at(int, void *, ...);
extern V3_80185E14 lbl_80444998[];
extern u8 lbl_805DBC94;
void TObjCityMainWarp__vt18(Obj_80185E14 *arg0);
}

extern "C" {

void *TObjCityAreaWarp__ct(void *arg0);
void TObjAreaWarp__ct(void *);

extern const f32 lbl_805DBC8C;
extern M2C_UNK __vt__16TObjCityAreaWarp[];
extern const f32 lbl_805DBC90;
extern void *lbl_805D32AC;

void *TObjCityAreaWarp__ct(void *arg0) {
    TObjAreaWarp__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCityAreaWarp;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D32AC;
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DBC8C;
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DBC90;
    M2C_FIELD(arg0, u32 *, 0xBC) = 15;
    return arg0;
}
void TObjCityMainWarp__vt18(Obj_80185E14 *arg0) {
    arg0->f150 = arg0->f88;
    if (arg0->f150 < 0) {
        arg0->f150 = 0;
    }
    if (arg0->f150 > 2) {
        arg0->f150 = 2;
    }
    V3_80185E14 sp8 = lbl_80444998[0];
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130021, &lbl_805DBC94, sp8.w[arg0->f150]);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

}
