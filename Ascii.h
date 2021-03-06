/*


		$file:						Frogger Remake ( For the console)
		$purpose:					Different Ascii Screens
		$author:					Michael Boyle (Softrix)

		$purpose:					To remove the need for external files to be 
									loaded at startup


*/


#ifndef _H_ASCII
#define _H_ASCII

static const unsigned char startscreen[] = {

	0x0a, 0x0a, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x0a, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x20,
	0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x3d,
	0x3d, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x0a, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d,
	0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x20,
	0x20, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20, 0x20,
	0x3d, 0x3d, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20, 0x20, 0x3d, 0x3d,
	0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20,
	0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x0a, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d,
	0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20,
	0x20, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d,
	0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x20,
	0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d,
	0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x0a,
	0x20, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x20,
	0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20,
	0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d,
	0x3d, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x0a, 0x20,
	0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d,
	0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d,
	0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20,
	0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x0a, 0x20, 0x20,
	0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20,
	0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d,
	0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20,
	0x3d, 0x3d, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d,
	0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x0a, 0x20, 0x20, 0x20,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d,
	0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x20,
	0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20, 0x3d,
	0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20,
	0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x0a, 0x20, 0x20, 0x20, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d,
	0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x20, 0x20,
	0x20, 0x3d, 0x3d, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20, 0x20, 0x3d,
	0x3d, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x0a, 0x20, 0x20, 0x20, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d,
	0x3d, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x3d, 0x3d, 0x20, 0x20, 0x3d, 0x3d, 0x3d, 0x3d, 0x20, 0x20, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x0a, 0x20, 0x20, 0x20, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d, 0x3d,
	0x3d, 0x3d, 0x3d, 0x3d, 0x0a, 0x0a, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x09,
	0x09, 0x09, 0x09, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x2e, 0x2d, 0x2e, 0x20, 0x20, 0x20, 0x2e, 0x2d, 0x2e,
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28,
	0x20, 0x6f, 0x20, 0x29, 0x5f, 0x28, 0x20, 0x6f, 0x20, 0x29, 0x0a, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x20, 0x2f, 0x20, 0x27, 0x2d,
	0x27, 0x20, 0x20, 0x20, 0x27, 0x2d, 0x27, 0x20, 0x5c, 0x20, 0x5f, 0x5f,
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x20, 0x20, 0x2f, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x22, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c,
	0x20, 0x20, 0x5c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x20, 0x20,
	0x5c, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x2c, 0x20,
	0x20, 0x20, 0x2f, 0x20, 0x20, 0x20, 0x7c, 0x0a, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x5c, 0x20, 0x20, 0x5c, 0x60, 0x2d, 0x2e, 0x5f, 0x5f, 0x5f, 0x5f,
	0x5f, 0x5f, 0x5f, 0x2e, 0x2d, 0x27, 0x2f, 0x20, 0x20, 0x2f, 0x0a, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x5f, 0x2e, 0x2d, 0x60, 0x20, 0x20, 0x20, 0x2f, 0x5c, 0x29, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x2f, 0x5c, 0x20, 0x20,
	0x20, 0x60, 0x2d, 0x2e, 0x5f, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x5f, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x2f, 0x20, 0x2f, 0x20, 0x20, 0x2f, 0x2e, 0x5f, 0x5f, 0x5f, 0x2e,
	0x5c, 0x20, 0x20, 0x5c, 0x20, 0x5c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f,
	0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x28, 0x5f, 0x2e, 0x28, 0x5f, 0x2f, 0x20, 0x2f, 0x20,
	0x20, 0x28, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x29, 0x20, 0x20,
	0x5c, 0x20, 0x5c, 0x5f, 0x29, 0x2e, 0x5f, 0x29, 0x0a, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x28, 0x5f, 0x28, 0x5f, 0x29, 0x5f, 0x29, 0x20,
	0x20, 0x20, 0x28, 0x5f, 0x28, 0x5f, 0x29, 0x5f, 0x29, 0x0a, 0x0a, 0x0a,
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x20, 0x20, 0x20, 0x0a, 0x0a,
	0x09, 0x20, 0x20, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20,
	0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f,
	0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x20, 0x20,
	0x20, 0x5f, 0x5f, 0x5f, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x2f, 0x20, 0x5f, 0x5f, 0x2f, 0x20, 0x5f, 0x20, 0x5c,
	0x2f, 0x20, 0x5f, 0x20, 0x7c, 0x2f, 0x20, 0x5f, 0x5f, 0x5f, 0x2f, 0x20,
	0x5f, 0x5f, 0x2f, 0x20, 0x5f, 0x20, 0x29, 0x2f, 0x20, 0x5f, 0x20, 0x7c,
	0x20, 0x2f, 0x20, 0x5f, 0x20, 0x5c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x5f, 0x5c, 0x20, 0x5c, 0x2f, 0x20, 0x5f, 0x5f, 0x5f,
	0x2f, 0x20, 0x5f, 0x5f, 0x20, 0x2f, 0x20, 0x2f, 0x5f, 0x5f, 0x2f, 0x20,
	0x5f, 0x2f, 0x2f, 0x20, 0x5f, 0x20, 0x20, 0x2f, 0x20, 0x5f, 0x5f, 0x20,
	0x7c, 0x2f, 0x20, 0x2c, 0x20, 0x5f, 0x2f, 0x0a, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x2f, 0x5f, 0x5f, 0x5f, 0x2f, 0x5f, 0x2f, 0x20, 0x20,
	0x2f, 0x5f, 0x2f, 0x20, 0x7c, 0x5f, 0x5c, 0x5f, 0x5f, 0x5f, 0x2f, 0x5f,
	0x5f, 0x5f, 0x2f, 0x5f, 0x5f, 0x5f, 0x5f, 0x2f, 0x5f, 0x2f, 0x20, 0x7c,
	0x5f, 0x2f, 0x5f, 0x2f, 0x7c, 0x5f, 0x7c, 0x20, 0x0a, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x5f, 0x5f, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x20, 0x2f, 0x5f, 0x5f, 0x5f, 0x5f,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x20, 0x2f, 0x20, 0x2f,
	0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x2f, 0x20,
	0x2f, 0x5f, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x2f, 0x20, 0x5f, 0x5f, 0x2f, 0x20, 0x5f, 0x20, 0x5c, 0x20, 0x20,
	0x20, 0x28, 0x5f, 0x2d, 0x3c, 0x2f, 0x20, 0x5f, 0x5f, 0x2f, 0x20, 0x5f,
	0x20, 0x60, 0x2f, 0x20, 0x5f, 0x5f, 0x2f, 0x20, 0x5f, 0x5f, 0x2f, 0x0a,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x5f,
	0x5f, 0x2f, 0x5c, 0x5f, 0x5f, 0x5f, 0x2f, 0x20, 0x20, 0x2f, 0x5f, 0x5f,
	0x5f, 0x2f, 0x5c, 0x5f, 0x5f, 0x2f, 0x5c, 0x5f, 0x2c, 0x5f, 0x2f, 0x5f,
	0x2f, 0x20, 0x20, 0x5c, 0x5f, 0x5f, 0x2f, 0x20, 0x0a, 0x0a, 0x0a, 0x0a,
	0x0a, 0x09, 0x09, 0x09, 0x09, 0x09, 0x20, 0x20, 0x0a, 0x09, 0x09, 0x09,
	0x09, 0x09, 0x20, 0x20, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x09, 0x20, 0x20,
	0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x47, 0x61, 0x6d, 0x65, 0x20, 0x64, 0x65, 0x73, 0x69, 0x67, 0x6e, 0x2f,
	0x70, 0x72, 0x6f, 0x67, 0x72, 0x61, 0x6d, 0x6d, 0x69, 0x6e, 0x67, 0x20,
	0x62, 0x79, 0x20, 0x4b, 0x79, 0x6c, 0x65, 0x20, 0x4c, 0x61, 0x6e, 0x6d,
	0x6f, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x41, 0x64, 0x64, 0x69,
	0x74, 0x69, 0x6f, 0x6e, 0x61, 0x6c, 0x20, 0x70, 0x72, 0x6f, 0x67, 0x72,
	0x61, 0x6d, 0x6d, 0x69, 0x6e, 0x67, 0x20, 0x62, 0x79, 0x20, 0x4d, 0x69,
	0x63, 0x68, 0x61, 0x65, 0x6c, 0x20, 0x42, 0x6f, 0x79, 0x6c, 0x65, 0x20,
	0x28, 0x53, 0x6f, 0x66, 0x74, 0x72, 0x69, 0x78, 0x29, 0x0a, 0x00

};


