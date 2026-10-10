#include "types.h"
struct Handler_801E416C {
    u16 cmd;
    u16 mask;
    void (*fn)(u8 *);
};

struct Buf_801E416C {
    u8 pad0[0x2C];
    s16 end;
    s16 pos;
    u8 pad30[0x44];
    u8 data[1];
};

extern "C" {
void debug_print__FPCc(const char *);
s32 get_global_state__14TOKeyMachine01Fv(void);
int sprintf(char *, const char *, ...);
extern char pso_data_receive_log_format[];
extern u8 subcommand_area_masks[];
extern Handler_801E416C pso_command_dispatch_table[];
void dispatch_pso_data_commands(Buf_801E416C *b);
}

extern "C" {

void dispatch_pso_data_commands(Buf_801E416C *b) {
    char msg[0x80];
    u8 *pkt;
    s32 i;
    while (b->pos < b->end) {
        pkt = &b->data[b->pos];
        for (i = 0; pso_command_dispatch_table[i].cmd != 0; i++) {
            if (pkt[0] == pso_command_dispatch_table[i].cmd) {
                sprintf(msg, pso_data_receive_log_format, pkt[0], pkt[1]);
                debug_print__FPCc(msg);
                if (pso_command_dispatch_table[i].mask & subcommand_area_masks[get_global_state__14TOKeyMachine01Fv()]) {
                    pso_command_dispatch_table[i].fn(pkt);
                }
                break;
            }
        }
        if (pkt[1] != 0) {
            b->pos += pkt[1] * 4;
        } else {
            b->pos += *(s32 *)(pkt + 4);
        }
    }
}

}
