/*
계산기 class 만들어보기

두 개의 숫자를 입력 받으면, +,-, x, / 를 입력받아서 결과 출력
*/

#include <iostream>
#include <typeinfo> 

using namespace std;

class calculator
{
private:
    int first_num;
    char oper;
    int second_num;

public:
    // 기본 생성자 : 아무것도 입력 안 됬을 때
    calculator(){
            cout << "=== 생성자 생성 : 인자값 없음 ===" << endl;
    }
    // 생성자 오버로딩 (인자값을 지정해줄 수 있다)

    calculator(int _first_num , char _oper, int _second_num){
            cout << "=== 생성자 호출 : 인자값 3개 ===" << endl;
            first_num = _first_num;
            oper = _oper;
            second_num = _second_num;
    }
    float print_result();   
};

float calculator::print_result()
{
    if (oper == '+')
        {
            float result = first_num + second_num;
            return result;
        }
    else if (oper == '-')
        {
            float result = first_num - second_num;
            return result;
        }
    else if (oper == '*')
        {
            float result = first_num * second_num;
            return result;
        }
    else if (oper == '/')
        {   
            if (second_num == 0)
                {
                    float result = -9999;
                    return result;
                }
            else
            {
                float result = first_num / second_num;
                return result;   
            }          
        }

}

int main(int argc, char const *argv[])
{
    int input_first_num; char input_oper; int input_second_num;
    cin >> input_first_num;
    cin >> input_oper;
    cin >> input_second_num;
    
    calculator calculator_object(input_first_num, input_oper, input_second_num);
    float result = calculator_object.print_result();

    cout << "Here is the Question : ";
    cout << input_first_num << input_oper << input_second_num << ' = ?' << endl; 
    cout << "Here is the answer : " << result << endl;
}
