#include "types.h"

struct Stack_802E0468
{
  f32 sp8;
  f32 spC;
  f32 sp10;
  f32 sp14;
};

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void play_phase_transition_sound__10TObjPlayerFi(s32);
void set_global_pair__10TObjPlayerFii(s32, s32);
void TObjPlayer__sub_803DED84(void *);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DE8A8;
extern const f32 lbl_805DE8AC;
void TObjPlayer__sub_802E0468(long long arg1, u8 *arg2, f32 farg0);
bool fn_802E0454(u8 *arg0);
}

extern "C" {

void TAdMultiConfirmGC__sub_802E03D0(void* p);
void TAdMultiConfirmGC__sub_802E0448(void* p);
int reset_cursor__17TAdMultiConfirmGCFPv(void* p);
int set_cursor_index_1__17TAdMultiConfirmGCFPv(void* p);
int set_cursor_index_2__17TAdMultiConfirmGCFPv(void* p);
int set_cursor_index__17TAdMultiConfirmGCFPvi(void*, int);

void TAdMultiConfirmGC__sub_802E03D0(void* p) { *(s32*)((char*)p + 0x118) = 0; }
int set_cursor_index_2__17TAdMultiConfirmGCFPv(void* p) { return set_cursor_index__17TAdMultiConfirmGCFPvi(p, 2); }
int set_cursor_index_1__17TAdMultiConfirmGCFPv(void* p) { return set_cursor_index__17TAdMultiConfirmGCFPvi(p, 1); }
int reset_cursor__17TAdMultiConfirmGCFPv(void* p) { return set_cursor_index__17TAdMultiConfirmGCFPvi(p, 0); }
void TAdMultiConfirmGC__sub_802E0448(void* p) { *(s32*)((char*)p + 0x11c) = 1; }

typedef struct Stack_802E0468 Stack_802E0468;

bool fn_802E0454(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xFC) == 3;
}

void TObjPlayer__sub_802E0468(long long arg1, u8 *arg2, f32 farg0) {
  Stack_802E0468 stack;
  int new_var;
  lbl_805D5660 = some_id_805c6f74;
  lbl_805D5664 = lbl_805D7784;
  lbl_805D5668 = lbl_805D7780;
  some_id_805c6f74 |= 0x10;
  new_var = 1;
  if (farg0 < lbl_805DE8A8)
  {
    set_global_pair__10TObjPlayerFii(-new_var, 0x800);
  }
  stack.sp8 = farg0;
  stack.spC = lbl_805DE8AC * ((f32) (*((s16 *) (((s8 *) arg2) + 0x42))));
  stack.sp10 = lbl_805DE8AC * ((f32) (*((s16 *) (((s8 *) arg2) + 0x44))));
  stack.sp14 = lbl_805DE8AC * ((f32) (*((s16 *) (((s8 *) arg2) + 0x46))));
  TObjPlayer__sub_803DED84(&stack.sp8);
  play_phase_transition_sound__10TObjPlayerFi(arg1);
  lbl_805D7784 = lbl_805D5664;
  lbl_805D7780 = lbl_805D5668;
  some_id_805c6f74 = lbl_805D5660;
}

}