// Game over screen
static const unsigned char loseScreen[] = {

	0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a,
	0x0d, 0x0a, 0x0d, 0x0a, 0x09, 0x09, 0x09, 0x20, 0x5f, 0x5f, 0x5f, 0x5f,
	0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f,
	0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x5f,
	0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0d, 0x0a, 0x09, 0x09, 0x09,
	0x28, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x5c, 0x28, 0x20, 0x20,
	0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x29, 0x28, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x29, 0x28, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x5c,
	0x0d, 0x0a, 0x09, 0x09, 0x09, 0x7c, 0x20, 0x28, 0x20, 0x20, 0x20, 0x20,
	0x5c, 0x2f, 0x7c, 0x20, 0x28, 0x20, 0x20, 0x20, 0x29, 0x20, 0x7c, 0x7c,
	0x20, 0x28, 0x29, 0x20, 0x28, 0x29, 0x20, 0x7c, 0x7c, 0x20, 0x28, 0x20,
	0x20, 0x20, 0x20, 0x5c, 0x2f, 0x0d, 0x0a, 0x09, 0x09, 0x09, 0x7c, 0x20,
	0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x28, 0x5f, 0x5f,
	0x5f, 0x29, 0x20, 0x7c, 0x7c, 0x20, 0x7c, 0x7c, 0x20, 0x7c, 0x7c, 0x20,
	0x7c, 0x7c, 0x20, 0x28, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x0d, 0x0a,
	0x09, 0x09, 0x09, 0x7c, 0x20, 0x7c, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20,
	0x7c, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x7c, 0x7c, 0x20, 0x7c,
	0x28, 0x5f, 0x29, 0x7c, 0x20, 0x7c, 0x7c, 0x20, 0x20, 0x5f, 0x5f, 0x29,
	0x20, 0x20, 0x20, 0x0d, 0x0a, 0x09, 0x09, 0x09, 0x7c, 0x20, 0x7c, 0x20,
	0x5c, 0x5f, 0x20, 0x20, 0x29, 0x7c, 0x20, 0x28, 0x20, 0x20, 0x20, 0x29,
	0x20, 0x7c, 0x7c, 0x20, 0x7c, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x7c,
	0x20, 0x28, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0d, 0x0a, 0x09, 0x09,
	0x09, 0x7c, 0x20, 0x28, 0x5f, 0x5f, 0x5f, 0x29, 0x20, 0x7c, 0x7c, 0x20,
	0x29, 0x20, 0x20, 0x20, 0x28, 0x20, 0x7c, 0x7c, 0x20, 0x29, 0x20, 0x20,
	0x20, 0x28, 0x20, 0x7c, 0x7c, 0x20, 0x28, 0x5f, 0x5f, 0x5f, 0x5f, 0x2f,
	0x5c, 0x0d, 0x0a, 0x09, 0x09, 0x09, 0x28, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f,
	0x5f, 0x5f, 0x29, 0x7c, 0x2f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x7c,
	0x7c, 0x2f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x7c, 0x28, 0x5f, 0x5f,
	0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x2f, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0d, 0x0a,
	0x09, 0x09, 0x09, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f,
	0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f,
	0x5f, 0x5f, 0x20, 0x0d, 0x0a, 0x09, 0x09, 0x09, 0x28, 0x20, 0x20, 0x5f,
	0x5f, 0x5f, 0x20, 0x20, 0x29, 0x7c, 0x5c, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x2f, 0x7c, 0x28, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x5c, 0x28,
	0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x29, 0x0d, 0x0a, 0x09, 0x09,
	0x09, 0x7c, 0x20, 0x28, 0x20, 0x20, 0x20, 0x29, 0x20, 0x7c, 0x7c, 0x20,
	0x29, 0x20, 0x20, 0x20, 0x28, 0x20, 0x7c, 0x7c, 0x20, 0x28, 0x20, 0x20,
	0x20, 0x20, 0x5c, 0x2f, 0x7c, 0x20, 0x28, 0x20, 0x20, 0x20, 0x20, 0x29,
	0x7c, 0x0d, 0x0a, 0x09, 0x09, 0x09, 0x7c, 0x20, 0x7c, 0x20, 0x20, 0x20,
	0x7c, 0x20, 0x7c, 0x7c, 0x20, 0x7c, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x7c,
	0x7c, 0x20, 0x28, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x28,
	0x5f, 0x5f, 0x5f, 0x5f, 0x29, 0x7c, 0x0d, 0x0a, 0x09, 0x09, 0x09, 0x7c,
	0x20, 0x7c, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x28, 0x20, 0x28, 0x20,
	0x20, 0x20, 0x29, 0x20, 0x29, 0x7c, 0x20, 0x20, 0x5f, 0x5f, 0x29, 0x20,
	0x20, 0x20, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x29, 0x0d,
	0x0a, 0x09, 0x09, 0x09, 0x7c, 0x20, 0x7c, 0x20, 0x20, 0x20, 0x7c, 0x20,
	0x7c, 0x20, 0x5c, 0x20, 0x5c, 0x5f, 0x2f, 0x20, 0x2f, 0x20, 0x7c, 0x20,
	0x28, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x28, 0x5c, 0x20,
	0x28, 0x20, 0x20, 0x20, 0x0d, 0x0a, 0x09, 0x09, 0x09, 0x7c, 0x20, 0x28,
	0x5f, 0x5f, 0x5f, 0x29, 0x20, 0x7c, 0x20, 0x20, 0x5c, 0x20, 0x20, 0x20,
	0x2f, 0x20, 0x20, 0x7c, 0x20, 0x28, 0x5f, 0x5f, 0x5f, 0x5f, 0x2f, 0x5c,
	0x7c, 0x20, 0x29, 0x20, 0x5c, 0x20, 0x5c, 0x5f, 0x5f, 0x0d, 0x0a, 0x09,
	0x09, 0x09, 0x28, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x29, 0x20,
	0x20, 0x20, 0x5c, 0x5f, 0x2f, 0x20, 0x20, 0x20, 0x28, 0x5f, 0x5f, 0x5f,
	0x5f, 0x5f, 0x5f, 0x5f, 0x2f, 0x7c, 0x2f, 0x20, 0x20, 0x20, 0x5c, 0x5f,
	0x5f, 0x2f, 0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x09, 0x09, 0x09, 0x0d,
	0x0a, 0x09, 0x09, 0x09, 0x0d, 0x0a, 0x09, 0x09, 0x09, 0x20, 0x20, 0x20,
	0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x53, 0x70, 0x61, 0x63, 0x65, 0x20,
	0x42, 0x61, 0x72, 0x20, 0x74, 0x6f, 0x20, 0x70, 0x6c, 0x61, 0x79, 0x20,
	0x61, 0x67, 0x61, 0x69, 0x6e, 0x21, 0x00

};

