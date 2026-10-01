#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "stdarg.h"
extern "C" {
int __StringRead(void *isc, int ch, int Action);
int TAdEnterSerialAccessGC__sub_8039C8A0(const char *s, const char *pFormat, ...);
}

extern "C" {

s32 rand__11TOBoss4RockFv(void);

extern u32 lbl_805D45F0;

s32 rand__11TOBoss4RockFv(void) {
    u32 temp_r0;

    temp_r0 = (lbl_805D45F0 * 0x41C64E6D) + 0x3039;
    lbl_805D45F0 = temp_r0;
    return (temp_r0 >> 0x10U) & 0x7FFF;
}
typedef struct {
    char *NextChar;
    int NullCharDetected;
} __InStrCtrl_8039C8A0;
int TAdEndText__sub_8039C9F4(int (*ReadProc)(void *, int, int), void *ReadProcArg,
                             const char *format_str, va_list arg);
inline int vsscanf_8039C8A0(const char *s, const char *format, va_list arg) {
    __InStrCtrl_8039C8A0 isc;
    isc.NextChar = (char *)s;
    if ((s == NULL) || (*isc.NextChar == '\0'))
        return -1;
    isc.NullCharDetected = 0;
    return TAdEndText__sub_8039C9F4(&__StringRead, (void *)&isc, format, arg);
}
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
int TAdEnterSerialAccessGC__sub_8039C8A0(const char *s, const char *pFormat, ...) {
    va_list args;
    va_start(args, pFormat);
    return vsscanf_8039C8A0(s, pFormat, args);
}
#pragma pop

}
