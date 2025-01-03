
// duplicate element count
#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for ( int i=0;i<size;i++)
    {
        for(int j = i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<count;
}    
// 5 element 1 1 1 2 2 = 3
// 10 ele 1 1 1 2 2 2  3 3 3 4 = 6




// #include <iostream>
// using namespace std;

// int main()
// {

//     int size;
//     cin >> size;
//     int a[size];

//     for (int i = 0; i < size; i++)
//     {
//         cin >> a[i];
//     }
//     int i = 0, j = i + 1;
//     while (j < size)
//     {
//         if (a[i] != a[j])
//         {
//             a[i + 1] = a[j];
//             i++;
//         }
//         j++;
//     }
//     size = i + 1;
//     for (i = 0; i < size; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     return 0;
//}