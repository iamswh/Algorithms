// TOWER OF HANOI
/*This will print all the moves to reach from initial rod to final rod and also count the number of moves and
print the number of moves.*/
// It's been done using return type function
//if the number of disk is n then moves = 2^n-1
// @iamswh

#include <bits/stdc++.h>
using namespace std;
long long toh(int N, int from, int to, int aux)
{
    int count = 1;
    if (N == 1)
    {
        cout << "move disk 1 from rod " << from << " to rod " << to << endl;
        return count;
    }
    count += toh(N - 1, from, aux, to);
    cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
    count += toh(N - 1, aux, to, from);
    return count;
}
int main()
{
    int N;
    cin >> N;
    cout << toh(N, 1, 3, 2) << endl;
    return 0;
}