#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_802290E0_lbl_80515BC8 {
    s8 value;
    u8 remaining[0xFF];
};

extern "C" {
u8 * fn_80228E98(s32, void *);
extern u8 *text_builder_write_cursor;
void TWindowSubStatusDisp__sub_80228F5C(s32 arg0);
u32 strnlen__19TWindowKeyBoardSoftFPScUl(void *, u32);
void strncpy(s32, s32, s32);
extern u8 *text_builder_write_cursor;
void text_builder_append(u8 *arg0);
extern RecoveredGlobal_802290E0_lbl_80515BC8 text_builder_buffer;
extern u8 *text_builder_write_cursor;
void text_builder_reset(void);
s8 *parse_text_control_codes(s8 *, s32 *, s32);
extern s32 current_language;
extern u8 *text_builder_write_cursor;
}

extern "C" {

void TWindowSubStatusDisp__sub_80228F5C(s32 arg0) {
    text_builder_write_cursor = fn_80228E98(arg0, text_builder_write_cursor);
}

s8 *TWindowSubStatusDisp::copy_message_page_text() {
    s8 *s = (s8 *)this;
    s32 sjis;
    s8 *d;
    sjis = 0;
    if (current_language == 0) {
        sjis = 1;
    }
    d = (s8 *)text_builder_write_cursor;
    while (*s != 0) {
        if (*s == 9 && ((u8 *)s)[1] == 'P') {
            break;
        }
        s = parse_text_control_codes(s, &sjis, 0);
        s32 t = *(u8 *)s;
        if (t == 9 && ((u8 *)s)[1] == 'P') {
            continue;
        }
        if ((s8)t == 0) {
            continue;
        }
        *d = *s++;
        if (sjis != 0) {
            s32 c = *(u8 *)d & 0xe0;
            if (c == 0x80 || c == 0xe0) {
                *++d = *s++;
            }
        }
        d++;
    }
    text_builder_write_cursor = (u8 *)d;
    *d = 0;
    if (*s == 0) {
        return 0;
    }
    return s + 2;
}

void text_builder_append(u8 *arg0) {
  s32 temp_r3;
  temp_r3 = strnlen__19TWindowKeyBoardSoftFPScUl(arg0, 0xFFU);
  strncpy((*(s32 *)&text_builder_write_cursor), (s32) arg0, temp_r3);
  *(((s8 *) (*(s32 *)&text_builder_write_cursor)) - (-temp_r3)) = 0;
  (*(s32 *)&text_builder_write_cursor) += temp_r3;
}
typedef char RecoveredGlobal_802290E0_lbl_80515BC8_size[sizeof(RecoveredGlobal_802290E0_lbl_80515BC8) == 0x100 ? 1 : -1];
void text_builder_reset(void) {
    (*(s8 * *)&text_builder_write_cursor) = &text_builder_buffer.value;
    text_builder_buffer.value = 0;
}

}
