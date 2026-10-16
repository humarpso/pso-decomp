#include "types.h"
#include "pso/TItemLoad.h"

extern "C" {

int close_adxf_handle__6TLobbyFv(void*);

void TItemLoad::free_texture() { if (*(unsigned int *)&this->m_flags != 0) { close_adxf_handle__6TLobbyFv(*(void* *)&this->m_flags); *(int *)&this->m_flags = 0; *(int *)&this->m_next = 0; } }

}
