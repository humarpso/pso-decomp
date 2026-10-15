#include "types.h"

extern "C" {
int strcmp(const char *a, const char *b);
int compare_file_extension__6TLobbyFPvPv(const char *s, const char *ext);
char *strcat(char *, const char *);
char *strncpy(char *, const char *, u32);
void *memset(void *, int, u32);
s32 replace_file_extension__6TLobbyFPvPvPv(char *arg0, char *arg1, char *arg2);
char *strcat(char *, const char *);
char *strncpy(char *, const char *, u32);
extern char lbl_805DB070;
s32 change_file_extension__6TLobbyFPvPvPv(char *arg0, char *arg1, char *arg2);
}

extern "C" {

void debug_print__6TLobbyFii(s32 arg0, ...);
s32 request_close__19TWindowSubTradeMainFPv(void *);
s32 clear_flag60_bit200__16TKeyBoardControlFPv(void * a0 = 0);
int get_lobby_field_20__15TWindowMakeTeamFPv(void* p);
int set_field_1c__6TLobbyFPvf(void*);
s32 set_flag60_bit200__16TKeyBoardControlFPv(void *);
int set_flag62_bit2__16TKeyBoardControlFPv(void*);
int set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(void* p);
s32 window_request_show(void * a0 = 0);

void debug_print__6TLobbyFii(s32 arg0, ...) {}

s32 replace_file_extension__6TLobbyFPvPvPv(char *arg0, char *arg1, char *arg2) {
    char buf[0x20];
    char *p;
    s32 n;
    memset(buf, 0, 0x20);
    if (arg0 == 0) {
        arg0 = arg1;
    }
    p = buf;
    for (n = 0x20; n != 0; n--) {
        if (*arg1 == '.' || *arg1 == 0) {
            break;
        }
        *p = *arg1;
        p++;
        arg1++;
    }
    if (p > &buf[27]) {
        return -1;
    }
    p[1] = 0;
    strcat(buf, arg2);
    strncpy(arg0, buf, 0x20);
    return 0;
}

s32 change_file_extension__6TLobbyFPvPvPv(char *arg0, char *arg1, char *arg2) {
    char buf[0x20];
    char *p;
    s32 n;
    if (arg0 == 0) {
        arg0 = arg1;
    }
    p = buf;
    for (n = 0x20; n != 0; n--) {
        *p = *arg1;
        if (*p == '.' || *p == 0) {
            break;
        }
        p++;
        arg1++;
    }
    if (p > &buf[27]) {
        return -1;
    }
    *p = 0;
    strcat(buf, &lbl_805DB070);
    strcat(buf, arg2);
    strncpy(arg0, buf, 0x20);
    return 0;
}

int compare_file_extension__6TLobbyFPvPv(const char *s, const char *ext) {
    while (*s) {
        if (*s == '.') {
            return strcmp(s + 1, ext);
        }
        s++;
    }
    return -1;
}

}
