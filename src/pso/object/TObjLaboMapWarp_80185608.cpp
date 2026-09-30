#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Obj_80185664 { u8 pad[0x8C]; s32 dest; };

extern "C" {
void TObjCityMapWarp__sub_801858E4(void *);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void TObjEneBm5GibonU__sub_803D853C(s32 id, const char *fmt, ...);
extern const char lbl_804449C0[];
extern const char lbl_804449D0[];
extern const char lbl_804449E0[];
extern const char lbl_804449F0[];
extern const char lbl_80444A00[];
extern const char lbl_80444A10[];
extern const char *lbl_804B601C[];
void TObjCityMapWarp__vt17(Obj_80185664 *self);
}

extern "C" {

void *TObjLaboMapWarp__ct(void *arg0);
void TObjLaboMapWarp__sub_80185400(void *);
void TObjMapWarp__ct(void *);

extern M2C_UNK __vt__15TObjLaboMapWarp[];
extern void *lbl_805D32B4;
extern const f32 lbl_805DBC8C;
extern const f32 lbl_805DBC90;

void *TObjLaboMapWarp__ct(void *arg0) {
    TObjMapWarp__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjLaboMapWarp;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D32B4;
    TObjLaboMapWarp__sub_80185400(arg0);
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DBC8C;
    M2C_FIELD(arg0, f32 *, 0xFC) = lbl_805DBC90;
    return arg0;
}
void TObjCityMapWarp__vt17(Obj_80185664 *self) {
    TObjCityMapWarp__sub_801858E4(self);
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x13001C, lbl_804449C0);
    TObjEneBm5GibonU__sub_803D853C(0x13001D, lbl_804449D0);
    TObjEneBm5GibonU__sub_803D853C(0x13001E, lbl_804449E0);
    TObjEneBm5GibonU__sub_803D853C(0x130020, lbl_804449F0);
    TObjEneBm5GibonU__sub_803D853C(0x130021, lbl_80444A00);
    TObjEneBm5GibonU__sub_803D853C(0x130022, lbl_80444A10, lbl_804B601C[self->dest]);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

}
