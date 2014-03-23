#include "View.h"


View::View(){
	
}
View::View(Model* ArgumentModel){
	drawStringData[0] = "キー入力を行ってください";
	drawStringData[1] = "あなたの出した手は";
	drawStringData[2] = "cpuの出した手は";
	drawStringData[3] = "です。";
	drawStringData[4] = "あなたの";
	drawStringData[5] = "勝ち";
	drawStringData[6] = "負け";
	drawStringData[7] = "アイコ";
	model = ArgumentModel;
}

View::~View(){
	
}
/*	makeCト 2014/3/24
    すべての描画

    引数:	stateに応じて描画内容を変える
    戻り値:	無し
	備考:	
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
