#include "types.h"
extern "C" {
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void *load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern u8 lbl_80450C50[];
extern u8 lbl_80450C6C[];
extern u8 lbl_804D34D0[];
extern u8 lbl_804D34F0[];
extern void *lbl_805D64C8;
extern void *lbl_805D64CC;
void load_green_door_resources(void);
}

extern "C" {

void load_green_door_resources(void) {
    void *p;
    lbl_805D64C8 = 0;
    lbl_805D64CC = 0;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0x13:
    case 0x14:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, lbl_804D34D0, 0, 0, 0);
        }
        lbl_805D64C8 = p;
        lbl_805D64CC = load_gvm_texture_file(lbl_80450C50);
        break;
    case 0x15:
    case 0x16:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, lbl_804D34F0, 0, 0, 0);
        }
        lbl_805D64C8 = p;
        lbl_805D64CC = load_gvm_texture_file(lbl_80450C6C);
        break;
    }
}

}
