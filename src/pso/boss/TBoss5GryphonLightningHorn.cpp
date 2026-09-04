#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss5GryphonLightningHorn.h"

TBoss5GryphonLightningHorn::~TBoss5GryphonLightningHorn() {}
#else
#if PSO_CLASS_PACKAGE == 0x8032627C
#include "types.h"

extern "C" {

void run_task__26TBoss5GryphonLightningHornFv(void* p);
void render__26TBoss5GryphonLightningHornFv(void);
int fn_80324E10(void*);
int fn_80325F7C(void*);
int fn_80326074(void*);

void render__26TBoss5GryphonLightningHornFv(void) {  }
void run_task__26TBoss5GryphonLightningHornFv(void* p) { fn_80326074(p); fn_80325F7C(p); fn_80324E10(p); }

}
#endif
#endif
