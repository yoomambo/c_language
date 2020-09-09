/*
계산기 class 만들어보기

두 개의 숫자를 입력 받으면, +,-, x, / 를 입력받아서 결과 출력
*/

#include <iostream>
#include <typeinfo> 

using namespace std;

class calculator{
private:
    int FirstNum;
    char Oper;
    int SecondNum;

public:
    // 생성자 오버로딩 (인자값을 지정해줄 수 있다)
    calculator(int _FirstNum , char _Oper, int _SecondNum);
    // 소멸자
    ~calculator();
    // get method
    float getFirstNum();
    float getOper();
    float getSecondNum();
    // set method
    void setFirstNum(int Number);
    void setOper(char Oper);
    void setSecondNum(int Number);

    // 기본 method
    float add_result();
    float sub_result();
    float mul_result();
    float div_result();
    float print_result();   
};