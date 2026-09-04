#ifndef PSO_CLASS_PACKAGE
#include "pso/TObjWaitEntryHairMoveSim.h"

TObjWaitEntryHairMoveSim::~TObjWaitEntryHairMoveSim() {}
#else
#if PSO_CLASS_PACKAGE == 0x800FE300
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int is_move_done__24TObjWaitEntryHairMoveSimFv(void);
int TObjWaitEntryHairMoveSim__sub_800FE32C();

int is_move_done__24TObjWaitEntryHairMoveSimFv(void) {
    return (~TObjWaitEntryHairMoveSim__sub_800FE32C()) != 0 ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FE3BC
#include "types.h"

extern "C" {

void TObjWaitEntryHairMoveSim__sub_800FE3BC(void);

void TObjWaitEntryHairMoveSim__sub_800FE3BC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FE404
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__24TObjWaitEntryHairMoveSimFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_8049DC8C[];

void *destroy__24TObjWaitEntryHairMoveSimFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049DC8C;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FE45C
#include "types.h"

extern "C" {

void* construct__24TObjWaitEntryHairMoveSimFPvi(void* a0, int a1);
int TObjWaitEntryHairMoveSim__sub_800FE32C(void*);
int __ct__7TObjectFP7TObject(void);

    extern unsigned char lbl_8049DC8C[];
    extern int lbl_805D2B44;
void* construct__24TObjWaitEntryHairMoveSimFPvi(void* a0, int a1) { __ct__7TObjectFP7TObject(); *(int*)((char*)a0 + 0x18) = (int)lbl_8049DC8C; *(int*)((char*)a0 + 0x0) = lbl_805D2B44; *(int*)((char*)a0 + 0x20) = a1; *(int*)((char*)a0 + 0x1c) = TObjWaitEntryHairMoveSim__sub_800FE32C((void*)(*(int*)((char*)a0 + 0x20))); return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FE4B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__24TObjWaitEntryHairMoveSimFPv(void *arg0);
void *construct__24TObjWaitEntryHairMoveSimFPvi(void *, void *);
void *__nw__7TObjectFUl(int);
int is_move_done__24TObjWaitEntryHairMoveSimFv(void *);

void * create__24TObjWaitEntryHairMoveSimFPv(void *arg0) {
    void *o;
    if (is_move_done__24TObjWaitEntryHairMoveSimFv(arg0) == 0) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = construct__24TObjWaitEntryHairMoveSimFPvi(o, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FE510
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__24TObjWaitEntryHairMoveSimFv(void *arg0);
M2C_UNK TObjWaitEntryHairMoveSim__sub_800FE5A0(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__24TObjWaitEntryHairMoveSimFv(void *arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0xCFC) == 0) {
        TObjWaitEntryHairMoveSim__sub_800FE5A0(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FE554
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__24TObjWaitEntryHairMoveSimFv(void *arg0, void *arg1);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__24TObjWaitEntryHairMoveSim[];
extern void *lbl_805D2B40;

void *__ct__24TObjWaitEntryHairMoveSimFv(void *arg0, void *arg1) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TObjWaitEntryHairMoveSim;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2B40;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    return arg0;
}

}
#endif
#endif
