#include <iostream>

using namespace std;


/**

    exception 클래스를 상속받게 되면
 표즌 excetion클래스에 있는 모든 예외를 처리 할 수 있게 된다.
 */
class MyException : public exception{
    int myValue;
public:

    MyException(int value) : myValue(value){

    }

    virtual const char * what() const throw()
    {
        if(myValue<10)
            return  "10이상의 값을 입력해 주세요 " ;
        else if(myValue >20)
            return  "20이하의 값을 입력해 주세요. " ;

        else if(myValue%7 != 0)
            return  "7의 배수를 입력해 주세요 .";
        return "Wrong Exception " ;
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
        cout << e.what() << endl;
    }


}
