#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
using namespace std;



void test_Pangram(){
    cout<<"String for Pangram check : "<<endl;
    char c[200000];
    fgets(c, 200000, stdin);//input string
    int n = strlen(c),arr[26] = {0};//arr to keep track of which letter has appeared
    for (int i = 0; i < n; i++) {
        if (isalpha(c[i])) arr[tolower(c[i]) - 'a'] = 1;//marking letter is appeared if it is a alphabet
    }
    for(int i=0;i<26;i++){
        if(!arr[i]){
            cout<<"not pangram"<<endl;//if any letter is not appeared a-z
            return;
        }
    }
    cout<<"pangram"<<endl;//if everey letter has appeared
    return;
}

void firstTask(){
    //initiallizing char array
    char str[10] = "A string";
    //initalizing pointer
    char* pt = str; //initially pointing at 'A'
    cout<<*pt<<endl; //printing and going to next line
    pt+=3; //moving pointer to 't'
    cout<<*pt<<endl; //printing and going to next line
    pt+=1; //moving pointer to 'r'
    cout<<*pt<<endl; //printing and going to next line
    pt+=3;//moving pointer to 'g'
    cout<<*pt<<endl; //printing and going to next line

}

void secondTask(){
    int arr[7] = {1 , 2, 3, 4, 5, 6};//initiallizng int array of a size 6+1 for extra element
    int index, value,i;
    cout<<"Enter Value : "<<endl;
    cin>>value;
    cout<<"Enter Index : "<<endl;
    cin>>index; //expecting 1-based indexing
    i = 6;
    while (i>=index){
        arr[i] = arr[i-1];  //shifting the values, which are equal to or greater than the inserting index
        i--;
    }
    arr[index-1] = value; //assigning the value to the index
    for(i=0;i<7;i++){
        cout<<arr[i]<<' '; //printing the index
    }
}


int main(){
    test_Pangram();
    firstTask();
    secondTask();
    return 0;
}
