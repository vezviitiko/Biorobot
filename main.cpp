#include "TREMkurs.h"

TREMkurs::TREMkurs()
{
	dlg(tabMain, "Главная")(tabMan, "Помощь");
	TabMainScreen();
	TabManScreen();
	dlg.Run();
}

GUI_APP_MAIN
{
	LOG("START");
	TREMkurs();
	LOG("END");
}
