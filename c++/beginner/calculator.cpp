#include <iostream>
#include "calculator.h"
using namespace std;

calculator:: calculator(int _FirstNum , char _Oper, int _SecondNum){
    cout << "=== call constructor : The number of args = 3 ===" << '\n';
    FirstNum = _FirstNum;
    Oper = _Oper;
    SecondNum = _SecondNum;
}
calculator:: ~calculator(){
    cout << "Finish!!" << '\n';
}
float calculator::getFirstNum(){
    return FirstNum;
}
float calculator::getOper(){
    return Oper;
}
float calculator::getSecondNum(){
    return SecondNum;
}
void calculator::setFirstNum(int Number){
    FirstNum = Number;
}
void calculator::setOper(char Oper){
    Oper = Oper;
}
void calculator::setSecondNum(int Number){
    SecondNum = Number;
}

float calculator::add_result(){
    float result = FirstNum + SecondNum;
    return result;
}
float calculator::sub_result(){
    float result = FirstNum - SecondNum;
    return result;
}
float calculator::mul_result(){
    float result = FirstNum * SecondNum;
    return result;
}
float calculator::div_result(){
    float result;
    if (SecondNum == 0){
            result = -9999;
        }
    else{
        result = FirstNum / SecondNum;
    }          
    return result;   
}
float calculator::print_result(){
    float result;

    if (Oper == '+')
        {   
            result = add_result();
        }
    else if (Oper == '-')
        {   
            result = sub_result();
        }
    else if (Oper == '*')
        {   
            result = mul_result();
        }
    else if (Oper == '/')
        {   
            result = div_result();
        }

    return result;
}
