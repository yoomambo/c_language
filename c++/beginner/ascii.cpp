#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // 'A'에서 숫자를 더하면 integer로 전환
    char x = 'A';
    cout << x + 1 <<'\n';

    // 'A'의 아스키 코드 값 확인
    int a = 'A';
    cout << a +1<< "\n";
 
    // 65를 문자로 표현
    int c = 65;
    char b = c;
    cout << b << "\n";
    c=c+1;
    cout << char(c) << "\n";
    b = c;
    cout << b << "\n";
    cout << b +1<< "\n";
 
    return 0;
}