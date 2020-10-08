

#include <iostream>
using namespace std;

int main()
{
//定義する
    int a = 0;
    int b = 0;

    cin >> a;
    cin >> b;

    int c = a * b;
    int d = c % 2;
    
    
  //条件設定

    if      (d == 0)        {
                        cout << "Even" << endl; 
    }
            
    else if (d == 1)        {
        cout << "Odd" << endl;
    }


    system("pause");

    return 0;
}

