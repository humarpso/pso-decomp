#ifndef PSO_MISC_TQUESTLISTOFFLINE_H
#define PSO_MISC_TQUESTLISTOFFLINE_H
#include "types.h"
#include "pso/TShopWindowBase.h"

class TQuestListOffline : public TShopWindowBase {
public:
    virtual ~TQuestListOffline();
    void init_quest_list_window();
    virtual void vfunc_11();
    u8 unk_1C[0x3C];
};
typedef char TQuestListOffline_size[sizeof(TQuestListOffline) == 0x58 ? 1 : -1];

#endif
