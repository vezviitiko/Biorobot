#include "TREMkurs.h"


void TREMkurs::ButStart(){
	data_launch = "";
	tabMain.lab1 = "";
	tabMain.lab1server = "";
	/*if (this->butstop) {
		this->butstop = false;
		KillTimeCallback();
	}*/
	
	tabMain.lab1server = "Данные отправлены на сервер";
	//system("pause");
	data_pauls = tabMain.puls;
	data_davl1 = tabMain.davl1;
	data_davl2 = tabMain.davl2;
	tabMain.lab1server = "Данные отправлены на сервер\nДанные обрабатываются на сервере";
	//system("pause");
	if (data_pauls == 0 or data_davl1 == 0 or data_davl2 == 0)
		{	data_launch = "Нужна реанимация и срочный массаж сердца";	}
	else if (data_pauls > 150 or data_davl1 > 150 or data_davl2 > 150)
		{	data_launch = "Аппаратура сломана!";	}
	else if (data_pauls < 0 or data_davl1 < 0 or data_davl2 < 0)
		{	data_launch = "Аппаратура сломана!";	}
	else if ((data_pauls > 0 and data_pauls < 50) and (data_davl1 > 109 and data_davl1 < 141) 
				and (data_davl2 > 69 and data_davl2 < 91))
				{	data_launch = "Ввести холиноблокатор или ксантин";	}
	else if ((data_pauls > 0 and data_pauls < 50) and (data_davl1 > 1 and data_davl1 < 111) 
				and (data_davl2 > 1 and data_davl2 < 70))
				{	data_launch = "Ввести адреналин или аналоги ";	}
	else if ((data_pauls > 0 and data_pauls < 60) and (data_davl1 > 139) and (data_davl2 > 89))
				{	data_launch = "Ввести альфа-адреноблокаторы/ингибиторы\nАПФ/блокаторы ангиотензиновых рецепторов";	}
	else if ((data_pauls > 49 and data_pauls < 60) and (data_davl1 > 109 and data_davl1 < 141) 
				and (data_davl2 > 69 and data_davl2 < 91))
				{	data_launch = "Продолжать мониторинг, \nприготовить холиноблокатор или ксантин";	}
	else if ((data_pauls > 49 and data_pauls < 60) and (data_davl1 > 89 and data_davl1 < 111) 
				and (data_davl2 > 59 and data_davl2 < 71))
				{	data_launch = "Необходимо принять настойку элеутерококка";	}
	else if ((data_pauls > 59 and data_pauls < 91) and (data_davl1 > 109 and data_davl1 < 141) 
				and (data_davl2 > 69 and data_davl2 < 91))
				{	data_launch = "Продолжать мониторинг";	}
	else if ((data_pauls > 89 and data_pauls < 111) and (data_davl1 > 109 and data_davl1 < 141) 
				and (data_davl2 > 69 and data_davl2 < 91))
				{	data_launch = "Необходимо принять седативные средства, Фалипамил";}
	else if ((data_pauls > 89 and data_pauls < 111) and (data_davl1 > 1 and data_davl1 < 111) 
				and (data_davl2 > 1 and data_davl2 < 71))
				{	data_launch = "Проверить пациента на предмет:\nа) обезвоживания – устранить дефицит жидкости;\nб) кровопотери – восполнить объем циркулирующей крови\n (в\\в введение растворов и переливание);\nв) анемии – повысить уровень гемоглобина и эритроцитов\n в крови;\nг) сужение аортального клапана – необходима операция по\n его замене;\nВ отсутствии вышеописанного пациенту необходимо принять\n Валокордин/Мезапам/Грандаксин";}
	else if ((data_pauls > 89 and data_pauls < 111) and (data_davl1 > 140) 
				and (data_davl2 > 89))
				{	data_launch = "Ввести один препарат из группы быстродействующих\n бета-блокаторов (метопролол, анаприлин),\n при аритмичном пульсе – Верапамил (Изоптин)";}
	else if ((data_pauls > 109) and (data_davl1 > 109) and (data_davl2 > 69))
				{	data_launch = "Ввести быстродействующий бета-блокатор в/в\n (Беталок, Анаприлин)\n, при аритмичном пульсе – Верапамил (Изоптин).\n Принять Диазепам в составе (Релиума или Реланиума) или\n аналогичные седативные средства.";}
	else if ((data_pauls > 109) and (data_davl1 > 1 and data_davl1 < 111) 
				and (data_davl2 > 1 and data_davl2 < 71))
				{	data_launch = "Проверить пациента на предмет:\nа) обезвоживания – устранить дефицит жидкости;\nб) кровопотери – восполнить объем циркулирующей крови\n (в\\в введение растворов и переливание);\nв) анемии – повысить уровень гемоглобина и эритроцитов\n в крови;\nг) сужение аортального клапана – необходима операция\n по его замене;\nВ отсутствии вышеописанного пациенту необходимо\n принять препараты из группы\nСердечных гликозидов или Блокаторов адренорецепторов";}
			
	else	{	data_launch = "Всё нормально";	}
	
	tabMain.lab1server = "Данные отправлены на сервер\nДанные обрабатываются на сервере\nДанные обработаны и отправлены на ПК";
	tabMain.lab1 = data_launch;
}

void TREMkurs::ButStop(){
	//	this->butstop = true;
	data_launch = "";
	tabMain.lab1 = "";
	tabMain.lab1server = "";
}
