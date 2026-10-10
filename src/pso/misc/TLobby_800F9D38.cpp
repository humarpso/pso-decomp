#include "types.h"

extern "C" {

void set_stream_and_load_file__6TLobbyFi(int a0);
void set_stream_state__6TLobbyFi(int a0);
int load_sct_file__8TGStreamFii(void);
int load_file__8TGStreamFi(void);

    extern int disc_read_filename;
void set_stream_and_load_file__6TLobbyFi(int a0) { disc_read_filename = a0; load_file__8TGStreamFi(); }

    extern int disc_read_filename;
void set_stream_state__6TLobbyFi(int a0) { disc_read_filename = a0; load_sct_file__8TGStreamFii(); }

}
