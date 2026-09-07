#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80327698___vt__14TAdScrollWinGC { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
u8 * __dt__7TObjectFv(void *, s16);
void queue_destruction__7TObjectFv(void *);
void __dl__7TObjectFPv(s32);
void fn_8026A14C(void);
extern RecoveredGlobal_80327698___vt__14TAdScrollWinGC __vt__14TAdScrollWinGC;
u8 *__dt__14TAdScrollWinGCFv(u8 *arg0, s16 arg1);
}

extern "C" {

void close_window__14TAdScrollWinGCFPv(void* p);
int TWindow__close(void*);

void close_window__14TAdScrollWinGCFPv(void* p) { if (*(unsigned int*)((char*)p + 0x40) != 0) { TWindow__close(*(void**)((char*)p + 0x40)); *(int*)((char*)p + 0x40) = 0; } }
u8 *__dt__14TAdScrollWinGCFv(u8 *arg0, s16 arg1) {
    u8 *temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TAdScrollWinGC.value;
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x40));
        if (temp_r3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u8 **, 0x40) = NULL;
        }
        fn_8026A14C();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

}
