#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__20TWindowMessageScrollFv(void *arg0, s16 arg1);
int run_task__20TWindowMessageScrollFv(void);
s32 TLobby__sub_80269C90(void);
s32 TLobby__sub_80269CA4(s32 a0 = 0);
s32 TLobby__sub_80269DA4(s32 a0 = 0, s32 a1 = 0);
s32 TWindowMessageScroll__ct(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
void __dl__7TObjectFPv(void *);
void __dt__19TWindowMessageQuestFv(void *, int);
s32 __nw__7TObjectFUl(s32 a0 = 0);
void set_timer__6TLobbyFPvf(void* p, f32 v);

int run_task__20TWindowMessageScrollFv(void) { return 0; }

extern M2C_UNK __vt__20TWindowMessageScroll[];

void *__dt__20TWindowMessageScrollFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowMessageScroll;
        __dt__19TWindowMessageQuestFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
