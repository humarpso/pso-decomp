#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_synced_state__10TObjPlayerFPv(u8 *arg0);
void * create_dubchik__10TObjPlayerFPv(void *arg0);
s32 TNpcPlayer__sub_800D87EC(u16);
void *TObjControl__ct(void *, void *);
void *TObjEneDubchik__ct(void *, void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_800AA10C(void *);
M2C_UNK TObjPlayer__sub_800AA330(void *);
M2C_UNK TObjPlayer__sub_800AA528(void *);
M2C_UNK TObjPlayer__sub_800AB068(void *);
M2C_UNK TObjPlayer__sub_800C6A18(void *);
M2C_UNK TObjPlayer__sub_800F6DD8(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK TObjPlayer__sub_800A8B8C(void *);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 obj_testFlags30(void *, M2C_UNK);

void update_synced_state__10TObjPlayerFPv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjPlayer__sub_800AA330(arg0);
        return;
    }
    TObjPlayer__sub_800A8B8C(arg0);
    M2C_FIELD(arg0, s32 *, 0x2A8) = TNpcPlayer__sub_800D87EC(M2C_FIELD(arg0, u16 *, 0x338));
    TObjPlayer__sub_800C6A18(arg0);
    TObjPlayer__sub_800AA10C(arg0);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            TObjPlayer__sub_800AA528(arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    TObjPlayer__sub_800AA528(arg0);
    TObjPlayer__sub_800AB068(arg0);
    TObjPlayer__sub_800F6DD8(arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
    if (obj_testFlags30(arg0, 0x04000000) == 0) {
        TObjPlayer__sub_801B4A18(arg0, -1);
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

extern void *tl_04;

void * create_dubchik__10TObjPlayerFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x41C);
    if (o2 != NULL) {
        o2 = TObjEneDubchik__ct(o2, o, arg0);
    }
    return o2;
}

}
