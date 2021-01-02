#include <iostream>

using namespace std;

//소수점 5자리까지 제곱근 구하는 함수
double mySqrt(double input) {

	//임의의 제곱근 설정
	double root = 1;

	while (true) {

		// 바벨로니아 방법 적용
		root = (root + input / root) / 2.0;

		// 제곱근이 정수인 경우
		if (root * root == input)
		{
			break;
		}

		// 제곱근이 자연수가 아닌 경우
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

