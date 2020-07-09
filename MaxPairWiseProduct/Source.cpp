#include <vector> 
#include <iostream> 
#include <algorithm> 
using namespace std;

int main()
{
   
    vector<int> seq;
    int n;

    // Read the nb of elements in vect
    cin >> n;

    // Read the vector 
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        seq.push_back(input);
    }

    // Find the 1st max element 
    double FisrtMax=*max_element(seq.begin(), seq.end());

    // remove the found element
    std::vector<int>::iterator PosF = find(seq.begin(), seq.end(), FisrtMax);
    seq.erase(PosF);

    // Find the 2nd max element
    double SecMax = *max_element(seq.begin(), seq.end());
    
    //multiply the 2 elements
    int total =  (FisrtMax * SecMax);
    
    return total;
}