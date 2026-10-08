#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_quad_sprite_base(void *arg0, s16 arg1);
void *quad_sprite_base_ct(void *arg0, void *arg_r4, void *arg2);
M2C_UNK __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK quad_sprite_reset_entries(void *);
void free__11TOBoss4RockFUi(void *);

extern M2C_UNK lbl_804C57F0[];

void *destroy_quad_sprite_base(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C57F0;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x20));
        M2C_FIELD(arg0, M2C_UNK *, 0x20) = 0;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x1C));
        M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804C57F0[];

void *quad_sprite_base_ct(void *arg0, void *arg_r4, void *arg2) {
    s32 temp_r31;

    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C57F0;
    M2C_FIELD(arg0, void **, 0x28) = arg2;
    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C) = alloc_buffer__11TOBoss4RockFPv(temp_r31 * 0x2C);
    M2C_FIELD(arg0, s32 *, 0x20) = alloc_buffer__11TOBoss4RockFPv(temp_r31 * 4);
    quad_sprite_reset_entries(arg0);
    return arg0;
}

}
