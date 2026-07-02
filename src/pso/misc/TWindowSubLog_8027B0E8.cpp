#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TWindowSubLogFv(void *arg0, s16 arg1);
void TWindowCtrl__sub_8024ADF0(void *);
void TWindowSubComCard__sub_80244A14(void *);
void TWindowSubLog__sub_8027B248(void *);
void TWindowSubLog__sub_8027B258(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__13TWindowSubLog[];

void *__dt__13TWindowSubLogFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowSubLog;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { TWindowSubLog__sub_8027B248(M2C_FIELD(arg0, void **, 0x20)); TWindowSubLog__sub_8027B258(M2C_FIELD(arg0, void **, 0x20)); }
        TWindowCtrl__sub_8024ADF0(M2C_FIELD(arg0, void **, 0x1C));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
