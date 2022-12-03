#include <iostream>

#include <string>


 

using namespace std;


 

int main(){

    string word;

    cin >> word;

    int size = word.length();

    int z = 0;

    int o = 0;

    char arr[size];


 

    for(int i = 0; i < size; i++){

        arr[i] = word[i];

    }

    for(int i = 0; i < size; i++){

        if(arr[i] == 'z'){

            z++;

        }else if(arr[i]=='o'){

            o++;

        }else{

            continue;

        }

    }

    if ((z*2)==o){

        cout << "Yes" << endl;

    }

    else{

        cout << "No" << endl;

    }

}