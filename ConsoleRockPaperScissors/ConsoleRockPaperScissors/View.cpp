#include "View.h"


View::View(){
	
}
View::View(Model* ArgumentModel){
	drawStringData[0] = "�L�[���͂��s���Ă�������";
	drawStringData[1] = "���Ȃ��̏o�������";
	drawStringData[2] = "cpu�̏o�������";
	drawStringData[3] = "�ł��B";
	drawStringData[4] = "���Ȃ���";
	drawStringData[5] = "����";
	drawStringData[6] = "����";
	drawStringData[7] = "�A�C�R";
	model = ArgumentModel;
}

View::~View(){
	
}
/*	makeC�g 2014/3/24
    ���ׂĂ̕`��

    ����:	state�ɉ����ĕ`����e��ς���
    �߂�l:	����
	���l:	
*/
void View::draw(int state){
	makeStringComment(state);
}
void View::makeStringComment(int state){

	using namespace std;

	switch (state){
	case 0:
		cout << drawStringData[0] << endl;
		break;
	case 1:
		cout << drawStringData[1] << model->getPlayerHand() << drawStringData[3] << endl;
		cout << drawStringData[2] << model->getnpcHand() << drawStringData[3] << endl;
		break;
	case 2:
		break;
	}
}
