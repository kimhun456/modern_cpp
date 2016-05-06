#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

template <typename T>
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



int main(){

    MyArray<int> array1;

    array1.add_list(1);
    array1.add_list(2);
    array1.add_list(3);
    array1.add_list(4);
    array1.add_list(5);
    array1.add_list(6);

    array1.show_list();

    array1.delete_last_list();
    array1.delete_last_list();

    array1.show_list();

    MyArray<double> array2;

    array2.add_list(1.1);
    array2.add_list(2.2);
    array2.add_list(3.2);
    array2.add_list(4.2);
    array2.add_list(5.2);
    array2.add_list(6.2);

    array2.show_list();

    array2.delete_last_list();
    array2.delete_last_list();

    array2.show_list();

    return 0 ;
}
