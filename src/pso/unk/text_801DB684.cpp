#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct VBase_18_a289a1
{
  char pad[0x18];
};

struct VObj_18_a289a1 : VBase_18_a289a1 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(void *, M2C_UNK);
};

struct VBase_18_44382c
{
  char pad[0x18];
};

struct VObj_18_44382c : VBase_18_44382c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(s8 *, M2C_UNK);
};

struct Stack_801DB684
{
  s8 sp8;
  s8 sp9;
  s16 spA;
  s32 spC;
  s32 sp10;
};

struct Stack_801DB6F0
{
  s8 sp8;
  s8 sp9;
  s16 spA;
};

typedef s32 M2C_UNK;
struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(void *, M2C_UNK);
};

struct Pkt_801DB760 { u8 cmd; u8 flag; u16 size; u8 tag[0x18]; };

struct Pkt_801DB7EC { u8 cmd; u8 flag; u16 size; u8 tag[0x18]; };

extern "C" {
void bswap__12TChatMessageFv(s32);
void fn_801DB878(u8 *arg0, u8 *arg1);
void bswap_save_packet(s32);
void send_packet_96(u8 *arg0, s32 arg1, s32 arg2);
void bswap__13packet_headerFv(s32);
void fn_801DB6F0(u8 *arg0);
M2C_UNK __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *, void *);
M2C_UNK fn_801DF874(void *);
M2C_UNK fn_801DF8A8(void *);
M2C_UNK memset(void *, int, int);
void fn_801DB760(u8 *arg0);
M2C_UNK __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *, void *);
M2C_UNK fn_801DF874(void *);
M2C_UNK fn_801DF8A8(void *);
M2C_UNK memset(void *, int, int);
void fn_801DB7EC(u8 *arg0);
}

extern "C" {

typedef struct VBase_18_a289a1 VBase_18_a289a1;
typedef struct VObj_18_a289a1 VObj_18_a289a1;
#define PSO_VCALL_VObj_18_a289a1_m8(_self, _arg0, _arg1) (((VObj_18_a289a1 *)(_self))->m8((_arg0), (_arg1)))

typedef struct Stack_801DB684 Stack_801DB684;
typedef struct VBase_18_44382c VBase_18_44382c;
typedef struct VObj_18_44382c VObj_18_44382c;
#define PSO_VCALL_VObj_18_44382c_m8(_self, _arg0, _arg1) (((VObj_18_44382c *)(_self))->m8((_arg0), (_arg1)))
void send_packet_96(u8 *arg0, s32 arg1, s32 arg2) {
  Stack_801DB684 stack;
  stack.sp8 = (double) 0x96;
  stack.sp9 = 0;
  stack.spA = 0xC;
  stack.spC = arg1;
  stack.sp10 = arg2;
  bswap_save_packet((s32) (&stack.sp8));
  PSO_VCALL_VObj_18_44382c_m8(arg0, &stack.sp8, 0xC);
}

typedef struct Stack_801DB6F0 Stack_801DB6F0;
#pragma fp_contract on
#define PSO_VCALL_VObj_18_44382c_m8(_self, _arg0, _arg1) (((VObj_18_44382c *)(_self))->m8((_arg0), (_arg1)))
void fn_801DB6F0(u8 *arg0) {
  Stack_801DB6F0 stack;
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x1910)))) != 0)
  {
    stack.sp8 = (float) 0xA2;
    stack.sp9 = 0;
    stack.spA = 4;
    bswap__13packet_headerFv((s32) (&stack.sp8));
    PSO_VCALL_VObj_18_44382c_m8(arg0, &stack.sp8, 4);
  }
}

void fn_801DB760(u8 *arg0) {
    Pkt_801DB760 pkt;
    u8 pad[8];
    if (*(s32 *)(arg0 + 0x1910) != 0) {
        fn_801DF8A8(&pkt);
        memset(&pkt, 0, 0x1C);
        pkt.cmd = 0xA1;
        pkt.size = 0x1C;
        __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(pkt.tag, arg0 + 0x1900);
        fn_801DF874(&pkt);
        ((VObj_18 *)(arg0))->m8(&pkt, 0x1C);
    }
}

void fn_801DB7EC(u8 *arg0) {
    Pkt_801DB7EC pkt;
    u8 pad[8];
    if (*(s32 *)(arg0 + 0x1910) != 0) {
        fn_801DF8A8(&pkt);
        memset(&pkt, 0, 0x1C);
        pkt.cmd = 0xA0;
        pkt.size = 0x1C;
        __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(pkt.tag, arg0 + 0x1900);
        fn_801DF874(&pkt);
        ((VObj_18 *)(arg0))->m8(&pkt, 0x1C);
    }
}

void fn_801DB878(u8 *arg0, u8 *arg1) {
  u8 *new_var3;
  s8 *new_var2;
  unsigned int new_var;
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x1910)))) != 0)
  {
    *((s8 *) (((s8 *) arg1) + 0)) = (double) 0x81;
    *((s8 *) (((s8 *) arg1) + 1)) = 0;
    new_var2 = ((s8 *) arg1) + 2;
    new_var = 0x220;
    *((s16 *) new_var2) = new_var;
    bswap__12TChatMessageFv((s32) arg1);
    new_var3 = arg1;
    PSO_VCALL_VObj_18_a289a1_m8((0, arg0), new_var3, 0x220);
  }
}

}
