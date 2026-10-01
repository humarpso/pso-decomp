#include "types.h"
extern "C" {
s32 fn_80225CD8(s32, char *, void *);
char *strncpy(char *dest, const char *src, size_t num);
extern void *lbl_805D5544;
extern u8 *TOChatSensorCapture__data_805D58D8;
s32 TOChatSensorCapture__sub_8015A8D8(u16 arg0, const char *arg1);
}

extern "C" {

s32 TOChatSensorCapture__sub_8015A8D8(u16 arg0, const char *arg1) {
    char buf[0x20];
    s32 i;
    s32 c;
    if (TOChatSensorCapture__data_805D58D8 != NULL && arg0 < 4) {
        strncpy(buf, arg1, 0x20);
        for (i = 0; i < 0x20; i++) {
            c = buf[i];
            if (c == 0) {
                break;
            }
            if (c == 10 || c == 11) {
                buf[i] = 0;
                break;
            }
        }
        if (fn_80225CD8(((s32 *)(TOChatSensorCapture__data_805D58D8 + 0x2C))[arg0], buf, lbl_805D5544) > -1) {
            return 1;
        }
    }
    return 0;
}

}
