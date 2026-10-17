#include "types.h"
#include "pso/system/byteswap.h"
#include "pso/misc/TLobby.h"

struct Obj_801DFC3C { u8 pad[0x600]; u32 w[30]; };

extern "C" {
void bswap__13packet_headerFv();
void bswap_choice_search_config(void *);
void bswap__12TPlyCharDataFv(void *);
void bswap_player_record_upload(u8 *arg0);
void bswap_player_record_upload(u8 *arg0) {
    s32 i;
    bswap__13packet_headerFv();
    bswap__12TPlyCharDataFv(arg0 + 4);
    ((TLobby *)(arg0 + 0x420))->bswap_cmd_c5();
    bswap_choice_search_config(arg0 + 0x53C);
    for (i = 0; i < 0x1E; i++) {
        bswap_32(&((Obj_801DFC3C *)arg0)->w[i]);
    }
    bswap_32((u32 *)(arg0 + 0x678));
}

}
