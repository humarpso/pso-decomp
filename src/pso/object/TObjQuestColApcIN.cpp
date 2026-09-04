#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjQuestColApcIN__vt14(void* p);
int destroy_board__17TQuestThreadBoardFv(void*);
int create__12TQuestThreadFi(void*);

void TObjQuestColApcIN__vt14(void* p) { destroy_board__17TQuestThreadBoardFv(p); create__12TQuestThreadFi(*(void**)((char*)p + 0xb0)); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8019635C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjQuestColApcIN__ct(void *arg0);
void TObjQuestColBase__ct(void *);

extern M2C_UNK __vt__17TObjQuestColApcIN[];
extern void *lbl_805D33FC;

void *TObjQuestColApcIN__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjQuestColApcIN;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D33FC;
    M2C_FIELD(arg0, f32 *, 0xBC) = M2C_FIELD(arg0, f32 *, 0x6C);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80196F34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjQuestColApcINFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__16TObjQuestColBaseFv(void *, int);

extern M2C_UNK __vt__17TObjQuestColApcIN[];

void *__dt__17TObjQuestColApcINFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjQuestColApcIN;
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
