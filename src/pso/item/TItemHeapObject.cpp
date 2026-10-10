#include "pso/item/TItemHeapObject.h"
extern "C" {
extern void* obj_heap;
int heap_free__5THeapFPv(void*,void*);
void* heap_alloc__5THeapFUl(void*,unsigned long);
}
void TItemHeapObject::operator delete(void* ptr) { heap_free__5THeapFPv(obj_heap,ptr); }
void* TItemHeapObject::operator new(size_t size) { return heap_alloc__5THeapFUl(obj_heap,size); }
TItemHeapObject::TItemHeapObject(TObject* parent) : TObject(parent) {}
