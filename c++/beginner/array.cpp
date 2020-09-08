#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char buf[50] = "jangThang";
    cout << buf[1] << endl;

    //---------------------------------------//

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int arr1[5] = { 1, 2, 3 }; // 배열의 요소들은 { 1, 2, 3, 0, 0 } 으로 초기화 됨
    int arr2[5]; // 배열에 지정을 안해주면, 배열의 요소들은 모두 쓰레기값으로 초기화 됨
    int arr3[10] = { 0 }; // 배열의 요소들은 모두 0으로 초기화 됨

    //---------------------------------------//

    // 배열의 주소 출력
    cout << arr << endl;  // 배열만 출력하면 주소 값이 출력
    cout << arr+1 << endl;  // 배열의 주소에 +1하면 index 늘어나듯 다음 배열의 주소가 나옴

    // 배열의 주소가 가지는 값 출력
    cout << *arr << endl; // 배열 주소 앞에 포인터를 붙여서 값을 불러옴
    cout << arr[0] << endl; // 배열 주소 앞에 포인터를 붙여서 값을 불러옴

    //---------------------------------------//

    // 배열의 동적할당
    int *p; // 포인터 변수 선언

    int arr_size; // 배열의 크기를 입력받을 변수

    cin >> arr_size; // 배열의 크기를 입력받음

    p = new int[arr_size]; // 입력받은 크기만큼 배열을 동적 생성
    
    for (int i=0; i<arr_size ; i++){
        int temp;
        cin >> temp;
        p[arr_size] = temp;
    }
    cout << p[0] << endl;
    // for (int i=0; i < arr_size ; i++){
    //     cout << p[i] << endl;
    // }

    delete[] p; // 사용이 끝난 후 메모리 해제

    return 0;
}
