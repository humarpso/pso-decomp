#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__9TObjLightFv(void);

void render__9TObjLightFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8002F238
#include "types.h"

extern "C" {

int TObjLight__sub_8002F238(void* p);
int get_target_info__9TObjEneDDFPv(void*);

int TObjLight__sub_8002F238(void* p) { return get_target_info__9TObjEneDDFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80133568
#include "types.h"

extern "C" {

void* init_light__9TObjLightFPvi(void* a0, int a1);
void TObjLight__sub_801335EC(void);
int TAdSinglePlyChrSelectGC__sub_801334E4(void*);
int TAdSinglePlyChrSelectGC__sub_80133544(void*);
int TAdSinglePlyChrSelectGC__sub_80133548(void);

    extern int lbl_804A6F28[];
    extern const float TObjLight__data_805DB088;
    extern const float lbl_805DB08C;
    extern const float lbl_805DB090;
    extern const float lbl_805DB094;
void* init_light__9TObjLightFPvi(void* a0, int a1) { *(int*)((char*)a0 + 0x0) = lbl_804A6F28[a1]; *(float*)((char*)a0 + 0x10) = TObjLight__data_805DB088; *(float*)((char*)a0 + 0xc) = TObjLight__data_805DB088; *(float*)((char*)a0 + 0x8) = TObjLight__data_805DB088; TAdSinglePlyChrSelectGC__sub_80133548(); *(float*)((char*)a0 + 0x14) = lbl_805DB08C; *(float*)((char*)a0 + 0x18) = lbl_805DB090; TAdSinglePlyChrSelectGC__sub_80133544(a0); *(float*)((char*)a0 + 0x20) = lbl_805DB094; *(float*)((char*)a0 + 0x24) = lbl_805DB094; *(float*)((char*)a0 + 0x28) = lbl_805DB094; TAdSinglePlyChrSelectGC__sub_801334E4(a0); return a0; }

void TObjLight__sub_801335EC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801336DC
#include "types.h"

extern "C" {

void TObjLight__sub_801336DC(void);

void TObjLight__sub_801336DC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80133714
#include "types.h"

extern "C" {

void TObjLight__sub_80133714(void);

void TObjLight__sub_80133714(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013379C
#include "types.h"

extern "C" {

void TObjLight__sub_8013379C(void);

void TObjLight__sub_8013379C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801337F8
#include "types.h"

extern "C" {

void TObjLight__sub_801337F8(void);
void TObjLight__sub_801337FC(void);

void TObjLight__sub_801337F8(void) {  }
void TObjLight__sub_801337FC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013397C
#include "types.h"

extern "C" {

void TObjLight__sub_8013397C(void);

void TObjLight__sub_8013397C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80133CE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt__9TObjLightFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80133D3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__9TObjLightFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_804A6FA8[];

void *init__9TObjLightFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6FA8;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80133E48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_shared_data__9TObjLightFv(void);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

extern u32 TObjLight__data_805D5574;

void free_shared_data__9TObjLightFv(void) {
    if ((u32) TObjLight__data_805D5574 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TObjLight__data_805D5574);
        TObjLight__data_805D5574 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80133ED8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt2__9TObjLightFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80133F30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_object__9TObjLightFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_804A6FC0[];

void *init_object__9TObjLightFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6FC0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80134000
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_light__9TObjLightFPvPvf(void *arg0, void *arg1, f32 farg0);
M2C_UNK TObjLight__sub_8038B804(M2C_UNK *, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF268(f32, f32, f32);
M2C_UNK TObjLight__sub_803DF394(M2C_UNK, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF464(M2C_UNK, f32, f32, f32);
M2C_UNK TObjLight__sub_803DF528(M2C_UNK);

extern M2C_UNK TObjLight__data_8058D528[];

void set_light__9TObjLightFPvPvf(void *arg0, void *arg1, f32 farg0) {
    TObjLight__sub_803DF464(0, M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8));
    TObjLight__sub_8038B804(TObjLight__data_8058D528, M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8));
    TObjLight__sub_803DF394(0, M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 8), M2C_FIELD(arg1, f32 *, 0xC));
    TObjLight__sub_803DF268(farg0, farg0, farg0);
    TObjLight__sub_803DF528(0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013486C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLight__sub_8013486C(void *arg0, s16 arg1);
void *TObjLight__sub_801348C4(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void dt2__9TObjLightFPvs(void *, int);

extern M2C_UNK lbl_804A6F78[];

void *TObjLight__sub_8013486C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6F78;
        dt2__9TObjLightFPvs(arg0, 0);
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
        dt2__9TObjLightFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013491C
#include "types.h"

extern "C" {

void bswap_data__9TObjLightFPv(void* p);
int bswap_32__FPUl(void*);

void bswap_data__9TObjLightFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_32__FPUl((char*)p + 0x18); bswap_32__FPUl((char*)p + 0x1c); bswap_32__FPUl((char*)p + 0x20); bswap_32__FPUl((char*)p + 0x24); bswap_32__FPUl((char*)p + 0x28); bswap_32__FPUl((char*)p + 0x2c); bswap_32__FPUl((char*)p + 0x30); bswap_32__FPUl((char*)p + 0x34); bswap_32__FPUl((char*)p + 0x38); bswap_32__FPUl((char*)p + 0x3c); bswap_32__FPUl((char*)p + 0x40); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801944C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__9TObjLightFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void fn_8020C430(void *, int);

extern M2C_UNK __vt__9TObjLight[];

void *__dt__9TObjLightFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TObjLight;
        fn_8020C430(arg0, -3);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022F34C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__9TObjLightFPvs(void *arg0, s16 arg1);
void TLobby__sub_80226294(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CC74C[];

void *destroy__9TObjLightFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC74C;
        TLobby__sub_80226294(M2C_FIELD(arg0, void **, 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022F3B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *init_from_source__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);

extern M2C_UNK lbl_804CC74C[];

u8 *init_from_source__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC74C;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = TBoss3Volopt__sub_8022675C((int) (0x4002BB1F), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022FA90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__9TObjLightFPvs(void *arg0, s16 arg1);
void TLobby__sub_80226294(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CC794[];

void *__dt__9TObjLightFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC794;
        TLobby__sub_80226294(M2C_FIELD(arg0, void **, 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8022FAF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *initialize__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);

extern M2C_UNK lbl_804CC794[];

u8 *initialize__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC794;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = TBoss3Volopt__sub_8022675C((int) (0x4002B21C), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023347C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLight__sub_8023347C(void *arg0, s16 arg1);
void TLobby__sub_80226294(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CC948[];

void *TObjLight__sub_8023347C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC948;
        TLobby__sub_80226294(M2C_FIELD(arg0, void **, 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802334E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *init__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);

extern M2C_UNK lbl_804CC948[];

u8 *init__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC948;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = TBoss3Volopt__sub_8022675C((int) (0x4002B21D), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80235E44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLight__sub_80235E44(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CCAA8[];

void *TObjLight__sub_80235E44(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCAA8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80236E08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjLight__sub_80236E08(void *arg0, s16 arg1);
u8 *init_6e6c__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TLobby__sub_80226294(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CCAC8[];

void *TObjLight__sub_80236E08(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCAC8;
        TLobby__sub_80226294(M2C_FIELD(arg0, void **, 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804CCAC8[];

u8 *init_6e6c__9TObjLightFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCAC8;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = TBoss3Volopt__sub_8022675C((int) (0x4002B71B), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

}
#endif
#endif
