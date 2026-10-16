#include "types.h"
#include "pso/misc/TMovie.h"

extern "C" {

void TMovie::release() {
    void **temp_r3;
    void *temp_r4;

    temp_r3 = *(void ** *)&this->m_flags;
    temp_r4 = *temp_r3;
    (*(s32 (**)(void **, void *))((s8 *)temp_r4 + 0x14))(temp_r3, temp_r4);
    *(void ** *)&this->m_flags = NULL;
}

}
