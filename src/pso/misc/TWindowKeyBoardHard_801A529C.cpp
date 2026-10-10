#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u16 to_be_uint16_t__FUs(u16);
void handle_command__9TProtocolFP6packet(void *, void *);
extern void *TLobby__protocol_instance;
extern s32 deferred_packet_buffer;
extern s32 deferred_packet_buffer_used;
extern s32 lbl_805D5D04;
void drain_deferred_packets__6TLobbyFv(void);
}

extern "C" {

void buffer_reset(void);
void copy_packet__FP6packet(void *arg0);
void set_fresh_card_flag(void *arg0);
void set_card_window_flags__19TWindowKeyBoardHardFPvii(void *arg0, s32 arg1, s32 arg2);
s32 test_card_flag__19TWindowKeyBoardHardFii(s32 arg1, s32 arg2);
void *get_character_save_record();
M2C_UNK memcpy(s32, void *, u16);
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
u16 to_be_uint16_t__FUs(u16);

s32 test_card_flag__19TWindowKeyBoardHardFii(s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = get_character_save_record();
    if (temp_r3 == NULL) {
        return 0;
    }
    return (M2C_FIELD(temp_r3, s32 *, 0x10) & arg2) ? 1 : 0;
}

void set_card_window_flags__19TWindowKeyBoardHardFPvii(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = get_character_save_record();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x10) & arg2);
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x10) | arg1);
    }
}

void set_fresh_card_flag(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0x40058;
    }
}

extern s32 deferred_packet_buffer;
extern s32 deferred_packet_buffer_used;

void drain_deferred_packets__6TLobbyFv(void) {
    deferred_packet_buffer_used = 0;
    lbl_805D5D04 = 2;
    s32 i;
    while ((i = deferred_packet_buffer_used) < 0x10000) {
        u8 *p;
        u16 n;
        p = (u8 *)(deferred_packet_buffer + i);
        n = (u16)to_be_uint16_t__FUs(*(u16 *)(p + 2));
        if (p[0] == 0) {
            break;
        }
        handle_command__9TProtocolFP6packet(TLobby__protocol_instance, p);
        deferred_packet_buffer_used += n;
    }
}

void copy_packet__FP6packet(void *arg0) {
    s32 len;

    len = (u16) to_be_uint16_t__FUs(M2C_FIELD(arg0, u16 *, 2));
    if (deferred_packet_buffer_used + len <= 0x10000) {
        memcpy(deferred_packet_buffer + deferred_packet_buffer_used, arg0, len);
        deferred_packet_buffer_used += len;
    }
}

extern s32 deferred_packet_buffer;
extern s32 deferred_packet_buffer_used;
extern s32 lbl_805D5D00;
extern s32 lbl_805D5D04;

void buffer_reset(void) {
    deferred_packet_buffer_used = 0;
    lbl_805D5D00 = 0;
    memset(deferred_packet_buffer, 0, 0x10000);
    lbl_805D5D04 = 1;
}

}

extern "C" {

void TLobby__sub_801A5478(void);
int free__11TOBoss4RockFUi(void*);

    extern s32 deferred_packet_buffer;
void TLobby__sub_801A5478(void) { free__11TOBoss4RockFUi((void*)(deferred_packet_buffer)); deferred_packet_buffer = 0; }

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
M2C_UNK memset(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 deferred_packet_buffer;
extern s32 deferred_packet_buffer_used;
extern s32 lbl_805D5D00;
extern s32 lbl_805D5D04;

void alloc_work_buffer(void) {
    deferred_packet_buffer_used = 0;
    lbl_805D5D00 = 0;
    lbl_805D5D04 = 0;
    deferred_packet_buffer = alloc_buffer__11TOBoss4RockFPv(0x10000);
    memset(deferred_packet_buffer, 0, 0x10000);
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_801a54e8_801A529C { char pad[0x18]; };
struct VObj_801a54e8_801A529C : VBase_801a54e8_801A529C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8(void *, s32);
};

struct S_801A5544 { u8 pad[0x8B8]; s32 cnt; u8 buf[0x5B4]; };

extern "C" {
void append_command_to_batch_buffer(S_801A5544 *arg0, u8 *arg1);
}

extern "C" {

void TLobby__sub_801A54E8(u8 *arg0);
void clear_send_buffer__7TPacketFPv(void* p);

void TLobby__sub_801A54E8(u8 *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x8B8);
    if (temp_r4 > 0) {
        if (temp_r4 & 3) {
            M2C_FIELD(arg0, s32 *, 0x8B8) = (s32) (temp_r4 + 3);
            M2C_FIELD(arg0, s32 *, 0x8B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x8B8) & 0xFFFFFFFC);
        }
        ((VObj_801a54e8_801A529C *) arg0)->m8(arg0 + 0x8BC, M2C_FIELD(arg0, s32 *, 0x8B8));
    }
}
void append_command_to_batch_buffer(S_801A5544 *arg0, u8 *arg1) {
    s32 n;
    s32 i;
    if (arg0->cnt + arg1[1] * 4 > 0x5B4) {
        return;
    }
    n = arg1[1] * 4;
    for (i = 0; i < n; i++) {
        arg0->buf[arg0->cnt++] = *arg1++;
    }
}

}
