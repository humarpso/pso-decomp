#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjQuestColApc__vt14(void* p);
int destroy_board__17TQuestThreadBoardFv(void*);
int create__12TQuestThreadFi(void*);

void TObjQuestColApc__vt14(void* p) { destroy_board__17TQuestThreadBoardFv(p); create__12TQuestThreadFi(*(void**)((char*)p + 0xb0)); }

}
#else
#if PSO_CLASS_PACKAGE == 0x801964C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjQuestColApc__ct(void *arg0);
void TObjQuestColBase__ct(void *);

extern M2C_UNK __vt__15TObjQuestColApc[];
extern void *lbl_805D33F8;

void *TObjQuestColApc__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjQuestColApc;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D33F8;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80196F8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TObjQuestColApcFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__16TObjQuestColBaseFv(void *, int);

extern M2C_UNK __vt__15TObjQuestColApc[];

void *__dt__15TObjQuestColApcFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjQuestColApc;
        __dt__16TObjQuestColBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
