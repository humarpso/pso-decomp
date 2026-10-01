#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803EE2E4_lbl_8058DC98 {
    s8 value;
    u8 remaining[0x4F];
};

struct RecoveredGlobal_803E6ACC_lbl_805A0470 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_803E6ACC_lbl_805A0498 {
    M2C_UNK value;
    u8 remaining[0x134];
};

struct RecoveredGlobal_803E6ACC_lbl_805A05D0 {
    M2C_UNK value;
    u8 remaining[0xC4];
};

struct RecoveredGlobal_803E8710_lbl_8058DE08 {
    M2C_UNK value;
    u8 remaining[0x40];
};

struct RecoveredGlobal_803E875C_lbl_8058DE08 {
    M2C_UNK value;
    u8 remaining[0x40];
};

struct RecoveredGlobal_803E9764_lbl_80591EC8 {
    M2C_UNK value;
    u8 remaining[0x1FFC];
};

struct RecoveredGlobal_803E9F20_lbl_80595998 {
    M2C_UNK value;
    u8 remaining[0x8BC];
};

struct RecoveredGlobal_803EDB20_lbl_8047F8B8 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803EDB3C_lbl_8047F8B8 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803EDB58_lbl_8047F8B8 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803EDB74_lbl_8047F8B8 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803E6ED0_lbl_805A0470 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_803E6ED0_lbl_805A0498 {
    M2C_UNK value;
    u8 remaining[0x134];
};

struct RecoveredGlobal_803E6ED0_lbl_805A05D0 {
    M2C_UNK value;
    u8 remaining[0xC4];
};

struct RecoveredGlobal_803E721C_lbl_8047E698 {
    M2C_UNK value;
    u8 remaining[0x1FC];
};

struct RecoveredGlobal_803E9594_lbl_80591EC8 {
    M2C_UNK value;
    u8 remaining[0x1FFC];
};

struct RecoveredGlobal_803E7018_lbl_8047F8B8 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803E6F98_lbl_8047F8B8 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803E8084_lbl_8058DE08
{
  M2C_UNK value;
  u8 remaining[0x40];
};

struct RecoveredGlobal_803E8084_lbl_80590AC4
{
  M2C_UNK value;
  u8 remaining[0xFFC];
};

struct Node_803EB894 { u8 flags; u8 pad[0xF]; Node_803EB894 *next; };

struct Node_803EB794 { u8 flags; u8 pad[0xF]; Node_803EB794 *next; };

struct Node_803ECD54 { u8 pad[0x10]; Node_803ECD54 *next; };

struct Node_803EB878 { u8 flags; u8 pad[0xF]; Node_803EB878 *next; };

struct Node_803EB844 { u8 flags; u8 pad[0xF]; Node_803EB844 *next; };

struct Node_803ECD1C { u8 pad[0xC]; Node_803ECD1C *next; };

typedef s32 M2C_UNK;
struct Node_803ECD8C { M2C_UNK *link; u8 pad[8]; Node_803ECD8C *next; };

struct Node_803ECE5C { M2C_UNK *link; u8 pad[4]; Node_803ECE5C *next; };

struct E_803E6F48 { u16 key; u8 val; u8 pad; };

struct R_803E76A4 { u8 cnt; u8 pad[7]; };

struct R_803E773C { u8 a; u8 b; u16 c; s16 d; s16 e; };

struct R_803E779C { u8 a; u8 b; u16 c; s16 d; s16 e; };

struct R_803E9F54 { u8 pad[0x14]; s8 a; u8 b; u8 pad2[6]; };

struct N_803E9FA4 { s16 key; u8 pad[0xA]; N_803E9FA4 *next; };

struct Msg_803E92C0 {
    u8 pad0[4];
    s16 len;
    u8 pad6;
    u8 x7;
    u8 x8;
    u8 pad9[3];
    u8 *text;
};

struct Msg_803E9348 {
    u8 pad0[4];
    s16 len;
    u8 pad6;
    u8 x7;
    u8 x8;
    u8 pad9[3];
    u8 *text;
};

struct Item_803EA384 { u8 a; u8 b; u8 pad2[2]; u16 c; };

struct Hdr_803EA384 {
    s16 id;
    u8 pad2[2];
    s32 x4;
    u8 pad8[4];
    s16 count;
    Item_803EA384 items[1];
};

struct Node_803EA384 {
    s16 id;
    u8 a;
    u8 b;
    s32 x4;
    u16 c;
    u8 pada[2];
    Node_803EA384 *next;
};

struct Obj_803EA960 { u8 pad[2]; u8 type; };

struct Ent_803EA960 {
    u8 pad0[8];
    Obj_803EA960 *obj;
    u8 padc[9];
    s8 count;
    u8 pad16[6];
};

struct Node_803ECDC4 { s32 *link; u32 id; u8 pad[4]; Node_803ECDC4 *next; };

struct Obj_803EADD4 {
    s32 x0;
    Node_803ECDC4 *x4;
    Node_803ECD8C *x8;
    Node_803ECD54 *xc;
    s32 x10;
    s8 x14;
    s8 x15;
    s8 x16;
    s8 x17;
    s8 x18;
    s8 x19;
};

struct Node_803EB420 { u8 flags; u8 data[5]; u8 len; u8 pad[9]; Node_803EB420 *next; };

struct Ent_803EDB90 { s32 a; s32 size; };

struct Req_803EEF2C {
    char *name;
    s16 len;
    u8 pad6;
    u8 x7;
};

struct File_803F09FC {
    s32 remain;
    s32 pos;
};

