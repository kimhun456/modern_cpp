#include <iostream>

using namespace std;


/**

    사용자 정의 예외 클래스라고 부른다.
    내가 익센션을 위한 객체를 지정할 수 있다.
 */
class MyException{
    int myValue;
public:

    MyException(int value) : myValue(value){

    }

    void exceptionResult(){
        if(myValue<10)
            cout << "10이상의 값을 입력해 주세요 " << endl;
        else if(myValue >20)
            cout << "20이하의 값을 입력해 주세요. "  << endl;
        else if(myValue%7 != 0)
            cout << "7의 배수를 입력해 주세요 ." << endl;
    }

};

int main(){


    int value;

    try{

        cout << "10과 20 사이의 7의 배수를 입력해주세요 ." <<endl;

        cin >> value;

        if(value<10 | value > 20 | value % 7 != 0)
            throw MyException(value);

        cout << " Answer  : " << value << endl;

    }catch(MyException &e){
        e.exceptionResult();
    }


}
