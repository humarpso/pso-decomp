#include "types.h"
#include "pso/TObject.h"

extern "C" {

void allow_rendering__7TObjectFv(void *arg0);
void disallow_rendering__7TObjectFv(void *arg0);

void allow_rendering__7TObjectFv(void *arg0) {
    ((TObject *)arg0)->m_flags = (u16) (((TObject *)arg0)->m_flags& 0xFFFFFFEF);
}

void disallow_rendering__7TObjectFv(void *arg0) {
    ((TObject *)arg0)->m_flags = (u16) (((TObject *)arg0)->m_flags| 0x10);
}

}