extern "C" {
extern RecoveredGlobal_803EE2E4_lbl_8058DC98 lbl_8058DC98;
void TQuestVmDownLoadServer__sub_803EE2E4(void);
void TQuestVmDownLoadServer__sub_803EAE84(s32, s32, s32);
void TQuestVmDownLoadServer__sub_803EAEF0(void);
void TQuestVmDownLoadServer__sub_803ECFE4(void);
void TQuestVmDownLoadServer__sub_803EE2E4(void);
s32 get_download_state__22TQuestVmDownLoadServerFv(void);
extern RecoveredGlobal_803E6ACC_lbl_805A0470 lbl_805A0470;
extern RecoveredGlobal_803E6ACC_lbl_805A0498 lbl_805A0498;
extern RecoveredGlobal_803E6ACC_lbl_805A05D0 lbl_805A05D0;
extern s32 lbl_805D7848;
extern M2C_UNK *lbl_805D78B8;
extern M2C_UNK *lbl_805D78BC;
extern s32 lbl_805D78C0;
extern M2C_UNK *lbl_805D78C4;
extern M2C_UNK *lbl_805D78C8;
extern M2C_UNK *lbl_805D78CC;
extern M2C_UNK *lbl_805D78D0;
extern M2C_UNK *lbl_805D78D4;
extern M2C_UNK *lbl_805D78D8;
extern s32 lbl_805D78DC;
extern s32 lbl_805D78F4;
void TQuestVmDownLoadServer__sub_803E6ACC(s32 arg0);
s32 TQuestVmDownLoadServer__sub_803F0BD8(void *);
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803E86C8(void);
s32 TQuestVmDownLoadServer__sub_803F0BE0(void *, void *);
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
extern s32 lbl_805D78F8;
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803E8710(void);
s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(void *, void *);
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
void TQuestVmDownLoadServer__sub_803E8790(s32 arg0, u32 arg1, int _w2);
s32 TQuestVmDownLoadServer__sub_803E8788(int, void *, int);
extern RecoveredGlobal_803E9764_lbl_80591EC8 lbl_80591EC8;
extern s8 lbl_805D7868;
extern s32 lbl_805D7904;
void TQuestVmDownLoadServer__sub_803E9764(void);
extern RecoveredGlobal_803E9F20_lbl_80595998 lbl_80595998;
void TQuestVmDownLoadServer__sub_803E9F20(s32 arg0);
s32 TQuestVmDownLoadServer__sub_803EC838(u16 arg0);
s32 TQuestVmDownLoadServer__sub_803EC884(u16 arg0);
s32 TQuestVmDownLoadServer__sub_803EC8D8(u16 arg0);
u16 TQuestVmDownLoadServer__sub_803ED0B4(u8 *arg0, u16 arg1);
extern RecoveredGlobal_803EDB20_lbl_8047F8B8 lbl_8047F8B8;
s32 TQuestVmDownLoadServer__sub_803EDB20(u8 arg0);
extern RecoveredGlobal_803EDB20_lbl_8047F8B8 lbl_8047F8B8;
s32 TQuestVmDownLoadServer__sub_803EDB3C(u8 arg0);
extern RecoveredGlobal_803EDB20_lbl_8047F8B8 lbl_8047F8B8;
s32 TQuestVmDownLoadServer__sub_803EDB58(u8 arg0);
extern RecoveredGlobal_803EDB20_lbl_8047F8B8 lbl_8047F8B8;
s32 TQuestVmDownLoadServer__sub_803EDB74(u8 arg0);
void TQuestVmDownLoadServer__sub_803E7ACC(void);
s32 TQuestVmDownLoadServer__sub_803E8150(void);
s32 TQuestVmDownLoadServer__sub_803E86C8(void);
void TQuestVmDownLoadServer__sub_803E9764(void);
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803F0890(void);
void TQuestVmDownLoadServer__sub_803EAE84(s32, s32, s32);
void TQuestVmDownLoadServer__sub_803EE2E4(void);
extern RecoveredGlobal_803E6ACC_lbl_805A0470 lbl_805A0470;
extern RecoveredGlobal_803E6ACC_lbl_805A0498 lbl_805A0498;
extern RecoveredGlobal_803E6ACC_lbl_805A05D0 lbl_805A05D0;
extern M2C_UNK *lbl_805D78B8;
extern M2C_UNK *lbl_805D78BC;
extern s32 lbl_805D78C0;
extern M2C_UNK *lbl_805D78C4;
extern M2C_UNK *lbl_805D78C8;
extern M2C_UNK *lbl_805D78CC;
extern M2C_UNK *lbl_805D78D0;
extern M2C_UNK *lbl_805D78D4;
extern M2C_UNK *lbl_805D78D8;
void TQuestVmDownLoadServer__sub_803E6ED0(void);
extern RecoveredGlobal_803E721C_lbl_8047E698 lbl_8047E698;
u16 TQuestVmDownLoadServer__sub_803E721C(u16 arg0);
s32 strcpy(void *, void *);
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
void TQuestVmDownLoadServer__sub_803E875C(s32 arg0);
extern RecoveredGlobal_803E9764_lbl_80591EC8 lbl_80591EC8;
u8 *TQuestVmDownLoadServer__sub_803E9594(s32 arg0);
s32 TWindowKeyBoardSoft__sub_803E6808(void *, void *);
s32 TWindowKeyBoardSoft__sub_803E683C();
extern s32 lbl_805D782C;
extern s32 lbl_805D7834;
extern s32 lbl_805D7908;
extern s32 lbl_805D790C;
extern M2C_UNK lbl_805E10D8;
extern M2C_UNK lbl_805E10E0;
s32 TQuestVmDownLoadServer__sub_803F09A4(void);
extern s32 lbl_805D7888;
s32 TQuestVmDownLoadServer__sub_803E9A24(u8 arg0);
s32 TQuestVmDownLoadServer__sub_803E7098(void *, int);
s32 TQuestVmDownLoadServer__sub_803EC69C(int);
extern RecoveredGlobal_803EDB20_lbl_8047F8B8 lbl_8047F8B8;
bool TQuestVmDownLoadServer__sub_803E7018(s32 arg0);
s32 TQuestVmDownLoadServer__sub_803E7098(void *, int);
s32 TQuestVmDownLoadServer__sub_803EC69C(int);
extern RecoveredGlobal_803EDB20_lbl_8047F8B8 lbl_8047F8B8;
bool TQuestVmDownLoadServer__sub_803E6F98(s32 arg0);
u32 TQuestVmDownLoadServer__sub_803F0AB8(void *, void *, int);
s32 TQuestVmDownLoadServer__sub_803F0BE0(void * _w0, void * _w1);
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
extern RecoveredGlobal_803E8084_lbl_80590AC4 lbl_80590AC4;
extern s32 lbl_805D78F8;
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803E8084(void);
s32 TQuestVmDownLoadServer__sub_803E82AC(void);
void TQuestVmDownLoadServer__sub_803E840C(void);
void __VIRetraceHandler(void);
s32 TQuestVmDownLoadServer__sub_803E7D58(const u8 *a, const u8 *b, s32 n);
Node_803EB894 *TQuestVmDownLoadServer__sub_803EB894(Node_803EB894 *p);
Node_803EB794 *TQuestVmDownLoadServer__sub_803EB794(Node_803EB794 *p, s32 n);
s32 TQuestVmDownLoadServer__sub_803E8804(const u8 *p, const u8 *end);
extern s32 lbl_805D78AC;
extern M2C_UNK *lbl_805D78B0;
void TQuestVmDownLoadServer__sub_803ECD54(Node_803ECD54 *p);
Node_803EB878 *TQuestVmDownLoadServer__sub_803EB878(Node_803EB878 *p);
s32 TQuestVmDownLoadServer__sub_803EB844(Node_803EB844 *p);
extern s32 lbl_805D78AC;
extern M2C_UNK *lbl_805D78B0;
void TQuestVmDownLoadServer__sub_803ECD1C(Node_803ECD1C *p);
extern s32 lbl_805D78AC;
extern M2C_UNK *lbl_805D78B0;
void TQuestVmDownLoadServer__sub_803ECD8C(Node_803ECD8C *p);
extern s32 lbl_805D78AC;
extern M2C_UNK *lbl_805D78B0;
void TQuestVmDownLoadServer__sub_803ECE5C(Node_803ECE5C *p);
extern E_803E6F48 lbl_8047E974[];
s32 TQuestVmDownLoadServer__sub_803E6F48(u16 arg0);
extern R_803E76A4 lbl_8058DE4C[];
s32 TQuestVmDownLoadServer__sub_803E76A4(u32 arg0);
extern R_803E76A4 lbl_8058DE4C[];
s32 TQuestVmDownLoadServer__sub_803E773C(s32 *arg0, s32 arg1);
extern R_803E76A4 lbl_8058DE4C[];
s32 TQuestVmDownLoadServer__sub_803E779C(u32 arg0, s32 *arg1, s32 *arg2, s32 *arg3);
void TQuestVmDownLoadServer__sub_803E87B0(u8 *arg0, u8 *arg1, u8 *arg2);
void TQuestVmDownLoadServer__sub_803E8840(u8 *arg0, u8 *arg1);
s32 TQuestVmDownLoadServer__sub_803E88B8(u8 *arg0);
extern RecoveredGlobal_803E9F20_lbl_80595998 lbl_80595998;
extern s32 lbl_805D7848;
extern s32 lbl_805D78C0;
s32 TQuestVmDownLoadServer__sub_803E9F54(s32 arg0);
N_803E9FA4 *TQuestVmDownLoadServer__sub_803E9FA4(N_803E9FA4 *arg0, N_803E9FA4 *arg1);
s32 TQuestVmDownLoadServer__sub_803ECC7C(u32 arg0);
int strncmp(const char *, const char *, u32);
extern RecoveredGlobal_803E8084_lbl_80590AC4 lbl_80590AC4;
extern s32 lbl_805D785C;
extern s32 lbl_805D7860;
s32 TQuestVmDownLoadServer__sub_803E7EE4(const char *key);
s32 TQuestVmDownLoadServer__sub_803F0BE0(void * _w0, void * _w1);
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
extern s32 lbl_805D78F8;
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803E8624(int arg0);
s32 TQuestVmDownLoadServer__sub_803E92C0(Msg_803E92C0 *arg0);
s32 TQuestVmDownLoadServer__sub_803E9348(Msg_803E9348 *arg0);
Node_803EA384 *TQuestVmDownLoadServer__sub_803ECF84(void);
Node_803EA384 *TQuestVmDownLoadServer__sub_803EA384(s32 arg0, Hdr_803EA384 *arg1);
extern RecoveredGlobal_803E9F20_lbl_80595998 lbl_80595998;
s32 TQuestVmDownLoadServer__sub_803EA960(s32 i, s32 end);
void TQuestVmDownLoadServer__sub_803ECD54(Node_803ECD54 *p);
void TQuestVmDownLoadServer__sub_803ECD8C(Node_803ECD8C *p);
void TQuestVmDownLoadServer__sub_803ECDC4(Node_803ECDC4 *p);
void TQuestVmDownLoadServer__sub_803EADD4(Obj_803EADD4 *arg0, s32 arg1);
s32 TQuestVmDownLoadServer__sub_803E6970(s32, s32, u16 *, int);
s32 TQuestVmDownLoadServer__sub_803EC95C(u16 *, u8 *, int);
s32 TQuestVmDownLoadServer__sub_803EB420(s32 arg0, s32 arg1, Node_803EB420 *arg2, u16 *arg3);
u16 TQuestVmDownLoadServer__sub_803EC5F8(u16 arg0);
extern RecoveredGlobal_803E6ACC_lbl_805A0498 lbl_805A0498;
s32 TQuestVmDownLoadServer__sub_803EDB90(s32 start, s32 n);
extern u8 lbl_8047FC40[];
u8 *TQuestVmDownLoadServer__sub_803EDEAC(u16 *start, u16 *end);
char *strncpy(char *, const char *, u32);
s32 TQuestVmDownLoadServer__sub_803E8DA0(char *, Req_803EEF2C *, s32);
extern s32 lbl_805D7900;
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803EEF2C(Req_803EEF2C *arg0);
extern u32 lbl_805D7910;
extern File_803F09FC lbl_805D7914;
s32 TQuestVmDownLoadServer__sub_803F09FC(void *arg0, int arg1, int arg2);
}

