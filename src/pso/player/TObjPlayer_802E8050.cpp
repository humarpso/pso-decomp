#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_802E80A0(void);
void TObjPlayer__sub_802E8234(u8 *arg0);
void draw_effect__10TObjPlayerFv(void);
void notify_fish_obj__10TObjPlayerFPv(void* a0);
void queue_boss_effect__10TObjPlayerFPv(void* a0);
int TObjFish__sub_8001ED9C(void*, void*);
int TObjFish__sub_8001EDB0(void*, void*);
int TObjFish__sub_8001EDC4(void*, void*);
int set_global_param__8TObjFishFi(void);

    extern int lbl_805D6918;
void notify_fish_obj__10TObjPlayerFPv(void* a0) { TObjFish__sub_8001ED9C((void*)(lbl_805D6918), a0); }

    extern int lbl_805D6918;
void queue_boss_effect__10TObjPlayerFPv(void* a0) { TObjFish__sub_8001EDC4((void*)(lbl_805D6918), a0); }

    extern int lbl_805D6918;
void TObjPlayer__sub_802E80A0(void) { TObjFish__sub_8001EDB0((void*)(lbl_805D6918), (void*)0); }

    extern int lbl_805D6918;
void draw_effect__10TObjPlayerFv(void) { TObjFish__sub_8001EDB0((void*)(lbl_805D6918), (void*)0); set_global_param__8TObjFishFi(); }

extern s32 lbl_805D691C;
extern s32 lbl_805D6920;
extern s32 lbl_805D6924;
extern s32 lbl_805D6928;
extern s32 lbl_805D692C;
extern s32 lbl_805D6930;
extern s32 lbl_805D6934;
extern s32 lbl_805D6944;

void TObjPlayer__sub_802E8234(u8 *arg0) {
    lbl_805D691C = 0;
    lbl_805D6924 = M2C_FIELD(arg0, s32 *, 0x628);
    lbl_805D6920 = 0;
    lbl_805D6928 = (long) (arg0 + 0x3EC);
    lbl_805D6930 = M2C_FIELD(arg0, s32 *, 0x6D8);
    lbl_805D6934 = M2C_FIELD(arg0, s32 *, 0x6D4);
    lbl_805D692C = (long) (arg0 + 0x4DC);
    lbl_805D6944 = (long) (arg0 + 0x7B4);
}

}
