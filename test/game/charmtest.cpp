#include <game.h>
#include <joy.h>
#include <gs.h>

#include <cassert>

int main()
{
	g_pgsCur->c_coins = 1; // set coins to 1
	g_grfcht &= ~((int)FCHT::InfiniteCharms); // disable infinite charms

	// Confirm max charm count is 2
	assert(CcharmMost() == 2);

	// Test checking if a charm is available
	g_pgsCur->c_charms = 0;
	assert(FCharmAvailable() == false);

	g_pgsCur->c_charms = 1;
	assert(FCharmAvailable() == true);

	g_pgsCur->c_charms = -1;
	assert(FCharmAvailable() == false);

	g_pgsCur->c_charms = 0;
	g_grfcht |= (int)FCHT::InfiniteCharms; // enable infinite charms cheat
	assert(FCharmAvailable() == true);

	return 0;
}
