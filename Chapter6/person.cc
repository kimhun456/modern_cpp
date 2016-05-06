#include <iostream>

using namespace std;

class Person{
public:
    void setHeight(int height){
        this->height = height;
    }

    int getHeight(){
        return height;
    }

    void setWeight(int weight){
        this->weight = weight;
    }

    int getWeight();
private :
    int height;
    int weight;
};


int Person::getWeight() {
    return weight;
}

int main(){

    Person person;

    person.setHeight(123);
    person.setWeight(67);
    cout << "his Height is " << person.getHeight() << endl;
    cout << "his weight is " << person.getWeight() << endl;


    return 0;
}
