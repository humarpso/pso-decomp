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

struct RecoveredGlobal_803E8150_lbl_8058DE08 {
    s32 value;
    u8 remaining[0x40];
};

struct Msg_803E90A8 {
    char *name;
    s16 len;
    u8 pad6;
    u8 x7;
    u8 x8;
    u8 pad9[3];
    u8 *text;
};

struct Node_803EB328 { u8 flags; char name[5]; u8 x6; u8 pad[9]; Node_803EB328 *next; };

struct Node_803EBA98 { u8 flags; u8 data[5]; u8 len; u8 pad[9]; Node_803EBA98 *next; };

struct Ent_803EE718 { u8 pad0[0xC]; Node_803EB794 *node; u8 pad10[0xC]; };

struct Info_803F0138 {
    s16 id;
    s16 off;
    u8 pad4[8];
    u8 *p;
};

struct R_803EAE84 { u8 pad[0x1C]; };

struct Node_803EB0D8 { u8 flags; u8 pad[0xF]; Node_803EB0D8 *next; };

struct Node_803EB7C0 { u8 flags; char text[5]; u8 len; u8 pad[9]; Node_803EB7C0 *next; };

struct Ent_803F03B4 { u8 a; u8 b; u8 c; u8 pad; u16 key; };

struct Out_803F0268 {
    s16 len;
    u32 x4;
    s16 len2;
    s16 xa;
    s16 count;
    Ent_803F03B4 ents[1];
};

struct Ent_803E6970 {
    u16 ch;
    u8 pad[6];
};

struct R_803E77F0 { u8 a; u8 b; u16 c; s16 d; s16 e; };

struct Tok_803E9FFC { s16 off; u8 a; u8 b; };

struct Seg_803E9FFC { s16 off; u8 pad[2]; u8 a; u8 b; u8 pad2[2]; Seg_803E9FFC *next; };

struct Out_803E9FFC {
    s16 off; u8 a; u8 b;
    Tok_803E9FFC *src;
    s16 x8; s16 xa;
    Out_803E9FFC *next;
};

struct Src_803EBD38 { u16 x0; u16 x2; u8 x4; u8 text[1]; };

struct N_803EBD38 {
    u8 flags;
    u8 text[5];
    u8 x6;
    u8 x7;
    s32 x8;
    u16 xc;
    u16 xe;
    N_803EBD38 *next;
};

struct Page_803E840C {
    s32 page;
    s32 dirty;
    Page_803E840C *next;
    u8 data[0x400];
};

struct Ent_803E840C { u8 a; u8 b; u16 c; s16 d; s16 e; };

struct Cache_803E840C {
    u8 name[0x44];
    Ent_803E840C ents[128];
    Page_803E840C pages[10];
};

struct Ent_803E8C2C { u8 pad[2]; u8 len; char name[1]; };

struct Node_803E8C2C { Ent_803E8C2C *ent; Node_803E8C2C *next; };

struct Out_803E8C2C { s16 a; s16 id; s16 len; s16 pre; u8 pad[4]; Ent_803E8C2C *ent; };

struct Buf_803E82AC {
    u8 name[0x3CBC];
    u8 hdr[0x400];
};

struct Ent_803E9DE0 { u8 a; u8 b; u8 off; u8 d; };

