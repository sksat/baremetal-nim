#undef size_t
typedef unsigned int size_t;
#define offsetof(s, mem)  (size_t)&(((s*)0)->mem)

