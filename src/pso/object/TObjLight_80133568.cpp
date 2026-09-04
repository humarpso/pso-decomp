#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TLobby__sub_801349C8(void *arg0, s16 arg1);
int TLobby__sub_80134A20(void* p);
void TObjLight__sub_801335EC(void);
void TObjLight__sub_801336DC(void);
void TObjLight__sub_80133714(void);
void TObjLight__sub_8013379C(void);
void TObjLight__sub_801337F8(void);
void TObjLight__sub_801337FC(void);
void TObjLight__sub_8013397C(void);
void *TObjLight__sub_8013486C(void *arg0, s16 arg1);
void *TObjLight__sub_801348C4(void *arg0, s16 arg1);
void bswap_data__9TObjLightFPv(void* p);
void *dt2__9TObjLightFPvs(void *arg0, s16 arg1);
void *dt__9TObjLightFPvs(void *arg0, s16 arg1);
void free_shared_data__9TObjLightFv(void);
void *init__9TObjLightFPv(void *arg0);
void* init_light__9TObjLightFPvi(void* a0, int a1);
void *init_object__9TObjLightFPv(void *arg0);
void set_light__9TObjLightFPvPvf(void *arg0, void *arg1, f32 farg0);
int TAdSinglePlyChrSelectGC__sub_801334E4(void*);
int TAdSinglePlyChrSelectGC__sub_80133544(void*);
int TAdSinglePlyChrSelectGC__sub_80133548(void);
M2C_UNK TObjLight__sub_8038B804(M2C_UNK *, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF268(f32, f32, f32);
M2C_UNK TObjLight__sub_803DF394(M2C_UNK, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF464(M2C_UNK, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF528(M2C_UNK);
int TQuestThread__sub_801F5C50(void*);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int bswap_32__FPUl(void*);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

    extern int lbl_804A6F28[];
    extern const float TObjLight__data_805DB088;
    extern const float lbl_805DB08C;
    extern const float lbl_805DB090;
    extern const float lbl_805DB094;
void* init_light__9TObjLightFPvi(void* a0, int a1) { *(int*)((char*)a0 + 0x0) = lbl_804A6F28[a1]; *(float*)((char*)a0 + 0x10) = TObjLight__data_805DB088; *(float*)((char*)a0 + 0xc) = TObjLight__data_805DB088; *(float*)((char*)a0 + 0x8) = TObjLight__data_805DB088; TAdSinglePlyChrSelectGC__sub_80133548(); *(float*)((char*)a0 + 0x14) = lbl_805DB08C; *(float*)((char*)a0 + 0x18) = lbl_805DB090; TAdSinglePlyChrSelectGC__sub_80133544(a0); *(float*)((char*)a0 + 0x20) = lbl_805DB094; *(float*)((char*)a0 + 0x24) = lbl_805DB094; *(float*)((char*)a0 + 0x28) = lbl_805DB094; TAdSinglePlyChrSelectGC__sub_801334E4(a0); return a0; }

void TObjLight__sub_801335EC(void) {  }

void TObjLight__sub_801336DC(void) {  }

void TObjLight__sub_80133714(void) {  }

void TObjLight__sub_8013379C(void) {  }

void TObjLight__sub_801337F8(void) {  }
void TObjLight__sub_801337FC(void) {  }

void TObjLight__sub_8013397C(void) {  }

extern M2C_UNK lbl_804A6FA8[];

void *dt__9TObjLightFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6FA8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A6FA8[];

void *init__9TObjLightFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6FA8;
    return arg0;
}

extern u32 TObjLight__data_805D5574;

void free_shared_data__9TObjLightFv(void) {
    if ((u32) TObjLight__data_805D5574 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TObjLight__data_805D5574);
        TObjLight__data_805D5574 = 0U;
    }
}

extern M2C_UNK lbl_804A6FC0[];

void *dt2__9TObjLightFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6FC0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A6FC0[];

void *init_object__9TObjLightFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6FC0;
    return arg0;
}

extern M2C_UNK TObjLight__data_8058D528[];

void set_light__9TObjLightFPvPvf(void *arg0, void *arg1, f32 farg0) {
    TObjLight__sub_803DF464(0, M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8));
    TObjLight__sub_8038B804(TObjLight__data_8058D528, M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8));
    TObjLight__sub_803DF394(0, M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 8), M2C_FIELD(arg1, f32 *, 0xC));
    TObjLight__sub_803DF268(farg0, farg0, farg0);
    TObjLight__sub_803DF528(0);
}

extern M2C_UNK lbl_804A6F78[];

void *TObjLight__sub_8013486C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6F78;
        dt2__9TObjLightFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A6F90[];

void *TObjLight__sub_801348C4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6F90;
        dt2__9TObjLightFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void bswap_data__9TObjLightFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); bswap_32__FPUl((char*)p + 0x20); bswap_32__FPUl((char*)p + 0x24); bswap_32__FPUl((char*)p + 0x28); bswap_32__FPUl((char*)p + 0x2c); bswap_32__FPUl((char*)p + 0x30); bswap_32__FPUl((char*)p + 0x34); bswap_32__FPUl((char*)p + 0x38); bswap_32__FPUl((char*)p + 0x3c); bswap_32__FPUl((char*)p + 0x40); }

extern M2C_UNK lbl_804A7008[];

void *TLobby__sub_801349C8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A7008;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TLobby__sub_80134A20(void* p) { return TQuestThread__sub_801F5C50(p); }

}
