 #include<iostream> 
 #include<fstream>
  using namespace std;
int f1(int x) {
   if (x > 10) 
    return 2 * x; 
  else 
    return -x; 
}
int main() 
{
  ifstream fin("input_a.txt");
  if (!fin) 
  { 
    cout <<" ko mo dc"; return 1; 
  } 
  else 
  { 
    int x;
    while (fin >> x) 
    {
      cout <<"f1 (" << x << ") = " <<f1(x) << endl; 
    }
  }
  fin.close();
  return 0;
}
