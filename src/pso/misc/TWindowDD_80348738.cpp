#include "types.h"
#include "pso/misc/TWindowDD.h"

extern "C" {

s32 count_chars_since_newline__9TWindowDDFPl();
s32 append_char__9TWindowDDFSclPl(s32, s32, s32);

void TWindowDD::show_message_by_count(s32 arg0, s32 arg1) {
    if (count_chars_since_newline__9TWindowDDFPl() > 0xF) {
        append_char__9TWindowDDFSclPl(0xA, arg0, arg1);
        return;
    }
    append_char__9TWindowDDFSclPl(0x20, arg0, arg1);
}

}
