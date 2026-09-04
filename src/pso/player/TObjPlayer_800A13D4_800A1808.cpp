#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_800A1808(void* p);
void TObjPlayer__sub_800A1974(void);
void render_shadow__10TObjPlayerFi(s32 arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 is_flag_set_388_bit26__10TObjPlayerFPv(s32);
s32 obj_testFlags30(s32, s32);
M2C_UNK set_global_param__8TObjFishFi(s32);

int TObjPlayer__sub_800A1808(void* p) { return (*(u32*)((char*)p + 0x30) >> 23) & 0x1; }

extern s32 lbl_805D5014;
extern s32 lbl_805D5018;
extern s32 lbl_805D501C;

void render_shadow__10TObjPlayerFi(s32 arg0) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        if (is_flag_set_388_bit26__10TObjPlayerFPv(arg0) == 0) {
            set_global_param__8TObjFishFi(lbl_805D5014);
        } else {
            set_global_param__8TObjFishFi(lbl_805D5018);
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x3B4);
        TObjFish__sub_803E46BC(lbl_805D501C);
        TObjPlayer__sub_803D9B78();
    }
}

void TObjPlayer__sub_800A1974(void) {  }

}