extern "C" {

s32 TQuestVmDownLoadServer__sub_803E719C(u8 arg0, s32 arg1);
void TQuestVmDownLoadServer__sub_803E8918(void);
void TQuestVmDownLoadServer__sub_803F0BE8(u8 *arg0);
s32 get_buffer_size__22TQuestVmDownLoadServerFv(void);
s32 get_download_state__22TQuestVmDownLoadServerFv(void);
s32 is_download_command__22TQuestVmDownLoadServerFUsi(u16 arg0, s32 arg1);
s32 is_sjis_lead_byte__22TQuestVmDownLoadServerFUc(u8 arg0);
void push_download_entry__22TQuestVmDownLoadServerFPv(M2C_UNK *arg0);
void set_active__22TQuestVmDownLoadServerFv(void);

typedef char RecoveredGlobal_803E6ACC_lbl_805A0470_size[sizeof(RecoveredGlobal_803E6ACC_lbl_805A0470) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_803E6ACC_lbl_805A0498_size[sizeof(RecoveredGlobal_803E6ACC_lbl_805A0498) == 0x138 ? 1 : -1];
typedef char RecoveredGlobal_803E6ACC_lbl_805A05D0_size[sizeof(RecoveredGlobal_803E6ACC_lbl_805A05D0) == 0xC8 ? 1 : -1];
void TQuestVmDownLoadServer__sub_803E6ACC(s32 arg0) {
    lbl_805D78F4 = get_download_state__22TQuestVmDownLoadServerFv();
    TQuestVmDownLoadServer__sub_803ECFE4();
    TQuestVmDownLoadServer__sub_803EAEF0();
    lbl_805D78CC = &lbl_805A05D0.value;
    lbl_805D78D0 = &lbl_805A05D0.value;
    lbl_805D78D4 = &lbl_805A05D0.value;
    lbl_805D78D8 = &lbl_805A05D0.value;
    lbl_805D78C4 = &lbl_805A0498.value;
    lbl_805D78C8 = &lbl_805A0498.value;
    lbl_805D78B8 = &lbl_805A0470.value;
    lbl_805D78BC = &lbl_805A0470.value;
    lbl_805D78C0 = 0;
    TQuestVmDownLoadServer__sub_803EAE84(0, 0x50, 0);
    TQuestVmDownLoadServer__sub_803EE2E4();
    if (arg0 == 1) {
        lbl_805D78DC = 0x23;
        lbl_805D7848 = 1;
    }
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_803E6ED0_lbl_805A0470_size[sizeof(RecoveredGlobal_803E6ED0_lbl_805A0470) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_803E6ED0_lbl_805A0498_size[sizeof(RecoveredGlobal_803E6ED0_lbl_805A0498) == 0x138 ? 1 : -1];
typedef char RecoveredGlobal_803E6ED0_lbl_805A05D0_size[sizeof(RecoveredGlobal_803E6ED0_lbl_805A05D0) == 0xC8 ? 1 : -1];
void TQuestVmDownLoadServer__sub_803E6ED0(void) {
    lbl_805D78CC = &(*(RecoveredGlobal_803E6ED0_lbl_805A05D0 *)&lbl_805A05D0).value;
    lbl_805D78D0 = &(*(RecoveredGlobal_803E6ED0_lbl_805A05D0 *)&lbl_805A05D0).value;
    lbl_805D78D4 = &(*(RecoveredGlobal_803E6ED0_lbl_805A05D0 *)&lbl_805A05D0).value;
    lbl_805D78D8 = &(*(RecoveredGlobal_803E6ED0_lbl_805A05D0 *)&lbl_805A05D0).value;
    lbl_805D78C4 = &(*(RecoveredGlobal_803E6ED0_lbl_805A0498 *)&lbl_805A0498).value;
    lbl_805D78C8 = &(*(RecoveredGlobal_803E6ED0_lbl_805A0498 *)&lbl_805A0498).value;
    lbl_805D78B8 = &(*(RecoveredGlobal_803E6ED0_lbl_805A0470 *)&lbl_805A0470).value;
    lbl_805D78BC = &(*(RecoveredGlobal_803E6ED0_lbl_805A0470 *)&lbl_805A0470).value;
    lbl_805D78C0 = 0;
    TQuestVmDownLoadServer__sub_803EAE84((s32)((int) (0)), (s32)((int) (0x50)), (s32)((int) (0)));
    TQuestVmDownLoadServer__sub_803EE2E4();
}
#pragma pop

s32 get_buffer_size__22TQuestVmDownLoadServerFv(void) {
    return 0x48;
}

typedef char RecoveredGlobal_803E7018_lbl_8047F8B8_size[sizeof(RecoveredGlobal_803E7018_lbl_8047F8B8) == 0x100 ? 1 : -1];

typedef char RecoveredGlobal_803E6F98_lbl_8047F8B8_size[sizeof(RecoveredGlobal_803E6F98_lbl_8047F8B8) == 0x100 ? 1 : -1];

s32 TQuestVmDownLoadServer__sub_803E6F48(u16 arg0) {
    E_803E6F48 *p;
    for (p = lbl_8047E974; p < lbl_8047E974 + 45; p++) {
        if (p->key == arg0) {
            return p->val;
        }
        if (p->key > arg0) {
            break;
        }
    }
    return 0;
}

bool TQuestVmDownLoadServer__sub_803E6F98(s32 arg0) {
    u8 spC;
    s32 var_r31;
    var_r31 = arg0;
    if (TQuestVmDownLoadServer__sub_803ECC7C((u32)(arg0)) != 0) {
        var_r31 = TQuestVmDownLoadServer__sub_803EC69C((int) (var_r31));
    }
    if (TQuestVmDownLoadServer__sub_803E7098((void *) (&spC), (int) (var_r31)) != 1) {
        return 0;
    }
    return (M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_803E6F98_lbl_8047F8B8 *)&lbl_8047F8B8).value) + spC), u8 *, 0) & 0xF) == 0xB;
}

