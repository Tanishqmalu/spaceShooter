#include <iostream>
#define INIT_ROLL 2048
#include <cstdlib>
using namespace std;


int call_on_roll(int roll) {
    if (roll % 2 == 0) return -1;
    else return INIT_ROLL;
}

// Random number initialisation for starting protocol
int main()
{
    // rand()%6 generates number between 0 to 5
    for(int i=1;i<=25;i++)
    cout<<1 + rand()%6<<"\n";
}
