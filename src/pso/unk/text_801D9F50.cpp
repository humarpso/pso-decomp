#include "types.h"
#include "pso/network/TProtocol.h"
#include "pso/TProtocol.h"

extern "C" {

void TProtocol::handle_cmd_AB(packet &pkt) {
    void *arg1 = &pkt;
    s32 (*temp_r12)(u16);

    bswap_cmd_AB__9TProtocolFPv(arg1);
    temp_r12 = *(s32 (**)(u16))((s8 *)this + 0xBC94);
    if (temp_r12 != NULL) {
        temp_r12(((TProtocol *)arg1)->m_flags);
    }
}

}
