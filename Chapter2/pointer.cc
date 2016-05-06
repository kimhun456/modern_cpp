#include <iostream>
#include <cstdio>

using namespace std;

int getSize() {

	return 10;
}

int main() {

	int value = 100;
	float value2 = 1.11;
	int *pointValue = &value;

	// c++11 이후에는 널 포인터를 할당하여 쓰레기값이 저장되는 걸 막는다.
	int *ppp = nullptr;


	// void 포인터의 경우 여러가지 자료형을 저장 할 수있다. c++11 이 후에 책정되었다.
	void *voidPointer = &value;
	voidPointer = &value2;

	int i; int arr[100];

	for (i = 0; i < 10; i++) {
		arr[i] = i * 2;
	}

	// 배열의 첫번째 값을 포인터로 받아서 처리
	int *ptr = arr;

	cout << arr[1] << endl;
	cout << *(ptr + 1) << endl;

	// cast 문법을 사용해 명시적으로 자료형을 변환할 수 있다.

	float x = 100.123123;
	double j = 200.123123;

	float count = static_cast<float> (j / x);

	cout << count << endl;

	double d = 1212;

	void *p = &d;

	// 주로 static_cast는 void* 형 포인터를 원하는 자료형의 포인터로 만드는 데 쓰이게 된다.
	double *dp = static_cast<double*> (p);

	cout << *dp << endl;


	return 0;
}
