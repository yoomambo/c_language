/*

정사각형의 한 변의 길이 n을 입력받은 후 다음과 같은 문자로 된 정사각형 형태로 출력하는 프로그램을 작성하시오.


< 처리조건 >
문자의 진행 순서는 맨 오른쪽 아래에서 위쪽으로 'A'부터 차례대로 채워나가는 방법으로 아래 표와 같이 왼쪽 위까지 채워 넣는다. 
'Z' 다음에는 다시 'A'부터 반복된다.

<입력> 
정사각형 한 변의 길이 n(n의 범위는 1이상 100 이하의 정수)을 입력받는다.

*/

#include <iostream>

using namespace std;

int main()
{
    // index = 26
    char x[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    // char x ='A';
    int number;
    cout << "Input Any Number : " ;
    cin >> number;
 
    for (int i=number-1;i>=0;i--){
        
        for (int j=number-1;j>=0;j--){
            
            int cal_result = number*j+i;
            int index = cal_result%26;
            cout << x[index] << ' ';
        
        }
        cout << '\n';
    }
    return 0;
}
