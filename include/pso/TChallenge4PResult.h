#ifndef PSO_TCHALLENGE4PRESULT_H
#define PSO_TCHALLENGE4PRESULT_H

#include "pso/TObject.h"
#include "types.h"

struct TWindowMessagePage;

class TChallenge4PResult : public TObject {
public:
    virtual ~TChallenge4PResult();
    virtual void run_task();
    void show_message(s32 text_handle);
    s32 state_1c;
    u8 unknown_20[4];
    u16 slot_index;
    u8 unknown_26[6];
    TWindowMessagePage *message_window;
    u8 unknown_30[0x4C];

};

#include <stddef.h>
typedef char TChallenge4PResult_size[sizeof(TChallenge4PResult) == 0x7c ? 1 : -1];
typedef char TChallenge4PResult_state_1c_offset[offsetof(TChallenge4PResult, state_1c) == 0x1c ? 1 : -1];
typedef char TChallenge4PResult_slot_index_offset[offsetof(TChallenge4PResult, slot_index) == 0x24 ? 1 : -1];
typedef char TChallenge4PResult_message_window_offset[offsetof(TChallenge4PResult, message_window) == 0x2c ? 1 : -1];

#endif
