#include "pso/TQuestThread.h"

TQuestThread::~TQuestThread() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TQuestThread__sub_801F5D88(void* p);
int TQuestThread__sub_801F5EAC(void);
void clear_buffer__12TQuestThreadFPv(void* p);
u32 create__12TQuestThreadFi(s32 arg0);
int TQuestThread__sub_801F5DA8(void*);
void TQuestThread__sub_801F5ECC(void);
u32 __ct__12TQuestThreadFv(u32, u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
int memset(void*, void*, void*);
M2C_UNK set_parent__7TObjectFP7TObject(u32, s32);

extern u32 lbl_805D5EE8;
extern s32 tl_00;

u32 create__12TQuestThreadFi(s32 arg0) {
    u32 var_r31;

    if ((u32) lbl_805D5EE8 != 0U) {
        var_r31 = __nw__7TObjectFUl(0x194);
        if (var_r31 != 0U) {
            var_r31 = __ct__12TQuestThreadFv(var_r31, lbl_805D5EE8, arg0);
        }
        if (var_r31 != 0U) {
            set_parent__7TObjectFP7TObject(var_r31, tl_00);
            return var_r31;
        }
        return 0U;
    }
    return 0U;
}

int TQuestThread__sub_801F5D88(void* p) { return TQuestThread__sub_801F5DA8(p); }

void clear_buffer__12TQuestThreadFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { memset(*(void**)((char*)p + 0x2c), (void*)0, (void*)1024); } }

int TQuestThread__sub_801F5EAC(void) { return 0; }

}
