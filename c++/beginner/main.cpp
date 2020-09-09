#include <iostream>
#include "calculator.h"

using namespace std;

int main(int argc, char const *argv[]){
    
    int input_FirstNum; char input_Oper; int input_SecondNum;
    cin >> input_FirstNum;
    cin >> input_Oper;
    cin >> input_SecondNum;
    
    calculator calculator_object(input_FirstNum, input_Oper, input_SecondNum);
    float result = calculator_object.print_result();

    cout << "Here is the Question : ";
    cout << input_FirstNum << input_Oper << input_SecondNum << " =" << " ?" << '\n'; 
    cout << "Here is the answer : " << result << '\n';

    return 0;
}