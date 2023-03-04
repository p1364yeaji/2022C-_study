#include <iostream>
using namespace std;

int main()
{
    //if문 예제
    //정수 입력
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 5 == 0)
        cout << "HiFive" << endl;

    if (number % 2 == 0)
        cout << "HiEven" << endl;
    
    //다른 예제들도 해보기

    //선택문 오류5 불명료한 else 결합
    int i = 1;
    int j = 2;
    int k = 3;

    if (i > j) {
        if (i > k)
            cout << "A";
        else
            cout << "B";
    }
    return 0;
}
