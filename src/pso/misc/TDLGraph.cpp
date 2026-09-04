#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void run_task__8TDLGraphFv(void);
void set_graph_param__8TDLGraphFPvi(void* p, s32 v);

void run_task__8TDLGraphFv(void) {  }
void set_graph_param__8TDLGraphFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }

}
#else
#if PSO_CLASS_PACKAGE == 0x8007F644
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__8TDLGraphFPv(void *arg0);

M2C_UNK fn_8007F5A4();

void reset__8TDLGraphFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    fn_8007F5A4();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007F7DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TDLGraph__ct(void *arg0);
void reset__8TDLGraphFPv(void *);
void __ct__7TObjectFP7TObject(void *);
void fn_8007F574(void *);

extern const f32 lbl_805D9298;
extern M2C_UNK __vt__8TDLGraph[];
extern void *lbl_805D28D0;
extern void * TDLGraph__data_805D4EB0;

void *TDLGraph__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TDLGraph;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D28D0;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805D9298;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = -1;
    M2C_FIELD(arg0, u32 *, 0x2C) = -1;
    M2C_FIELD(arg0, u32 *, 0x30) = -1;
    reset__8TDLGraphFPv(arg0);
    fn_8007F574(arg0);
    M2C_FIELD(arg0, u32 *, 0x20) = 3;
    TDLGraph__data_805D4EB0 = arg0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007F85C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__8TDLGraphFv(void);
void *TDLGraph__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_clipout;

void *create__8TDLGraphFv(void) {
    void *o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        o = TDLGraph__ct(o, tl_clipout);
    }
    return o;
}

}
#endif
#endif
