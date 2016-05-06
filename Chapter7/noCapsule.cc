#include <iostream>
using namespace std;

/*
 *  Capsule화
 *
 *  외부사요자가 알 필요가 없는 클래스를 캡슐화하여 공개된 인터페이슬르 단순화 할 수 있다.
 *  데이터를 은닉하여 세부 구현에 대해서 알 필요가 없다.
 *  세부 구현의 내용이 외부에 노출되지 않으므로, 세부 구현을 변경하더라도 외부 인터페이스를 사용한 곳의 영향을 최소화 할 수 있다.
 *  캡슐화가 잘되어 있는 클래스는 다른 곳에서 재활용 할 수 있다.
 *
 */

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
public :
    void play(){
        cout << "mp3 Play the song!" << endl;
    }
};

int main(){

    PowerDevice powerDevice;
    Memory memory;
    File file;
    MP3 mp3;

    powerDevice.powerUp();
    memory.expand();
    file.load();
    mp3.play();

    return 0;
}
