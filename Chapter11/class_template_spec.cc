#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

// 명시적으로 int를 default로 둘 수 있다.
template <typename T =int>
class MyArray{
private:
    vector<T> list;

public:


    void add_list(T const&a);
    void delete_last_list(void);
    void show_list(void);
};

template <typename T>
void MyArray<T>::add_list(T const &elements){
    list.push_back(elements);
}

template <typename T>
void MyArray<T>::delete_last_list(){
    list.pop_back();
}

template <typename T>
void MyArray<T>::show_list(){
    cout << "[Mylist list look up]"<< endl;

    for(typename vector<T>::iterator i = list.begin(); i!=list.end(); ++i){
        cout << *i << endl;
    }
}


template <>
class MyArray<int> {
private:
    vector<int> list;

public:
    void add_list(int const &a);
    void delete_last_list();
    void show_list();
};

void MyArray<int>::add_list(const int &element){
    list.push_back(element);
}
void MyArray<int>::delete_last_list(){
    list.pop_back();
}
void MyArray<int>::show_list(){
    cout << "특수형 템플릿" <<endl;
    for(typename vector<int>::iterator i= list.begin(); i!=list.end(); ++i){
        cout << *i << endl;
    }
}


int main(){

    MyArray<int> list1;
    list1.add_list(1);
    list1.add_list(2);
    list1.add_list(3);
    list1.show_list();

    MyArray<double> list2;
    list2.add_list(1.1);
    list2.add_list(2.1);
    list2.add_list(3.1);
    list2.show_list();

    return 0 ;
}
