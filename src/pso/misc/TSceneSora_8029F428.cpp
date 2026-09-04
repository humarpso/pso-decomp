#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create_instance__10TSceneSoraFPv(void *arg0);
void *destroy__10TSceneSoraFPvs(void *arg0, s16 arg1);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(M2C_UNK);
void *fn_803281B8(void *, M2C_UNK, M2C_UNK, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_active_scene__6TSceneFi(M2C_UNK);
M2C_UNK set_id__6TSceneFi(M2C_UNK);
M2C_UNK set_instance__6TSceneFi(M2C_UNK);

extern M2C_UNK lbl_804DC7C4[];
extern s32 lbl_805D65F0;
extern s16 lbl_805D65F8;
extern s8 lbl_805D65FA;

void *destroy__10TSceneSoraFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DC7C4;
        lbl_805D65F8 = 0;
        lbl_805D65FA = 0;
        lbl_805D65F0 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        set_id__6TSceneFi(0);
        set_active_scene__6TSceneFi(0);
        set_instance__6TSceneFi(0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804DC7C4[];
extern s32 tl_05;
extern void *lbl_805D65F4;
extern s16 lbl_805D65F8;
extern s8 lbl_805D65FA;
extern s32 lbl_805D65FC;
extern const f32 lbl_805DDD8C;
extern const f32 lbl_805DDD90;

void *create_instance__10TSceneSoraFPv(void *arg0) {
    void *obj;

    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DC7C4;
    lbl_805D65F8 = 0;
    lbl_805D65FA = 0;
    if ((void *) lbl_805D65F4 != NULL) {
        return arg0;
    }
    lbl_805D65F4 = arg0;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) lbl_805D65FC;
    obj = __nw__7TObjectFUl(0x20);
    if (obj != NULL) {
        obj = fn_803281B8(obj, 0x28, 1, tl_05);
    }
    M2C_FIELD(arg0, void **, 0x20) = obj;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DDD8C;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DDD8C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DDD8C;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805DDD8C;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DDD90;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DDD8C;
    return arg0;
}

}
