#include "types.h"
#include "pso/unk/text_80242F0C.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
s32 is_split_screen();
u32 get_player_by_client_id(s32);
extern s32 local_client_id;
s32 fn_80242F0C(s32 arg0) {
    switch (is_split_screen()) {
    case 0:
        if (arg0 != 0) {
            return 0xFFFF;
        }
        arg0 = local_client_id;
        break;
    }
    if (((TAdSinglePlyChrSelectGC *)arg0)->test_card_flag8() != 0) {
        return 0xFFFF;
    }
    if (get_player_by_client_id(arg0) != 0) {
        return arg0;
    }
    return 0xFFFF;
}

}
