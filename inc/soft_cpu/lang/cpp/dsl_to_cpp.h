
#define ELEM_T Elem_t

#define PUSH(val) push(cpu->stk, val)
#define POP()     pop (cpu->stk)

#define ARG1 *((ELEM_T*) args[0])
#define ARG2 *((ELEM_T*) args[1])
#define ARG3 *((ELEM_T*) args[2])
#define ARG4 *((ELEM_T*) args[3])
