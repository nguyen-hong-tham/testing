#include<iostream> 
#include<fstream>
#include<cmath>
using namespace std;

int f3(int x) {
if (log(x * x * cos(x)) < 3 * x)
return 2 * x;
else
return 2 * x;
}

int main()
{
    ifstream fin("lab_d.txt");
    if (!fin)
    {
        cout << " khong the mo file lab_d.txt" <<endl;
    }
    else
    {
        int x;
        while (fin >> x)
        {
            cout <<"f(" << x <<") =" <<f3(x) << endl;
        }
    }
    fin.close();
}