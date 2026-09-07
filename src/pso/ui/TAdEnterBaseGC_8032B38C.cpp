#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8032B390_lbl_80477198 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_8032B390_lbl_804771B8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
u32 __nw__7TObjectFUl(int);
s32 __ct__9TAdBackGCFv(int, void *);
s32 __ct__12TAdBackTxtGCFv(int, void *);
u32 __ct__14TAdSelectCurGCFv(int, int, void *, void *);
extern RecoveredGlobal_8032B390_lbl_80477198 lbl_80477198;
extern RecoveredGlobal_8032B390_lbl_804771B8 lbl_804771B8;
extern s32 tl_clipout;
extern int lbl_805D6CA8;
void TAdEnterBaseGC__sub_8032B390(u8 *arg0);
}

extern "C" {

void *TAdEnterBaseGC__ct(void *arg0);
s32 TAdPsoPassSaveGC__sub_8032B584(void);
void *__dt__14TAdEnterBaseGCFv(void *arg0, s16 arg1);
void reset__14TAdEnterBaseGCFPvi(void* a0, int a1);
void run_task__14TAdEnterBaseGCFv(void);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void run_task__14TAdEnterBaseGCFv(void) {  }

    extern int lbl_805D6CA0;
    extern int lbl_805D6CA8;

typedef char RecoveredGlobal_8032B390_lbl_80477198_size[sizeof(RecoveredGlobal_8032B390_lbl_80477198) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_8032B390_lbl_804771B8_size[sizeof(RecoveredGlobal_8032B390_lbl_804771B8) == 0x10 ? 1 : -1];
void TAdEnterBaseGC__sub_8032B390(u8 *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 var_r0;
    u32 var_r0_2;
    temp_r3 = __nw__7TObjectFUl((int) (0x24));
    if (temp_r3 != 0U) {
        __ct__9TAdBackGCFv((int) (temp_r3), (void *) (arg0));
    }
    temp_r3_2 = __nw__7TObjectFUl((int) (0x28));
    if (temp_r3_2 != 0U) {
        __ct__12TAdBackTxtGCFv((int) (temp_r3_2), (void *) (arg0));
    }
    if ((s32) (*(s32 *)&lbl_805D6CA8) == 3) {
        temp_r3_3 = __nw__7TObjectFUl((int) (0x708));
        var_r0 = temp_r3_3;
        if (var_r0 != 0U) {
            var_r0 = __ct__14TAdSelectCurGCFv((int) (temp_r3_3), (int) (tl_clipout), (void *) ((u8 *)&lbl_80477198.value + 0x10), (void *) ((u8 *)&lbl_804771B8.value + 8));
        }
        M2C_FIELD(arg0, u32 *, 0x2C) = var_r0;
        return;
    }
    temp_r3_4 = __nw__7TObjectFUl((int) (0x708));
    var_r0_2 = temp_r3_4;
    if (var_r0_2 != 0U) {
        var_r0_2 = __ct__14TAdSelectCurGCFv((int) (temp_r3_4), (int) (tl_clipout), (void *) (&lbl_80477198.value), (void *) (&lbl_804771B8.value));
    }
    M2C_FIELD(arg0, u32 *, 0x2C) = var_r0_2;
}

void reset__14TAdEnterBaseGCFPvi(void* a0, int a1) { *(int*)((char*)a0 + 0x24) = 0; *(int*)((char*)a0 + 0x20) = 0; lbl_805D6CA8 = a1; *(int*)((char*)a0 + 0x38) = 0; *(int*)((char*)a0 + 0x3c) = 0; *(int*)((char*)a0 + 0x28) = 0; *(int*)((char*)a0 + 0x2c) = 0; *(int*)((char*)a0 + 0x30) = 0; *(int*)((char*)a0 + 0x34) = 0; lbl_805D6CA0 = 0; }

extern M2C_UNK __vt__14TAdEnterBaseGC[];

void *__dt__14TAdEnterBaseGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TAdEnterBaseGC;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__14TAdEnterBaseGC[];
extern void *lbl_805D41E0;

void *TAdEnterBaseGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TAdEnterBaseGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D41E0;
    reset__14TAdEnterBaseGCFPvi((void*)(arg0), (int)(0));
    return arg0;
}

extern s32 TAdPsoPassSaveGC__data_805D6E80;

s32 TAdPsoPassSaveGC__sub_8032B584(void) {
    return TAdPsoPassSaveGC__data_805D6E80;
}

}
