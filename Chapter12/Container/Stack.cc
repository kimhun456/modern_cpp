#include <iostream>
#include <stack>

using namespace std;



/**
    stack은 FILO자료구조인다.
    처음 들어온 인자가 마지막으로 나가게 되는 구조를 가지고 있다.
 */
int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    while(!st.empty()){

        cout << st.top() << endl;
        st.pop();
    }


    return 0;
}