bool TQuestVmDownLoadServer__sub_803E7018(s32 arg0) {
    u8 spC;
    s32 var_r31;
    var_r31 = arg0;
    if (TQuestVmDownLoadServer__sub_803ECC7C((u32)(arg0)) != 0) {
        var_r31 = TQuestVmDownLoadServer__sub_803EC69C((int) (var_r31));
    }
    if (TQuestVmDownLoadServer__sub_803E7098((void *) (&spC), (int) (var_r31)) != 1) {
        return 0;
    }
    return (M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_803E7018_lbl_8047F8B8 *)&lbl_8047F8B8).value) + spC), u8 *, 0) & 0xF) == 0xA;
}

s32 TQuestVmDownLoadServer__sub_803E719C(u8 arg0, s32 arg1) {
    return arg0 | ((arg1 & 0x100) + 0x2400);
}

extern u8 *lbl_805D7858;

typedef char RecoveredGlobal_803E721C_lbl_8047E698_size[sizeof(RecoveredGlobal_803E721C_lbl_8047E698) == 0x200 ? 1 : -1];
u16 TQuestVmDownLoadServer__sub_803E721C(u16 arg0) {
    u16 temp_r3;
    temp_r3 = M2C_FIELD(((u8 *)(&lbl_8047E698.value) + ((arg0 * 2) & 0x1FE)), u16 *, 0);
    if (((s32) (temp_r3 & 0xFF00) == 0x2500) && !(arg0 & 0x100)) {
        return (u8) temp_r3 | 0x2400;
    }
    return temp_r3;
}

s32 TQuestVmDownLoadServer__sub_803E76A4(u32 arg0) {
    R_803E76A4 *r;
    if (arg0 >= 0x80U) {
        return -1;
    }
    r = &lbl_8058DE4C[arg0];
    if (r->cnt == 0) {
        return -1;
    }
    r->cnt--;
    return 0;
}

s32 TQuestVmDownLoadServer__sub_803E773C(s32 *arg0, s32 arg1) {
    s32 i;
    s32 max = 0;
    for (i = 0; i < arg1; i++) {
        s32 idx = arg0[i];
        if (idx >= 0 && idx < 0x80) {
            R_803E773C *r = &((R_803E773C *)&lbl_8058DE4C)[idx];
            if (r->a != 0) {
                if (max < r->b) {
                    max = r->b;
                }
            }
        }
    }
    return max;
}

s32 TQuestVmDownLoadServer__sub_803E779C(u32 arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    R_803E779C *r;
    if (arg0 >= 0x80U) {
        return -1;
    }
    r = &((R_803E779C *)&lbl_8058DE4C)[arg0];
    if (r->a == 0) {
        return -1;
    }
    *arg1 = r->d;
    *arg2 = r->e;
    *arg3 = r->b;
    return r->c;
}

void set_active__22TQuestVmDownLoadServerFv(void) {
    M2C_FIELD(lbl_805D7858, s32 *, 4) = 1;
}

typedef struct RecoveredGlobal_803E8084_lbl_8058DE08 RecoveredGlobal_803E8084_lbl_8058DE08;
typedef struct RecoveredGlobal_803E8084_lbl_80590AC4 RecoveredGlobal_803E8084_lbl_80590AC4;
typedef char RecoveredGlobal_803E8084_lbl_8058DE08_size[((sizeof(RecoveredGlobal_803E8084_lbl_8058DE08)) == 0x44) ? (1) : (-1)];
typedef char RecoveredGlobal_803E8084_lbl_80590AC4_size[((sizeof(RecoveredGlobal_803E8084_lbl_80590AC4)) == 0x1000) ? (1) : (-1)];

s32 TQuestVmDownLoadServer__sub_803E7D58(const u8 *a, const u8 *b, s32 n) {
    s32 i;
    for (i = 0; i < n; i++, a++, b++) {
        if (*a != *b) {
            break;
        }
        if (*a == 0) {
            break;
        }
    }
    return i;
}

