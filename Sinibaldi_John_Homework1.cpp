#include <iostream>
#include <vector>

using namespace std; 


int main () {
    int numlines;
    cin >> numlines; //gets the first line, aka the number of lines to follow
    
    vector<int> actualnums(numlines); //initializes a vector large enough to hold all of numbers
    vector<int> sortednums(numlines); //initializes the array to sort into
    
    //the below loop places the inputs into the actualnums array
    
    for (int i = 0; i < numlines; i++) {
        cin >> actualnums[i]; 
    }
    
    //simple space seperating input and output:
    
    // cout << endl;
    
    //the below loop runs the insertion sort
    
    for (int i = 0; i < numlines; i++) { //looping through each number in the original array
        for (int j = numlines - 1; j >= 0; j--) { //sticking number in correct location in array
            if (actualnums[i] > sortednums[j]) { //if the number is greater than what it is compared to, put in it and shift everything over
                for (int k = 0; k < j; k++) {
                    
                    sortednums[k] = sortednums[k+1]; // move each item over one, up to working index
                }
                
                sortednums[j] = actualnums[i]; // now that all numbers are moved, replace the correct value
                break; 
            }
        }
    }
    
    for (int i = 0; i < numlines; i++) { //simple loop for output in desired format
        cout << sortednums[i] << endl;
    }
}