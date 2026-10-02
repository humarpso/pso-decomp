#include "types.h"
struct Obj_803D2234 {
    u8 pad[0x1C];
    void (*cb)(s32, s32);
    s32 cbArg;
};

struct Buf_803D2234 { void *ptr; s32 len; };

struct Obj_803D22C8 {
    u8 pad[0xC];
    s32 avail;
    s32 pos;
    s32 base;
    u8 pad2[0x4];
    void (*cb)(s32, s32);
    s32 cbArg;
};

struct Buf_803D22C8 { s32 ptr; s32 len; };

struct Obj_803D2104
{
  u8 pad[0xC];
  s32 pos;
  s32 avail;
  u32 base;
  s32 limit;
  void (*cb)(s32, s32);
  s32 cbArg;
};

struct Buf_803D2104
{
  u32 ptr;
  s32 len;
};

extern "C" {
void TLobby__sub_803D1FD4(void);
void lock_enter__6TLobbyFv(void);
void TLobby__sub_803D2234(Obj_803D2234 *arg0, u32 arg1, Buf_803D2234 *arg2);
void TLobby__sub_803D1FD4(void);
void lock_enter__6TLobbyFv(void);
void TLobby__sub_803D22C8(Obj_803D22C8 *arg0, s32 arg1, s32 arg2, Buf_803D22C8 *arg3);
void TLobby__sub_803D1FD4(void);
void lock_enter__6TLobbyFv(void);
void TLobby__sub_803D2104(Obj_803D2104 *arg0, s32 arg1, Buf_803D2104 *arg2);
}

extern "C" {

typedef struct Buf_803D2104 Buf_803D2104;
typedef struct Obj_803D2104 Obj_803D2104;
void TLobby__sub_803D2104(Obj_803D2104 *arg0, s32 arg1, Buf_803D2104 *arg2) {
  s32 d;
  s32 len;
  s32 n;
  s32 lim;
  s32 p;
  if ((arg2->len <= 0) || (arg2->ptr == 0))
  {
    return;
  }
  lock_enter__6TLobbyFv();
  if (arg1 == 0)
  {
    if (arg0->cb != 0)
    {
      arg0->cb(arg0->cbArg, -3);
    }
  }
  else
    if (arg1 == 1)
  {
 dummy_label_788039: ;
    len = arg2->len;
    d = arg0->avail;
    if (((!arg2) && (!arg2)) && (!arg2))
    {
    }
    d -= len;
    n = d & (((s32) ((-d) & (~d))) >> 31);
    arg0->avail = n;
    p = arg0->pos + arg2->len;
    lim = arg0->limit;
    if (lim < p)
    {
      p = lim;
    }
    arg0->pos = p;
    if (n != ((s32) (arg2->ptr - arg0->base)))
    {
      if (arg0->cb != 0)
      {
        arg0->cb(arg0->cbArg, -3);
      }
    }
  }
  else
  {
    arg2->len = 0;
    arg2->ptr = 0;
    if (arg0->cb != 0)
    {
      arg0->cb(arg0->cbArg, -3);
    }
  }
  TLobby__sub_803D1FD4();
}

void TLobby__sub_803D2234(Obj_803D2234 *arg0, u32 arg1, Buf_803D2234 *arg2) {
    if (arg2->len <= 0 || arg2->ptr == 0) {
        return;
    }
    lock_enter__6TLobbyFv();
    if (arg1 > 1) {
        arg2->len = 0;
        arg2->ptr = 0;
        if (arg0->cb != 0) {
            arg0->cb(arg0->cbArg, -3);
        }
    }
    TLobby__sub_803D1FD4();
}
void TLobby__sub_803D22C8(Obj_803D22C8 *arg0, s32 arg1, s32 arg2, Buf_803D22C8 *arg3) {
    lock_enter__6TLobbyFv();
    if (arg1 == 0) {
        arg3->len = 0;
        arg3->ptr = 0;
    } else if (arg1 == 1) {
        arg3->len = arg0->avail < arg2 ? arg0->avail : arg2;
        arg3->ptr = arg0->base + arg0->pos;
        arg0->pos += arg3->len;
        arg0->avail -= arg3->len;
    } else {
        arg3->len = 0;
        arg3->ptr = 0;
        if (arg0->cb != 0) {
            arg0->cb(arg0->cbArg, -3);
        }
    }
    TLobby__sub_803D1FD4();
}

}
