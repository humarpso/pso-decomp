#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 gcrna_set_audio_buffer_storage();

void TLobby::run_step_60c8() {
    gcrna_set_audio_buffer_storage();
}

}
