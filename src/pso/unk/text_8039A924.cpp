#include "types.h"
#include "stdarg.h"
extern "C" {
void *printf___StringWrite(void *osc, const char *buf, u32 n);
int sprintf(char *s, const char *format, ...);
int TLobby__sub_8039AA04(char *s, const char *format, va_list arg);
}

extern "C" {

typedef struct {
    char *CharStr;
    u32 MaxCharCount;
    u32 CharsWritten;
} __OutStrCtrl_8039A924;
int __pformatter_8039ABBC(void *(*WriteProc)(void *, const char *, u32), void *WriteProcArg,
                          const char *format_str, va_list arg);
inline int vsnprintf_8039A924(char *s, u32 n, const char *format, va_list arg) {
    int end;
    __OutStrCtrl_8039A924 osc;
    osc.CharStr = s;
    osc.MaxCharCount = n;
    osc.CharsWritten = 0;
    end = __pformatter_8039ABBC(&printf___StringWrite, &osc, format, arg);
    if (s)
        s[(end < n) ? end : n - 1] = '\0';
    return end;
}
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
int sprintf(char *s, const char *format, ...) {
    va_list args;
    va_start(args, format);
    return vsnprintf_8039A924(s, 0xFFFFFFFF, format, args);
}
#pragma pop
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
int TLobby__sub_8039AA04(char *s, const char *format, va_list arg) {
    return vsnprintf_8039A924(s, 0xFFFFFFFF, format, arg);
}
#pragma pop

}
