#include <stdlib.h>


/**
 * _calloc - some func
 * @nmemb: some arg
 * @size: some arg
 *
 * Return: the wanted value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *Ptr = calloc(nmemb, size);

	return (Ptr);
}
