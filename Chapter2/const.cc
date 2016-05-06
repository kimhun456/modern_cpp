#include <iostream>
#include <cstdio>

using namespace std;

int getSize() {

	return 10;
}

int main() {

  // 컴파일 타임에  할당
	const int size = 100;
  // 런타임에 할당
	const int bufferSize = getSize();
  // 한정자는 한정자 참조라를 지정할수 있다.
  const int &ptr = bufferSize;

	cout << ptr << endl;

	return 0;
}
