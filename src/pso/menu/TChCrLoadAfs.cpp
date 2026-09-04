#ifndef PSO_CLASS_PACKAGE
#include "pso/TChCrLoadAfs.h"

void TChCrLoadAfs::run_task() {}

TChCrLoadAfs::~TChCrLoadAfs() {}
#else
#if PSO_CLASS_PACKAGE == 0x8028B8B8
#include "types.h"

extern "C" {

int is_unloaded__12TChCrLoadAfsFPv(void* p);

int is_unloaded__12TChCrLoadAfsFPv(void* p) { return *(u32*)((char*)p + 0x4a8) == 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028B8C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_load_slot__12TChCrLoadAfsFPv(void *arg0);
s32 try_begin_load__12TChCrLoadAfsFPv(void *arg0);

extern s32 lbl_805D64D8;

void release_load_slot__12TChCrLoadAfsFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        if ((s32) lbl_805D64D8 == 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 3;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        lbl_805D64D8 = 0;
    }
}

extern s32 lbl_805D64D8;

s32 try_begin_load__12TChCrLoadAfsFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 3;
        return 0;
    }
    if ((s32) lbl_805D64D8 != 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = 1;
    lbl_805D64D8 = 1;
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028B940
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 try_begin_load__12TChCrLoadAfsFPv();
s32 TLobby__sub_803CC53C(u32);
s32 TLobby__sub_803CCB5C(u32, s32, u32);
u32 TLobby__sub_803CD16C(s32, s32);
void TChCrLoadAfs__sub_8028B940(void);
void TChCrLoadAfs__sub_8028B944(void);

void TChCrLoadAfs__sub_8028B940(void) {  }
void TChCrLoadAfs__sub_8028B944(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028B9C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 try_begin_load__12TChCrLoadAfsFPv();
s32 TLobby__sub_803CC53C(u32);
s32 TLobby__sub_803CCB5C(u32, s32, u32);
u32 TLobby__sub_803CD16C(s32, s32);
void TChCrLoadAfs__sub_8028B940(void);
void TChCrLoadAfs__sub_8028B944(void);

void start_download__12TChCrLoadAfsFPv(void *arg0) {
    s32 temp_r3_2;
    u32 temp_r3;
    u32 temp_r3_3;

    if (try_begin_load__12TChCrLoadAfsFPv() != 0) {
        temp_r3 = TLobby__sub_803CD16C(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, u32 *, 0x1C) = temp_r3;
        if (temp_r3 == 0U) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 3;
            return;
        }
        temp_r3_2 = TLobby__sub_803CC53C(M2C_FIELD(arg0, u32 *, 0x1C));
        temp_r3_3 = alloc__22TQuestVmDownLoadServerFPv(temp_r3_2 << 0xB);
        M2C_FIELD(arg0, u32 *, 0x28) = temp_r3_3;
        if (temp_r3_3 == 0U) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 3;
            return;
        }
        TLobby__sub_803CCB5C(M2C_FIELD(arg0, u32 *, 0x1C), temp_r3_2, M2C_FIELD(arg0, u32 *, 0x28));
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028BC58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__12TChCrLoadAfsFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TChCrLoadAfs__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create__12TChCrLoadAfsFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = TChCrLoadAfs__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
#endif
#endif
