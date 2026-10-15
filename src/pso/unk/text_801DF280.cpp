#include "types.h"

struct RecoveredFields_801DF394_arg0
{
  s32 field_0;
};

struct RecoveredFields_801DF394_arg1
{
  s32 field_0;
};

struct RecoveredFields_801DF4FC_arg0
{
  s32 field_0;
};

struct RecoveredFields_801DF4FC_arg1
{
  s32 field_0;
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Inner_801DF774 { u32 w[5]; };

struct Blk_801DF774 { u32 a; Inner_801DF774 b; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct W4_801DF558 { u32 w[4]; };

struct W8_801DF558 { u32 w[8]; };

struct W12_801DF558 { u32 w[12]; };

struct T3_801DF558 { u32 w[3]; };

struct Entry_801DF558 {
    u32 a;
    W4_801DF558 b;
    W8_801DF558 c;
    W12_801DF558 d;
    T3_801DF558 e;
    u8 ext[0x64];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct W4_801DF61C { s32 v[4]; };

struct Copy_801DF61C { W4_801DF61C a; W4_801DF61C b; };

struct Tag_801DF61C { u8 b[8]; };

struct Obj_801DF61C {
    Tag_801DF61C tags[8];
    s32 w;
    Copy_801DF61C c;
};

extern "C" {
s32 fn_801E0900(s32);
int bswap_32__FPUl(void* a0);
void fn_801DF280(void *arg0);
void bswap_cmd_88_marker_record(void* p);
int bswap_32__FPUl(void* a0);
s32 bswap__16TPlyGuildCardTagFv(s32);
void bswap_cmd_88_marker_record(void* p);
int bswap_32__FPUl(void* a0);
void bswap__21TPlyMeetUserExtensionFv(void *);
void fn_801DF47C(void *arg0);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F95C(void);
extern s32 keyboard_active_flag;
void activate_keyboard(void);
extern s32 keyboard_active_flag;
void deactivate_keyboard(void);
extern s32 keyboard_key_state;
void mark_area_change_pending(void);
extern s32 keyboard_key_state;
void clear_keyboard_key_state(void);
void fn_801DF7F8(void* p);
extern s32 lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int player_matrix_stack_buffer;
    extern int resource_decompress_buffer;
    extern int anim_model_matrix_array;
    extern int lbl_805D5680;
extern s32 lbl_805D49C0;
extern s32 keyboard_key_state;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
void activate_keyboard(void);
void deactivate_keyboard(void);
void mark_area_change_pending(void);
void clear_keyboard_key_state(void);
void fn_801DF7F8(void* p);
void fn_801DF874(void* p);
s32 bswap__16TPlyGuildCardTagFv(s32);
extern s32 lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 current_floor_index;
extern s32 lobby_player_count;
void fn_801DF874(void* p);
void fn_801DF740(void* p);
s32 bswap_16__FPUs(s32);
void fn_801DF740(void* p);
u8 fn_8010319C(u8 *arg0);
void TLobby__sub_801030EC(u8 *arg0);
void fn_801DF4B8(s32 arg0);
s32 bswap_16__FPUs(s32);
int bswap_32__FPUl(void* a0);
void fn_801DF4B8(s32 arg0);
void bswap_save_packet(s32 arg0);
int bswap_32__FPUl(void* a0);
int bswap__13packet_headerFv(void* a0);
void bswap_save_packet(s32 arg0);
void* fn_801DF3F0(void* p, void* a1);
s32 *copy_entry_table(s32 *arg0, s32 *arg1);
s32 *fn_801DF4FC(s32 *arg0, s32 *arg1);
Blk_801DF774 *TProtocol__sub_801DF774(Blk_801DF774 *d, const Blk_801DF774 *s);
int fn_801DF558(int arg0, int arg1);
int __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void*);
Obj_801DF61C *fn_801DF61C(Obj_801DF61C *dst, Obj_801DF61C *src);
}

extern "C" {

s32 fn_801E0900(s32);
s32 bswap_16__FPUs(s32);
s32 bswap__16TPlyGuildCardTagFv(s32);
s32 __ct__8TPlySmthFv(s32);
s32 __ct__16TPlyGuildCardTagFv(s32);
int bswap_32__FPUl(void* a0 = 0);
void bswap_cmd_88_body(void* p);
void fn_801DF42C(void* p);
void bswap_choice_search_config(void* p);
void bswap_c0_lobby_entries(void* p);
int __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void*);
void* fn_801DF3F0(void* p, void* a1);
void fn_801DF6BC(void* p);
int bswap_cmd_8a_header(void* p);
int bswap_packet_header_cmd_b1(void* p);

void fn_801DF280(void *arg0) {
    bswap__13packet_headerFv((void*)(arg0));
    fn_801E0900((s32)((void *)((char *)arg0 + 68)));
    bswap_32__FPUl((void*)((void *)((char *)arg0 + 76)));
}

s32 fn_801DF2BC(s32 arg0) {
    __ct__8TPlySmthFv(arg0 + 0x44);
    return arg0;
}
int bswap_cmd_8a_header(void* p) { return bswap__13packet_headerFv(p); }
void bswap_cmd_88_body(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 16; i++) { bswap_cmd_88_marker_record((void*)((char*)p + 0x4 + i * 12)); } } }

void bswap_cmd_88_marker_record(void* p) { bswap__16TPlyGuildCardTagFv((s32)(p)); bswap_32__FPUl((char*)p + 0x8); }

