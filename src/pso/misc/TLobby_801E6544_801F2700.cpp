#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Entry804C69D8_801F2748 {
    u32 field0;
    void (*handler)(void*);
};
struct Entry804C69D8_801F2910 {
    u32 field0;
    void (*handler)(s32, s32, s32);
};

typedef s32 M2C_UNK;
struct Entry804C69D8_801F28AC {
    u32 field0;
    void (*handler)(s32, s32, s32);
};

extern "C" {
extern struct Entry804C69D8 lbl_804C69D8[];
s32 read_packet_byte__6TLobbyFv(void*);
M2C_UNK read_be_u16(void *);
void qst_getargs_801F2910(s32 arg0);
extern u8 lbl_8051238C[];
void append_string_to_buffer(void*);
void qst_getargs_cstring(s32 arg0);
void qst_getargs_801F27A0(s32 op);
void qst_getargs_801F2828(s32 op);
extern struct Entry804C69D8 lbl_804C69D8[];
s32 read_packet_byte__6TLobbyFv(void*);
M2C_UNK read_be_u16(void *);
s32 stream_read_be32();
void qst_getargs_801F28AC(s32 arg0);
}

extern "C" {

M2C_UNK read_be_u16(void *);

struct Entry804C69D8 {
    u32 field0;
    M2C_UNK (*handler)(M2C_UNK);
};
extern struct Entry804C69D8 lbl_804C69D8[];

void qst_getargs_801F2700(s32 arg0) {
    struct Entry804C69D8 *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = lbl_804C69D8;
    temp_r3 += arg0;
    temp_r31 = temp_r3->handler;
    temp_r31(read_be_u16(temp_r3));
}
void qst_getargs_cstring(s32 arg0) {
    Entry804C69D8_801F2748 *e = (Entry804C69D8_801F2748 *)&lbl_804C69D8;
    e += arg0;
    void (*fn)(void*) = e->handler;
    append_string_to_buffer(lbl_8051238C);
    fn(lbl_8051238C);
}

typedef void (*Handler_801F27A0)(s32, u8, s16 *);
typedef void (*Handler_801F2828)(u16, u8, u8 *);

void qst_getargs_801F27A0(s32 op) {
    s16 buf[16];
    Handler_801F27A0 fn = (Handler_801F27A0) lbl_804C69D8[op].handler;
    s32 first = ((s32 (*)(void))read_packet_byte__6TLobbyFv)();
    u8 count = ((s32 (*)(void))read_packet_byte__6TLobbyFv)();
    s32 i;

    for (i = 0; i < count; i++) {
        buf[i] = ((s16 (*)(void))read_be_u16)();
    }
    fn(first, count, buf);
}

void qst_getargs_801F2828(s32 op) {
    u8 buf[16];
    Handler_801F2828 fn = (Handler_801F2828) lbl_804C69D8[op].handler;
    u16 label = ((M2C_UNK (*)(void))read_be_u16)();
    u8 count = ((s32 (*)(void))read_packet_byte__6TLobbyFv)();
    s32 i;

    for (i = 0; i < count; i++) {
        buf[i] = ((s32 (*)(void))read_packet_byte__6TLobbyFv)();
    }
    fn(label, count, buf);
}

void qst_getargs_801F28AC(s32 arg0) {
    Entry804C69D8_801F28AC* e = ((Entry804C69D8_801F28AC *)&lbl_804C69D8);
    e += arg0;
    void (*fn)(s32, s32, s32) = e->handler;
    s32 a = read_packet_byte__6TLobbyFv(e);
    s32 b = stream_read_be32();
    fn(a, b, read_be_u16((void *)b));
}

void qst_getargs_801F2910(s32 arg0) {
    Entry804C69D8_801F2910* e = ((Entry804C69D8_801F2910 *)&lbl_804C69D8);
    e += arg0;
    void (*fn)(s32, s32, s32) = e->handler;
    s32 a = read_packet_byte__6TLobbyFv(e);
    s32 b = read_packet_byte__6TLobbyFv((void*)a);
    fn(a, b, ((s32)read_be_u16((void *)((void*)b))));
}

}
