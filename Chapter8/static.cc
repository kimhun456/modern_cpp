#include <iostream>

using namespace std;

class ChulSoo{

public:
    static int publicCounter;

    ChulSoo(){

        cout << publicCounter <<" 번쟤 철수 생성자 호출 "<< endl;

        publicCounter++;

    }

private:
    static int privateCounter;
protected:
    static int protectedCounter;


};

int ChulSoo::publicCounter =0;
int ChulSoo::privateCounter =0;


int main(){
    ChulSoo chulsoo1;
    ChulSoo chulsoo2;

    return 0;
}