typedef char Name_803E7EE4[4];
s32 TQuestVmDownLoadServer__sub_803E7EE4(const char *key) {
    s32 mid;
    s32 hi;
    s32 lo;
    int r;
    hi = lbl_805D7860;
    lo = lbl_805D785C;
    while (lo + 1 < hi) {
        mid = (hi + lo) / 2;
        r = strncmp(key, ((Name_803E7EE4 *)&lbl_80590AC4)[mid], 4);
        if (r == 0) {
            return mid;
        }
        if (r > 0) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
    if (strncmp(key, ((Name_803E7EE4 *)&lbl_80590AC4)[lo], 4) < 0) {
        return lo - 1;
    }
    return lo;
}

s32 TQuestVmDownLoadServer__sub_803E8084(void) {
  s32 temp_r3;
  s32 var_r0;
  s32 var_r0_2;
  var_r0_2 = 0;
  if (TQuestVmDownLoadServer__sub_803F09FC((void *)((void *) lbl_805D7904), (int)((int) 0x400), (int)((int) var_r0_2)) == (-1))
  {
    temp_r3 = TQuestVmDownLoadServer__sub_803F0BE0((void *) (&(*(RecoveredGlobal_803E8084_lbl_8058DE08 *)&lbl_8058DE08).value), (void *) lbl_805D78F8);
    if (temp_r3 == (-1))
    {
      lbl_805D7904 = (var_r0 = -1);
    }
    else
    {
      lbl_805D7904 = temp_r3;
      var_r0 = 0;
    }
    if (var_r0 != 0)
    {
      var_r0_2 = -1;
    }
    else
    {
      if (lbl_805D78F8)
      {
      }
      if (TQuestVmDownLoadServer__sub_803F09FC((void *)((void *) lbl_805D7904), (int)((int) 0x400), (int)((int) 0)) == (-1))
      {
        var_r0_2 = -1;
      }
      else
      {
        goto block_8;
      }
    }
  }
  else
  {
    block_8:
    var_r0_2 = 0;
  }
  if (var_r0_2 == (-1))
  {
    return -1;
  }
  if (((s32)TQuestVmDownLoadServer__sub_803F0AB8((void *)((void *) lbl_805D7904), (void *)((void *) (&lbl_80590AC4.value)), (int)((int) 0x1000))) != 0x1000)
  {
    return -1;
  }
  return 0;
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline s32 Open_803E8624(void) {
    s32 h = TQuestVmDownLoadServer__sub_803F0BE0(&lbl_8058DE08.value, (void *)lbl_805D78F8);
    if (h == -1) {
        lbl_805D7904 = -1;
        return -1;
    }
    lbl_805D7904 = h;
    return 0;
}
inline s32 Seek_803E8624(s32 h, s32 pos, s32 whence) {
    return TQuestVmDownLoadServer__sub_803F09FC((void *)((void *)h), (int)(pos), (int)(whence));
}
s32 TQuestVmDownLoadServer__sub_803E8624(int arg0) {
    u8 unused[8];
    if (Seek_803E8624(lbl_805D7904, arg0, 0) == -1) {
        if (Open_803E8624() != 0) {
            return -1;
        }
        if (Seek_803E8624(lbl_805D7904, arg0, 0) == -1) {
            return -1;
        }
    }
    return 0;
}
#pragma pop

s32 TQuestVmDownLoadServer__sub_803E86C8(void) {
    if (TQuestVmDownLoadServer__sub_803F0BD8((void *)((void *) (lbl_805D7904))) == -1) {
        lbl_805D7904 = -1;
        return -1;
    }
    lbl_805D7904 = -1;
    return 0;
}

typedef char RecoveredGlobal_803E8710_lbl_8058DE08_size[sizeof(RecoveredGlobal_803E8710_lbl_8058DE08) == 0x44 ? 1 : -1];
s32 TQuestVmDownLoadServer__sub_803E8710(void) {
    s32 temp_r3;
    temp_r3 = TQuestVmDownLoadServer__sub_803F0BE0((void *)((void *) (&lbl_8058DE08.value)), (void *)((void *) (lbl_805D78F8)));
    if (temp_r3 == -1) {
        lbl_805D7904 = -1;
        return -1;
    }
    lbl_805D7904 = temp_r3;
    return 0;
}

typedef char RecoveredGlobal_803E875C_lbl_8058DE08_size[sizeof(RecoveredGlobal_803E875C_lbl_8058DE08) == 0x44 ? 1 : -1];

#pragma push
#pragma opt_common_subs off
void TQuestVmDownLoadServer__sub_803E875C(s32 arg0) {
    strcpy((void *) (&(*(RecoveredGlobal_803E875C_lbl_8058DE08 *)&lbl_8058DE08).value), (void *) (arg0));
}
#pragma pop

s32 TQuestVmDownLoadServer__sub_803E8788(int _w0, void * _w1, int _w2) {
    return -1;
}

extern s8 lbl_805D7868;

void TQuestVmDownLoadServer__sub_803E8790(s32 arg0, u32 arg1, int _w2) {
    TQuestVmDownLoadServer__sub_803F0AB8((void *)(arg0), (void *)(arg1), (int)(_w2));
}

void TQuestVmDownLoadServer__sub_803E87B0(u8 *arg0, u8 *arg1, u8 *arg2) {
    while (arg1 < arg2 && *arg1 > 0x38) {
        if (*arg1 == 0xFF) {
            arg1++;
        } else {
            *arg0++ = *arg1++;
        }
        *arg0++ = *arg1++;
    }
    *arg0 = 0;
}

s32 TQuestVmDownLoadServer__sub_803E8804(const u8 *p, const u8 *end) {
    s32 n = 0;
    while (p < end && *p > 0x38) {
        if (*p == 0xFF) {
            n += 1;
        } else {
            n += 2;
        }
        p += 2;
    }
    return n;
}

void TQuestVmDownLoadServer__sub_803E8840(u8 *arg0, u8 *arg1) {
    while (*arg0 != 0) {
        u8 c = *arg0;
        s32 lead;
        if ((c >= 0x80 && c <= 0x9F) || (c >= 0xE0 && c <= 0xFC)) {
            lead = 1;
        } else {
            lead = 0;
        }
        if (lead) {
            *arg1++ = *arg0++;
        } else {
            *arg1++ = 0xFF;
        }
        *arg1++ = *arg0++;
    }
}

s32 TQuestVmDownLoadServer__sub_803E88B8(u8 *arg0) {
    s32 n = 0;
    while (*arg0 != 0) {
        u8 c = *arg0;
        s32 lead;
        if ((c >= 0x80 && c <= 0x9F) || (c >= 0xE0 && c <= 0xFC)) {
            lead = 1;
        } else {
            lead = 0;
        }
        if (lead) {
            arg0 += 2;
        } else {
            arg0 += 1;
        }
        n += 2;
    }
    return n;
}

void TQuestVmDownLoadServer__sub_803E8918(void) {
    lbl_805D7868 = 1;
}

typedef char RecoveredGlobal_803E9764_lbl_80591EC8_size[sizeof(RecoveredGlobal_803E9764_lbl_80591EC8) == 0x2000 ? 1 : -1];

typedef char RecoveredGlobal_803E9594_lbl_80591EC8_size[sizeof(RecoveredGlobal_803E9594_lbl_80591EC8) == 0x2000 ? 1 : -1];

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline s32 IsSjisLead_803E92C0(u8 c) {
    if ((c >= 0x80 && c <= 0x9F) || (c >= 0xE0 && c <= 0xFC)) {
        return 1;
    }
    return 0;
}
s32 TQuestVmDownLoadServer__sub_803E92C0(Msg_803E92C0 *arg0) {
    s32 n;
    u8 *p;
    s32 extra;
    if (arg0->x8 != 0 || arg0->x7 >= 0x2D) {
        extra = 3;
    } else {
        extra = 2;
    }
    p = arg0->text;
    n = 0;
    while (*p != 0) {
        if (IsSjisLead_803E92C0(*p)) {
            p += 2;
        } else {
            p += 1;
        }
        n += 2;
    }
    return extra + n;
}
#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline s32 IsSjisLead_803E9348(u8 c) {
    if ((c >= 0x80 && c <= 0x9F) || (c >= 0xE0 && c <= 0xFC)) {
        return 1;
    }
    return 0;
}
s32 TQuestVmDownLoadServer__sub_803E9348(Msg_803E9348 *arg0) {
    s32 n;
    u8 *p;
    s32 extra;
    if (arg0->x8 != 0 || arg0->x7 >= 0x2D) {
        extra = 3;
    } else {
        extra = 2;
    }
    p = arg0->text;
    n = 0;
    while (*p != 0) {
        if (IsSjisLead_803E9348(*p)) {
            p += 2;
        } else {
            p += 1;
        }
        n += 2;
    }
    extra = arg0->len + extra;
    n = extra + n;
    return n + 3;
}
#pragma pop

u8 *TQuestVmDownLoadServer__sub_803E9594(s32 arg0) {
    return (u8 *)&(*(RecoveredGlobal_803E9594_lbl_80591EC8 *)&lbl_80591EC8).value + ((s16) (arg0 >> 0xC) << 0xA) + (s16) (arg0 & 0xFFF);
}

void TQuestVmDownLoadServer__sub_803E9764(void) {
    M2C_UNK *var_r4;
    s32 var_r3;
    s32 var_r5;
    if ((u8) (*(u8 *)&lbl_805D7868) != 0) {
        var_r3 = 0x1400;
        if (TQuestVmDownLoadServer__sub_803E8624((int)((int) (0x1400))) != -1) {
            var_r4 = (M2C_UNK *)(&lbl_80591EC8.value);
            var_r3 = lbl_805D7904;
            var_r4 = (M2C_UNK *)(&lbl_80591EC8.value);
            var_r5 = 0x2000;
            TQuestVmDownLoadServer__sub_803E8788((int)((int) (var_r3)), (void *)((void *) (&lbl_80591EC8.value)), (int)((int) (0x2000)));
        }
    }
}

typedef char RecoveredGlobal_803E9F20_lbl_80595998_size[sizeof(RecoveredGlobal_803E9F20_lbl_80595998) == 0x8C0 ? 1 : -1];

s32 TQuestVmDownLoadServer__sub_803E9A24(u8 arg0) {
    if ((u32) (lbl_805D7888 - 1) <= 1U) {
        return 0;
    }
    switch (arg0) {
    case 0x9D:
    case 0xA1:
    case 0xA3:
    case 0xA5:
    case 0xA7:
    case 0xA9:
    case 0xC3:
    case 0xE3:
    case 0xE5:
    case 0xE7:
    case 0xEE:
    case 0xF2:
    case 0xF3:
        return 1;
    default:
        return 0;
    }
}

void TQuestVmDownLoadServer__sub_803E9F20(s32 arg0) {
    struct Fields_temp_r3 { u8 pad_0[20]; u8 field_14; u8 field_15; u8 field_16; };
    u8 *temp_r3;
    temp_r3 = (u8 *)&lbl_80595998.value + (arg0 * 0x1C);
    if (((s8) ((Fields_temp_r3*)temp_r3)->field_16 == 0) && ((s8) ((Fields_temp_r3*)temp_r3)->field_14 != 0)) {
        ((Fields_temp_r3*)temp_r3)->field_16 = (u8) ((Fields_temp_r3*)temp_r3)->field_15;
    }
}

s32 TQuestVmDownLoadServer__sub_803E9F54(s32 arg0) {
    R_803E9F54 *r;
    if (arg0 >= lbl_805D78C0) {
        return 0;
    }
    r = &((R_803E9F54 *)&lbl_80595998)[arg0];
    if (lbl_805D7848 == 2 && r->a == 0) {
        return 0;
    }
    return (s8)r->b;
}

N_803E9FA4 *TQuestVmDownLoadServer__sub_803E9FA4(N_803E9FA4 *arg0, N_803E9FA4 *arg1) {
    N_803E9FA4 *cur;
    N_803E9FA4 *prev;
    s16 k = arg1->key;
    if (arg0 == NULL || arg0->key < k) {
        arg1->next = arg0;
        return arg1;
    }
    cur = arg0->next;
    prev = arg0;
    while (cur != NULL) {
        if (cur->key < k) {
            break;
        }
        prev = cur;
        cur = cur->next;
    }
    prev->next = arg1;
    arg1->next = cur;
    return arg0;
}

Node_803EA384 *TQuestVmDownLoadServer__sub_803EA384(s32 arg0, Hdr_803EA384 *arg1) {
    s16 id;
    s32 x4;
    s32 n;
    Item_803EA384 *it;
    Node_803EA384 *head;
    Node_803EA384 *prev;
    Node_803EA384 *node;
    u8 unused[8];
    it = arg1->items;
    head = NULL;
    prev = NULL;
    id = arg1->id;
    x4 = arg1->x4;
    n = arg1->count;
    while (n-- != 0) {
        node = TQuestVmDownLoadServer__sub_803ECF84();
        if (node == NULL) {
            break;
        }
        if (head == NULL) {
            head = node;
        }
        node->id = id;
        node->a = it->a;
        node->b = it->b;
        node->x4 = x4;
        node->c = it->c;
        node->next = NULL;
        if (prev != NULL) {
            prev->next = node;
        }
        prev = node;
        it++;
    }
    return head;
}

s32 TQuestVmDownLoadServer__sub_803EA960(s32 i, s32 end) {
    Ent_803EA960 *e = &((Ent_803EA960 *)&lbl_80595998)[i];
    s32 n;
    s32 total = 0;
    while (i < end) {
        n = e->count;
        if (n == 0) {
            return -1;
        }
        if (e->obj != NULL && (u32)e->obj != 0xFFFFFFFF && e->obj->type != 0x28) {
            break;
        }
        total += n;
        i += n;
        e += n;
    }
    if (total == 0 || i >= end) {
        return total;
    }
    return total + n;
}

void TQuestVmDownLoadServer__sub_803EADD4(Obj_803EADD4 *arg0, s32 arg1) {
    if (arg1 == 0) {
        arg0->x0 = -1;
        arg0->x18 = -1;
        if ((u32)arg0->x4 != 0xFFFFFFFF) {
            TQuestVmDownLoadServer__sub_803ECDC4(arg0->x4);
        }
        arg0->x4 = NULL;
        arg0->x17 = -1;
        arg0->x19 = -1;
        arg0->x16 = 0;
    }
    if (arg0->x8 != NULL && (u32)arg0->x8 != 0xFFFFFFFF) {
        TQuestVmDownLoadServer__sub_803ECD8C(arg0->x8);
    }
    arg0->x8 = NULL;
    if (arg0->xc != NULL) {
        TQuestVmDownLoadServer__sub_803ECD54(arg0->xc);
    }
    arg0->xc = NULL;
    arg0->x10 = 0;
    arg0->x14 = 0;
    arg0->x15 = 0;
}

s32 TQuestVmDownLoadServer__sub_803EB420(s32 arg0, s32 arg1, Node_803EB420 *arg2, u16 *arg3) {
    s32 n;
    Node_803EB420 *p;
    u8 unused[8];
    if (arg2 == NULL || (arg2->flags & 0x80)) {
        return TQuestVmDownLoadServer__sub_803E6970(arg0, arg1, arg3, 0);
    }
    p = arg2;
    n = 0;
    for (;;) {
        n += TQuestVmDownLoadServer__sub_803EC95C(arg3 + n, &p->flags + 1, 6);
        if (!(p->flags & 1)) {
            break;
        }
        p = p->next;
    }
    arg3 += n;
    return n + TQuestVmDownLoadServer__sub_803E6970(arg0 + arg2->len, arg1 - arg2->len, arg3, 0);
}

Node_803EB794 *TQuestVmDownLoadServer__sub_803EB794(Node_803EB794 *p, s32 n) {
    s32 i;
    for (i = 0; i != n; i++) {
        while (p->flags & 1) {
            p = p->next;
        }
        p = p->next;
    }
    return p;
}

s32 TQuestVmDownLoadServer__sub_803EB844(Node_803EB844 *p) {
    s32 n = 0;
    while (p != NULL) {
        while (p->flags & 1) {
            p = p->next;
        }
        p = p->next;
        n++;
    }
    return n;
}

Node_803EB878 *TQuestVmDownLoadServer__sub_803EB878(Node_803EB878 *p) {
    while (p->flags & 1) {
        p = p->next;
    }
    return p->next;
}

Node_803EB894 *TQuestVmDownLoadServer__sub_803EB894(Node_803EB894 *p) {
    Node_803EB894 *next;
    while (p->flags & 1) {
        p = p->next;
    }
    next = p->next;
    p->next = NULL;
    return next;
}

u16 TQuestVmDownLoadServer__sub_803EC5F8(u16 arg0) {
    u8 lo;
    u8 hi;
    hi = arg0 >> 8;
    lo = arg0;
    if (arg0 < 0x2121 || arg0 > 0x7E7E) {
        return 0;
    }
    if (lo < 0x21 || lo >= 0x7F) {
        return 0;
    }
    lo += 0x1F;
    if (hi & 1) {
        hi >>= 1;
    } else {
        hi >>= 1;
        hi--;
        lo += 0x5E;
    }
    if (lo >= 0x7F) {
        lo++;
    }
    if (hi < 0x2F) {
        hi += 0x71;
    } else {
        hi += 0xB1;
    }
    return (hi << 8) | lo;
}

s32 TQuestVmDownLoadServer__sub_803EC838(u16 arg0) {
    s32 var_r0;
    if ((arg0 >= 0x2120U) && (arg0 < 0x3020U)) {
        if ((s32) (arg0 & 0xFF00) == 0x2500) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            return 0;
        }
        return 1;
    }
    return 0;
}

