#include <iostream>
#include <cmath>

//�������B
//��ӂ�100�Ŋe�p�x��60�x�̐^�O�p�`�����ׂ����s�l�ӌ`���l����B
//�����藝���AAB*Sin(Theta)�ő�`�Ƃ݂Ȃ������s�l�ӌ`�̐������v�Z����B
//�O�p�`�̐������`�̐����Ƃ݂Ȃ��Đ��炷�Ɓi(50+100)*����)/2�̑�`��(50*����)/2�̒��p�O�p�`�������B
//���̖ʐς𑫂����ƂŊ��S�ȕ��s�l�ӌ`�̖ʐς�����B

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