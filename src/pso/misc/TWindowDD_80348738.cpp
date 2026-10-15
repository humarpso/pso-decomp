#include "types.h"

extern "C" {

void show_message_by_count__9TWindowDDFii(s32 arg0, s32 arg1);
s32 count_chars_since_newline__9TWindowDDFPvPv();
s32 append_char__9TWindowDDFciPv(s32, s32, s32);

void show_message_by_count__9TWindowDDFii(s32 arg0, s32 arg1) {
    if (count_chars_since_newline__9TWindowDDFPvPv() > 0xF) {
        append_char__9TWindowDDFciPv(0xA, arg0, arg1);
        return;
    }
    append_char__9TWindowDDFciPv(0x20, arg0, arg1);
}

}
