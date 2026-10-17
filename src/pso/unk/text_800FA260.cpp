#include "types.h"
#include "pso/misc/TLobby.h"
struct N_800FA260 { u32 flags; u8 pad[0x34]; N_800FA260 *next; };

extern "C" {
extern N_800FA260 *async_file_read_current_request;
void process_pending_resources(void);
void process_pending_resources(void) {
    N_800FA260 *p;
    TLobby::pump_frames();
    for (p = async_file_read_current_request; p != 0; p = p->next) {
        p->flags |= 0x200;
    }
}

}
