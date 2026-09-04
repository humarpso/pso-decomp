#include "pso/TEneEffHamon.h"

TEneEffHamon::~TEneEffHamon() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TEneEffHamon__sub_800A380C(void);
void *TObjPlayer__sub_800A41AC(void *arg0, s16 arg1);
void init_fish_effects__12TEneEffHamonFv(void);
int TObjFish__sub_8001EDB0(void*, void*);
int TObjFish__sub_8001EDC4(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void TEneEffHamon__sub_800A380C(void) {  }

    extern int lbl_805D500C;
    extern int lbl_805D5030;
    extern int lbl_805D5034;
void init_fish_effects__12TEneEffHamonFv(void) { lbl_805D5030 = TObjFish__sub_8001EDC4((void*)(lbl_805D500C), (void*)3); lbl_805D5034 = TObjFish__sub_8001EDB0((void*)(lbl_805D500C), (void*)3); }

extern M2C_UNK lbl_80490A18[];

void *TObjPlayer__sub_800A41AC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490A18;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
