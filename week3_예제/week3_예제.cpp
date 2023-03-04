#include <iostream>
using namespace std;

int main()
{
    double A, B = 0;
    cout << "키를 입력해주세요(cm): " << endl;
    cin >> A;

    cout << "몸무게를 입력해주세요(kg): " << endl;
    cin >> B;

    double BMI = B / pow(A/100,2);

    if (BMI < 18.5)
        cout << "체중 미달" << endl;
    else if (18.5 <= BMI < 25.0)
        cout << "정상" << endl;
    else if (25.0 <= BMI < 30.0)
        cout << "과체중" << endl;
    else if (30.0 <= BMI)
        cout << "비만" << endl;

    return 0;
}

