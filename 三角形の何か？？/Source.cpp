#include <iostream>
#include <cmath>

//解き方。
//一辺が100で各角度が60度の真三角形を二つ並べた平行四辺形を考える。
//正弦定理より、AB*Sin(Theta)で台形とみなした平行四辺形の垂線を計算する。
//三角形の垂線を台形の垂線とみなして垂らすと（(50+100)*垂線)/2の台形と(50*垂線)/2の直角三角形が現れる。
//その面積を足すことで完全な平行四辺形の面積が取れる。

double SineTheorem(double AB, double Theta) {
	return AB * std::sin(Theta * (180.0 / 3.141592));
}
int main() {

	double L = 100;
	double A = 60;

	double Perpendicular = SineTheorem(L, A);

	double X = ((L + (L/2)) * Perpendicular) / 2;
	L = 50;
	double Y =  (L * Perpendicular) / 2;

	std::cout <<X+Y<< std::endl;

	return 0;
}