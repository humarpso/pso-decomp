#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8032D958___vt__16TAdGuideButtonGC {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
s32 TAdMultiPlyChrSelectGC__sub_802C6FA8(void);
extern M2C_UNK __vt__16TAdGuideButtonGC[];
extern s32 lbl_805D4210;
extern s32 lbl_805D6D00;
u8 *TAdGuideButtonGC__ct(u8 *arg0, u8 *arg1);
}

extern "C" {

void *__dt__16TAdGuideButtonGCFv(void *arg0, s16 arg1);
void render__16TAdGuideButtonGCFv(void* p);
int TAdWarningBaseGC__sub_8032D514(void*, void*, void*);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
int get_state_flag__9TMainTaskFv(void*);
int render__16TAdWarningBaseGCFi(void*, void*);

void render__16TAdGuideButtonGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { render__16TAdWarningBaseGCFi(p, (void*)0); TAdWarningBaseGC__sub_8032D514(p, (void*)0, *(void**)((char*)p + 0x1a0)); } }

extern M2C_UNK __vt__16TAdGuideButtonGC[];
extern u32 lbl_805D6D04;

void *__dt__16TAdGuideButtonGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdGuideButtonGC;
        if ((u32) lbl_805D6D04 != 0U) {
            lbl_805D6D04 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8032D958___vt__16TAdGuideButtonGC_size[sizeof(RecoveredGlobal_8032D958___vt__16TAdGuideButtonGC) == 0x18 ? 1 : -1];
u8 *TAdGuideButtonGC__ct(u8 *arg0, u8 *arg1) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8032D958___vt__16TAdGuideButtonGC *)&__vt__16TAdGuideButtonGC).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4210;
    M2C_FIELD(arg0, s32 *, 0x13C) = -1;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    lbl_805D6D00 = TAdMultiPlyChrSelectGC__sub_802C6FA8();
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    return arg0;
}

}