extern "C" {
extern RecoveredGlobal_803EE2E4_lbl_8058DC98 lbl_8058DC98;
void TQuestVmDownLoadServer__sub_803EE2E4(void);
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
s32 TQuestVmDownLoadServer__sub_803E86C8(void);
void TQuestVmDownLoadServer__sub_803E9764(void);
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803F0890(void);
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
s32 TQuestVmDownLoadServer__sub_803F0BE0(void * _w0, void * _w1);
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
extern RecoveredGlobal_803E8084_lbl_80590AC4 lbl_80590AC4;
extern s32 lbl_805D78F8;
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803E8084(void);
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
void TQuestVmDownLoadServer__sub_803EADD4(Obj_803EADD4 *arg0, s32 arg1);
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
s32 TQuestVmDownLoadServer__sub_803F09FC(void *arg0, int arg1, int arg2);
s32 TQuestVmDownLoadServer__sub_803F0BE0(void * _w0, void * _w1);
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
extern u8 lbl_80591AC4[];
extern s32 lbl_805D7820;
extern s32 lbl_805D7850;
extern s32 lbl_805D7854;
extern s32 lbl_805D7874;
extern s32 lbl_805D78F8;
extern s32 lbl_805D78FC;
extern s32 lbl_805D7900;
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803E8150(void);
void TQuestVmDownLoadServer__sub_803E90A8(u8 *arg0, s32 arg1, Msg_803E90A8 *arg2, u8 arg3);
u32 strlen(const char *);
extern s32 lbl_805D78A4;
extern s32 lbl_805D78EC;
s32 TQuestVmDownLoadServer__sub_803EB328(Node_803EB328 *arg0);
s32 TQuestVmDownLoadServer__sub_803EC95C(u16 *, u8 *, int);
s32 TQuestVmDownLoadServer__sub_803EC71C(u16 *, u8 *, s32);
extern u8 lbl_80596264[];
extern u16 lbl_805A0340[];
extern u8 *lbl_805D7890;
extern s32 lbl_805D78EC;
void TQuestVmDownLoadServer__sub_803EBA98(s32 arg0, Node_803EBA98 *arg1);
s32 TQuestVmDownLoadServer__sub_803ED434(u8 arg0, u8 arg1, s32 arg2);
extern RecoveredGlobal_803E9F20_lbl_80595998 lbl_80595998;
s32 TQuestVmDownLoadServer__sub_803E9F54(s32 arg0);
Node_803EB794 *TQuestVmDownLoadServer__sub_803EB794(Node_803EB794 *p, s32 n);
s32 TQuestVmDownLoadServer__sub_803EB420(s32 arg0, s32 arg1, Node_803EB420 *arg2, u16 *arg3);
s32 TQuestVmDownLoadServer__sub_803EC71C(u16 *, u8 *, s32);
extern u16 lbl_805A02A8[];
extern u16 lbl_805A0340[];
extern s32 lbl_805D7834;
extern s32 lbl_805D7898;
extern Node_803EB794 *lbl_805D78A0;
extern s32 lbl_805D78E8;
extern s32 lbl_805D78F0;
u16 *TQuestVmDownLoadServer__sub_803EE718(s32 i, s32 len);
extern RecoveredGlobal_803E9F20_lbl_80595998 lbl_80595998;
s32 TQuestVmDownLoadServer__sub_803E9F54(s32 arg0);
Node_803EB794 *TQuestVmDownLoadServer__sub_803EB794(Node_803EB794 *p, s32 n);
s32 TQuestVmDownLoadServer__sub_803EB420(s32 arg0, s32 arg1, Node_803EB420 *arg2, u16 *arg3);
extern u16 lbl_805A0340[];
extern s32 lbl_805D7834;
extern s32 lbl_805D7898;
extern Node_803EB794 *lbl_805D78A0;
extern s32 lbl_805D78E8;
extern s32 lbl_805D78EC;
extern s32 lbl_805D78F0;
s32 TQuestVmDownLoadServer__sub_803EE934(void);
void *TQuestVmDownLoadServer__sub_803EEB10(s32, s32, void *, s32);
extern s32 lbl_805D78FC;
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803EEA48(s32 arg0, s32 arg1, void *arg2, s32 *arg3);
u8 *TQuestVmDownLoadServer__sub_803EFBDC(u8 *p, s32 key, s32 n, s32 len);
int strncmp(const char *, const char *, u32);
s32 TQuestVmDownLoadServer__sub_803E7EE4(const char *key);
u8 *TQuestVmDownLoadServer__sub_803E7B9C(s32 page);
s32 TQuestVmDownLoadServer__sub_803E8004(const char *, s16);
s32 TQuestVmDownLoadServer__sub_803F0138(const char *name, s16 len, Info_803F0138 *out);
void DCInvalidateRange(void *, u32);
void ARQPostRequest(void *req, u32 owner, u32 type, u32 prio, u32 src, u32 dst, u32 len, void (*cb)(u8 *));
u32 OSGetTick(void);
void *memcpy(void *, const void *, u32);
void OSReport(const char *, ...);
void ARQRemoveRequest(void *);
void TQuestVmDownLoadServer__sub_803F0BE8(u8 *arg0);
extern u8 lbl_805A06C0[];
extern char lbl_8047FCB8[];
extern File_803F09FC lbl_805D7914;
extern u32 lbl_805D791C;
extern u32 lbl_805D7920;
extern u32 lbl_805D7924;
extern s32 lbl_805D7928;
extern u32 lbl_805D792C;
u32 TQuestVmDownLoadServer__sub_803F0AB8(void *h, void *dst, int size);
extern RecoveredGlobal_803E9F20_lbl_80595998 lbl_80595998;
void TQuestVmDownLoadServer__sub_803EADD4(Obj_803EADD4 *arg0, s32 arg1);
void TQuestVmDownLoadServer__sub_803EAE84(s32 arg0, s32 arg1, void *arg2);
s32 TQuestVmDownLoadServer__sub_803EB328(Node_803EB328 *arg0);
void TQuestVmDownLoadServer__sub_803EB4D4(void);
void TQuestVmDownLoadServer__sub_803EC284(s32, s32);
extern s32 lbl_805D7898;
extern s32 lbl_805D789C;
extern Node_803EB794 *lbl_805D78A0;
s32 TQuestVmDownLoadServer__sub_803EB0D8(s32 arg0, s32 arg1);
u32 strlen(const char *);
extern s32 lbl_805D78EC;
s32 TQuestVmDownLoadServer__sub_803EB7C0(Node_803EB7C0 *arg0);
void TQuestVmDownLoadServer__sub_803EED9C(u32);
extern s32 lbl_805D78AC;
extern M2C_UNK *lbl_805D78B0;
void TQuestVmDownLoadServer__sub_803ECDC4(Node_803ECDC4 *p);
s32 TQuestVmDownLoadServer__sub_803EC71C(u16 *, u8 *, s32);
s32 TQuestVmDownLoadServer__sub_803EE934(void);
extern u16 lbl_805A02A8[];
extern u16 lbl_805A0340[];
u8 *TQuestVmDownLoadServer__sub_803EE828(void);
void *TQuestVmDownLoadServer__sub_803EEB10(s32, s32, void *, s32);
extern s32 lbl_805D78FC;
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803EED0C(s32 arg0, s32 arg1, s32 arg2);
char *strncpy(char *, const char *, u32);
s32 TQuestVmDownLoadServer__sub_803F0138(const char *name, s16 len, Info_803F0138 *out);
s32 TQuestVmDownLoadServer__sub_803E8B1C(const char *name, s16 len, Info_803F0138 *out);
s32 TQuestVmDownLoadServer__sub_803F03B4(u8 *data, Ent_803F03B4 *ents, s32 n, s32 *max);
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803F0268(const char *name, s16 len, Out_803F0268 *out);
u16 TQuestVmDownLoadServer__sub_803E721C(u16 arg0);
s32 TQuestVmDownLoadServer__sub_803ECAE8(u16 *, u16, s32);
extern RecoveredGlobal_803E6ACC_lbl_805A0498 lbl_805A0498;
extern M2C_UNK *lbl_805D78C4;
extern M2C_UNK *lbl_805D78C8;
extern M2C_UNK *lbl_805D78D0;
extern M2C_UNK *lbl_805D78D4;
extern M2C_UNK *lbl_805D78D8;
s32 TQuestVmDownLoadServer__sub_803E6970(s32 start, s32 count, u16 *buf, s32 flag);
extern R_803E76A4 lbl_8058DE4C[];
void TQuestVmDownLoadServer__sub_803E74AC(s32 id);
extern R_803E76A4 lbl_8058DE4C[];
void TQuestVmDownLoadServer__sub_803E7588(s32 id);
extern R_803E76A4 lbl_8058DE4C[];
u32 TQuestVmDownLoadServer__sub_803E77F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TQuestVmDownLoadServer__sub_803E7254(u8 c, u8 k);
s32 TQuestVmDownLoadServer__sub_803E7254(u8 c, u8 k);
Seg_803E9FFC *TQuestVmDownLoadServer__sub_803E9A74(s32, s32, u8, u8);
void *TQuestVmDownLoadServer__sub_803ECF48(void);
void TQuestVmDownLoadServer__sub_803ECE5C(Node_803ECE5C *p);
extern s32 lbl_805D7888;
extern RecoveredGlobal_803E6ACC_lbl_805A0470 lbl_805A0470;
void *TQuestVmDownLoadServer__sub_803E9FFC(s32 arg0, s32 arg1, Tok_803E9FFC *t);
u32 strlen(const char *);
void *TQuestVmDownLoadServer__sub_803ECED0(void);
void TQuestVmDownLoadServer__sub_803ECD54(Node_803ECD54 *p);
s32 is_sjis_lead_byte__22TQuestVmDownLoadServerFUc(u8 arg0);
void *TQuestVmDownLoadServer__sub_803EBD38(void *sp, void *a1, s32 a2, void *hp, void *tp);
extern u8 *lbl_805D7858;
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
void TQuestVmDownLoadServer__sub_803E840C(void);
int strncmp(const char *, const char *, u32);
s32 TQuestVmDownLoadServer__sub_803E7D58(const u8 *a, const u8 *b, s32 n);
extern RecoveredGlobal_803E9764_lbl_80591EC8 lbl_80591EC8;
extern Node_803E8C2C *lbl_80593EC8[];
s32 TQuestVmDownLoadServer__sub_803E8C2C(char *arg0, s16 arg1, Out_803E8C2C *arg2);
s32 TQuestVmDownLoadServer__sub_803ED0CC(u8 kind, u8 v, u8 w, s32 base, s32 add);
void TQuestVmDownLoadServer__sub_803ECA1C(u16 *arg0, s32 arg1, s32 arg2);
s32 TQuestVmDownLoadServer__sub_803E779C(u32 arg0, s32 *arg1, s32 *arg2, s32 *arg3);
u8 *TQuestVmDownLoadServer__sub_803E7B9C(s32 page);
u8 *TQuestVmDownLoadServer__sub_803E9594(s32 arg0);
void TQuestVmDownLoadServer__sub_803EFF20(u8 *data, s32 a1, s32 a2, s32 *best, u8 *dst, s32 flags);
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803F0048(s32 id, u8 a1, u8 a2, void *dst);
extern RecoveredGlobal_803E8084_lbl_80590AC4 lbl_80590AC4;
s32 TQuestVmDownLoadServer__sub_803E7E3C(s32 arg0, u8 *arg1);
s32 TQuestVmDownLoadServer__sub_803F09FC(void *arg0, int arg1, int arg2);
s32 TQuestVmDownLoadServer__sub_803F0BE0(void * _w0, void * _w1);
u32 TQuestVmDownLoadServer__sub_803F0AB8(void *h, void *dst, int size);
int strncmp(const char *, const char *, u32);
u32 strlen(const char *);
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
extern char lbl_8047F0D0[];
extern s32 lbl_805D7820;
extern s32 lbl_805D7850;
extern s32 lbl_805D7854;
extern s32 lbl_805D785C;
extern s32 lbl_805D7860;
extern s32 lbl_805D7874;
extern s32 lbl_805D78F8;
extern s32 lbl_805D78FC;
extern s32 lbl_805D7904;
s32 TQuestVmDownLoadServer__sub_803E82AC(void);
extern s16 lbl_8047F7E8[];
extern Ent_803E9DE0 lbl_8047F1EC[];
extern u8 lbl_8047F0F8[];
extern s32 lbl_805D7888;
Ent_803E9DE0 *TQuestVmDownLoadServer__sub_803E9DE0(u8 *arg0, s32 arg1, s32 *arg2);
s32 TQuestVmDownLoadServer__sub_803ED50C(u8 arg0, u8 arg1, u8 arg2, s32 arg3);
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

s32 TQuestVmDownLoadServer__sub_803E6970(s32 start, s32 count, u16 *buf, s32 flag) {
    Ent_803E6970 *e;
    u16 *dst;
    Ent_803E6970 *end;
    u16 *q;
    s32 hit;
    u16 c;
    s32 n;
    e = (Ent_803E6970 *)&lbl_805A0498 + start;
    end = (Ent_803E6970 *)&lbl_805A0498 + (start + count);
    dst = buf;
    hit = 0;
    while (e < end) {
        if (e == (Ent_803E6970 *)lbl_805D78C8) {
            for (q = (u16 *)lbl_805D78D4; q < (u16 *)lbl_805D78D8; q++) {
                c = *q;
                if (c & 0x4000) {
                    c = TQuestVmDownLoadServer__sub_803E721C(c);
                } else {
                    c = (u8)c;
                }
                if (flag != 0 && q == (u16 *)lbl_805D78D0) {
                    n = TQuestVmDownLoadServer__sub_803ECAE8(dst, c, 8);
                    flag = 0;
                } else {
                    n = TQuestVmDownLoadServer__sub_803ECAE8(dst, c, 4);
                }
                dst += n;
            }
            hit = 1;
        }
        if (e >= (Ent_803E6970 *)lbl_805D78C4) {
            break;
        }
        if (flag != 0 && hit != 0) {
            n = TQuestVmDownLoadServer__sub_803ECAE8(dst, e->ch, 8);
            flag = 0;
        } else {
            n = TQuestVmDownLoadServer__sub_803ECAE8(dst, e->ch, 4);
        }
        dst += n;
        hit = 0;
        e++;
    }
    if (flag != 0) {
        dst += TQuestVmDownLoadServer__sub_803ECAE8(dst, 0x20, 8);
    }
    return dst - buf;
}

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
    TQuestVmDownLoadServer__sub_803EAE84((s32)(0), (s32)(0x50), (void *)(0));
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
    TQuestVmDownLoadServer__sub_803EAE84((s32)((s32)((int) (0))), (s32)((s32)((int) (0x50))), (void *)((s32)((int) (0))));
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

s32 TQuestVmDownLoadServer__sub_803E7254(u8 c, u8 k) {
    if (c >= 0xC0) {
        return 1;
    }
    if (c < 0x80) {
        if (c < 0x2D && k != 0) {
            if (c >= 1 && c <= 0xD) {
                c += 0x7F;
            } else {
                c = 0;
            }
            if (c == 0) {
                return 0;
            }
        } else {
            if (c == 0xD || (c >= 0x13 && c <= 0x34) || c == 0x38) {
                return 1;
            }
            return 0;
        }
    }
    switch (c) {
    case 0x8B:
    case 0x8D:
    case 0x93:
    case 0x96:
    case 0x99:
    case 0x9A:
    case 0x9B:
    case 0x9E:
    case 0xA1:
    case 0xA2:
    case 0xA7:
    case 0xA8:
    case 0xB1:
        if ((k >= 5 && k <= 8) || k >= 0xA) {
            return 1;
        }
        break;
    case 0x97:
        if (k == 8) {
            return 0;
        }
    case 0x8E:
    case 0x92:
    case 0x94:
    case 0x95:
    case 0x98:
    case 0xA0:
        if (k >= 5) {
            return 1;
        }
        break;
    default:
        if (k == 4 || (u8)(k - 7) <= 1 || k >= 0xA) {
            return 1;
        }
        break;
    }
    return 0;
}

void TQuestVmDownLoadServer__sub_803E74AC(s32 id) {
    s32 i;
    for (i = 0; i < 128; i++) {
        if (id == ((R_803E773C *)lbl_8058DE4C)[i].e) {
            ((R_803E773C *)lbl_8058DE4C)[i].e = -1;
        }
    }
}

void TQuestVmDownLoadServer__sub_803E7588(s32 id) {
    s32 i;
    for (i = 0; i < 128; i++) {
        if (id == (s16)(((R_803E773C *)lbl_8058DE4C)[i].e >> 12)) {
            ((R_803E773C *)lbl_8058DE4C)[i].e = -1;
        }
    }
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

u32 TQuestVmDownLoadServer__sub_803E77F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 i;
    R_803E77F0 *r;
    s32 free_idx;
    r = ((R_803E77F0 *)&lbl_8058DE4C);
    free_idx = -1;
    for (i = 0; i < 128; i++, r++) {
        if (r->a == 0) {
            if (free_idx == -1) {
                free_idx = i;
            }
        } else if (r->c == arg0 && r->d == arg1 && r->e == arg2) {
            r->a++;
            return i;
        }
    }
    if (free_idx == -1) {
        return -1;
    }
    r = &((R_803E77F0 *)&lbl_8058DE4C)[free_idx];
    r->a = 1;
    r->c = arg0;
    r->d = arg1;
    r->e = arg2;
    r->b = arg3;
    return free_idx;
}

struct Page_803E7B9C {
    s32 page;
    s32 dirty;
    Page_803E7B9C *next;
    u8 data[0x400];
};
extern u8 *lbl_805D7858;
#define HEAD_803E7B9C (*(Page_803E7B9C **)&lbl_805D7858)
extern s32 lbl_805D7904;
extern s32 lbl_805D78F8;
extern RecoveredGlobal_803E8710_lbl_8058DE08 lbl_8058DE08;
s32 TQuestVmDownLoadServer__sub_803F09FC(void *arg0, int arg1, int arg2);
s32 TQuestVmDownLoadServer__sub_803F0BE0(void *, void *);
u32 TQuestVmDownLoadServer__sub_803F0AB8(void *h, void *dst, int size);

#pragma push
#pragma dont_inline off
#pragma inline_depth(2)
inline s32 Open_803E7B9C(void) {
    s32 h = TQuestVmDownLoadServer__sub_803F0BE0(&lbl_8058DE08.value, (void *)lbl_805D78F8);
    if (h == -1) {
        lbl_805D7904 = -1;
        return -1;
    }
    lbl_805D7904 = h;
    return 0;
}
inline s32 Seek_803E7B9C(s32 pos) {
    if (TQuestVmDownLoadServer__sub_803F09FC((void *)lbl_805D7904, pos, 0) == -1) {
        if (Open_803E7B9C() != 0) {
            return -1;
        }
        if (TQuestVmDownLoadServer__sub_803F09FC((void *)lbl_805D7904, pos, 0) == -1) {
            return -1;
        }
    }
    return 0;
}
inline s32 Write_803E7B9C(void) {
    return -1;
}

u8 *TQuestVmDownLoadServer__sub_803E7B9C(s32 page) {
    u8 unused[0x38];
    Page_803E7B9C *prev = NULL;
    Page_803E7B9C *p = HEAD_803E7B9C;

    for (;;) {
        if (p->page == page) {
            if (prev != NULL) {
                prev->next = p->next;
                p->next = HEAD_803E7B9C;
                HEAD_803E7B9C = p;
            }
            return p->data;
        }
        if (p->next == NULL) {
            break;
        }
        prev = p;
        p = p->next;
    }
    prev->next = NULL;
    p->next = HEAD_803E7B9C;
    HEAD_803E7B9C = p;
    if (p->dirty == 1) {
        if (Seek_803E7B9C(p->page * 0x400 + 0x3400) != -1) {
            Write_803E7B9C();
        }
    }
    p->page = page;
    p->dirty = 0;
    if (Seek_803E7B9C(p->page * 0x400 + 0x3400) != -1) {
        TQuestVmDownLoadServer__sub_803F0AB8((void *)lbl_805D7904, p->data, 0x400);
    }
    return p->data;
}
#pragma pop

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

typedef u8 Name_803E7E3C[4];
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
static inline s32 match_803E7E3C(u8 *p, u8 *q) {
    s32 i;
    u8 c;
    for (i = 0; i < 4; i++, p++, q++) {
        c = *p;
        if (c != *q || c == 0) {
            break;
        }
    }
    return i;
}
s32 TQuestVmDownLoadServer__sub_803E7E3C(s32 arg0, u8 *arg1) {
    s32 i = match_803E7E3C(((Name_803E7E3C *)&lbl_80590AC4)[arg0 + 1], arg1);
    if (arg1[i] == 0) {
        return 0;
    }
    return 1;
}
#pragma pop

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
  if (((s32)TQuestVmDownLoadServer__sub_803F0AB8((void *)((void *)((void *) lbl_805D7904)), (void *)((void *)((void *) (&lbl_80590AC4.value))), (int)((int)((int) 0x1000)))) != 0x1000)
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

#pragma push
#pragma dont_inline off
#pragma inline_depth(2)
inline s32 Open_803E8150(void) {
    s32 h = TQuestVmDownLoadServer__sub_803F0BE0(&(*(RecoveredGlobal_803E8150_lbl_8058DE08 *)&lbl_8058DE08).value, (void *)lbl_805D78F8);
    if (h == -1) {
        lbl_805D7904 = -1;
        return -1;
    }
    lbl_805D7904 = h;
    return 0;
}
inline s32 Seek_803E8150(s32 pos) {
    if (TQuestVmDownLoadServer__sub_803F09FC((void *)lbl_805D7904, pos, 0) == -1) {
        if (Open_803E8150() != 0) {
            return -1;
        }
        if (TQuestVmDownLoadServer__sub_803F09FC((void *)lbl_805D7904, pos, 0) == -1) {
            return -1;
        }
    }
    return 0;
}
inline s32 Write_803E8150(void) {
    return -1;
}
s32 TQuestVmDownLoadServer__sub_803E8150(void) {
    u8 *p = lbl_80591AC4 + 0x30;
    if (lbl_805D7874 == lbl_805D7850 && lbl_805D78FC == lbl_805D7854 && lbl_805D7820 == 0) {
        return 0;
    }
    p[0] = lbl_805D7874 % 256;
    p[1] = lbl_805D7874 / 256;
    p[2] = lbl_805D7900 % 256;
    p[3] = lbl_805D7900 / 256;
    p[4] = lbl_805D78FC % 256;
    p[5] = lbl_805D78FC / 256;
    if (Seek_803E8150(0) == -1) {
        return -1;
    }
    return Write_803E8150();
}
#pragma pop

struct RecoveredGlobal_803E8710_lbl_8058DE08;
#pragma push
#pragma dont_inline off
#pragma inline_depth(2)
inline s32 Open_803E82AC(Buf_803E82AC *b) {
    s32 h = TQuestVmDownLoadServer__sub_803F0BE0(b->name, (void *)lbl_805D78F8);
    if (h == -1) {
        lbl_805D7904 = -1;
        return -1;
    }
    lbl_805D7904 = h;
    return 0;
}
inline s32 Seek_803E82AC(Buf_803E82AC *b, s32 pos) {
    if (TQuestVmDownLoadServer__sub_803F09FC((void *)lbl_805D7904, pos, 0) == -1) {
        if (Open_803E82AC(b) != 0) {
            return -1;
        }
        if (TQuestVmDownLoadServer__sub_803F09FC((void *)lbl_805D7904, pos, 0) == -1) {
            return -1;
        }
    }
    return 0;
}
s32 TQuestVmDownLoadServer__sub_803E82AC(void) {
    Buf_803E82AC *b = (Buf_803E82AC *)&lbl_8058DE08;
    u8 *h;
    u8 unused[0x18];
    if (Seek_803E82AC((Buf_803E82AC *)&lbl_8058DE08, 0) == -1) {
        return -1;
    }
    if ((s32)TQuestVmDownLoadServer__sub_803F0AB8((void *)lbl_805D7904, (b)->hdr, 0x400) != 0x400) {
        return -1;
    }
    h = (b)->hdr;
    if (strncmp((char *)h, lbl_8047F0D0, strlen(lbl_8047F0D0)) != 0) {
        return -1;
    }
    lbl_805D785C = 0;
    lbl_805D7860 = h[0x2E] + (h[0x2F] << 8);
    lbl_805D7850 = lbl_805D7874 = h[0x30] + (h[0x31] << 8);
    lbl_805D7854 = lbl_805D78FC = h[0x34] + (h[0x35] << 8);
    lbl_805D7820 = 0;
    return 0;
}
#pragma pop

void TQuestVmDownLoadServer__sub_803E840C(void) {
    Cache_803E840C *c;
    Page_803E840C *p;
    Ent_803E840C *e;
    u32 i;
    c = (Cache_803E840C *)&lbl_8058DE08;
    *(Page_803E840C **)&lbl_805D7858 = p = c->pages;
    for (; p < &c->pages[9]; p++) {
        p->page = -1;
        p->dirty = 0;
        p->next = p + 1;
    }
    p->page = -1;
    p->dirty = 0;
    p->next = NULL;
    e = c->ents;
    for (i = 0; i < 128; i++) {
        e[i].a = 0;
    }
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
    TQuestVmDownLoadServer__sub_803F0AB8((void *)((void *)(arg0)), (void *)((void *)(arg1)), (int)((int)(_w2)));
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

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline s32 IsSjisLead_803E90A8(u8 c) {
    if ((c >= 0x80 && c <= 0x9F) || (c >= 0xE0 && c <= 0xFC)) {
        return 1;
    }
    return 0;
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline s32 Hash_803E8C2C(char *s) {
    s32 h;
    u8 c = s[0];
    if (c >= 0xA0 && c < 0xF0) {
        h = c - 0xA0;
    } else {
        h = 0;
    }
    return h;
}
s32 TQuestVmDownLoadServer__sub_803E8C2C(char *arg0, s16 arg1, Out_803E8C2C *arg2) {
    Node_803E8C2C *n;
    Ent_803E8C2C *e;
    s16 len;
    Ent_803E8C2C *found;
    s16 pre;
    s16 blen;
    s32 r;
    s16 m;
    s32 off;
    u8 unused[8];
    blen = 0;
    pre = 0;
    arg2->pre = 0;
    arg2->len = 0;
    for (n = lbl_80593EC8[Hash_803E8C2C(arg0)]; n != NULL; n = n->next) {
        e = n->ent;
        len = e->len;
        m = TQuestVmDownLoadServer__sub_803E7D58((u8 *)e->name, (u8 *)arg0, (s16)len);
        if (m >= pre) {
            pre = m + 1;
        }
        r = strncmp(e->name, arg0, (s16)len);
        if (r == 0) {
            if ((s16)len == arg1) {
                return 2;
            }
            blen = len;
            found = e;
        } else if (r > 0) {
            if (strncmp(e->name, arg0, arg1) == 0) {
                return 2;
            }
            break;
        }
    }
    if (blen == 0) {
        arg2->id = -1;
        return 0;
    }
    off = (u8 *)found - (u8 *)&lbl_80591EC8;
    arg2->a = 0;
    arg2->id = ((off / 1024) << 12) | (off % 1024);
    arg2->len = blen;
    arg2->pre = pre;
    arg2->ent = found;
    return 1;
}
#pragma pop

void TQuestVmDownLoadServer__sub_803E90A8(u8 *arg0, s32 arg1, Msg_803E90A8 *arg2, u8 arg3) {
    u16 cur;
    s32 v;
    u8 *p;
    u8 *s;
    cur = arg0[0];
    cur += arg0[1] << 8;
    v = arg1 + cur;
    arg0[0] = v % 256;
    arg0[1] = v / 256;
    p = arg0 + cur;
    *p++ = arg2->x7;
    *p++ = arg3;
    if (arg2->x8 != 0 || arg2->x7 >= 0x2D) {
        *p++ = arg2->x8;
    }
    s = arg2->text;
    while (*s != 0) {
        if (IsSjisLead_803E90A8(*s)) {
            *p++ = *s++;
        } else {
            *p++ = 0xFF;
        }
        *p++ = *s++;
    }
}
#pragma pop

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

Ent_803E9DE0 *TQuestVmDownLoadServer__sub_803E9DE0(u8 *arg0, s32 arg1, s32 *arg2) {
    u8 *s;
    u8 *a;
    s32 k;
    s32 rem;
    Ent_803E9DE0 *p;
    s32 m;
    s32 best = 1;
    u8 c = arg0[0];
    if (c < 0xA0) {
        *arg2 = 1;
        return NULL;
    }
    c -= 0xA0;
    for (p = &lbl_8047F1EC[lbl_8047F7E8[c + 1]] - 1; p >= &lbl_8047F1EC[lbl_8047F7E8[c]]; p--) {
        a = arg0 + 1;
        rem = arg1 - 1;
        s = &lbl_8047F0F8[p->off];
        m = 1;
        k = *s++ - 1;
        while (1) {
            if (k == 0) {
                if (m > best) {
                    best = m;
                }
                *arg2 = best;
                return p;
            }
            if (rem == 0) {
                if (lbl_805D7888 >= 3) {
                    return (Ent_803E9DE0 *)-1;
                }
                break;
            }
            m++;
            if (*s != *a) {
                if (m > best) {
                    best = m;
                }
                break;
            }
            a++;
            s++;
            rem--;
            k--;
        }
    }
    *arg2 = best;
    return NULL;
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

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline s32 IsX_803E9FFC(u8 arg0) {
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
void *TQuestVmDownLoadServer__sub_803E9FFC(s32 arg0, s32 arg1, Tok_803E9FFC *t) {
    s32 off;
    Out_803E9FFC *head;
    Out_803E9FFC *tail;
    s32 pos;
    Seg_803E9FFC *s;
    Seg_803E9FFC *first;
    Out_803E9FFC *o;
    off = t->off;
    head = NULL;
    tail = NULL;
    pos = arg0 + off;
    s = TQuestVmDownLoadServer__sub_803E9A74(pos, arg1, t->a, t->b);
    if ((u32)s == 0xFFFFFFFFU) {
        return (void *)-1;
    }
    for (first = s; s != NULL; s = s->next) {
        o = (Out_803E9FFC *)TQuestVmDownLoadServer__sub_803ECF48();
        if (o == NULL) {
            break;
        }
        if (head == NULL) {
            head = o;
        }
        o->off = off + s->off;
        o->a = s->a;
        o->b = s->b;
        o->src = t;
        o->x8 = 0;
        o->xa = 0;
        o->next = NULL;
        if (tail != NULL) {
            tail->next = o;
        }
        tail = o;
    }
    TQuestVmDownLoadServer__sub_803ECE5C((Node_803ECE5C *)first);
    if (off > 0 && TQuestVmDownLoadServer__sub_803E7254((u8)(t->a), (u8)(t->b)) != 0) {
        if (pos >= arg1 || IsX_803E9FFC(((u8 *)&lbl_805A0470)[pos]) == 0) {
            o = (Out_803E9FFC *)TQuestVmDownLoadServer__sub_803ECF48();
            if (o != NULL) {
                if (head == NULL) {
                    head = o;
                }
                o->off = off;
                o->a = t->a;
                o->b = t->b;
                o->src = t;
                o->x8 = 0;
                o->xa = 0;
                o->next = NULL;
                if (tail != NULL) {
                    tail->next = o;
                }
            }
        }
    }
    return head;
}
#pragma pop

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
            TQuestVmDownLoadServer__sub_803ECDC4((Node_803ECDC4 *)(arg0->x4));
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

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline s32 Len_803EB328(Node_803EB328 *p) {
    s32 n;
    if (p->flags == 0x80) {
        return lbl_805D78EC * 2;
    }
    n = (lbl_805D78EC - p->x6) * 2;
    while (p->flags & 1) {
        n += strlen(p->name);
        p = p->next;
    }
    return n + strlen(p->name);
}
inline Node_803EB328 *Next_803EB328(Node_803EB328 *p) {
    while (p->flags & 1) {
        p = p->next;
    }
    return p->next;
}

void TQuestVmDownLoadServer__sub_803EAE84(s32 arg0, s32 arg1, void *arg2) {
    R_803EAE84 *p;
    R_803EAE84 *end;
    end = &((R_803EAE84 *)&lbl_80595998)[arg1];
    p = &((R_803EAE84 *)&lbl_80595998)[arg0];
    for (; p < end; p++) {
        TQuestVmDownLoadServer__sub_803EADD4((Obj_803EADD4 *)(p), (s32)(arg2));
    }
}

struct Ent_803EAEF0 {
    s32 x0;
    s32 x4;
    s32 x8;
    s32 xc;
    s32 x10;
    u8 x14;
    u8 x15;
    u8 x16;
    s8 x17;
    s8 x18;
    s8 x19;
};
extern RecoveredGlobal_803E9F20_lbl_80595998 lbl_80595998;

void TQuestVmDownLoadServer__sub_803EAEF0(void) {
    Ent_803EAEF0 *p;

    for (p = (Ent_803EAEF0 *)&lbl_80595998; p < (Ent_803EAEF0 *)&lbl_80595998 + 80; p++) {
        p->x0 = -1;
        p->x4 = 0;
        p->x8 = 0;
        p->xc = 0;
        p->x10 = 0;
        p->x14 = 0;
        p->x15 = 0;
        p->x16 = 0;
        p->x17 = -1;
        p->x18 = -1;
        p->x19 = -1;
    }
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline Node_803EB0D8 *Advance_803EB0D8(Node_803EB0D8 *p, s32 n) {
    s32 i;
    for (i = 0; i != n; i++) {
        while (p->flags & 1) {
            p = p->next;
        }
        p = p->next;
    }
    return p;
}
inline void Reload_803EB0D8(void) {
    s32 r = TQuestVmDownLoadServer__sub_803EB328((Node_803EB328 *)((*(Node_803EB0D8 * *)&lbl_805D78A0)));
    if (r == 0) {
        TQuestVmDownLoadServer__sub_803EC284(0, 0);
    } else {
        lbl_805D789C = r;
    }
    lbl_805D7898 = 0;
}
s32 TQuestVmDownLoadServer__sub_803EB0D8(s32 arg0, s32 arg1) {
    Node_803EB0D8 *save = (*(Node_803EB0D8 * *)&lbl_805D78A0);
    s32 cnt = lbl_805D789C;
    u8 unused[8];
    TQuestVmDownLoadServer__sub_803EC284(0, 0);
    if (save == (*(Node_803EB0D8 * *)&lbl_805D78A0)) {
        if (arg1 == 0) {
            (*(Node_803EB0D8 * *)&lbl_805D78A0) = save;
            lbl_805D789C = cnt;
            lbl_805D7898 = 0;
            return 0;
        }
        save = NULL;
    }
    for (;;) {
        if (Advance_803EB0D8((*(Node_803EB0D8 * *)&lbl_805D78A0), lbl_805D789C) == save) {
            break;
        }
        (*(Node_803EB0D8 * *)&lbl_805D78A0) = Advance_803EB0D8((*(Node_803EB0D8 * *)&lbl_805D78A0), lbl_805D789C);
        Reload_803EB0D8();
    }
    if (arg0 == 1) {
        TQuestVmDownLoadServer__sub_803EB4D4();
    }
    return 1;
}
#pragma pop

s32 TQuestVmDownLoadServer__sub_803EB328(Node_803EB328 *arg0) {
    s32 n;
    s32 total;
    s32 lim;
    Node_803EB328 *p;
    if (arg0 == NULL) {
        return 0;
    }
    p = arg0;
    total = 0;
    lim = lbl_805D78A4 - 9;
    n = 0;
    while (n < 9 && p != NULL) {
        total += Len_803EB328(p) + 3;
        if (total > lim) {
            break;
        }
        n++;
        p = Next_803EB328(p);
    }
    if (n == 0) {
        return 1;
    }
    return n;
}
#pragma pop

s32 TQuestVmDownLoadServer__sub_803EB420(s32 arg0, s32 arg1, Node_803EB420 *arg2, u16 *arg3) {
    s32 n;
    Node_803EB420 *p;
    u8 unused[8];
    if (arg2 == NULL || (arg2->flags & 0x80)) {
        return TQuestVmDownLoadServer__sub_803E6970((s32)(arg0), (s32)(arg1), (u16 *)(arg3), (s32)(0));
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
    return n + TQuestVmDownLoadServer__sub_803E6970((s32)(arg0 + arg2->len), (s32)(arg1 - arg2->len), (u16 *)(arg3), (s32)(0));
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

s32 TQuestVmDownLoadServer__sub_803EB7C0(Node_803EB7C0 *arg0) {
    s32 n;
    if (arg0->flags == 0x80) {
        return lbl_805D78EC * 2;
    }
    n = (lbl_805D78EC - arg0->len) * 2;
    while (arg0->flags & 1) {
        n += strlen(arg0->text);
        arg0 = arg0->next;
    }
    return n + strlen(arg0->text);
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

struct Node_803EB8BC { u8 flags; u8 data[5]; u8 len; u8 pad[9]; Node_803EB8BC *next; };
int strncmp(const char *, const char *, u32);
char *strncpy(char *, const char *, u32);
s32 TQuestVmDownLoadServer__sub_803E6970(s32 start, s32 count, u16 *buf, s32 flag);
s32 TQuestVmDownLoadServer__sub_803EC95C(u16 *, u8 *, int);
s32 TQuestVmDownLoadServer__sub_803EC71C(u16 *, u8 *, s32);
void TQuestVmDownLoadServer__sub_803ECD54(Node_803ECD54 *p);
extern u8 lbl_80596264[];
extern u16 lbl_805A0340[];
extern u16 lbl_805A02A8[];
extern u8 *lbl_805D7890;
extern s32 lbl_805D78EC;

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline s32 Conv_803EB8BC(s32 arg0, s32 arg1, Node_803EB8BC *arg2, u16 *arg3) {
    s32 n;
    Node_803EB8BC *p;
    u16 *b = arg3;
    s32 lim = arg1;
    u8 unused[8];
    if (arg2 == NULL || (arg2->flags & 0x80)) {
        return TQuestVmDownLoadServer__sub_803E6970((s32)(arg0), (s32)(lim), (u16 *)(b), (s32)(0));
    }
    p = arg2;
    n = 0;
    for (;;) {
        n += TQuestVmDownLoadServer__sub_803EC95C(b + n, &p->flags + 1, 6);
        if (!(p->flags & 1)) {
            break;
        }
        p = p->next;
    }
    b += n;
    return n + TQuestVmDownLoadServer__sub_803E6970((s32)(arg0 + arg2->len), (s32)(lim - arg2->len), (u16 *)(b), (s32)(0));
}
inline s32 Find_803EB8BC(u8 *key, s32 len) {
    s32 l;
    u8 *p;
    for (p = lbl_80596264; p < lbl_805D7890; p += l) {
        l = *p++;
        if (l == len && strncmp((const char *)p, (const char *)key, l) == 0) {
            return 1;
        }
    }
    return 0;
}
inline void Add_803EB8BC(u8 *key, s32 len) {
    if (lbl_805D7890 + len + 1 <= lbl_80596264 + 0x400) {
        *lbl_805D7890++ = len;
        strncpy((char *)lbl_805D7890, (const char *)key, len);
        lbl_805D7890 += len;
    }
}
inline Node_803EB8BC *Last_803EB8BC(Node_803EB8BC *p) {
    if (p == NULL) {
        return NULL;
    }
    for (;;) {
        if (p->next == NULL) {
            break;
        }
        p = p->next;
    }
    return p;
}

void TQuestVmDownLoadServer__sub_803EB8BC(s32 arg0, Node_803EB8BC **headp, Node_803EB8BC **tailp, Node_803EB8BC *n) {
    s32 len;

    len = Conv_803EB8BC(arg0, lbl_805D78EC, n, lbl_805A0340);
    len = TQuestVmDownLoadServer__sub_803EC71C(lbl_805A0340, (u8 *)lbl_805A02A8, len);
    if (Find_803EB8BC((u8 *)lbl_805A02A8, len)) {
        TQuestVmDownLoadServer__sub_803ECD54((Node_803ECD54 *)n);
        return;
    }
    Add_803EB8BC((u8 *)lbl_805A02A8, len);
    if (*headp == NULL) {
        *tailp = n;
        *headp = n;
    } else {
        (*tailp)->next = n;
    }
    *tailp = Last_803EB8BC(n);
}
#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline s32 Conv_803EBA98(s32 arg0, s32 arg1, Node_803EBA98 *arg2, u16 *arg3) {
    Node_803EBA98 *p;
    s32 n;
    u16 *b = arg3;
    s32 lim = arg1;
    u8 unused[8];
    if (arg2 == NULL || (arg2->flags & 0x80)) {
        return TQuestVmDownLoadServer__sub_803E6970((s32)(arg0), (s32)(lim), (u16 *)(b), (s32)(0));
    }
    p = arg2;
    n = 0;
    for (;;) {
        n += TQuestVmDownLoadServer__sub_803EC95C(b + n, &p->flags + 1, 6);
        if (!(p->flags & 1)) {
            break;
        }
        p = p->next;
    }
    b += n;
    return n + TQuestVmDownLoadServer__sub_803E6970((s32)(arg0 + arg2->len), (s32)(lim - arg2->len), (u16 *)(b), (s32)(0));
}
inline Node_803EBA98 *Next_803EBA98(Node_803EBA98 *p) {
    while (p->flags & 1) {
        p = p->next;
    }
    return p->next;
}
void TQuestVmDownLoadServer__sub_803EBA98(s32 arg0, Node_803EBA98 *arg1) {
    s32 n;
    s32 len;
    lbl_805D7890 = lbl_80596264;
    while (arg1 != NULL) {
        n = Conv_803EBA98(arg0, lbl_805D78EC, arg1, lbl_805A0340);
        len = TQuestVmDownLoadServer__sub_803EC71C(lbl_805A0340, lbl_805D7890 + 1, n);
        *lbl_805D7890++ = len;
        lbl_805D7890 += len;
        arg1 = Next_803EBA98(arg1);
    }
}
#pragma pop

struct Tok_803EBEFC { s16 x0; u8 x2; u8 x3; s32 x4; };
struct Arg_803EBEFC { s16 x0; u8 pad[2]; Tok_803EBEFC *tok; };
struct N_803EBEFC {
    u8 flags;
    u8 text[5];
    u8 x6;
    u8 x7;
    s32 x8;
    u16 xc;
    u16 xe;
    N_803EBEFC *next;
};
void *TQuestVmDownLoadServer__sub_803ECED0(void);
void TQuestVmDownLoadServer__sub_803ECD54(Node_803ECD54 *p);
s32 TQuestVmDownLoadServer__sub_803EEA48(s32 arg0, s32 arg1, void *arg2, s32 *arg3);
s32 TQuestVmDownLoadServer__sub_803EFE14(s32, u8, u8, void *, s32 *);
extern s32 lbl_805D78F0;
extern u8 lbl_80596258[];
extern RecoveredGlobal_803E6ACC_lbl_805A0470 lbl_805A0470;

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline N_803EBEFC *Default_803EBEFC(s32 x) {
    N_803EBEFC *n = (N_803EBEFC *)TQuestVmDownLoadServer__sub_803ECED0();
    if (n != NULL) {
        n->flags = 0x80;
        n->text[0] = 0;
        n->x6 = x;
        n->x7 = 0;
        n->x8 = 0;
        n->xc = 0xFFFF;
        n->next = NULL;
    }
    return n;
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline s32 Copy_803EBD38(u8 *dst, u8 *src, s32 max) {
    s32 n = max;
    u8 *s = src;
    u8 *d = dst;
    while (*s != 0 && n > 0) {
        if (is_sjis_lead_byte__22TQuestVmDownLoadServerFUc(*s)) {
            if (n <= 1) {
                break;
            }
            *d++ = *s++;
            n--;
        }
        *d++ = *s++;
        n--;
    }
    *d = 0;
    return max - n;
}
#define s ((Src_803EBD38 *)sp)
#define headp ((N_803EBD38 **)hp)
#define tailp ((N_803EBD38 **)tp)
void *TQuestVmDownLoadServer__sub_803EBD38(void *sp, void *a1, s32 a2, void *hp, void *tp) {
    u8 *text;
    s32 rem;
    N_803EBD38 *n;
    N_803EBD38 *m;
    s32 c;
    u8 unused[8];
    text = s->text;
    rem = strlen((const char *)text);
    n = (N_803EBD38 *)TQuestVmDownLoadServer__sub_803ECED0();
    if (n == NULL) {
        return NULL;
    }
    n->flags = 0;
    c = Copy_803EBD38(n->text, text, 4);
    rem -= c;
    n->x6 = a2;
    text += c;
    n->x7 = s->x4;
    n->x8 = (s32)a1;
    n->xc = s->x0;
    n->xe = s->x2;
    n->next = NULL;
    *headp = n;
    while (rem > 0) {
        m = (N_803EBD38 *)TQuestVmDownLoadServer__sub_803ECED0();
        if (m == NULL) {
            TQuestVmDownLoadServer__sub_803ECD54((Node_803ECD54 *)*headp);
            return NULL;
        }
        n->flags |= 1;
        m->flags = 2;
        c = Copy_803EBD38(m->text, text, 14);
        rem -= c;
        text += c;
        m->next = NULL;
        n->next = m;
        n = m;
    }
    *tailp = n;
    return *headp;
}
#undef s
#undef headp
#undef tailp
#pragma pop

N_803EBEFC *TQuestVmDownLoadServer__sub_803EBEFC(Arg_803EBEFC *a) {
    s32 count;
    N_803EBEFC *first;
    N_803EBEFC *tl;
    s32 pad;
    N_803EBEFC *head;
    u8 *base;
    Tok_803EBEFC *t;
    N_803EBEFC *tail;
    u8 *p;

    base = lbl_80596258;
    t = a->tok;
    if (t == NULL || t->x0 == 0) {
def:
        return Default_803EBEFC(a->x0);
    }
    if ((u32)t->x4 == 0xFFFFFFFFU) {
        if (t->x2 != 0x1F) {
            goto def;
        }
        if (TQuestVmDownLoadServer__sub_803EEA48((s32)&lbl_805A0470 + lbl_805D78F0, t->x0, base + 0xC, &count) > 0) {
            goto build;
        }
        goto def;
    } else {
        if (TQuestVmDownLoadServer__sub_803EFE14(t->x4, t->x2, t->x3, base + 0xC, &count) <= 0) {
            goto def;
        }
    }
build:
    p = base + 0xC;
    tail = NULL;
    head = NULL;
    while (count > 0) {
        if (TQuestVmDownLoadServer__sub_803EBD38((void *)(p), (void *)(t), (s32)(t->x0), (void *)(&first), (void *)(&tl)) == NULL) {
            TQuestVmDownLoadServer__sub_803ECD54((Node_803ECD54 *)head);
            return NULL;
        }
        if (head == NULL) {
            head = first;
            tail = tl;
        } else {
            tail->next = first;
            tail = tl;
        }
        p += 5;
        while (*p++ != 0) {
        }
        if ((u32)p & 1) {
            p++;
        }
        count--;
    }
    return head;
}
#pragma pop

struct N_803EC09C {
    u8 flags;
    u8 text[5];
    u8 x6;
    u8 x7;
    s32 x8;
    u16 xc;
    u16 xe;
    N_803EC09C *next;
};
struct Out_803EC09C {
    s16 off; u8 a; u8 b;
    void *src;
    s16 x8; s16 xa;
    Out_803EC09C *next;
};
struct Q_803EC09C {
    Out_803EC09C *o;
    u16 x4;
    u8 pad[2];
    N_803EC09C *x8;
    Q_803EC09C *next;
};
struct Ent_803EC09C {
    s32 x0;
    void *toks;
    Out_803EC09C *list;
    N_803EC09C *xc;
    u8 pad[0xC];
};
Q_803EC09C *TQuestVmDownLoadServer__sub_803ECE94(void);
N_803EC09C *TQuestVmDownLoadServer__sub_803EBBBC(Q_803EC09C *);

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline N_803EC09C *Default_803EC09C(s32 x) {
    N_803EC09C *n = (N_803EC09C *)TQuestVmDownLoadServer__sub_803ECED0();
    if (n != NULL) {
        n->flags = 0x80;
        n->text[0] = 0;
        n->x6 = x;
        n->x7 = 0;
        n->x8 = 0;
        n->xc = 0xFFFF;
        n->next = NULL;
    }
    return n;
}
inline N_803EC09C *Last_803EC09C(N_803EC09C *p) {
    if (p == NULL) {
        return NULL;
    }
    for (;;) {
        if (p->next == NULL) {
            break;
        }
        p = p->next;
    }
    return p;
}

void TQuestVmDownLoadServer__sub_803EC09C(void) {
    s32 idx;
    Ent_803EC09C *e;
    N_803EC09C *tail;
    N_803EC09C *head;
    Out_803EC09C *o;
    Q_803EC09C *qh;
    Q_803EC09C *q;
    Q_803EC09C *qt;
    N_803EC09C *r;
    N_803EC09C *n;

    if ((u32)(o = ((Ent_803EC09C *)&lbl_80595998)[lbl_805D78F0].list) == 0xFFFFFFFFU) {
        return;
    }
    qh = NULL;
    qt = NULL;
    for (; o != NULL; o = o->next) {
        if (o->off != lbl_805D78EC) {
            continue;
        }
        q = TQuestVmDownLoadServer__sub_803ECE94();
        if (q == NULL) {
            for (; qh != NULL; qh = qh->next) {
                push_download_entry__22TQuestVmDownLoadServerFPv((M2C_UNK *)qh->x8);
            }
            qh = NULL;
            break;
        }
        q->x8 = r = (N_803EC09C *)TQuestVmDownLoadServer__sub_803EBEFC((Arg_803EBEFC *)o);
        q->o = o;
        q->x4 = (r == NULL) ? 0 : TQuestVmDownLoadServer__sub_803ED0B4((u8 *)o, r->xe);
        q->next = NULL;
        if (qh == NULL) {
            qh = qt = q;
        } else {
            qt->next = q;
            qt = q;
        }
    }
    e = &((Ent_803EC09C *)&lbl_80595998)[idx = lbl_805D78F0];
    head = e->xc;
    tail = Last_803EC09C(head);
    TQuestVmDownLoadServer__sub_803EBA98(idx, (Node_803EBA98 *)head);
    while ((n = TQuestVmDownLoadServer__sub_803EBBBC(qh)) != NULL) {
        TQuestVmDownLoadServer__sub_803EB8BC(idx, (Node_803EB8BC **)&head, (Node_803EB8BC **)&tail, (Node_803EB8BC *)n);
    }
    if ((n = Default_803EC09C(lbl_805D78EC)) != NULL) {
        TQuestVmDownLoadServer__sub_803EB8BC(idx, (Node_803EB8BC **)&head, (Node_803EB8BC **)&tail, (Node_803EB8BC *)n);
    }
    e->xc = head;
    TQuestVmDownLoadServer__sub_803ECD1C((Node_803ECD1C *)qh);
}
#pragma pop

struct Tok_803EC460 { s16 x0; u8 x2; u8 x3; s32 x4; u16 x8; };
struct Out_803EC460 {
    s16 off; u8 a; u8 b;
    Tok_803EC460 *src;
    s16 x8; s16 xa;
    Out_803EC460 *next;
};
struct N_803EC460 {
    u8 flags;
    u8 text[5];
    u8 x6;
    u8 x7;
    s32 x8;
    u16 xc;
    u16 xe;
    N_803EC460 *next;
};
struct Ent_803EC460 {
    s32 x0;
    void *toks;
    Out_803EC460 *list;
    N_803EC460 *xc;
    u8 pad[0xC];
};
extern RecoveredGlobal_803E9F20_lbl_80595998 lbl_80595998;
extern RecoveredGlobal_803E6ACC_lbl_805A0470 lbl_805A0470;
extern u8 lbl_80596258[];
u16 TQuestVmDownLoadServer__sub_803ED0B4(u8 *arg0, u16 arg1);
void *TQuestVmDownLoadServer__sub_803ECED0(void);
s32 TQuestVmDownLoadServer__sub_803EED0C(s32 arg0, s32 arg1, s32 arg2);

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline N_803EC460 *Default_803EC460(s32 x) {
    N_803EC460 *n = (N_803EC460 *)TQuestVmDownLoadServer__sub_803ECED0();
    if (n != NULL) {
        n->flags = 0x80;
        n->text[0] = 0;
        n->x6 = x;
        n->x7 = 0;
        n->x8 = 0;
        n->xc = 0xFFFF;
        n->next = NULL;
    }
    return n;
}

void TQuestVmDownLoadServer__sub_803EC460(s32 pos, s32 x) {
    N_803EC460 *first;
    N_803EC460 *tl;
    Ent_803EC460 *e;
    u8 *base;
    Out_803EC460 *o;
    Out_803EC460 *best;
    u16 bestv;
    u16 v;
    Tok_803EC460 *t;

    e = &((Ent_803EC460 *)&lbl_80595998)[pos];
    base = lbl_80596258;
    best = NULL;
    bestv = 0;
    if (e->xc != NULL) {
        return;
    }
    if ((u32)(o = e->list) == 0xFFFFFFFFU) {
def:
        e->xc = Default_803EC460(x);
        return;
    }
    for (; o != NULL; o = o->next) {
        if (o->off != x) {
            continue;
        }
        v = (o->src == NULL) ? 0 : TQuestVmDownLoadServer__sub_803ED0B4((u8 *)o, o->src->x8);
        if (v > bestv || best == NULL) {
            bestv = v;
            best = o;
        }
    }
    if (best == NULL || (t = best->src) == NULL || t->x0 == 0) {
        goto def;
    }
    if ((u32)t->x4 == 0xFFFFFFFFU) {
        if (t->x2 != 0x1F) {
            goto def;
        }
        if (TQuestVmDownLoadServer__sub_803EED0C((s32)&lbl_805A0470 + pos, t->x0, (s32)(base + 0xC)) > 0) {
            goto build;
        }
        goto def;
    } else {
        if (TQuestVmDownLoadServer__sub_803F0048((s32)(t->x4), (u8)(t->x2), (u8)(t->x3), (void *)(base + 0xC)) <= 0) {
            goto def;
        }
    }
build:
    e->xc = (N_803EC460 *)TQuestVmDownLoadServer__sub_803EBD38((void *)(base + 0xC), (void *)(t), (s32)(t->x0), (void *)(&first), (void *)(&tl));
}
#pragma pop

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

void TQuestVmDownLoadServer__sub_803ECA1C(u16 *arg0, s32 arg1, s32 arg2) {
    u16 a = arg2 << 12;
    while (arg1-- != 0) {
        *arg0 = (*arg0 & 0xFFF) | a;
        arg0++;
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

void TQuestVmDownLoadServer__sub_803ECDC4(Node_803ECDC4 *p) {
    u32 prev = 0xFFFFFFFF;
    Node_803ECDC4 *next;
    while (p != NULL) {
        next = p->next;
        if ((prev == 0xFFFFFFFF || p->id != prev) && p->id != 0xFFFFFFFF) {
            TQuestVmDownLoadServer__sub_803EED9C(p->id);
        }
        prev = p->id;
        if (p != NULL) {
            p->link = (*(s32 * *)&lbl_805D78B0);
            (*(s32 * *)&lbl_805D78B0) = (s32 *)p;
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

struct Sub_803ED26C { s16 x0; u8 x2; };
struct Arg_803ED26C { s16 x0; u8 pad[2]; Sub_803ED26C *x4; };

#pragma push
#pragma dont_inline off
#pragma inline_depth(1)
inline s32 InRange_803ED26C(u8 v) {
    s32 r = 0;
    if (v >= 1 && v <= 0xD) {
        r = 1;
    }
    return r;
}

s32 TQuestVmDownLoadServer__sub_803ED0CC(u8 kind, u8 v, u8 w, s32 base, s32 add) {
    s32 r = 0;
    switch (kind) {
    case 0:
        if ((v >= 0x14 && v <= 0x19) || v == 0x32) {
            r = 0xF;
        }
        break;
    case 1:
        if (v == 0x1A) {
            r = 0x14;
        }
        break;
    case 2:
        if ((u8)(v - 0x1B) <= 1) {
            r = 0xF;
        }
        break;
    case 3:
        if (v == 0x1F || v == 0x38) {
            r = 0x14;
        }
        break;
    case 4:
        if (v == 0x16) {
            r = 0x14;
        }
        break;
    case 5:
        if (w == 0xFF) {
            if (v >= 1 && v <= 0xD) {
                r = 0xF;
            }
        } else if ((v >= 0x80 && v <= 0x8B && w == 4) || (v == 0xD && w == 0)) {
            r = 0xF;
        }
        break;
    case 6:
        if (v >= 0x14 && v <= 0x19) {
            r = 0xF;
        } else if (v == 0x1F || v == 0x38) {
            r = 0x14;
        }
        break;
    case 7:
        if (v == 0x1D) {
            r = 0xF;
        }
        break;
    case 8:
        if ((v >= 0x14 && v <= 0x19) || (v >= 1 && v <= 0xD)) {
            r = 0x14;
        }
        break;
    }
    if (r == 0) {
        return base;
    }
    return base + r + add;
}

s32 TQuestVmDownLoadServer__sub_803ED26C(Arg_803ED26C *a, u8 k, u8 v, s32 base) {
    s32 lvl = 0;
    Sub_803ED26C *s = a->x4;

    if (s != NULL && ((s->x2 >= 0x14 && s->x2 <= 0x19) || s->x2 == 0x32)) {
        lvl = 1;
        if (s->x0 + 1 == a->x0) {
            lvl = 2;
        }
    }
    if (k == 0xC7) {
        if (InRange_803ED26C(v)) {
            return base + 0x1E;
        }
        return base + 0x19;
    }
    if (k == 0xC8) {
        if (v == 0) {
            return base;
        }
        if (lvl == 2) {
            return base + 0x14;
        }
        return base + 5;
    }
    if (k == 0xC1 || k == 0xE1) {
        if (lvl == 2) {
            base += 5;
        }
        return base;
    }
    if ((u8)(k - 0xC4) <= 1 || (k >= 0xCE && k <= 0xD1)) {
        if ((v >= 1 && v <= 0xD) || (v >= 0x16 && v <= 0x17)) {
            return base + 5;
        }
        return base;
    }
    if (k == 0xC2) {
        if (v == 0) {
            return base;
        }
        if (lvl == 2) {
            base += 3;
        }
        return base;
    }
    if (k >= 0xFC && k <= 0xFD && v >= 1 && v <= 0x17) {
        return base + 0x12;
    }
    if ((k == 0xFA || k == 0xFE) && v >= 0x14 && v <= 0x18) {
        return base + 0x12;
    }
    return base;
}
#pragma pop

typedef char RecoveredGlobal_803EDB20_lbl_8047F8B8_size[sizeof(RecoveredGlobal_803EDB20_lbl_8047F8B8) == 0x100 ? 1 : -1];

s32 TQuestVmDownLoadServer__sub_803ED434(u8 arg0, u8 arg1, s32 arg2) {
    if (arg0 >= 0x14 && arg0 <= 0x18) {
        if (arg1 >= 0x14 && arg1 <= 0x18) {
            return arg2 + 3;
        }
        return arg2;
    }
    if (arg0 == 0x1F && arg1 == 0x1F) {
        return arg2 + 0xF;
    }
    if (arg0 == 0x21 || arg0 == 0x26 || arg0 == 0x27) {
        return arg2 + 0x14;
    }
    if (arg0 == 0x20 || arg0 == 0x22) {
        return arg2 + 0xF;
    }
    if (arg0 == 0x1B && arg1 == 0x1C) {
        return arg2 + 0x14;
    }
    if (arg0 == 0x1A && arg1 == 0x1A) {
        return arg2 + 5;
    }
    return arg2;
}

s32 TQuestVmDownLoadServer__sub_803ED50C(u8 arg0, u8 arg1, u8 arg2, s32 arg3) {
    if ((arg0 == 0xD) && (arg1 == 0)) {
        if ((arg2 >= 1U) && (arg2 <= 0x17U)) {
            return arg3 + 3;
        }
    } else if ((arg1 >= 4U) && (arg1 <= 6U) && (arg2 >= 1U) && (arg2 <= 0x17U)) {
        if ((arg0 == 0x8D) || ((arg0 == 0x8E) && (arg1 == 6))) {
            return arg3 + 0xA;
        }
        if (arg0 <= 0x8CU) {
            return arg3 + 3;
        }
    } else if ((arg1 == 8) && (arg2 >= 0x14U) && (arg2 <= 0x18U)) {
        if (((arg0 >= 0x80U) && (arg0 <= 0x8EU)) || (arg0 == 0x92) || (arg0 == 0x94) || (arg0 == 0xA0) || (arg0 == 0xA2) || ((u8) (arg0 - 0xAE) <= 1U) || (arg0 == 0xB1) || (arg0 == 1) || ((arg0 >= 0xAU) && (arg0 <= 0xCU))) {
            return arg3 + 0xF;
        }
        return arg3 + 3;
    }
    return arg3;
}

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

u16 *TQuestVmDownLoadServer__sub_803EE718(s32 i, s32 len) {
    u16 *out;
    s32 n;
    s32 end;
    s32 r;
    Node_803EB794 *node;
    out = lbl_805A0340;
    end = i + len;
    while (i < end && (n = TQuestVmDownLoadServer__sub_803E9F54(i)) != 0) {
        if (i == lbl_805D78F0) {
            if (lbl_805D78E8 == 1 || lbl_805D7834 >= 3) {
                node = TQuestVmDownLoadServer__sub_803EB794(lbl_805D78A0, lbl_805D7898);
            } else {
                node = TQuestVmDownLoadServer__sub_803EB794(*(Node_803EB794 **)((s8 *)((u8 *)&lbl_80595998 + i * 0x1C) + 0xC), 0);
            }
            r = TQuestVmDownLoadServer__sub_803EB420(i, n, (Node_803EB420 *)node, out);
        } else {
            r = TQuestVmDownLoadServer__sub_803EB420(i, n, (Node_803EB420 *)*(Node_803EB794 **)((s8 *)((u8 *)&lbl_80595998 + i * 0x1C) + 0xC), out);
        }
        out += r;
        i += n;
    }
    TQuestVmDownLoadServer__sub_803EC71C((u16 *)(lbl_805A0340), (u8 *)(lbl_805A02A8), (s32)(out - lbl_805A0340));
    return lbl_805A02A8;
}

u8 *TQuestVmDownLoadServer__sub_803EE828(void) {
    TQuestVmDownLoadServer__sub_803EC71C((u16 *)(((u8 *)&lbl_805A0340)), (u8 *)(((u8 *)&lbl_805A02A8)), (s32)(TQuestVmDownLoadServer__sub_803EE934()));
    return ((u8 *)&lbl_805A02A8);
}

s32 TQuestVmDownLoadServer__sub_803EE934(void) {
    s32 r;
    Node_803EB794 *node;
    u16 *out;
    s32 total;
    s32 i;
    s32 n;
    out = lbl_805A0340;
    i = 0;
    total = 0;
    while ((n = TQuestVmDownLoadServer__sub_803E9F54(i)) != 0) {
        if (i == lbl_805D78F0) {
            if (lbl_805D78E8 == 1 || lbl_805D7834 >= 3) {
                node = TQuestVmDownLoadServer__sub_803EB794(lbl_805D78A0, lbl_805D7898);
            } else {
                node = TQuestVmDownLoadServer__sub_803EB794(*(Node_803EB794 **)((s8 *)((u8 *)&lbl_80595998 + i * 0x1C) + 0xC), 0);
            }
            r = TQuestVmDownLoadServer__sub_803EB420(i, n, (Node_803EB420 *)node, out);
            lbl_805D78EC = n;
            TQuestVmDownLoadServer__sub_803ECA1C((u16 *)(out), (s32)(r), (s32)(7));
        } else {
            r = TQuestVmDownLoadServer__sub_803EB420(i, n, *(Node_803EB420 **)((s8 *)((u8 *)&lbl_80595998 + i * 0x1C) + 0xC), out);
            TQuestVmDownLoadServer__sub_803ECA1C((u16 *)(out), (s32)(r), (s32)(6));
        }
        out += r;
        i += n;
        total += r;
    }
    return total;
}

s32 TQuestVmDownLoadServer__sub_803EEA48(s32 arg0, s32 arg1, void *arg2, s32 *arg3) {
    s32 i;
    void *r;
    if (lbl_805D7904 == -1) {
        return -3;
    }
    *arg3 = 0;
    r = TQuestVmDownLoadServer__sub_803EEB10(arg0, arg1, arg2, lbl_805D78FC);
    if (r != 0) {
        arg2 = r;
        (*arg3)++;
    }
    for (i = 0; i < 4; i++) {
        if (i != lbl_805D78FC) {
            r = TQuestVmDownLoadServer__sub_803EEB10(arg0, arg1, arg2, i);
            if (r != 0) {
                arg2 = r;
                (*arg3)++;
            }
        }
    }
    return 1;
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs off
inline u32 Call_803EED0C(s32 a, s32 b, s32 c, s32 d) {
    return ((u32)TQuestVmDownLoadServer__sub_803EEB10((s32)(a), (s32)(b), (void *)(c), (s32)(d)));
}
s32 TQuestVmDownLoadServer__sub_803EED0C(s32 arg0, s32 arg1, s32 arg2) {
    if (lbl_805D7904 == -1) {
        return -3;
    }
    if (Call_803EED0C(arg0, arg1, arg2, lbl_805D78FC) == 0) {
        Call_803EED0C(arg0, arg1, arg2, 0);
    }
    return 1;
}
#pragma pop

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

u8 *TQuestVmDownLoadServer__sub_803EFBDC(u8 *p, s32 key, s32 n, s32 len) {
    u8 *end = p + len;
    u8 *s;
    u8 *d;
    while (p < end) {
        if (*(u16 *)(p + 2) < key) {
            break;
        }
        p += 5;
        while (*p++ != 0) {
        }
        if ((u32)p & 1) {
            p++;
        }
    }
    if (p < end) {
        for (s = end - 1; s >= p; s--) {
            s[n] = *s;
        }
    }
    return p;
}

s32 TQuestVmDownLoadServer__sub_803F0048(s32 id, u8 a1, u8 a2, void *dst) {
    s32 a;
    s32 b;
    s32 c;
    s32 best;
    s32 page;
    if (lbl_805D7904 == -1) {
        return -3;
    }
    page = TQuestVmDownLoadServer__sub_803E779C(id, &a, &b, &c);
    if (page == -1) {
        return 0;
    }
    best = -1;
    if (a != -1) {
        TQuestVmDownLoadServer__sub_803EFF20(TQuestVmDownLoadServer__sub_803E7B9C(page) + a, a1, a2, &best, (u8 *)dst, 0);
    }
    if (b != -1) {
        TQuestVmDownLoadServer__sub_803EFF20(TQuestVmDownLoadServer__sub_803E9594(b), a1, a2, &best, (u8 *)dst, 0x8000);
    }
    if (best == -1) {
        return 0;
    }
    return 1;
}

s32 TQuestVmDownLoadServer__sub_803F0138(const char *name, s16 len, Info_803F0138 *out) {
    u8 n;
    u8 *base;
    u8 *p;
    s32 id;
    s32 c;
    if (len <= 2 && TQuestVmDownLoadServer__sub_803E8004(name, len) != 0) {
        out->off = -1;
        return 0;
    }
    id = TQuestVmDownLoadServer__sub_803E7EE4(name);
    {
        u8 *TQuestVmDownLoadServer__sub_803E7B9C(void);
        base = TQuestVmDownLoadServer__sub_803E7B9C();
    }
    p = base;
    while ((u16)(p[0] + (p[1] << 8)) != 0) {
        n = p[2];
        c = strncmp((const char *)(p + 3), name, (s16)n);
        if (c == 0) {
            if ((s16)n == len) {
                break;
            }
        } else if (c > 0) {
            out->off = -1;
            return 0;
        }
        p += (u16)(p[0] + (p[1] << 8));
    }
    if ((u16)(p[0] + (p[1] << 8)) == 0) {
        out->off = -1;
        return 0;
    }
    out->id = id;
    out->off = p - base;
    out->p = p;
    return 1;
}

s32 TQuestVmDownLoadServer__sub_803F0268(const char *name, s16 len, Out_803F0268 *out) {
    char buf[0x50];
    Info_803F0138 i1;
    Info_803F0138 i2;
    s32 max;
    s32 r1;
    s32 r2;
    u32 r;
    if (lbl_805D7904 == -1) {
        return -3;
    }
    strncpy(buf, name, len);
    buf[len] = 0;
    r1 = TQuestVmDownLoadServer__sub_803F0138(buf, len, &i1);
    r2 = TQuestVmDownLoadServer__sub_803E8B1C(buf, len, &i2);
    if (r1 == 0 && r2 == 0) {
        return 0;
    }
    out->len = len;
    out->len2 = len;
    out->xa = 1;
    out->count = 0;
    max = 0;
    if (r1 == 1) {
        out->count = TQuestVmDownLoadServer__sub_803F03B4(i1.p, out->ents, 0, &max);
    }
    if (r2 == 1) {
        out->count = TQuestVmDownLoadServer__sub_803F03B4(i2.p, out->ents, out->count, &max);
    }
    out->x4 = r = TQuestVmDownLoadServer__sub_803E77F0((s32)(i1.id), (s32)(i1.off), (s32)(i2.off), (s32)(max));
    if (r == 0xFFFFFFFF) {
        return 0;
    }
    return 1;
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

u32 TQuestVmDownLoadServer__sub_803F0AB8(void *h, void *dst, int size) {
    u32 n;
    u32 len;
    u32 start;
    u8 *base;
    base = lbl_805A06C0;
    n = lbl_805D7914.remain;
    if ((u32)lbl_805D7914.remain >= (u32)size) {
        n = size;
    }
    len = n;
    if (n & 3) {
        len = (n | 3) + 1;
    }
    DCInvalidateRange(base + 0x40, 0x2000);
    (*(u32 *)&lbl_805D7928) = 1;
    ARQPostRequest(base + 0x2040, lbl_805D7924, 1, lbl_805D7920, lbl_805D792C + lbl_805D7914.pos,
                   (u32)(base + 0x40), len, TQuestVmDownLoadServer__sub_803F0BE8);
    start = OSGetTick();
    for (;;) {
        if ((*(u32 *)&lbl_805D7928) == 0) {
            memcpy(dst, base + 0x40, n);
            break;
        }
        if (OSGetTick() - start > lbl_805D791C) {
            (*(u32 *)&lbl_805D7928) = 0;
            ARQRemoveRequest(base + 0x2040);
            OSReport(lbl_8047FCB8);
            return -1;
        }
    }
    lbl_805D7914.remain -= n;
    lbl_805D7914.pos += n;
    return n;
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
