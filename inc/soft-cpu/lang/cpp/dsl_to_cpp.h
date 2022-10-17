
#define ELEM_T uint32_t \\ Is not connected to stack Elem_t

#define PUSH(val) push(cpu->stk, val)
#define POP()     pop (cpu->stk)

#define ARG1 *((ELEM_T*) args[0])
#define ARG2 *((ELEM_T*) args[1])
#define ARG3 *((ELEM_T*) args[2])
#define ARG4 *((ELEM_T*) args[3])


#define DEF_INSTR(name, n_args, ...) \
    INSTR_##name,

enum Instructions
{
    INSTR_hlt,

    #include "pre/instruction/s.pre"
};

#undef DEF_INSTR

