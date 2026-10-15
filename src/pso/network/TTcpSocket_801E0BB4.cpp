#include "types.h"

extern "C" {

void *__ct__10TTcpSocketFP7TObject(void *arg0);
void __ct__18PSOV3EncryptionTCPFv(void *);
void __ct__7TSocketFP7TObject(void *);

extern s32 __vt__10TTcpSocket[];
extern void *TTcpSocket__class_name;

void *__ct__10TTcpSocketFP7TObject(void *arg0) {
    __ct__7TSocketFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TTcpSocket;
    __ct__18PSOV3EncryptionTCPFv((void *)((char *)arg0 + 2180));
    __ct__18PSOV3EncryptionTCPFv((void *)((char *)arg0 + 4284));
    *(void **)((s8 *)arg0 + 0x0) = TTcpSocket__class_name;
    return arg0;
}

}
