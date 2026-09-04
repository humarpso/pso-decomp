#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjQuestColApc__ct(void *arg0);
void TObjQuestColApc__vt14(void* p);
void TObjQuestColBase__ct(void *);
int create__12TQuestThreadFi(void*);
int destroy_board__17TQuestThreadBoardFv(void*);

void TObjQuestColApc__vt14(void* p) { destroy_board__17TQuestThreadBoardFv(p); create__12TQuestThreadFi(*(void**)((char*)p + 0xb0)); }

extern M2C_UNK __vt__15TObjQuestColApc[];
extern void *lbl_805D33F8;

void *TObjQuestColApc__ct(void *arg0) {
    TObjQuestColBase__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjQuestColApc;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D33F8;
    return arg0;
}

}
