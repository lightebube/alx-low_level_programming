#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

unsigned int _strspn(char *s, char *accept)
{
	return strspn(s, accept);
}
