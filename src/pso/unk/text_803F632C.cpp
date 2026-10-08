#include "types.h"
extern "C" {
int strncmp(const char *, const char *, u32);
u32 strlen(const char *);
void parse_config_line__22TQuestVmDownLoadServerFPvUiPv(char *, int, void *);
extern char lbl_804FD338[];
extern s32 lbl_805D79EC;
s32 parse_netinfo(char *buf, u32 len, void *arg2);
}

extern "C" {

#pragma push
#pragma use_lmw_stmw off
#pragma optimization_level 2
#pragma scheduling off
#pragma peephole off
s32 parse_netinfo(char *buf, u32 len, void *arg2) {
    u32 i;
    u32 start;
    start = 0;
    lbl_805D79EC = 0;
    if (strncmp(buf, lbl_804FD338, strlen(lbl_804FD338)) != 0) {
        return -1;
    }
    for (i = 4; i < len; i++) {
        if (buf[i] == '\r') {
            if (buf[i + 1] == '\n') {
                parse_config_line__22TQuestVmDownLoadServerFPvUiPv(buf + start, i - start, arg2);
                start = i + 2;
            }
        }
    }
    return 0;
}
#pragma pop

}
