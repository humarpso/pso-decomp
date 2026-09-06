#include <global_types.h>
#include <string.h>
#include "pso/macros.h"
#include "pso/PSOV3EncryptionTCP.h"

void PSOV3EncryptionTCP::encrypt(void *void_data, int size) {
	u32 *data = reinterpret_cast<u32 *>(void_data);
	size = (size + 3) / 4;
	for (int i = 0; i < size; ++i) {
		bswap_32(&data[i]);
		data[i] ^= next();
		bswap_32(&data[i]);
	}
}

void PSOV3EncryptionTCP::reset(u32 seed) {
	m_seed = seed;
	init(seed);
}

PSOV3EncryptionTCP::~PSOV3EncryptionTCP() {

}

PSOV3EncryptionTCP::PSOV3EncryptionTCP() : PSOV3Encryption() {
	reset(0);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void reset__18PSOV3EncryptionTCPFUl(void *, s32);
u8 * __ct__15PSOV3EncryptionFv(void *);
u8 *__ct__18PSOV3EncryptionTCPFv(u8 *arg0);
}

extern "C" {

u8 *__ct__18PSOV3EncryptionTCPFv(u8 *arg0) {
    __ct__15PSOV3EncryptionFv(arg0);
    reset__18PSOV3EncryptionTCPFUl(arg0, 0);
    return arg0;
}

}
