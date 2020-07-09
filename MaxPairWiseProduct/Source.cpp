#include <vector> 
#include <iostream> 
#include <algorithm> 
using namespace std;
void print(std::vector<int> const& input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << '   ';
    }
}

int main()
{
   
    vector<int> seq;
    int n;

    // Read the nb of elements in vect
    cout << "please enter the number of elements in sequence"<<endl;
    cin >> n;

    // Read the vector 
    cout << "please enter the elements of the sequence"<<endl;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        seq.push_back(input);
    }
    cout << "sequence you entered" << endl;
    print(seq);


    // Find the 1st max element 
    double FisrtMax=*max_element(seq.begin(), seq.end());
    cout <<endl<< "First Maximum Element is" << endl<< FisrtMax;

    // remove the found element
    std::vector<int>::iterator PosF = find(seq.begin(), seq.end(), FisrtMax);
    seq.erase(PosF);

    cout <<endl<< "sequence After removing the 1st maximum element" << endl;
    print(seq);


    // Find the 2nd max element
    double SecMax = *max_element(seq.begin(), seq.end());
    cout <<endl<< "Second Maximum Element is" << endl << SecMax;

    //multiply the 2 elements
    int total =  (FisrtMax * SecMax);
    cout <<endl<<"The Product of the 2 elemnts is  "<< total;

    return 0;
}
