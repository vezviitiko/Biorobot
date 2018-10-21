#include "TREMkurs.h"

#define IMAGECLASS TutorialImg
#define IMAGEFILE <TREMkurs/images.iml>
#include <Draw/iml_source.h>

void TREMkurs::TabMainScreen(){
	//tabMain.image_target.SetImage(TutorialImg::ris2());
	//tabMain.image_puls.SetImage(TutorialImg::tochka0());
	//tabMain.image_puls.TopPosZ(300, 100).LeftPosZ(300, 100);
	//tabMain.image_davl.SetImage(TutorialImg::davlen0());
	tabMain.image_target.SetImage(TutorialImg::ris2());
	tabMain.puls = 0;
	tabMain.davl1 = 0;
	tabMain.davl2 = 0;
	
	this->butstop = false;
	/*tabMain.btnStart.WhenAction = {
		this->butstop = false;
		KillTimeCallback(); // удаление предыдущего запуска если он есть
		SetTimeCallback(-200, tabMain.btnStart.WhenPush = THISBACK(ButStart));
		};*/
	//SetTimeCallback(-200, tabMain.btnStart.WhenPush = THISBACK(ButStart));
	tabMain.btnStart.WhenPush = THISBACK(ButStart);
	tabMain.btnStop.WhenPush = THISBACK(ButStop);
	
}

void TREMkurs::TabManScreen(){
	tabMan.image_logo.SetImage(TutorialImg::logmed());
}
