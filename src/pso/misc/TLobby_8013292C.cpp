#include "types.h"
#include "pso/misc/TLobby_8013292C.h"
#include "pso/misc/TLobby_80132ED0.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);

s32 TLobby::select_download_type(s32 arg0) {
    if (arg0 & 0x20) {
        return TQuestVmDownLoadServer__sub_8006EF6C(3);
    }
    if (arg0 & 0x40) {
        return TQuestVmDownLoadServer__sub_8006EF6C(4);
    }
    if (arg0 & 0x80) {
        return TQuestVmDownLoadServer__sub_8006EF6C(5);
    }
    return 0;
}

void select_main_menu_item_10(s32 arg0) {
    get_localized_text_entry(0xA, arg0);
}

}
