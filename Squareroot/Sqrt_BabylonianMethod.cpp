#include <iostream>

using namespace std;

//�Ҽ��� 5�ڸ����� ������ ���ϴ� �Լ�
double mySqrt(double input) {

	//������ ������ ����
	double root = 1;

	while (true) {

		// �ٺ��δϾ� ��� ����
		root = (root + input / root) / 2.0;

		// �������� ������ ���
		if (root * root == input)
		{
			break;
		}

		// �������� �ڿ����� �ƴ� ���
		double differ = abs((root * root) - input);
		if (differ <= 10e-5) {
			break;
		}
	}
	return root;
}

int main() {
	double Input;

	cout << "Enter number: ";
	cin >> Input;
	cout << "Root of " << Input << " is " << mySqrt(Input) << endl;
	
}

