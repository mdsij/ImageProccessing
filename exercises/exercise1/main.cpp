#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

double** binaryArray(int m, int n)
{
    //seeds random num generator
    //srand(time(NULL));
    //creates pointer that will be 2d arr
    double ** arr = 0;
    //sets the height
    arr = new double*[m];
    for (int i = 0; i < m; i++)
    {
        //for every row, makes an array that is n long for col
        arr[i] = new double[n];
        for (int j = 0; j < n; j++)
        {
            //randomly fills the array
            arr[i][j] = (double)rand() / (double)RAND_MAX;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    //converts random array to binary array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < 0.2) arr[i][j] = 0;
            else {arr[i][j] = 1;}
        }
    }

    return arr;
}
int main()
{
    //Problem 1
    //part a
    vector<int> a;
    for (int i = 1; i < 11; i++)
    {
        a.push_back(2*i);
    }
    //part b
    vector<int> b;
    for (int i = 5; i >= -4; i--)
    {
        b.push_back(2*i);
    }
    //part c
    vector<double> c;
    for (double i = 1.0; i < 11.0; i++)
    {
        c.push_back(1.0/i);
    }
    //part d
    vector<double> d;
    for (double i = 0.0; i < 10.0; i++)
    {
        d.push_back(i/(i+1.0));
    }
    //test the vectors were created right
    cout << "Problem 1: " << endl;
    for (auto itr = a.begin(); itr != a.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;
    
    for (auto itr = b.begin(); itr != b.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;
    
    for (auto itr = c.begin(); itr != c.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;
    
    for (auto itr = d.begin(); itr != d.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl << endl;
    //--------------------------------------------------------------------------------------------------
    //Problem 2
    vector<int> x;
    x.push_back(2);
    x.push_back(5);
    x.push_back(1);
    x.push_back(6);
    cout << "Problem 2: " << endl;
    //part a
    for (int i = 0; i < 4; i++)
    {
        x[i] += 16;
    }
    for (auto itr = x.begin(); itr != x.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;
    //part b
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 1) { x[i] += 3; }
    }
    for (auto itr = x.begin(); itr != x.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;
    //part c
    vector<double> square;
    for (int i = 0; i < 4; i++)
    {
        double tmp = (double)x[i];
        square.push_back(sqrt(tmp));
    }
    for (auto itr = square.begin(); itr != square.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl << endl;
    //--------------------------------------------------------------------------------------------------
    
    //Problem 3
    cout << "Problem 3: " << endl;
    int m = 10;
    int n = 8;
    
    double arr[m][n] = {0};
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = (double)rand()/(double)RAND_MAX;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < 0.2){ arr[i][j] = 0; }
            else 
            {
                arr[i][j] = 1;
            }
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    //problem 4
    cout << "Problem 4: " << endl;
    double ** prob4 = binaryArray(n,m);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << prob4[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    delete[][] prob4;
    //problem 5
    cout << "Problem 5: " << endl;
    int count = 0;
    int[] x = {3, 15, 9, 12, -1, 0, -12, 9, 6, 1};
    //part a
    for (int i = 0; i < *(&x + 1) - x; i++)
    {
        if (x[i] > 0) x[i] = 0;
        if (x[i] % 2 == 0) x[i] = x[i] * 5;
        if (x[i] > 10) count++;
    }
    int *y = new int[count];
    for (int i = 0; i < *(&x +1) - x; i++)
    {
        int tmp = 0;
        if (x[i] > 10)
        {
            y[tmp] = x[i];
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
