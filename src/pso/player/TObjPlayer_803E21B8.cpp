#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_803E21B8(void);
void TObjPlayer__sub_803E21DC(void);
void TObjPlayer__sub_803E2200(void);
void TObjPlayer__sub_803E2224(void);
void TObjPlayer__sub_803E2248(void);
M2C_UNK setup_vertex_format__10TObjPlayerFv();
M2C_UNK setup_vtx_desc__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803E24E0();
M2C_UNK TObjPlayer__sub_803E2504();

void TObjPlayer__sub_803E21B8(void) {
    TObjPlayer__sub_803E24E0();
    setup_vertex_format__10TObjPlayerFv();
}

void TObjPlayer__sub_803E21DC(void) {
    TObjPlayer__sub_803E2504();
    setup_vertex_format__10TObjPlayerFv();
}

void TObjPlayer__sub_803E2200(void) {
    TObjPlayer__sub_803E24E0();
    setup_vtx_desc__10TObjPlayerFv();
}

void TObjPlayer__sub_803E2224(void) {
    TObjPlayer__sub_803E2504();
    setup_vtx_desc__10TObjPlayerFv();
}

void TObjPlayer__sub_803E2248(void) {

}

}
