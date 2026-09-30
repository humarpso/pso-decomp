#include "types.h"
struct V3_8017F624 { s32 x; s32 y; s32 z; };

extern "C" {
void get_camera_ctrl__9TObjEneDDFPv(void *, void *);
extern s32 lbl_804439B8[];
extern V3_8017F624 lbl_80443AB8[];
extern V3_8017F624 lbl_8050DB80[];
extern s32 TObjCamera__data_805D5B1C;
void TObjCamera__sub_8017F624(void);
}

extern "C" {

void TObjCamera__sub_8017F624(void) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (TObjCamera__data_805D5B1C == lbl_804439B8[i]) {
            V3_8017F624 v = lbl_80443AB8[0];
            get_camera_ctrl__9TObjEneDDFPv(&v, &lbl_8050DB80[i]);
        }
    }
    TObjCamera__data_805D5B1C += 1;
}

}
