#include "pso/network/NetworkInfoLoader.h"

extern "C" {

#pragma push
#pragma scheduling off
s32 take_network_info_request_result(s32 *arg0, s32 *arg1) {
    s32 r;
    s32 t;
    if (get_network_config_mode() == 0) {
        return -1;
    }
    if (network_info_load_state.request_kind == 2) {
        *arg0 = network_info_load_state.card_result;
        *arg1 = network_info_load_state.card_detail;
        t = network_info_load_state.result;
        r = t;
        if (t != 200) {
            if (t == 0) {
                get_or_set_network_config_mode(2);
            }
            network_info_load_state.request_kind = 0;
            network_info_load_state.phase = 0;
            network_info_load_state.result = 0;
        }
    } else {
        *arg0 = 0;
        *arg1 = 0;
        r = -4;
    }
    return r;
}
#pragma pop

}
