/* Test basic c functionality.  */

#define DEBUG 1
#define DBGFINE 0

#include "../support/support.h"
#include "../support/spr_defs.h"
#include "blowfishO2.h"

void buserr_except(){}
void dpf_except(){}
void ipf_except(){}
void lpint_except(){}
void align_except(){}
void illegal_except(){}
void hpint_except(){}
void dtlbmiss_except(){}
void itlbmiss_except(){}
void range_except(){}
void syscall_except(){}
void res1_except(){}
void trap_except(){}
void res2_except(){}

int main()
{
	#if DEBUG
		report(0xcafecafe);
	#endif

	unsigned long L = 1, R = 2;
	BLOWFISH_CTX ctx;
	Blowfish_Test (&ctx, (unsigned char*)"ES", 2, &L, &R);
		if (L == 1 && R == 2)
	  		report(0x11111111);  //Test passed
		else
			report(0x00000000);  //Test failed

	return 0;
}
 
