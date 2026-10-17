#include "types.h"
#include "pso/misc/TPlyJoinLobbyEntry.h"
#include "pso/misc/TQuestListOnline_80218310.h"
#include "pso/misc/TShopWindowBase.h"
#include "pso/misc/TQuestListOnline.h"
#include "pso/TShopWindowBase.h"
#include "pso/misc/TQuestListVM.h"

extern "C" {

extern s32 __vt__16TQuestListOnline[];
extern void *TQuestListOnline__class_name;
void memset(void *, int, int);
extern void * TQuestListOnline__instance;
struct VOff_80218310_arg0 { char pad_0[0x4C]; char f_4C[1]; };

void *TQuestListOnline__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    struct VOff_80218310_arg0 *self = (struct VOff_80218310_arg0 *)arg0;
    __ct__15TShopWindowBaseFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TQuestListOnline;
    __ct__13GameListEntryFv((s32)self->f_4C);
    *(void * *)&((TQuestListOnline *)arg0)->m_name = TQuestListOnline__class_name;
    ((TQuestListOnline *)arg0)->list_window = 0;
    ((TQuestListOnline *)arg0)->description_window = 0;
    ((TQuestListOnline *)arg0)->info_window = 0;
    ((TQuestListOnline *)arg0)->confirm_window = 0;
    ((TQuestListOnline *)arg0)->sequence = arg2;
    ((TQuestListOnline *)arg0)->selected_index = 0;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    ((TQuestListOnline *)arg0)->selection_stage = 0;
    *(void **)((s8 *)arg0 + 0x24) = arg3;
    memset(self->f_4C, 0, 28);
    ((TShopWindowBase *)arg0)->set_field_20(0);
    TQuestListOnline__instance = arg0;
    return arg0;
}

}