s32 TQuestVmDownLoadServer__sub_803EC884(u16 arg0) {
    if (arg0 >= 0x3020U) {
        return 1;
    }
    return 0;
}

s32 is_download_command__22TQuestVmDownLoadServerFUsi(u16 arg0, s32 arg1) {
    if ((arg1 != 0) && (arg0 == 0x213C)) {
        return 1;
    }
    if ((s32) (arg0 & 0xFF00) == 0x2500) {
        return 1;
    }
    return 0;
}

s32 TQuestVmDownLoadServer__sub_803EC8D8(u16 arg0) {
    s32 temp_r0;
    s32 var_r3;
    u16 var_r4;
    if ((arg0 > 0x20U) && (arg0 < 0x7FU)) {
        var_r3 = 0;
        return 0;
    }
    var_r4 = arg0;
    temp_r0 = arg0 & 0xFF00;
    switch (temp_r0) {
    case 0x2300:
        var_r3 = var_r4 & 0x7F;
        return var_r3;
    case 0x2400:
        var_r3 = (var_r4 & 0x7F) | 0x80;
        return var_r3;
    case 0x2500:
        var_r3 = 0;
        return 0;
    default:
        return TQuestVmDownLoadServer__sub_803E6F48(arg0);
    }
}

s32 TQuestVmDownLoadServer__sub_803ECC7C(u32 arg0) {
    u8 hi = (arg0 >> 8) & 0xFF;
    u8 lo = arg0;
    s32 lead;
    if (hi < 0x81 || hi > 0xFC || (hi >= 0xA0 && hi < 0xE0)) {
        lead = 0;
    } else {
        lead = 1;
    }
    if (lead == 0) {
        return 0;
    }
    if (lo < 0x40 || lo > 0xFC || lo == 0x7F) {
        return 0;
    }
    return 1;
}

