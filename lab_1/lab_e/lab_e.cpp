#include<iostream> 
#include<fstream>
#include<cmath>
using namespace std;

int findMax(int num1, int num2, int num3) {
int max = 0;
if ((num1 > num2) && (num1 > num3))
max = num1;
if ((num2 > num1) && (num2 > num3))
max = num2;
if ((num3 > num1) && (num3 > num2))
max = num3;
return max;
}

int main ()
{
      ifstream fin("lab_e.txt");
    if (!fin)
    {
        cout << " khong the mo file lab_e.txt" <<endl;
    }
    else
    {
        int x,y,z;
        while (fin >> x >> y >> z)
        {
            cout <<"f(" << x <<") =" <<findMax(x,y,z) << endl;
        }
    
    }
    fin.close();
}