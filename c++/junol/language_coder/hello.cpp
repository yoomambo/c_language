// 키 바인딩을 이 파일에 넣어서 기본값을 덮어씁니다.

/*
[
    //컴파일
    { "key": "ctrl+alt+c", "command": "workbench.action.tasks.build" },
    
    //실행
    { "key": "ctrl+alt+r", "command": "workbench.action.tasks.test" }
]
*/

#include <iostream>

using namespace std;

void name();
int other();

int main()
{
    cout << "Hello, World!" << endl;

    name();

    int result = other();
    cout << "The Result is " << result;
    return 0;
}

void name()
{
    cout << "My Name is Hyuk Jun" << endl;
}

int other()
{
    cout << "Other Target is nothing" << endl;
    return 100;
}