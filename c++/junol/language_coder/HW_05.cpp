// 정올올림피아드 149 : 반복제어문3 - 형성평가A

/*
자연수 n을 입력받아 "출력 예"와 같이 n x n크기에 공백으로 구분하여 출력되는 프로그램을 작성하시오.
10 미만의 홀수만 출력하시오.주의! 숫자는 공백으로 구분하되 줄사이에 빈줄은 없다.


입력 예
            3
출력 예
            1 3 5
            7 9 1
            3 5 7   
*/

#include <iostream>

using namespace std;

void print(long number);

int main()
{
    print(6);
    return 0;
}


void print(long number)
{
    int prime[5] = {1,3,5,7,9}; // 5개의 소수를 저장하는 배열 
    
    int idx = 0;
    for(int i = 0 ; i < number ; i++)
        {
        for (int j = 0; j < number; j++, idx++)
            {
                int real_number = idx % 5;
                cout << prime[real_number] << ' ';
            }
        cout << endl;
        }
}

// short -> int -> long -> long long
// float -> double