#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>
/* Ex 0 */
int sum_them_all(const unsigned int n, ...);
/* Ex 1 */
void print_numbers(const char *separator, const unsigned int n, ...);
/* Ex 2 */
void print_strings(const char *separator, const unsigned int n, ...);
/* Ex 3*/
void print_all(const char * const format, ...);
#endif
