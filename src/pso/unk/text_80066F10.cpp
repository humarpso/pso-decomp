#include "types.h"
extern "C" {
s32 TBoss8Dragon__sub_8005D700(void);
void *TObjEneDD__sub_800BB9AC(void *);
void *load_gvm_texture_file(void *);
extern char lbl_80488768[];
extern char lbl_8043810C[];
extern void *lbl_805D4DD8;
extern void *lbl_805D4DDC;
void fn_80066F10(void);
}

extern "C" {

void fn_80066F10(void) {
    switch (TBoss8Dragon__sub_8005D700()) {
    case 0:
        lbl_805D4DD8 = TObjEneDD__sub_800BB9AC(lbl_80488768);
        lbl_805D4DDC = load_gvm_texture_file(lbl_8043810C);
        break;
    }
}

}
