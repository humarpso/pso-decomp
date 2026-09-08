#include "pso/TAdTimeSetGC.h"
extern "C" {
s32 poll_load_status__23TAdSinglePlyChrSelectGCFPv();
void TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, int);
}
extern "C" {
extern TAdTimeSetGCStateActions lbl_804E32A4[];
}

extern "C" {
void TWindow__close(void *);
void queue_destruction__7TObjectFv(void *);
}

#pragma opt_common_subs off
void TAdTimeSetGC::run_task() {
  TAdTimeSetGCStateAction *entry_action;
  load_status = poll_load_status__23TAdSinglePlyChrSelectGCFPv();
  if (load_status & 1)
  {
    TAdSinglePlyChrSelectGC__sub_802E1DF8(this, 0);
  }
  TAdTimeSetGCStateAction action = *(entry_action = &lbl_804E32A4[state_index].task);
  if (action != 0)
  {
    (this->*action)();
  }
  --timer;
  if (timer < 0)
  {
    timer = 0;
  }
}
#pragma opt_common_subs reset

TAdTimeSetGC::~TAdTimeSetGC() {
    if (owned_object != NULL) {
        delete owned_object;
        owned_object = NULL;
    }
    if (window != NULL) {
        TWindow__close(window);
        window = NULL;
    }
    if (queued_object != NULL) {
        queue_destruction__7TObjectFv(queued_object);
        queued_object = NULL;
    }
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdTimeSetGC__ct(void *arg0);
void TAdTimeSetGC__sub_802E34A4(void);
void TAdTimeSetGC__sub_802E34A8(void);
void TLobby__sub_8022743C(void);
void __ct__7TObjectFP7TObject(void *);
void init__23TAdSinglePlyChrSelectGCFPv(void *);

extern M2C_UNK __vt__12TAdTimeSetGC[];
extern void *lbl_805D3F80;

void *TAdTimeSetGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TAdTimeSetGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3F80;
    init__23TAdSinglePlyChrSelectGCFPv(arg0);
    TLobby__sub_8022743C();
    return arg0;
}

void TAdTimeSetGC__sub_802E34A4(void) {  }
void TAdTimeSetGC__sub_802E34A8(void) {  }

}
