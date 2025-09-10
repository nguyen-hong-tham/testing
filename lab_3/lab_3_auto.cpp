#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

// Hàm solveQuartic đã có
int solveQuartic(double a, double b, double c, double x[]) {
    if (a == 0 && b == 0 && c == 0) {
        return -1;
    }
    if (a == 0 && b == 0) {
        return 0;
    }
    if (a == 0) {
        double y = -c / b;
        if (y < 0) return 0;
        x[0] = sqrt(y);
        x[1] = -sqrt(y);
        return 2;
    }
    double delta = b * b - 4 * a * c;
    if (delta < 0) return 0;
    double y1 = (-b + sqrt(delta)) / (2 * a);
    double y2 = (-b - sqrt(delta)) / (2 * a);
    int count = 0;
    if (y1 >= 0) {
        x[count++] = sqrt(y1);
        x[count++] = -sqrt(y1);
    }
    if (y2 >= 0 && y2 != y1) {
        x[count++] = sqrt(y2);
        x[count++] = -sqrt(y2);
    }
    return count;
}

// Struct test case
struct TestCase {
    double a, b, c;
    int expectedSolutions;
    string description;
};

int main() {
    // Danh sách test cases
    vector<TestCase> tests = {
        {0,0,0,-1,"Infinite solutions."},
        {0,0,5,0,"No solution."},
        {0,1,-4,2," The equation has 2 real solution"},
        {1,0,1,0,"No solution."},
        {1,0,-1,2,"The equation has 2 real solution"},
        {1,2,1,0,"No solution."},
        {1,-2,1,2,"The equation has 2 real solution"},
        {1,-3,2,4,"The equation has 4 real solution"}

    };

    int passCount = 0;

    for (size_t i=0; i<tests.size(); i++) {
        double x[4];
        int n = solveQuartic(tests[i].a, tests[i].b, tests[i].c, x);
        cout << "Test " << i+1<<"( "<<tests[i].a<<","<< tests[i].b<<","<< tests[i].c<<")" << " (" << tests[i].description << "): ";
        if (n == tests[i].expectedSolutions) {
            cout << "PASS  (solutions = " << n << ") ";
            for (int i = 0; i < n; i++) {
                 cout << x[i] << " ";
                }
            cout<<endl;
            passCount++;
        } else {
            cout << "FAIL  (expected " << tests[i].expectedSolutions 
                 << ", got " << n << ")" << endl;
        }
    }

    cout << "\nSummary: " << passCount << "/" << tests.size() 
         << " test cases passed." << endl;

    return 0;
}