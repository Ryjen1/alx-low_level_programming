#ifndef _HEADER_
#define _HEADER_
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
