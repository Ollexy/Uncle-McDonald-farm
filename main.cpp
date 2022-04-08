#include <iostream>
#include <math.h>

using namespace std;

void solve(long double fenceLength);

int main()
{
    long double fenceLength;
    string start;

    //starting the algorithm by entering "run"
    do
    {
        cout << "Type \"run\" to start the algorithm" << endl;
        cin >> start;
    }
    while (start != "run");

    //Fence length
    cout << "How many meters of fence is avaible: ";
    cin >> fenceLength;

    //checking if x >= 0 or if it's not a letter
    while ((fenceLength < 0) || (!cin))
    {
        cout << "Given length of fence is not avaible. Try again." << endl;
        cout << "How many meters of fence is avaible: ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> fenceLength;
    }
    solve(fenceLength);

    return 0;
}

void solve(long double fenceLength)
{
    long long area, a, b;
    //optimal area of farm
    fenceLength = floor(fenceLength); // rounding down, because for example, with 10.5 m of fence, we can't use 11 m
    a = round( fenceLength/4 ); // axis symetry || area =a*b, fence = 2a+b, a=fence-2a, area = (fence-2a)a, area=-2a*a + fence(a), fence-2a = 0, fence=2a, a=fence/2(it is a root, so axis symetry is in half, so a= fence/4
    b = fenceLength - 2 * a;
    area = a * b;

    //returned values
    cout << "Area: " << area << endl;
    cout << "Length \"a\": " << a << endl;
    cout << "Width \"b\": " << b << endl;
}

