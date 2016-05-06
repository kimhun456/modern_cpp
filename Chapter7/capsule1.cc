#include <iostream>
using namespace std;


class File{
public:
    void load(){
        cout << "mp3 file is loaded on memory" << endl;
    }
};

class PowerDevice{
public:
    void powerUp(){
        cout << "mp3 play를 위한 파워를 올립니다. " << endl;
    }
};

class Memory{
public:
    void expand(){
        cout << "mp3 play를 위한 메모리를 늘립니다." << endl;
    }
};

class MP3{
/*
    File , memory, powerDevice 등은 전부 추상화로 숨기게 된다.
*/
private:
    File file;
    PowerDevice powerDevice;
    Memory memory;
public :
    void play(){
        powerDevice.powerUp();
        memory.expand();
        file.load();
        cout << "mp3 Play the song!" << endl;
    }
};

int main(){

    MP3 mp3;

    mp3.play();

    return 0;
}