typedef struct RecoveredFields_801DF394_arg0 RecoveredFields_801DF394_arg0;
typedef struct RecoveredFields_801DF394_arg1 RecoveredFields_801DF394_arg1;
s32 *copy_entry_table(s32 *arg0, s32 *arg1) {
  u32 var_r30;
  s32 var_r29;
  var_r30 = (unsigned long) (((u8 *) arg0) + 4);
  var_r29 = (long) (((u8 *) arg1) + 4);
  ((RecoveredFields_801DF394_arg0 *) arg0)->field_0 = ((RecoveredFields_801DF394_arg1 *) arg1)->field_0;
  do
  {
    fn_801DF3F0((void*)((int) var_r30), (void*)((int) var_r29));
    var_r30 += 0xC;
    var_r29 += 0xC;
  }
  while (var_r30 < ((u32) (((u8 *) arg0) + 0xC4)));
  return arg0;
}

void* fn_801DF3F0(void* p, void* a1) { __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(p); *(void**)((char*)p + 0x8) = *(void**)((char*)a1 + 0x8); return p; }
void fn_801DF42C(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 32; i++) { fn_801DF47C((void *)((char*)p + 0x4 + i * 212)); } } }

void fn_801DF47C(void *arg0) {
    bswap_32__FPUl((void*)(arg0));
    fn_801DF4B8((s32)((s32)((void *)((char *)arg0 + 100))));
    bswap__21TPlyMeetUserExtensionFv((void *)((char *)arg0 + 112));
}

void fn_801DF4B8(s32 arg0) {
    ((s32)bswap__13packet_headerFv((void*)(arg0)));
    ((s32)bswap_32__FPUl((void*)(arg0 + 4)));
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
}

typedef struct RecoveredFields_801DF4FC_arg0 RecoveredFields_801DF4FC_arg0;
typedef struct RecoveredFields_801DF4FC_arg1 RecoveredFields_801DF4FC_arg1;
s32 *fn_801DF4FC(s32 *arg0, s32 *arg1) {
  u32 var_r30;
  s32 var_r29;
  var_r30 = (unsigned long) (((u8 *) arg0) + 4);
  var_r29 = (long) (((u8 *) arg1) + 4);
  ((RecoveredFields_801DF4FC_arg0 *) arg0)->field_0 = ((RecoveredFields_801DF4FC_arg1 *) arg1)->field_0;
  do
  {
    fn_801DF558((int)((int)((int) var_r30)), (int)((int)((int) var_r29)));
    var_r30 += 0xD4;
    var_r29 += 0xD4;
  }
  while (var_r30 < ((u32) (((u8 *) arg0) + 0x1A84)));
  return arg0;
}

struct Obj_801DF61C;
int fn_801DF558(int arg0, int arg1) {
    Entry_801DF558 *d = (Entry_801DF558 *)arg0;
    Entry_801DF558 *s = (Entry_801DF558 *)arg1;
    d->a = s->a;
    d->b = s->b;
    d->c = s->c;
    d->d = s->d;
    d->e = s->e;
    fn_801DF61C((Obj_801DF61C *)((Obj_801DF61C *)((Obj_801DF61C *)d->ext)), (Obj_801DF61C *)((Obj_801DF61C *)((Obj_801DF61C *)s->ext)));
    return arg0;
}

Obj_801DF61C *fn_801DF61C(Obj_801DF61C *dst, Obj_801DF61C *src) {
    Tag_801DF61C *d = dst->tags;
    Tag_801DF61C *s = src->tags;
    do {
        ((int (*)(void *, void *))__ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag)(d, s);
        d++;
        s++;
    } while (d < dst->tags + 8);
    dst->w = src->w;
    dst->c.a = src->c.a;
    dst->c.b = src->c.b;
    return dst;
}

void fn_801DF6BC(void* p) { bswap__13packet_headerFv(p); bswap_choice_search_config((char*)p + 0x4); }
void bswap_choice_search_config(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 5; i++) { fn_801DF740((void*)((char*)p + 0x4 + i * 4)); } } }

void fn_801DF740(void* p) { bswap_16__FPUs((s32)((void*)(p))); bswap_16__FPUs((s32)((void*)((char*)p + 0x2))); }

Blk_801DF774 *TProtocol__sub_801DF774(Blk_801DF774 *d, const Blk_801DF774 *s) {
    d->a = s->a;
    d->b = s->b;
    return d;
}

void bswap_c0_lobby_entries(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 56; i++) { fn_801DF7F8((void*)((char*)p + 0x4 + i * 32)); } } }

}
extern "C" {
void fn_801DF7F8(void* p) { fn_801DF740((void*)(p)); }

int bswap_packet_header_cmd_b1(void* p) { return bswap__13packet_headerFv(p); }

void bswap_save_packet(s32 arg0) {
    ((s32)bswap__13packet_headerFv((void*)(arg0)));
    ((s32)bswap_32__FPUl((void*)(arg0 + 4)));
    ((s32)bswap_32__FPUl((void*)(arg0 + 8)));
}

void fn_801DF874(void* p) { bswap__13packet_headerFv((void*)(p)); bswap__16TPlyGuildCardTagFv((s32)((char*)p + 0x4)); }

s32 fn_801DF8A8(s32 arg0) {
    __ct__16TPlyGuildCardTagFv(arg0 + 4);
    return arg0;
}

}
