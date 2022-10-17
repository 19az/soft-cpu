
/// @file cpu.h
///
/// @brief Перевод раздела исполнения команд процессора с DSL на С

#ifndef SOFT_CPU_LANG_CPU_H
#define SOFT_CPU_LANG_CPU_H

//#include "cpu_errors.h"
typedef ERR_TYPE_CPU uint8_t;

#define ERR_TYPE ERR_TYPE_CPU
#include "error_handling/error_handling.h"





#ifndef CPU_CPP
    #undef ERR_TYPE
#endif

#include "error_handling/undef_error_handling.h"

#endif /* SOFT_CPU_LANG_CPU_H */
