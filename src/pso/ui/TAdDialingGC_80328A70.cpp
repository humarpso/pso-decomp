#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_dialog__12TAdDialingGCFv(void);
M2C_UNK TAdDialingGC__sub_8013ADBC(M2C_UNK);
M2C_UNK render_status_disp__23TAdSinglePlyChrSelectGCFPvff(f32, f32);

extern const f32 TAdDialingGC__data_805DF6EC;
extern const f32 lbl_805DF6F0;

void init_dialog__12TAdDialingGCFv(void) {
    TAdDialingGC__sub_8013ADBC(0);
    render_status_disp__23TAdSinglePlyChrSelectGCFPvff(TAdDialingGC__data_805DF6EC, lbl_805DF6F0);
}

extern const f32 lbl_805DF6F4;
s32 fn_80145A44(void *);
s32 call_146CA0_with_5708__6TLobbyFv();
int sprintf(char *, const char *, ...);
extern char lbl_804767C8[];
void draw_dialing_status__12TAdDialingGCFv(void);
void draw_dialing_status__12TAdDialingGCFv(void) {
    char a[0x20];
    char c[0x100];
    char b[0x100];
    if (fn_80145A44(a) == 0) {
        a[0] = 0;
    }
    sprintf(b, lbl_804767C8, a, call_146CA0_with_5708__6TLobbyFv());
    sprintf(c, (char *)TAdDialingGC__sub_8013ADBC(1), b);
    ((void (*)(void *, f32, f32))render_status_disp__23TAdSinglePlyChrSelectGCFPvff)(c, TAdDialingGC__data_805DF6EC, lbl_805DF6F4);
}

}
