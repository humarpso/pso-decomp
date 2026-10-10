#include "types.h"

extern "C" {
void heap_free__5THeapFPv(void *, void *);
extern void *chat_log_lines[];
extern void *TAdScrollWinGC__chat_log_heap;
extern void *chat_last_line_buffer;
void fn_8026A14C(void);
char *parse_text_control_codes(char *, s32 *, s32);
char *strncpy(char *, const char *, u32);
u32 strlen(const char *);
extern s32 current_language;
void fn_8026A1C4(char *dst, char *src, s32 size);
}

extern "C" {

void fn_8026A14C(void) {
    s32 i;
    for (i = 0x1D; i >= 0; i--) {
        if (chat_log_lines[i] != NULL) {
            heap_free__5THeapFPv(TAdScrollWinGC__chat_log_heap, chat_log_lines[i]);
            chat_log_lines[i] = NULL;
        }
    }
    if (chat_last_line_buffer != NULL) {
        heap_free__5THeapFPv(TAdScrollWinGC__chat_log_heap, chat_last_line_buffer);
        chat_last_line_buffer = NULL;
    }
}
void fn_8026A1C4(char *dst, char *src, s32 size) {
    s32 sjis;
    char *next;
    s32 len;
    s32 n;
    s8 c;
    sjis = 0;
    if (dst != NULL && size > 0) {
        if (src == NULL || size <= 1) {
            *dst = 0;
            return;
        }
        len = strlen(src) + 1;
        if (current_language == 0) {
            sjis = 1;
        }
        while (size < len) {
            if (*src == 0 || len <= 0 || size <= 1) {
                if (size > 0) {
                    *dst = 0;
                }
                return;
            }
            next = parse_text_control_codes(src, &sjis, 0);
            if (next != src) {
                n = next - src;
                if (n >= size) {
                    *dst = 0;
                    return;
                }
                strncpy(dst, src, n);
                src = next;
                dst += n;
                size -= n;
                len -= n;
            } else {
                len--;
                c = *src++;
                if (sjis != 0 && ((c & 0xE0) == 0x80 || (c & 0xE0) == 0xE0)) {
                    src++;
                    len--;
                }
            }
        }
        strncpy(dst, src, len);
        dst[len] = 0;
    }
}

}
