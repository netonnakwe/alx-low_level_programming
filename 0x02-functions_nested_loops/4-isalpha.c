#include "main.h"

int _isalpha(int e)
{
	if ((e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z'))
		return (1);
	return (0);
}
