#include<iostream> 
#include<fstream>
using namespace std;

int f1(int x) {
    if (x > 10)
        return 2 * x;
    else if (x > 0)
        return -x;
    else
        return 2 * x;
}
int main()
{
    ifstream fin ("input_b.txt");
    if (!fin)
    {
        cout <<" ko mo dc"; return 1; 
    }
    
    else
    {
        int x;
        while (fin >> x)
        {
            cout << "f("<< x << ") = " << f1(x) << endl;
        } 
    }
    fin.close();
    return 0;

}