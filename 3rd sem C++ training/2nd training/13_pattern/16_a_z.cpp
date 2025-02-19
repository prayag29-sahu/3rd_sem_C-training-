#include <iostream>
using namespace std;
void printAtoZ()
{
    int n, m;
    cin >> n;//n=7 row
    m = (n / 2) + 2;// column m=5
    for (char letter = 'A'; letter <= 'Z'; letter++)
    {
        cout << "Printing " << letter << ":\n";
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < m; col++)
            {
                if (letter == 'A')
                {
                    // Pattern for 'A'
                    if ((row == 0 && col != 0 && col != m-1) || row == n/2 || (col == 0 && row != 0) || (col == m-1 && row != 0))
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'B')
                {
                    // Pattern for 'B'
                    if (col == 0 || (row == 0 || row == n/2 || row == n-1) && col != m-1 || col == m-1 && (row > 0 && row < n/2 || row > n/2 && row < 6))
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'C')
                {
                    // Pattern for 'C'
                    if (col == 0 && (row > 0 && row < 6) || (row == 0 || row == n-1) && col > 0)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'D')
                {
                    // Pattern for 'D'
                    if (col == 0 || (row == 0 || row == n-1) && col < m-1 || col == m-1 && row > 0 && row < n-1)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'E')
                {
                    // Pattern for 'E'
                    if (col == 0 || row == 0 || row == n/2 || row == n-1)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'F')
                {
                    // Pattern for 'F'
                    if (col == 0 || row == 0 || row == n/2)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'G')
                {
                    // Pattern for 'G'
                    if ((col == 0 && (row > 0 && row < n-1)) || (row == 0 || row == n-1 || row == n/2 && col > 1) || (col == m-1 && row > n/2))
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'H')
                {
                    // Pattern for 'H'
                    if (col == 0 || col == m-1 || row == n/2)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'I')
                {
                    // Pattern for 'I'
                    if (row == 0 || row == n-1 || col == m/2)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'J')
                {
                    // Pattern for 'J'
                    if (row == 0 || (col == m/2 && row < n-1) || (row == n-1 && col >= 0 && col < m-2))
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'K')
                {
                    // Pattern for 'K'
                    if (col == 0  || (col == 1 && (row == n/2-1 || row == (n/2)+1)) || (col == m/2 && (row == 1 || row == (n/2)+2)) || (col == (m/2)+1 && (row == 0 || row == n-1)))
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'L')
                {
                    // Pattern for 'L'
                    if (col == 0 || row == n-1)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'M')
                {
                    // Pattern for 'M'
                    if (col == 0 || col == m-1 || (row == 1 && (col == 1 || col == (m/2)+1)) || (row == 2 && col == 2))
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'N')
                {
                    // Pattern for 'N'
                    if (col == 0 || col == m-1 || row == col)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'O')
                {
                    // Pattern for 'O'
                    if ((col == 0 || col == m-1) && row > 0 && row < n-1 || (row == 0 || row == n-1) && col > 0 && col < m-1)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'P')
                {
                    // Pattern for 'P'
                    if (col == 0 || (row == 0 || row == n/2) && col < m-1 || col == m-1 && row > 0 && row < n/2)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'Q')
                {
                    // Pattern for 'Q'
                    if ((col == 0 || col == m-1) && row > 0 && row < n-1 || (row == 0 || row == n-1) && col > 0 && col < m-1 || (row == (n/2)+2 && col == (n/2)+1) || (row == n-1 && col == m))
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'R')
                {
                    // Pattern for 'R'
                    if (col == 0 || (row == 0 || row == n/2) && col < 4 || col == m-1 && row > 0 && row < n/2 || row - col == (m/2)+1)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'S')
                {
                    // Pattern for 'S'
                    if ((row == 0 || row == n/2 || row == n-1) && col > 0 && col < m-1 || col == 0 && row > 0 && row < n/2 || col == m-1 && row > n/2 && row < n-1)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'T')
                {
                    // Pattern for 'T'
                    if (row == 0 || col == m/2)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'U')
                {
                    // Pattern for 'U'
                    if ((col == 0 || col == m-1) && row < n-1 || row == n-1 && col > 0 && col < m-1)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'V')
                {
                    // Pattern for 'V'
                    if (col == 0 && row < (n/2)+2 || col == m-1 && row < (n/2)+2 || row - col == m-1 || row + col == n+1)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'W')
                {
                    // Pattern for 'W'
                    if (col == 0 || col == m-1 || (row == (n/2)+2 && (col == 1 || col == (m/2)+1)) || (row == (n/2)+1 && col == m/2))
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'X')
                {
                    // Pattern for 'X'
                    if (row == col || row + col == m-1)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'Y')
                {
                    // Pattern for 'Y'
                    if (row == col && row < n/2 || row + col == m-1 && row < n/2 || col == m/2 && row > (n/2)-1)
                        cout << "*";
                    else
                        cout << " ";
                }
                else if (letter == 'Z')
                {
                    // Pattern for 'Z'
                    if (row == 0 || row == n-1 || row + col == m)
                        cout << "*";
                    else
                        cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{
    printAtoZ();
    return 0;
}
