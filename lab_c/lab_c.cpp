#include<iostream> 
#include<fstream>
using namespace std;

int f2(int x) {
if (x < 10)
return 2 * x;
else if (x < 2)
return -x;
else
return 2 * x;
}

int main ()
{
    ifstream fin("lab_c.txt");
    if (!fin)
    {
        cout << " khong the mo file lab_c.txt" <<endl;
    }
    else
    {
        int x;
        while (fin >> x)
        {
            cout <<"f(" << x <<") =" <<f2(x) << endl;
        }
    }
    fin.close();
}