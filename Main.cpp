
/*


	$file:						Frogger Remake ( For the console)
	$purpose:					Game entry point
	$author:					Kyle Lanmon / Michael Boyle (Softrix)

	History:

		Rewritten welcome screen to remove external file requirement.
		Rewritten Log code to support different size logs, different colours and speeds.
		Rewritten Car code to support different size cars/trucks, different colours and speeds.
		Optimised code in several areas.
		Fixed several compiler warnings.
		Written Frog->Car collision code

	Todo:
		
		collision with logs = ride with log until move up or down off the log
		test for non collision of logs, i.e. drop in water = 1 less life.
		test for win zones (and all zones completed = win)
		score increase on successful zone.

*/

#include <iostream>
#include "Frogger.h"


int main()
{
	Engine Frogger;
	Frogger.Run();
	return 0;
}