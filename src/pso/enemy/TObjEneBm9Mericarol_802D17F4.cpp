#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *construct__19TObjEneBm9MericarolFPvii(void *arg0, s32 arg1, s32 arg2);
void *destroy__19TObjEneBm9MericarolFPvs(void *arg0, s16 arg1);
void *dt__19TObjEneBm9MericarolFPvs(void *arg0, s16 arg1);
s32 TBoss8Dragon__sub_8008741C(s32, M2C_UNK, M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
s32 is_alive__9TObjEneDDFPv(s32);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804E18A8[];

void *dt__19TObjEneBm9MericarolFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E18A8;
        if (M2C_FIELD(arg0, void **, 0x110) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x110)); M2C_FIELD(arg0, M2C_UNK *, 0x110) = 0; }
        if (M2C_FIELD(arg0, void **, 0x114) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x114)); M2C_FIELD(arg0, M2C_UNK *, 0x114) = 0; }
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E1908[];

void *destroy__19TObjEneBm9MericarolFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E1908;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E1908[];
extern s32 lbl_805D3F38;

void *construct__19TObjEneBm9MericarolFPvii(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E1908;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F38;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if (is_alive__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x20)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = TBoss8Dragon__sub_8008741C(M2C_FIELD(arg0, s32 *, 0x20) + 0x38, 0x20D, 0x40);
    }
    return arg0;
}

}
