#include <iostream>
using namespace std;

int main()
 {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++)
     {
        int count= 0;

        if (num <= 1)
        {
            continue;
        }

        for (int i = 2; i < num; i++)
         {
            if (num % i == 0) 
            {
                count = 1; 
                break;
            }
        }

        if (count == 0)
            cout << num << " \n";
    }

    return 0;
}