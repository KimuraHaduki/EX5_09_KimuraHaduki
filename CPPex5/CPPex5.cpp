#include <iostream>
using namespace std;
#include "getVolumeSurface.h"

bool isSendable(BOX* box) {
	double size = box->x + box->y + box->z;
	if (size < 60) {
		box->packSize = 60;
	}
	else if (size < 80) {
		box->packSize = 80;
	}
	else if (size < 100) {
		box->packSize = 100;
	}
	else if (size < 120) {
		box->packSize = 120;
	}
	else if (size < 140) {
		box->packSize = 140;
	}
	else if (size < 160) {
		box->packSize = 160;
	}
	else if (size < 180) {
		box->packSize = 180;
	}
	else if (size < 200) {
		box->packSize = 200;
	}
	else {
		return false;
	}
	return true;
}
int main()
{
	const int BoxCount = 3;
	BOX boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++) {
		cout << "幅を入力：";
		cin >> boxes[i].x;
		cout << "高さを入力：";
		cin >> boxes[i].y;
		cout << "奥行を入力：";
		cin >> boxes[i].z;

		getVolumeSurface(&boxes[i]);
		bool ok = isSendable(&boxes[i]);

		if (ok == true) {
			cout << boxes[i].packSize << "サイズで送れます。" << endl;
		}
		else {
			cout << "宅急便では送れません。" << endl;
		}
	}
	return 0;
}