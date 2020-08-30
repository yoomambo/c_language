// 정올올림피아드 : 115 : 연산자 - 형성평가5

/*

민수와 기영이의 키와 몸무게를 입력받아 민수가 키도 크고 몸무게도 크면 1 그렇지 않으면 0을 출력하는 프로그램을 작성하시오.

(JAVA는 1 이면 true, 0 이면 false를 출력한다.)

입력 예
    150 35
    145 35
출력 예
    0 

Hint!

관계 연산자와 논리 연산자를 함께 이용한다.

*/

#include <iostream>

bool judge(int number1, int number2);
int result_judge(bool bool_1, bool bool_2);

using namespace std;

int main()
{
    int number1_1, number1_2, number2_1, number2_2;

    cin >> number1_1 >> number1_2;
    cout << endl;
    cin >> number2_1 >> number2_2;
    cout << endl;

    bool result1, result2;

    result1 = judge(number1_1, number2_1);
    result2 = judge(number1_2, number2_2);

    int final_result;
    final_result = result_judge(result1, result2);
    
    cout << "This is result : " << final_result;
    
    return 0;
}

bool judge(int number1, int number2)
{
    if (number1 > number2)
        {
            return true;
        }
    else
        {
            return false;
        }
}

int result_judge(bool bool_1, bool bool_2)
{
    if (bool_1 & bool_2)
        {
            return 1;
        }
    else
        {
            return 0;
        }
    
}
