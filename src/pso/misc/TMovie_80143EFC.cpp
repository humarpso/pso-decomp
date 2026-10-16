#include "types.h"
#include "pso/misc/TMovie.h"

extern "C" {

bool TMovie::is_playback_finished() {
    u8 *arg0 = (u8 *)this;
    void **temp_r3;
    u8 *temp_r4;
    temp_r3 = (void **)(*(void ** *)&this->m_flags);
    temp_r4 = (u8 *)(*temp_r3);
    return (*(s32 (**)(void **, void *))((s8 *)temp_r4 + 0x20))(temp_r3, temp_r4) == 3;
}

}
