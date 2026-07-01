#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK fn_80154788(void *, M2C_UNK, M2C_UNK);

}

struct CBase { char pad[0x18]; };
struct CV : CBase {
    virtual void pad00(); virtual void pad01(); virtual void pad02(); virtual void pad03(); virtual void pad04(); virtual void pad05(); virtual void pad06(); virtual void pad07(); virtual void pad08(); virtual void pad09(); virtual void pad10(); virtual void pad11(); virtual void pad12(); virtual void pad13(); virtual void pad14(); virtual void pad15(); virtual void pad16(); virtual void pad17(); virtual void pad18(); virtual void pad19(); virtual void pad20(); virtual void pad21(); virtual void pad22(); virtual void pad23(); virtual void pad24(); virtual void pad25(); virtual void pad26(); virtual void pad27(); virtual void pad28(); virtual void pad29(); virtual void pad30(); virtual void pad31(); virtual void pad32(); virtual void pad33(); virtual void pad34(); virtual void pad35(); virtual void pad36(); virtual void pad37(); virtual void pad38(); virtual void pad39(); virtual void pad40(); virtual void pad41(); virtual void pad42(); virtual void pad43(); virtual void pad44(); virtual void pad45(); virtual void pad46(); virtual void pad47(); virtual void pad48(); virtual void pad49(); virtual void pad50(); virtual void pad51(); virtual void pad52(); virtual void pad53(); virtual void pad54(); virtual void pad55(); virtual void pad56(); virtual void pad57(); virtual void pad58(); virtual void pad59(); virtual void pad60(); virtual void pad61(); virtual void pad62(); virtual void pad63(); virtual void pad64(); virtual void pad65(); virtual void pad66(); virtual void pad67(); virtual void pad68(); virtual void pad69(); virtual void pad70(); virtual void pad71(); virtual void pad72(); virtual void pad73(); virtual void pad74(); virtual void pad75(); virtual void pad76(); virtual void pad77(); virtual void pad78(); virtual void pad79(); virtual void pad80(); virtual void pad81(); virtual void pad82(); virtual void pad83(); virtual void pad84(); virtual void pad85(); virtual void pad86(); virtual void pad87(); virtual void pad88(); virtual void pad89(); virtual void pad90(); virtual void pad91(); virtual void pad92(); virtual void pad93(); virtual void pad94(); virtual void pad95(); virtual void pad96(); virtual void pad97(); virtual void pad98(); virtual void pad99();
    virtual void vf100();
};

extern "C" {

void fn_800C63CC(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
        }
        break;
    case 0:
        switch ((s16) M2C_FIELD(arg0, s16 *, 0x328)) {
        case 2:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
                M2C_FIELD(arg0, s16 *, 0x328) = 0;
            }
            break;
        }
        break;
    default:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
        } else {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        }
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        ((CV *)arg0)->vf100();
        obj_setFlags30(arg0, 0x04040000);
        fn_80154788(arg0, 0, 0x0A000000);
        break;
    }
}

}
