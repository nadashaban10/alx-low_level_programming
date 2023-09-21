#ifndef STRC_H
#define STRC_H
#include <stddef.h>
typedef struct list_s 
{
	char *str;
	int len;
	struct list_s *move;
} list_t;

size_t print_list(const list_t *h);
#endif
