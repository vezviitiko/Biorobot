#ifndef _TREMkurs_TREMkurs_h
#define _TREMkurs_TREMkurs_h

#include <CtrlLib/CtrlLib.h>

using namespace Upp;
#define IMAGECLASS TutorialImg
#define IMAGEFILE <TREMkurs/images.iml>
#include <Draw/iml_header.h>

#define LAYOUTFILE <TREMkurs/TREMkurs.lay>
#include <CtrlCore/lay.h>

class TREMkurs : public TopWindow {
public:
	typedef TREMkurs CLASSNAME;
	TREMkurs();
	TabDlg dlg;
	int data_pauls;
	int data_davl1;
	int data_davl2;
	String data_launch;
	bool butstop;
	void ButStart();
	void ButStop();
	WithTabMainLayout<ParentCtrl> tabMain;
	void TabMainScreen();
	WithTabManLayout<ParentCtrl> tabMan;
	void TabManScreen();
};

#endif
