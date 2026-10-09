#include "types.h"

extern "C" {
s32 TObjPlayer__sub_803DA104(u8 x);
s32 strcmp(const char *, const char *);
char *strcat(char *, const char *);
char *strcpy(char *, const char *);
void convert_string_chars_via_table(char *);
u32 strlen(const char *);
void append_extension_if_missing__23TAdSinglePlyChrSelectGCFPvPvPv(char *dst, char *name, char *ext);
}

extern "C" {

void append_extension_if_missing__23TAdSinglePlyChrSelectGCFPvPvPv(char *dst, char *name, char *ext) {
    char buf[8];
    s32 len;
    len = strlen(name);
    strcpy(buf, &name[len - 4]);
    convert_string_chars_via_table(buf);
    if (buf[0] == '.') {
        if (strcmp(buf, ext) != 0) {
            strcpy(dst, name);
            strcat(dst, ext);
        } else {
            strcpy(dst, name);
        }
    } else {
        strcpy(dst, name);
        strcat(dst, ext);
    }
}

s32 TObjPlayer__sub_803DA104(u8 x) {
    switch (x) {
    case 8:
    case 9:
    case 10:
        return 1;
    }
    return 0;
}

}
