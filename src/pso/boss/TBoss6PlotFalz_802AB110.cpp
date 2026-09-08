#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
#include "pso/boss/TBoss6PlotFalz.h"
struct Stack_802AB1C8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_802AB1C8 { s32 words[3]; void (TBoss6PlotFalz::*action)(); };

struct RecoveredGlobal_802AB1C8_TBoss6PlotFalz__data_804DE66C {
    M2C_UNK value;
    u8 remaining[0x1D0];
};

struct Stack_802AB14C {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_802AB14C { s32 words[3]; void (TBoss6PlotFalz::*action)(); };

struct RecoveredGlobal_802AB14C_TBoss6PlotFalz__data_804DE66C {
    M2C_UNK value;
    u8 remaining[0x1D0];
};

extern "C" {
extern RecoveredGlobal_802AB1C8_TBoss6PlotFalz__data_804DE66C TBoss6PlotFalz__data_804DE66C;
void TBoss6PlotFalz__sub_802AB1C8(u8 *arg0);
s32 TBoss6PlotFalz__sub_802AACF4(void *);
extern RecoveredGlobal_802AB1C8_TBoss6PlotFalz__data_804DE66C TBoss6PlotFalz__data_804DE66C;
void TBoss6PlotFalz__sub_802AB14C(u8 *arg0);
}

extern "C" {

void activate_warp__14TBoss6PlotFalzFPv(void* p);
void free_child__14TBoss6PlotFalzFPv(void* p);
s32 is_state_1f__14TBoss6PlotFalzFUi(u32 arg0);
void reset_state__14TBoss6PlotFalzFPv(void* p);
void set_state_2__14TBoss6PlotFalzFPv(void* p);
int TBoss6EmptyWarp__sub_802B1004(void*);
int activate_warp__15TBoss6EmptyWarpFPv(void*);
s32 get_field_3e0__12TBoss3VoloptFPv();

s32 is_state_1f__14TBoss6PlotFalzFUi(u32 arg0) {
    if ((arg0 == 0U) || (get_field_3e0__12TBoss3VoloptFPv() != 0x1F)) {
        return 0;
    }
    return 1;
}

typedef char MemberActionStorage_802AB1C8_size[sizeof(MemberActionStorage_802AB1C8) == 12 ? 1 : -1];
typedef char RecoveredGlobal_802AB1C8_TBoss6PlotFalz__data_804DE66C_size[sizeof(RecoveredGlobal_802AB1C8_TBoss6PlotFalz__data_804DE66C) == 0x1D4 ? 1 : -1];

typedef char MemberActionStorage_802AB14C_size[sizeof(MemberActionStorage_802AB14C) == 12 ? 1 : -1];
typedef char RecoveredGlobal_802AB14C_TBoss6PlotFalz__data_804DE66C_size[sizeof(RecoveredGlobal_802AB14C_TBoss6PlotFalz__data_804DE66C) == 0x1D4 ? 1 : -1];
void TBoss6PlotFalz__sub_802AB14C(u8 *arg0) {
  MemberActionStorage_802AB14C member_action;
  Stack_802AB14C stack;
  u8 *temp_r6;
  temp_r6 = (u8 *) (&(*(RecoveredGlobal_802AB14C_TBoss6PlotFalz__data_804DE66C *)&TBoss6PlotFalz__data_804DE66C).value);
  temp_r6 = temp_r6 + ((*((s32 *) (((s8 *) arg0) + 0x378))) * 0x34);
  member_action.words[0] = *((s32 *) (((s8 *) temp_r6) + 0x28));
  member_action.words[1] = *((s32 *) (((s8 *) temp_r6) + 0x2C));
  member_action.words[2] = *((s32 *) (((s8 *) temp_r6) + 0x30));
  if (member_action.action != 0)
  {
    (((TBoss6PlotFalz *)((void *) arg0))->*( member_action.action))();
  }
  TBoss6PlotFalz__sub_802AACF4((void *) arg0);
}

void TBoss6PlotFalz__sub_802AB1C8(u8 *arg0) {
  MemberActionStorage_802AB1C8 member_action;
  Stack_802AB1C8 stack;
  u8 *temp_r6;
  if (1)
  {
    temp_r6 = (u8 *) (&TBoss6PlotFalz__data_804DE66C.value);
    temp_r6 = temp_r6 + ((*((s32 *) (((s8 *) arg0) + 0x378))) * 0x34);
    member_action.words[0] = *((s32 *) (((s8 *) temp_r6) + 0x1C));
  }
  member_action.words[1] = *((s32 *) (((s8 *) temp_r6) + 0x20));
  member_action.words[2] = *((s32 *) (((s8 *) temp_r6) + 0x24));
  if (member_action.action != 0)
  {
    (((TBoss6PlotFalz *)((void *) arg0))->*( member_action.action))();
  }
}

void set_state_2__14TBoss6PlotFalzFPv(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 2; }
void reset_state__14TBoss6PlotFalzFPv(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 0; }
void activate_warp__14TBoss6PlotFalzFPv(void* p) { void* m = *(void**)((char*)p + 0x384); if (m) activate_warp__15TBoss6EmptyWarpFPv(m); }
void free_child__14TBoss6PlotFalzFPv(void* p) { void* m = *(void**)((char*)p + 0x384); if (m) TBoss6EmptyWarp__sub_802B1004(m); }

}
