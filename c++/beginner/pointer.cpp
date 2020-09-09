#include <iostream> 
using namespace std;

int main() { 

    int x = 5; 
    cout << x << endl; // print the value of variable x 
    cout << &x << endl; // print the memory address of variable x 
    cout << *&x << endl; /// print the value at the memory address of variable x
    cout << endl;
    int value = 5; 
    int *ptr = &value; // 변수 값의 주소로 ptr 초기화 
    // int *ptr1 = value; // 변수 값의 주소로 ptr 초기화 
    
    cout << &value << endl; // value 변수의 주소 출력 
    cout << ptr << endl; // ptr은 주소, 주소를 출력 
    cout << *ptr << endl; // ptr은 주소, ptr이 가르키는 주소의 값을 출력 
    // cout << ptr1 << endl;
    return 0; 
}
