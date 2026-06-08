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
