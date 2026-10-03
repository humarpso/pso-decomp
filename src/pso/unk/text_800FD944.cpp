#include "types.h"
struct Entry_800FD944 { u8 pad[0x24]; s32 size; };

extern "C" {
Entry_800FD944 *find_gsl_entry(void *name, s32 flag);
s32 get_file_size__6TLobbyFv(void *name);
s32 TLobby__sub_800FD944(void *name);
}

extern "C" {

s32 TLobby__sub_800FD944(void *name) {
    Entry_800FD944 *e = find_gsl_entry(name, 0);
    if (e != NULL) {
        return e->size;
    }
    return get_file_size__6TLobbyFv(name);
}

}