s32 is_sjis_lead_byte__22TQuestVmDownLoadServerFUc(u8 arg0) {
    if ((arg0 < 0x81U) || (arg0 > 0xFCU) || ((arg0 >= 0xA0U) && (arg0 < 0xE0U))) {
        return 0;
    }
    return 1;
}

extern s32 lbl_805D78AC;
extern M2C_UNK *lbl_805D78B0;

void TQuestVmDownLoadServer__sub_803ECD1C(Node_803ECD1C *p) {
    while (p != NULL) {
        Node_803ECD1C *next = p->next;
        if (p != NULL) {
            *(s32 *)p = (long)(*(s32 * *)&lbl_805D78B0);
            (*(s32 * *)&lbl_805D78B0) = (s32 *)p;
            lbl_805D78AC += 1;
        }
        p = next;
    }
}

void TQuestVmDownLoadServer__sub_803ECD54(Node_803ECD54 *p) {
    while (p != NULL) {
        Node_803ECD54 *next = p->next;
        if (p != NULL) {
            *(s32 *)p = (long)(*(s32 * *)&lbl_805D78B0);
            (*(s32 * *)&lbl_805D78B0) = (s32 *)p;
            lbl_805D78AC += 1;
        }
        p = next;
    }
}

void TQuestVmDownLoadServer__sub_803ECD8C(Node_803ECD8C *p) {
    Node_803ECD8C *next;
    while (p != NULL) {
        next = p->next;
        if (p != NULL) {
            p->link = lbl_805D78B0;
            lbl_805D78B0 = (M2C_UNK *)p;
            lbl_805D78AC += 1;
        }
        p = next;
    }
}

void TQuestVmDownLoadServer__sub_803ECE5C(Node_803ECE5C *p) {
    Node_803ECE5C *next;
    while (p != NULL) {
        next = p->next;
        if (p != NULL) {
            p->link = lbl_805D78B0;
            lbl_805D78B0 = (M2C_UNK *)p;
            lbl_805D78AC += 1;
        }
        p = next;
    }
}

void push_download_entry__22TQuestVmDownLoadServerFPv(M2C_UNK *arg0) {
    if (arg0 != NULL) {
        *arg0 = (long) (lbl_805D78B0);
        lbl_805D78B0 = arg0;
        lbl_805D78AC += 1;
    }
}

extern s32 lbl_805D7900;

typedef char RecoveredGlobal_803EE2E4_lbl_8058DC98_size[sizeof(RecoveredGlobal_803EE2E4_lbl_8058DC98) == 0x50 ? 1 : -1];

u16 TQuestVmDownLoadServer__sub_803ED0B4(u8 *arg0, u16 arg1) {
    struct Fields_arg0 { u8 pad_0[8]; u16 field_8; };
    if (arg1 != 0) {
        return arg1 + 0x3E8;
    }
    return ((Fields_arg0*)arg0)->field_8;
}

