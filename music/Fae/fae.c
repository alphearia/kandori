#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"

#define dir "/usr/local/share/samples"
//#define base "/musicbox/cmb_"
#define base "/piano/grand_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "template";
char *PROGRAM_VERSION = "0.01";

static void right(int in)
{ 

	int spot;

	spot = getLocation();

	//measure 1
	nplay(W,in,E4); setLocation(spot);
	nplay(W,in,A4); setLocation(spot);
	nplay(W,in,C5);

	//measure 2
	spot = getLocation();
	nplay(Q,in,D4); 
	nplay(Q,in,F4);
	nplay(W,in,E4); setLocation(spot);
	nplay(Q,in,G4);
	nplay(Q,in,A4);
	nplay(W,in,A4); setLocation(spot);
	nplay(Q,in,B4);
	nplay(Q,in,D5);
	nplay(W,in,C5);

	//measure3
	spot = getLocation();
	nplay(Q,in,D4); 
	nplay(Q,in,F4);
	nplay(W,in,E4); setLocation(spot);
	nplay(Q,in,G4);
	nplay(Q,in,A4);
	nplay(W,in,A4); setLocation(spot);
	nplay(Q,in,B4);
	nplay(Q,in,D5);
	nplay(W,in,C5);
	
	//4
	spot = getLocation();
	nplay(H,in,B3); setLocation(spot);
	nplay(H,in,E4);setLocation(spot);
	nplay(H,in,G4);

	//5
	spot = getLocation();
	nplay(Q,in,A3);
	nplay(Q,in,C4);
	nplay(W,in,B3); setLocation(spot);
	nplay(Q,in,C4);
	nplay(Q,in,F4);
	nplay(W,in,E4); setLocation(spot);
	nplay(Q,in,F4);
	nplay(Q,in,A4);
	nplay(W,in,G4);

	//measure 1
	spot = getLocation();
	nplay(W,in,E4); setLocation(spot);
	nplay(W,in,A4); setLocation(spot);
	nplay(W,in,C5);

	//measure 2
	spot = getLocation();
	nplay(Q,in,D4); 
	nplay(Q,in,F4);
	nplay(W,in,E4); setLocation(spot);
	nplay(Q,in,G4);
	nplay(Q,in,A4);
	nplay(W,in,A4); setLocation(spot);
	nplay(Q,in,B4);
	nplay(Q,in,D5);
	nplay(W,in,C5);

	//measure3
	spot = getLocation();
	nplay(Q,in,D4); 
	nplay(Q,in,F4);
	nplay(W,in,E4); setLocation(spot);
	nplay(Q,in,G4);
	nplay(Q,in,A4);
	nplay(W,in,A4); setLocation(spot);
	nplay(Q,in,B4);
	nplay(Q,in,D5);
	nplay(W,in,C5);
	
	//4
	spot = getLocation();
	nplay(H,in,B3); setLocation(spot);
	nplay(H,in,E4); setLocation(spot);
	nplay(H,in,G4);

	//5
	spot = getLocation();
	nplay(Q,in,A3);
	nplay(Q,in,C4);
	nplay(W,in,B3); setLocation(spot);
	nplay(Q,in,C4);
	nplay(Q,in,F4);
	nplay(W,in,E4); setLocation(spot);
	nplay(Q,in,F4);
	nplay(Q,in,A4);
	nplay(W,in,G4);
}

static void left(int in)
{ 
}

int main()
{

	songInit();
	int in;
	int spot;
	in = readScale(dir,base);
	setTempo(80);
	setTime(4,4);
	setStride(0.05);
	setSustain(0.9997);
	setAmplitude(0.3);
	setKey(C);

	openOutput("fae.rra",0,0);
	
	spot = getLocation();
	right(in);
	setLocation(spot);
	left(in);

	closeOutput();
	
	return 0;
}
