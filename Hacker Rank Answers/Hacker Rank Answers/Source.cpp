#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>


using namespace std;

//Functions
int max_of_four(int a, int b, int c, int d)
{
    int ans =0;
    if (a > b && a > c && a > d)
        ans = a;
    else if (b > a && b > c && b > d)
        ans = b;
    else if (c > a && c > b && c > d)
        ans = c;
    else if (d > b && d > c && d > a)
        ans = d;
    return ans;
}
//Pointer
void update(int* a, int* b) {
    // Complete this function
    int ne = *a;
    int qe = *b;
    *a = ne + qe;
    *b = abs(ne - qe);
}

int main() 
{
    //Hello World Challenge
    cout << "Hello, World!" << endl;


    //Input Output Challenge
    int sum[3];
    int total =0;
    for (int i = 0; i < 3; i++)
    {
        cin >> sum[i];
        total += sum[i];
    }
    cout << total;


    //Basic Data Types Challenge
    int val; long ong; char ch; float loat; double dub;
    scanf_s("%d %ld %c %f %lf", &val, &ong, &ch, &loat, &dub);
    printf("%d \n%ld \n%c \n%f \n%lf", val, ong, ch, loat, dub);


    //Conditional Statements
    string n_temp;
    getline(cin, n_temp);
    int n = stoi(n_temp);
    if (n >= 1 && n <= 9)
    {
        if (n > 8)
            cout << "nine";
        else if (n > 7)
            cout << "eight";
        else if (n > 6)
            cout << "seven";
        else if (n > 5)
            cout << "six";
        else if (n > 4)
            cout << "five";
        else if (n > 3)
            cout << "four";
        else if (n > 2)
            cout << "three";
        else if (n > 1)
            cout << "two";
        else if (n > 0)
            cout << "one";
    }
    else if (n > 9)
        cout << "Greater than 9";
    else if (n < 1)
        cout << "invalid";


    //For Loop
    int a, b = 0;
    string num[] = { "", "one","two","three","four","five","six","seven","eight","nine" };
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        cout << ((i <= 9) ? num[i] : ((i % 2 == 0) ? "even" : "odd")) << endl;
    }

    //Functions
    int z, x, y, w;
    scanf_s("%d %d %d %d", &z, &x, &y, &w);
    int ans = max_of_four(z, y, x, w);
    printf("%d", ans);

    //Pointer
    int p, o =0;
    int* pa = &p, * pb = &o;

    scanf_s("%d %d", &p, &o);
    update(pa, pb);
    printf("%d\n%d", p, o);

    //Variable sized arrays


    return 0;
}
