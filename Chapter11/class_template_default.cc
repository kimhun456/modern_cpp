#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

// 명시적으로 int를 default로 둘 수 있다.
template <typename T =int, int init= 4>
class MyArray{
private:
    vector<T> list;

public:
    MyArray(){

        for(int i=0;i<init;i++){
            list.push_back(i);
        }
    }

    void add_list(T const&a);
    void delete_last_list(void);
    void show_list(void);
};

template <typename T, int init>
void MyArray<T,init>::add_list(T const &elements){
    list.push_back(elements);
}

template <typename T, int init>
void MyArray<T,init>::delete_last_list(){
    list.pop_back();
}

template <typename T,int init>
void MyArray<T,init>::show_list(){
    cout << "[Mylist list look up]"<< endl;

    for(typename vector<T>::iterator i = list.begin(); i!=list.end(); ++i){
        cout << *i << endl;
    }
}



int main(){

    MyArray<int,9> array1;
    // 위에 꺼랑 아래꺼랑 다른 클래스로 취급된다.
    MyArray<> array3;
    array1.show_list();
    array3.show_list();
    array1.delete_last_list();
    array1.delete_last_list();

    array1.show_list();

    MyArray<double,23> array2;

    array2.show_list();

    array2.delete_last_list();
    array2.delete_last_list();

    array2.show_list();

    return 0 ;
}
