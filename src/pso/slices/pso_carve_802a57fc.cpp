#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80244888(void *);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 TWindowSubComCard__sub_80073DB8(s32);
s32 TQuestThread__sub_801F64BC(s32);
s32 fn_80265CFC(s32, f32);
s32 TObjCityMainWarp__sub_80266354(s32, s32, s32, s32);
s32 fn_802664A8(s32, s32, s32);
int TWindowMenu__sub_802657E4(void*);
int TWindowSubComCard__sub_802A57FC(void* a0 = 0);
void run_task__19TWindowMessageYesNoFv(void* p);
int fn_802A58AC(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void fn_802A596C(void* p, void* a1, void* a2);
void fn_802A56C4(void* p);
void fn_802A56F0(void* p);
void fn_802A571C(void* p);
int TWindowSubComCard__sub_802A5748(void* p);
void TWindowSubComCard__sub_802A5768(void* p);
int fn_800740FC(void*);
int TObjCityMainWarp__sub_80186AE4(void*);
int fn_80265C10(void*);
int fn_80287560(void*);
int queue_destruction__7TObjectFv(void*);

int TWindowSubComCard__sub_802A57FC(void*) { return 0; }
void fn_802A5830(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = fn_802664A8(arg2, 1, M2C_FIELD(arg0, s32 *, 0x24));
    TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, s32 *, 0x28), arg1, 0x21, 0);
    fn_800740FC((void*)(M2C_FIELD(arg0, s32 *, 0x28)));
    TQuestThread__sub_801F64BC(M2C_FIELD(arg0, s32 *, 0x28));
    fn_80265CFC(M2C_FIELD(arg0, s32 *, 0x28), farg0);
}
int fn_802A58AC(void*, void*, void*, void*) { return 0; }
void fn_802A596C(void* p, void* a1, void* a2) { fn_802A58AC(p, (void*)0, a1, a2); }
int render__19TWindowMessageYesNoFv(void) { return 0; }

}
