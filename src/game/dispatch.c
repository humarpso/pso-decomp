#include "types.h"

typedef void (*VoidCallback)(void);

extern VoidCallback glob_8003E90C;

void func_8002A0E4(void) {
    glob_8003E90C();
}

extern VoidCallback glob_8003E908;

void func_8002A10C(void) {
    glob_8003E908();
}

void func_8002A134(void) {
    glob_8003E908();
}

extern u32* glob_8003ECE0;

void func_80037BFC(void* arg) {
    typedef void (*Func)(void*);
    Func fn = (Func)glob_8003ECE0[1];
    fn(arg);
}

typedef struct {
    void (*method0)(void*);
    void (*method1)(void*);
    void (*method2)(void*);
    void (*method3)(void*);
    void (*method4)(void*);
    void (*method5)(void*);
    void (*method6)(void*);
} DispatchStruct;

extern DispatchStruct glob_8003D3B8;

void func_8002970C(void) {
    glob_8003D3B8.method6(&glob_8003D3B8);
}

void func_8002973C(void) {
    glob_8003D3B8.method5(&glob_8003D3B8);
}

void func_80029964(void) {
    glob_8003D3B8.method1(&glob_8003D3B8);
}

void func_80037BD0(void* arg) {
    typedef void (*Func)(void*);
    Func fn = (Func)glob_8003ECE0[0];
    fn(arg);
}

void func_8002AA10(u32* obj) {
    void* data = (void*)obj[0];
    if (data != NULL) {
        void (*callback)(void*, s32) = (void (*)(void*, s32))obj[2];
        if (callback != NULL) {
            callback(data, -1);
        }
    }
}

extern u32* glob_8003EBC8;

void func_80029E1C(void) {
    u32* node;
    while ((node = glob_8003EBC8) != NULL) {
        glob_8003EBC8 = (u32*)node[0];
        ((void (*)(void*, s32))node[1])((void*)node[2], -1);
    }
}

extern void func_80029AD0(void);

s32 func_80029994(void* a1, void* a2, void* a3, void* a4) {
    typedef void (*Callback2)(void*, void*);
    ((Callback2)glob_8003D3B8.method0)(a4, (void*)func_80029AD0);
    return 0;
}

extern void func_80027E7C(s32);
extern void func_80027B20(void);

s32 func_80029B08(void) {
    func_80027E7C(0);
    func_8002970C();
    func_80027B20();
    func_8002973C();
    return 0;
}

extern void func_800384AC(void);
extern void func_800385B0(void);
extern void func_8003858C(void);

void func_800380E4(s32 arg) {
    func_800384AC();
    if (arg != 0) {
        func_800385B0();
    } else {
        func_8003858C();
    }
}

void func_80036CD4(u32* obj) {
    obj[0] = 0x808C0000;
    obj[2] = 0;
    obj[3] = 0x949004C0;
    obj[4] = 0x00080012;
    obj[5] = 0xFFFFFFFF;
    obj[6] = 0xFFFFFFFF;
    obj[7] = 0x20000000;
    obj[8] = 0;
}
