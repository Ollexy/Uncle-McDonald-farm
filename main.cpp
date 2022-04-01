#include <iostream>
#include <math.h>

using namespace std;

void solve(long double fenceLenght);

int main()
{
    long double fenceLenght, area, a, b;
    string start;

    //starting the algorithm by entering "run"
    do
    {
        cout << "Type \"run\" to start the algorithm" << endl;
        cin >> start;
    }
    while (start != "run");

    //Fence lenght
    cout << "How many meters of fence is avaible: ";
    cin >> fenceLenght;

    //checking if x >= 0 or if it's not a letter
    while ((fenceLenght < 0) || (!cin))
    {
        cout << "Given lenght of fence is not avaible. Try again." << endl;
        cout << "How many meters of fence is avaible: ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> fenceLenght;
    }
    solve(fenceLenght);

    return 0;
}

void solve(long double fenceLenght)
{
    long double area, a, b;
    //optimal area of farm
    fenceLenght = floor(fenceLenght); // rounding down, because for example, with 10.5 m of fence, we can't use 11 m
    a = round( fenceLenght/4 ); // axis symetry ( lenght = -x/2(lenght) = -x/2(-2))
    b = fenceLenght - 2 * a;
    area = a * b;

    //returned values
    cout << "Area: " << area << endl;
    cout << "Lenght \"a\": " << a << endl;
    cout << "Width \"b\": " << b << endl;
}