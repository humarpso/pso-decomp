#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80298AD0 { char pad[0x18]; };
struct VObj_80298AD0 : Base_80298AD0 { virtual void m0(int); };

extern "C" {

void *TObjCMMainMenu__sub_80298A88(void *arg0);
void *TObjCMMainMenu__sub_80298AD0(void *arg0, s16 arg1);
void *TObjCMMainMenu__ct(void *, void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

void *TObjCMMainMenu__sub_80298A88(void *arg0) {
    void *o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TObjCMMainMenu__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804DBDA8[];

void *TObjCMMainMenu__sub_80298AD0(void *arg0, s16 arg1) {
    void *temp_r3;
    void *temp_r5;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DBDA8;
        temp_r3 = M2C_FIELD(arg0, void **, 0x50);
        if (temp_r3 != NULL) {
            if (temp_r3 != NULL) {
                ((VObj_80298AD0 *)temp_r3)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0x50) = NULL;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x18) = -1;
        temp_r5 = M2C_FIELD(arg0, void **, 0x1C);
        M2C_FIELD(temp_r5, s8 *, 0x33) = 2;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
