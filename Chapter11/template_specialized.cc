#include <iostream>
#include <cstring>
using namespace std;
/*
    함수 템플릿 특수화는 먼저 함수 템플릿을 정의한 다음에 해당 함수에 대해 특수화를 정의

 */
template <typename T>
T const add(T const &a, T const &b){
    return a+b;
}

template<>
char * const add<char *>(char * const &a, char* const &b){
    cout << "specialized " << endl;
    return strcat(a,b);
}

char * const add(char * const &a, char* const &b){
    cout << "overloading" << endl;
    return strcat(a,b);
}

int main(){

    char a[20]  = "Hello";
    char b[20] = "World";

    cout << add(a,b)<< endl;

    cout << add<char*> (a,b) << endl;

    cout << add(1,2) << endl;

    return 0;
}
