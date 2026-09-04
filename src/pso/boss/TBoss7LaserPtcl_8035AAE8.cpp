#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss7LaserPtcl__sub_8035AD64(void);
void *TBoss7LaserPtcl__sub_8035ADFC(void *arg0, s16 arg1);
void TBoss7LaserPtcl__sub_8035AF0C(void);
void TBoss7LaserPtcl__sub_8035AF10(void);
void TBoss7LaserPtcl__sub_8035AF14(void);
void *__dt__15TBoss7LaserPtclFv(void *arg0, s16 arg1);
void render__15TBoss7LaserPtclFv(void);
void TBoss7LaserPtcl__sub_8035AA98(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void render__15TBoss7LaserPtclFv(void) {  }

extern M2C_UNK __vt__15TBoss7LaserPtcl[];

void *__dt__15TBoss7LaserPtclFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss7LaserPtcl;
        TBoss7LaserPtcl__sub_8035AA98(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TBoss7LaserPtcl__sub_8035AD64(void) {  }

extern M2C_UNK lbl_804F1C88[];

void *TBoss7LaserPtcl__sub_8035ADFC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1C88;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TBoss7LaserPtcl__sub_8035AF0C(void) {  }
void TBoss7LaserPtcl__sub_8035AF10(void) {  }
void TBoss7LaserPtcl__sub_8035AF14(void) {  }

}
