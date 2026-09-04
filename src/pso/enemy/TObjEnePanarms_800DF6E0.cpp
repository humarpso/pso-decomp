#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEnePanarms__sub_800DFB44(void);
s32 create__14TObjEnePanarmsFi(s32 arg0);
int get_state_flag__14TObjEnePanarmsFPv(void* p);
void init__14TObjEnePanarmsFPvPv(void* p, void* a1);
s32 TObjControl__ct(s32, s32);
s32 TObjEnePanarms__ct(s32, s32, s32);
int TObjEnePanarms__sub_800DFBC4(void* p);
int TObjPlayer__sub_80143198(void*, void*);
s32 __nw__7TObjectFUl(M2C_UNK);
int fn_8002AE64(void*);
int fn_800660B8(void*);

extern s32 tl_04;

s32 create__14TObjEnePanarmsFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x47C);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEnePanarms__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

void init__14TObjEnePanarmsFPvPv(void* p, void* a1) { fn_800660B8(p); TObjPlayer__sub_80143198(p, a1); fn_8002AE64(p); }

int TObjEnePanarms__sub_800DFB44(void) { return 0; }

int get_state_flag__14TObjEnePanarmsFPv(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

}
