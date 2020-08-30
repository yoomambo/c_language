// 정올올림피아드 : 110 : 입력 - 형성평가5

/*
실수의 yard(야드)를 입력받아 cm(센티미터)로 환산하여 입력값과 환산한 값을 출력 
예와 같이 소수 둘째자리에서 반올림하여 첫째자리까지 출력하는 프로그램을 작성하시오. (단 1야드 = 91.44cm로 한다.)  

입력은 "yard? "라고 먼저 출력하고, 실수를 입력받는다.  실수는 "double"로 한다.


입력 예
    yard? 10.1
출력 예
    10.1yard = 923.5cm

Hint!

입력을 받기 위한 지문 뒤에는 꼭! 공백을 넣어야한다. printf("yard? ");
*/

#include <iostream>

using namespace std;

double change_number(double number);

int main()
{
    double number;
    double result;
    
    cout << "yard? " ; cin >> number;

    result = change_number(number);

    cout << fixed;
    cout.precision(1);
    cout << number << "yard = " << result << "cm" << endl;
    return 0;
}

double change_number(double number)
{
    return 91.44*number;
}
