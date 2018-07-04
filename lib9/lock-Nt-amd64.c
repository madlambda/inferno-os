#include "lib9.h"
#include "Windows.h"

int 
_tas(int *la)
{
	int v;
	InterlockedExchange(&v, *la);
	return v;
}