typedef char RecoveredGlobal_803EDB20_lbl_8047F8B8_size[sizeof(RecoveredGlobal_803EDB20_lbl_8047F8B8) == 0x100 ? 1 : -1];
s32 TQuestVmDownLoadServer__sub_803EDB20(u8 arg0) {
    return M2C_FIELD(((u8 *)(&lbl_8047F8B8.value) + arg0), u8 *, 0) & 0x20;
}

typedef char RecoveredGlobal_803EDB3C_lbl_8047F8B8_size[sizeof(RecoveredGlobal_803EDB3C_lbl_8047F8B8) == 0x100 ? 1 : -1];
s32 TQuestVmDownLoadServer__sub_803EDB3C(u8 arg0) {
    return M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_803EDB3C_lbl_8047F8B8 *)&lbl_8047F8B8).value) + arg0), u8 *, 0) & 0x40;
}

typedef char RecoveredGlobal_803EDB58_lbl_8047F8B8_size[sizeof(RecoveredGlobal_803EDB58_lbl_8047F8B8) == 0x100 ? 1 : -1];
s32 TQuestVmDownLoadServer__sub_803EDB58(u8 arg0) {
    return M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_803EDB58_lbl_8047F8B8 *)&lbl_8047F8B8).value) + arg0), u8 *, 0) & 0x80;
}

typedef char RecoveredGlobal_803EDB74_lbl_8047F8B8_size[sizeof(RecoveredGlobal_803EDB74_lbl_8047F8B8) == 0x100 ? 1 : -1];
s32 TQuestVmDownLoadServer__sub_803EDB74(u8 arg0) {
    return M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_803EDB74_lbl_8047F8B8 *)&lbl_8047F8B8).value) + arg0), u8 *, 0) & 0xC0;
}

s32 TQuestVmDownLoadServer__sub_803EDB90(s32 start, s32 n) {
    Ent_803EDB90 *e = &((Ent_803EDB90 *)&lbl_805A0498)[start];
    s32 sum = 0;
    s32 i;
    for (i = n; i > 0; i--) {
        sum += e->size;
        e++;
    }
    return sum;
}

u8 *TQuestVmDownLoadServer__sub_803EDEAC(u16 *start, u16 *end) {
    u8 c;
    u8 *p;
    u16 *s;
    s32 rem;
    s32 len;
    s32 n;
    len = end - start;
    p = lbl_8047FC40;
    while (*p != 0) {
        n = *p++;
        if (len == n) {
            s = start;
            for (rem = len; rem > 0;) {
                c = *s++;
                if (c >= 0x61U && c <= 0x7AU) {
                    c -= 0x20;
                }
                if (*p != c) {
                    break;
                }
                rem--;
                p++;
            }
            if (rem == 0) {
                return p;
            }
            p += rem;
        } else {
            p += n;
        }
        while (*p++ != 0) {
        }
    }
    return NULL;
}

void TQuestVmDownLoadServer__sub_803EE2E4(void) {
    lbl_8058DC98.value = 0;
}

s32 get_download_state__22TQuestVmDownLoadServerFv(void) {
    return lbl_805D7900;
}

s32 TQuestVmDownLoadServer__sub_803EEF2C(Req_803EEF2C *arg0) {
    char buf[0x50];
    if (lbl_805D7900 == 0) {
        return 3;
    }
    if (lbl_805D7904 == -1) {
        return -3;
    }
    strncpy(buf, arg0->name, arg0->len);
    if (arg0->x7 == 0x28 || arg0->x7 == 0x29) {
        arg0->x7 = 0x27;
    }
    buf[arg0->len] = 0;
    TQuestVmDownLoadServer__sub_803E8DA0(buf, arg0, 1);
    return 3;
}

s32 TQuestVmDownLoadServer__sub_803F0890(void) {
    if ((s32) lbl_805D7904 == -1) {
        return -3;
    }
    TQuestVmDownLoadServer__sub_803E8150();
    TQuestVmDownLoadServer__sub_803E9764();
    TQuestVmDownLoadServer__sub_803E7ACC();
    if (TQuestVmDownLoadServer__sub_803E86C8() == -1) {
        return -2;
    }
    return 3;
}

s32 TQuestVmDownLoadServer__sub_803F08E4(s8 *arg0) {
    s32 r;

    if (lbl_805D7904 != -1) {
        return -4;
    }
    if (*arg0 == 0) {
        return -1;
    }
    TQuestVmDownLoadServer__sub_803E875C((s32)arg0);
    r = TQuestVmDownLoadServer__sub_803E8710();
    if (r != 0) {
        if (r == -1) {
            return -7;
        }
        return -8;
    }
    if (TQuestVmDownLoadServer__sub_803E82AC() == -1) {
        TQuestVmDownLoadServer__sub_803E86C8();
        return -2;
    }
    if (TQuestVmDownLoadServer__sub_803E8084() == -1) {
        TQuestVmDownLoadServer__sub_803E86C8();
        return -2;
    }
    TQuestVmDownLoadServer__sub_803E840C();
    __VIRetraceHandler();
    if (lbl_805D78F8 == 0x8000) {
        return -6;
    }
    return 3;
}

s32 TQuestVmDownLoadServer__sub_803F09A4(void) {
    s32 var_r3;
    lbl_805D7834 = 0;
    lbl_805D782C = 1;
    lbl_805D7908 = 0;
    lbl_805D790C = 0;
    var_r3 = TWindowKeyBoardSoft__sub_803E6808((void *) (&lbl_805E10D8), (void *) (&lbl_805E10E0));
    if (var_r3 == 0) {
        var_r3 = TWindowKeyBoardSoft__sub_803E683C();
    }
    if (var_r3 > 0) {
        var_r3 = -1;
    }
    return var_r3;
}

s32 TQuestVmDownLoadServer__sub_803F09FC(void *arg0, int arg1, int arg2) {
    s32 r;
    switch (arg2) {
    case 0:
        if (arg1 < 0) {
            return -1;
        }
        lbl_805D7914.remain = lbl_805D7910 - arg1;
        lbl_805D7914.pos = arg1;
        break;
    case 1:
        r = lbl_805D7914.remain - arg1;
        if (r < 0 || (u32)r > lbl_805D7910) {
            return -1;
        }
        lbl_805D7914.remain = r;
        lbl_805D7914.pos += arg1;
        break;
    case 2:
        if (arg1 > 0) {
            return -1;
        }
        lbl_805D7914.remain = -arg1;
        arg1 = lbl_805D7910 + arg1;
        lbl_805D7914.pos = arg1 - 1;
        break;
    }
    return lbl_805D7914.pos;
}

s32 TQuestVmDownLoadServer__sub_803F0BD8(void * _w0) {
    return 0;
}

s32 TQuestVmDownLoadServer__sub_803F0BE0(void * _w0, void * _w1) {
    return 1;
}

extern u32 lbl_805D7924;
extern s32 lbl_805D7928;

void TQuestVmDownLoadServer__sub_803F0BE8(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 4) == (u32) lbl_805D7924) {
        lbl_805D7928 = 0;
    }
}

}
