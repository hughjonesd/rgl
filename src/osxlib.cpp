#include "config.hpp"
// ---------------------------------------------------------------------------
#ifdef RGL_CARBON
// ---------------------------------------------------------------------------
#include "lib.hpp"
// ---------------------------------------------------------------------------
#include "osxgui.hpp"
// ---------------------------------------------------------------------------
#include <stdio.h>
#include <cassert>
// ---------------------------------------------------------------------------
namespace lib {
// ---------------------------------------------------------------------------
void printMessage(const char* message)
{
  printf(message); printf("\n");
}
// ---------------------------------------------------------------------------
double getTime()
{
  return 0.0;
}
// ---------------------------------------------------------------------------
gui::GUIFactory* gGUIFactory = 0;
// ---------------------------------------------------------------------------
gui::GUIFactory* getGUIFactory()
{ 
  return gGUIFactory;
}
// ---------------------------------------------------------------------------
bool init()
{
	lib::printMessage("RGL/OSX Carbon");
  assert(gGUIFactory == 0);
	gGUIFactory = new gui::OSXGUIFactory();
  return true;
}
// ---------------------------------------------------------------------------
void quit()
{
	assert(gGUIFactory);
  delete gGUIFactory;
	gGUIFactory = 0;
}
// ---------------------------------------------------------------------------
} // namespace lib
// ---------------------------------------------------------------------------
#endif // RGL_CARBON
// ---------------------------------------------------------------------------


