#include "types.h"

extern "C" {

void TJudgmentSequence__vt10(void* p);

int set_field_20__12TQuestListVMFPvi(void*, void*);
int restore_player_state__13TShopSequenceFPv(void*);

void TJudgmentSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); set_field_20__12TQuestListVMFPvi(p, (void*)1); }

}