// you win screen
static const unsigned char winScreen[] = {

	0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2f,
	0x24, 0x24, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x24, 0x24, 0x20, 0x2f,
	0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x20, 0x20, 0x2f, 0x24, 0x24, 0x20,
	0x20, 0x20, 0x2f, 0x24, 0x24, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x20, 0x24, 0x24,
	0x20, 0x20, 0x20, 0x2f, 0x24, 0x24, 0x2f, 0x2f, 0x24, 0x24, 0x5f, 0x5f,
	0x20, 0x20, 0x24, 0x24, 0x7c, 0x20, 0x24, 0x24, 0x20, 0x20, 0x7c, 0x20,
	0x24, 0x24, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x20, 0x20, 0x24, 0x24, 0x20, 0x2f,
	0x24, 0x24, 0x2f, 0x7c, 0x20, 0x24, 0x24, 0x20, 0x20, 0x5c, 0x20, 0x24,
	0x24, 0x7c, 0x20, 0x24, 0x24, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x0d,
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x5c, 0x20, 0x20, 0x24, 0x24, 0x24, 0x24, 0x2f, 0x20,
	0x7c, 0x20, 0x24, 0x24, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x7c, 0x20,
	0x24, 0x24, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x0d, 0x0a, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x5c, 0x20, 0x20, 0x24, 0x24, 0x2f, 0x20, 0x20, 0x7c, 0x20, 0x24,
	0x24, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x7c, 0x20, 0x24, 0x24, 0x20,
	0x20, 0x7c, 0x20, 0x24, 0x24, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c,
	0x20, 0x24, 0x24, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x20, 0x20,
	0x7c, 0x20, 0x24, 0x24, 0x7c, 0x20, 0x24, 0x24, 0x20, 0x20, 0x7c, 0x20,
	0x24, 0x24, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24,
	0x20, 0x20, 0x20, 0x7c, 0x20, 0x20, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24,
	0x2f, 0x7c, 0x20, 0x20, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x2f, 0x0d,
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x2f, 0x20, 0x20, 0x20,
	0x20, 0x5c, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x2f, 0x20, 0x20, 0x5c,
	0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x2f, 0x20, 0x0d, 0x0a, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0d,
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x2f, 0x24, 0x24, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x2f, 0x24, 0x24, 0x20, 0x2f, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x20,
	0x2f, 0x24, 0x24, 0x20, 0x20, 0x20, 0x2f, 0x24, 0x24, 0x0d, 0x0a, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x7c, 0x20, 0x24, 0x24, 0x20, 0x20, 0x2f, 0x24, 0x20, 0x7c, 0x20, 0x24,
	0x24, 0x7c, 0x5f, 0x20, 0x20, 0x24, 0x24, 0x5f, 0x2f, 0x7c, 0x20, 0x24,
	0x24, 0x24, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x0d, 0x0a, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20,
	0x24, 0x24, 0x20, 0x2f, 0x24, 0x24, 0x24, 0x7c, 0x20, 0x24, 0x24, 0x20,
	0x20, 0x7c, 0x20, 0x24, 0x24, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x24,
	0x24, 0x7c, 0x20, 0x24, 0x24, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24,
	0x2f, 0x24, 0x24, 0x20, 0x24, 0x24, 0x20, 0x24, 0x24, 0x20, 0x20, 0x7c,
	0x20, 0x24, 0x24, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x20, 0x24, 0x24,
	0x20, 0x24, 0x24, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x24, 0x24,
	0x5f, 0x20, 0x20, 0x24, 0x24, 0x24, 0x24, 0x20, 0x20, 0x7c, 0x20, 0x24,
	0x24, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x20, 0x20, 0x24, 0x24, 0x24,
	0x24, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x24, 0x2f, 0x20, 0x5c,
	0x20, 0x20, 0x24, 0x24, 0x24, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x20,
	0x20, 0x7c, 0x20, 0x24, 0x24, 0x5c, 0x20, 0x20, 0x24, 0x24, 0x24, 0x0d,
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x2f, 0x20, 0x20, 0x20, 0x5c, 0x20,
	0x20, 0x24, 0x24, 0x20, 0x2f, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x7c,
	0x20, 0x24, 0x24, 0x20, 0x5c, 0x20, 0x20, 0x24, 0x24, 0x0d, 0x0a, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x7c, 0x5f, 0x5f, 0x2f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x5f, 0x5f,
	0x2f, 0x7c, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x2f, 0x7c, 0x5f, 0x5f,
	0x2f, 0x20, 0x20, 0x5c, 0x5f, 0x5f, 0x2f, 0x0d, 0x0a, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0d, 0x0a,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x2f, 0x24, 0x24, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x2f, 0x24, 0x24, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x2f, 0x24, 0x24, 0x0d, 0x0a, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20,
	0x24, 0x24, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c,
	0x20, 0x24, 0x24, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x7c, 0x20, 0x24, 0x24, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x24,
	0x24, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x24, 0x24, 0x0d, 0x0a,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x7c, 0x5f, 0x5f, 0x2f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x2f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x7c, 0x5f, 0x5f, 0x2f, 0x0d, 0x0a, 0x09, 0x09, 0x09,
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x20, 0x20, 0x0d, 0x0a, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x2f, 0x24, 0x24, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x2f, 0x24, 0x24, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x2f, 0x24, 0x24, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x5f, 0x5f,
	0x2f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x5f,
	0x5f, 0x2f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c,
	0x5f, 0x5f, 0x2f, 0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x0d, 0x0a, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
	0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x53, 0x70, 0x61, 0x63, 0x65,
	0x20, 0x42, 0x61, 0x72, 0x20, 0x74, 0x6f, 0x20, 0x70, 0x6c, 0x61, 0x79,
	0x20, 0x61, 0x67, 0x61, 0x69, 0x6e, 0x21, 0x0d, 0x0a, 0x0d, 0x0a, 0x00

};

#endif
