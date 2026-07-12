#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TQuestThread__sub_801F5ED0(void *arg0, s16 arg1);
M2C_UNK TQuestThread__sub_801F5E7C();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007EBB4(s32);

extern M2C_UNK TQuestThread__data_804C8678[];
extern s32 lbl_805D5EE8;
extern s32 lbl_805D5EEC;

void *TQuestThread__sub_801F5ED0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = TQuestThread__data_804C8678;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 0) {
            lbl_805D5EE8 = 0;
            TQuestThread__sub_801F5E7C();
        } else {
            lbl_805D5EEC = 0;
        }
        TAdSinglePlyChrSelectGC__sub_8007EBB4(M2C_FIELD(arg0, s32 *, 0x198));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
