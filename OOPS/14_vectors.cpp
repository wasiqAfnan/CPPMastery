#include<iostream>
#include<vector>
using namespace std;

// Function to display the elements of a vector
void display(vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        // cout << v[i] << " ";
        cout<<v.at(i)<<" ";
    }
}

void displayIterator(vector <int> v){
    vector <int> :: iterator iter = v.begin();
    for(iter;iter!=v.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main() {
    // vector<int> v1; // Declare a vector of integers
    // int size;

    // // Prompt user to enter the size of the vector
    // cout << "Enter size: ";
    // cin >> size;

    // // Loop to input elements into the vector
    // for(int i = 0; i < size; i++) {
    //     int num;
    //     cout << "Enter number: ";
    //     cin >> num;
    //     v1.push_back(num); // Add the input number to the vector
    // }

    // // Display the elements of the vector
    // display(v1);

    // ********* adding Iterator to vector ********

    int size;
    vector<int> v2;
    // Prompt user to enter the size of the vector
    cout << "Enter size: ";
    cin >> size;

    // Loop to input elements into the vector
    for(int i = 0; i < size; i++) {
        int num;
        cout << "Enter number: ";
        cin >> num;
        v2.push_back(num); // Add the input number to the vector
    }

    // this iterator will point to the first element
    vector<int> :: iterator itr = v2.begin();
    // this will insert 5 at the beginning
    // v2.insert(itr,5);
    // this will delete the last element
    // v2.pop_back();
    // Display the elements of the vector
    // display(v2);

    // ********* some more funtions ********
    // cout<<v2.capacity()<<endl;//show capacity
    // cout<<v2.size()<<endl;//show size
    // cout<<v2.front()<<endl;//show first element
    // cout<<v2.back()<<endl;//show last element
    // cout<<v2.empty();   //check if vector is empty or not.If empty returns 0 else returns 1

    // displayIterator(v2);
    // v2.erase(itr+1);//delete second element
    // displayIterator(v2);

    // displayIterator(v2);
    // v2.clear(); // clear all the elements from vector leaving the size of vector = 0
    // displayIterator(v2);

    //***** Ways to declare vector ******

    // vector<int> v3;// initialize vector with zero elements
    // vector<int> v4(5);// initialize vector with 5 elements
    // vector<int> v5(5, 10);// initialize vector with 5 elements and value 10

    //display elements of vector
    // display(v3);
    // display(v4);
    // display(v5);

    return 0;
}
